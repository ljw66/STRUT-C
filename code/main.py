import json
import os
import clang.cindex

from get_dependencies import remove_function_declarations
from get_dependencies import remove_global_variable_assignments
from delete_useless_info import simplify_file
from util import get_args
from util import get_file
from util import write_file
from generator import case_generator
from generator import prompt_generator
from generator import opti_generator
from generator import aout_file_generator
from model import access_model
from test_case import make_case_list


clang.cindex.Config.set_library_path(r'D:\\Software\\Clang\\LLVM\\bin')

conversation_history = []


def simplify(input_path, output_path):
    """get the focal method and dependencies from the file"""
    remove_function_declarations(input_path, output_path)
    remove_global_variable_assignments(output_path, output_path)
    simplify_file(output_path)


def main():
    function_path, case_path, uncover_path = get_args()
    dir_path = os.path.dirname(function_path)
    input_path = os.path.join(dir_path, 'input.txt')
    output_path = os.path.join(dir_path, 'output.txt')
    simplify(function_path, function_path)
    function = get_file(function_path)
    case_content = get_file(case_path)
    case, default_PTR, has_stub = case_generator(case_content)
    fun_name = os.path.splitext(os.path.basename(function_path))[0]
    ind = fun_name.find('_build')
    model = 'GPT-4o'
    if ind != -1:
        fun_name = fun_name[:ind]
    if not uncover_path:
        prompt = prompt_generator(function, case, has_stub)
        resp = access_model(prompt, model)
    else:
        uncover_content = get_file(uncover_path)
        uncover_info = json.loads(uncover_content)
        branches = uncover_info['branches']
        i = 1
        con = ''
        for b in branches:
            branch = b['branch']
            condition = b['condition']
            con = con + str(i) + '. branch: ' + branch + ': ' + condition + ' condition uncovered.\n'
            i += 1
        question = get_file(input_path)
        answer = get_file(output_path)
        conversation_history.append(f'User:{question}')
        conversation_history.append(f'AI:{answer}')
        prompt = ''.join(conversation_history) + opti_generator() + con
        resp = access_model(prompt, model)

    case_list = make_case_list(resp, has_stub, default_PTR)
    aout_content = aout_file_generator(case_list, fun_name, default_PTR)
    print(aout_content)
    if not uncover_path:
        write_file(input_path, prompt)
        write_file(output_path, resp)


if __name__ == "__main__":
    main()
