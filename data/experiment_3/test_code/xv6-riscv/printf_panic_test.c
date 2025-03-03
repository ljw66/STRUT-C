void test_panic_up(void);
void test_panic_down(void);


void test_panic_up(void){

	aunit_printf("\n##FUNCTION_START_panic\n");
 }

void test_panic_down(void){
	aunit_printf("\n##FUNCTION_END_panic\n");
 }



void abnormal_panic_case(int index);

void abnormal_panic_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_panic_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_panic_2,false,0\n");
	aunit_printf("#CASE_START_test_panic_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			panicked=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pr.locking=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		panic(s);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("panic","panicked",1,panicked)
	TEST_ASSERT_EQUAL_INT("panic","pr.locking",0,pr.locking)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_panic_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_panic_up();

	switch(caseIndex){
	case 2:
		test_panic_2();
		break;
	default:
		abnormal_panic_case(caseIndex);
		break;
	}

	test_panic_down();
}

