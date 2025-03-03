void test_sched_up(void);
void test_sched_down(void);


void test_sched_up(void){

	aunit_printf("\n##FUNCTION_START_sched\n");
 }

void test_sched_down(void){
	aunit_printf("\n##FUNCTION_END_sched\n");
 }



void abnormal_sched_case(int index);

void abnormal_sched_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sched_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	intr_get_call_counter = 0;
	mycpu_call_counter = 0;
	swtch_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_1,false,0\n");
	aunit_printf("#CASE_START_test_sched_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		sched();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_sched_1\n");
}

void test_sched_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	intr_get_call_counter = 0;
	mycpu_call_counter = 0;
	swtch_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_2,false,0\n");
	aunit_printf("#CASE_START_test_sched_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		sched();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_sched_2\n");
}

void test_sched_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	intr_get_call_counter = 0;
	mycpu_call_counter = 0;
	swtch_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_3,false,0\n");
	aunit_printf("#CASE_START_test_sched_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		sched();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_sched_3\n");
}

void test_sched_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	intr_get_call_counter = 0;
	mycpu_call_counter = 0;
	swtch_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_4,false,0\n");
	aunit_printf("#CASE_START_test_sched_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		sched();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_sched_4\n");
}

void test_sched_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	intr_get_call_counter = 0;
	mycpu_call_counter = 0;
	swtch_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_5,false,0\n");
	aunit_printf("#CASE_START_test_sched_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		sched();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_sched_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_sched_up();

	switch(caseIndex){
	case 1:
		test_sched_1();
		break;
	case 2:
		test_sched_2();
		break;
	case 3:
		test_sched_3();
		break;
	case 4:
		test_sched_4();
		break;
	case 5:
		test_sched_5();
		break;
	default:
		abnormal_sched_case(caseIndex);
		break;
	}

	test_sched_down();
}

