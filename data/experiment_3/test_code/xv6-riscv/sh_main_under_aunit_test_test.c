void test_main_under_aunit_test_up(void);
void test_main_under_aunit_test_down(void);


void test_main_under_aunit_test_up(void){

	aunit_printf("\n##FUNCTION_START_main_under_aunit_test\n");
 }

void test_main_under_aunit_test_down(void){
	aunit_printf("\n##FUNCTION_END_main_under_aunit_test\n");
 }



void abnormal_main_under_aunit_test_case(int index);

void abnormal_main_under_aunit_test_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_main_under_aunit_test_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	exit_call_counter = 0;
	wait_call_counter = 0;
	runcmd_call_counter = 0;
	chdir_call_counter = 0;
	parsecmd_call_counter = 0;
	getcmd_call_counter = 0;
	fprintf_call_counter = 0;
	close_call_counter = 0;
	fork1_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_8,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = main_under_aunit_test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("runcmd","runcmd_call_counter",runcmd_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("parsecmd","parsecmd_call_counter",parsecmd_call_counter)
	OB_INT_EXPR("getcmd","getcmd_call_counter",getcmd_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fork1","fork1_call_counter",fork1_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_main_under_aunit_test_up();

	switch(caseIndex){
	case 8:
		test_main_under_aunit_test_8();
		break;
	default:
		abnormal_main_under_aunit_test_case(caseIndex);
		break;
	}

	test_main_under_aunit_test_down();
}

