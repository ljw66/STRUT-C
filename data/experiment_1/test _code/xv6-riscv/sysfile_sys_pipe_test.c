void test_sys_pipe_up(void);
void test_sys_pipe_down(void);


void test_sys_pipe_up(void){

	aunit_printf("\n##FUNCTION_START_sys_pipe\n");
 }

void test_sys_pipe_down(void){
	aunit_printf("\n##FUNCTION_END_sys_pipe\n");
 }



void abnormal_sys_pipe_case(int index);

void abnormal_sys_pipe_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_pipe_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	fileclose_call_counter = 0;
	argaddr_call_counter = 0;
	copyout_call_counter = 0;
	fdalloc_call_counter = 0;
	myproc_call_counter = 0;
	pipealloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_pipe_6,false,0\n");
	aunit_printf("#CASE_START_test_sys_pipe_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_pipe();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_pipe","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fileclose","fileclose_call_counter",fileclose_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("fdalloc","fdalloc_call_counter",fdalloc_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)
	OB_INT_EXPR("pipealloc","pipealloc_call_counter",pipealloc_call_counter)

	aunit_printf("#CASE_END_test_sys_pipe_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_pipe_up();

	switch(caseIndex){
	case 6:
		test_sys_pipe_6();
		break;
	default:
		abnormal_sys_pipe_case(caseIndex);
		break;
	}

	test_sys_pipe_down();
}

