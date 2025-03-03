"""获取llm"""
from langchain_openai import ChatOpenAI


def get_chat_gpt4o():
    return ChatOpenAI(
        model='gpt-4o',
        api_key="",
        openai_api_base='',
        temperature=0.5
    )


def get_deepseek():
    return ChatOpenAI(
        model="deepseek-chat",
        openai_api_key='',
        openai_api_base='',
        # max_tokens=8192,
        temperature=0.2
    )


def access_model(prompts, model):
    m = ''
    if model == 'GPT-4o':
        m = get_chat_gpt4o()
    elif model == "deepseek":
        m = get_deepseek()

    resp = m.invoke(prompts).content
    return resp
