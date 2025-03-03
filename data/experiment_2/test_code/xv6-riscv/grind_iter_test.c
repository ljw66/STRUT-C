void test_iter_up(void);
void test_iter_down(void);


void test_iter_up(void){

	aunit_printf("\n##FUNCTION_START_iter\n");
 }

void test_iter_down(void){
	aunit_printf("\n##FUNCTION_END_iter\n");
 }



void abnormal_iter_case(int index);

void abnormal_iter_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_iter_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_1,false,0\n");
	aunit_printf("#CASE_START_test_iter_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",7177,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_1\n");
}

void test_iter_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_2,false,0\n");
	aunit_printf("#CASE_START_test_iter_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",0,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_2\n");
}

void test_iter_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_3,false,0\n");
	aunit_printf("#CASE_START_test_iter_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",31,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_3\n");
}

void test_iter_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_4,false,0\n");
	aunit_printf("#CASE_START_test_iter_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",31,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_4\n");
}

void test_iter_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_5,false,0\n");
	aunit_printf("#CASE_START_test_iter_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",7177,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_iter_up();

	switch(caseIndex){
	case 1:
		test_iter_1();
		break;
	case 2:
		test_iter_2();
		break;
	case 3:
		test_iter_3();
		break;
	case 4:
		test_iter_4();
		break;
	case 5:
		test_iter_5();
		break;
	default:
		abnormal_iter_case(caseIndex);
		break;
	}

	test_iter_down();
}

