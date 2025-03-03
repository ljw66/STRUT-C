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
	segment_tree_build_call_counter = 0;
	segment_tree_dispose_call_counter = 0;
	abort_call_counter = 0;
	segment_tree_init_call_counter = 0;
	minimum_call_counter = 0;
	segment_tree_update_call_counter = 0;
	segment_tree_query_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_1,false,0\n");
	aunit_printf("#CASE_START_test_test_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("segment_tree_build","segment_tree_build_call_counter",segment_tree_build_call_counter)
	OB_INT_EXPR("segment_tree_dispose","segment_tree_dispose_call_counter",segment_tree_dispose_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("segment_tree_init","segment_tree_init_call_counter",segment_tree_init_call_counter)
	OB_INT_EXPR("minimum","minimum_call_counter",minimum_call_counter)
	OB_INT_EXPR("segment_tree_update","segment_tree_update_call_counter",segment_tree_update_call_counter)
	OB_INT_EXPR("segment_tree_query","segment_tree_query_call_counter",segment_tree_query_call_counter)

	aunit_printf("#CASE_END_test_test_1\n");
}

void test_test_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	segment_tree_build_call_counter = 0;
	segment_tree_dispose_call_counter = 0;
	abort_call_counter = 0;
	segment_tree_init_call_counter = 0;
	minimum_call_counter = 0;
	segment_tree_update_call_counter = 0;
	segment_tree_query_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_2,false,0\n");
	aunit_printf("#CASE_START_test_test_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("segment_tree_build","segment_tree_build_call_counter",segment_tree_build_call_counter)
	OB_INT_EXPR("segment_tree_dispose","segment_tree_dispose_call_counter",segment_tree_dispose_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("segment_tree_init","segment_tree_init_call_counter",segment_tree_init_call_counter)
	OB_INT_EXPR("minimum","minimum_call_counter",minimum_call_counter)
	OB_INT_EXPR("segment_tree_update","segment_tree_update_call_counter",segment_tree_update_call_counter)
	OB_INT_EXPR("segment_tree_query","segment_tree_query_call_counter",segment_tree_query_call_counter)

	aunit_printf("#CASE_END_test_test_2\n");
}

void test_test_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	segment_tree_build_call_counter = 0;
	segment_tree_dispose_call_counter = 0;
	abort_call_counter = 0;
	segment_tree_init_call_counter = 0;
	minimum_call_counter = 0;
	segment_tree_update_call_counter = 0;
	segment_tree_query_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_3,false,0\n");
	aunit_printf("#CASE_START_test_test_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("segment_tree_build","segment_tree_build_call_counter",segment_tree_build_call_counter)
	OB_INT_EXPR("segment_tree_dispose","segment_tree_dispose_call_counter",segment_tree_dispose_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("segment_tree_init","segment_tree_init_call_counter",segment_tree_init_call_counter)
	OB_INT_EXPR("minimum","minimum_call_counter",minimum_call_counter)
	OB_INT_EXPR("segment_tree_update","segment_tree_update_call_counter",segment_tree_update_call_counter)
	OB_INT_EXPR("segment_tree_query","segment_tree_query_call_counter",segment_tree_query_call_counter)

	aunit_printf("#CASE_END_test_test_3\n");
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
	default:
		abnormal_test_case(caseIndex);
		break;
	}

	test_test_down();
}

