void test_bstrListCreate_up(void);
void test_bstrListCreate_down(void);


void test_bstrListCreate_up(void){

	aunit_printf("\n##FUNCTION_START_bstrListCreate\n");
 }

void test_bstrListCreate_down(void){
	aunit_printf("\n##FUNCTION_END_bstrListCreate\n");
 }



void abnormal_bstrListCreate_case(int index);

void abnormal_bstrListCreate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bstrListCreate_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct bstrList *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bstrListCreate_5,false,0\n");
	aunit_printf("#CASE_START_test_bstrListCreate_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = bstrListCreate();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bstrListCreate","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_bstrListCreate_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bstrListCreate_up();

	switch(caseIndex){
	case 5:
		test_bstrListCreate_5();
		break;
	default:
		abnormal_bstrListCreate_case(caseIndex);
		break;
	}

	test_bstrListCreate_down();
}

