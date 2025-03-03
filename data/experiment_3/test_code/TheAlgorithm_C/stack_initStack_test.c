void test_initStack_up(void);
void test_initStack_down(void);


void test_initStack_up(void){

	aunit_printf("\n##FUNCTION_START_initStack\n");
 }

void test_initStack_down(void){
	aunit_printf("\n##FUNCTION_END_initStack\n");
 }



void abnormal_initStack_case(int index);

void abnormal_initStack_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_initStack_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	//*array is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_initStack_1,false,0\n");
	aunit_printf("#CASE_START_test_initStack_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		initStack();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_initStack_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_initStack_up();

	switch(caseIndex){
	case 1:
		test_initStack_1();
		break;
	default:
		abnormal_initStack_case(caseIndex);
		break;
	}

	test_initStack_down();
}

