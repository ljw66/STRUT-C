void test_test_up(void);
void test_test_down(void);


void test_test_up(void){

	aunit_printf("\n##FUNCTION_START_test\n");
 }

void test_test_down(void){
	aunit_printf("\n##FUNCTION_END_test\n");
 }



void abnormal_test_case(int index);

void abnormal_test_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_test_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_1,false,0\n");
	aunit_printf("#CASE_START_test_test_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_1\n");
}

void test_test_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_2,false,0\n");
	aunit_printf("#CASE_START_test_test_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_2\n");
}

void test_test_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_3,false,0\n");
	aunit_printf("#CASE_START_test_test_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_3\n");
}

void test_test_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_4,false,0\n");
	aunit_printf("#CASE_START_test_test_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_4\n");
}

void test_test_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_5,false,0\n");
	aunit_printf("#CASE_START_test_test_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_5\n");
}

void test_test_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_6,false,0\n");
	aunit_printf("#CASE_START_test_test_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_6\n");
}

void test_test_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_7,false,0\n");
	aunit_printf("#CASE_START_test_test_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_test_up();

	switch(caseIndex){
	case 1:
		test_test_1();
		break;
	case 2:
		test_test_2();
		break;
	case 3:
		test_test_3();
		break;
	case 4:
		test_test_4();
		break;
	case 5:
		test_test_5();
		break;
	case 6:
		test_test_6();
		break;
	case 7:
		test_test_7();
		break;
	default:
		abnormal_test_case(caseIndex);
		break;
	}

	test_test_down();
}

