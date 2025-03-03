void test_rand_up(void);
void test_rand_down(void);


void test_rand_up(void){

	aunit_printf("\n##FUNCTION_START_rand\n");
 }

void test_rand_down(void){
	aunit_printf("\n##FUNCTION_END_rand\n");
 }



void abnormal_rand_case(int index);

void abnormal_rand_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_rand_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_1,false,0\n");
	aunit_printf("#CASE_START_test_rand_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("rand","returnValue",42,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",12345,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_1\n");
}

void test_rand_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={100};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_2,false,0\n");
	aunit_printf("#CASE_START_test_rand_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("rand","returnValue",-1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",54321,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_2\n");
}

void test_rand_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={123456789};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_3,false,0\n");
	aunit_printf("#CASE_START_test_rand_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("rand","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",987654321,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_3\n");
}

void test_rand_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={4294967295};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_4,false,0\n");
	aunit_printf("#CASE_START_test_rand_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("rand","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",2147483647,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_4\n");
}

void test_rand_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={12345};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_5,false,0\n");
	aunit_printf("#CASE_START_test_rand_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("rand","returnValue",-12345,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",67890,rand_next)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_rand_up();

	switch(caseIndex){
	case 1:
		test_rand_1();
		break;
	case 2:
		test_rand_2();
		break;
	case 3:
		test_rand_3();
		break;
	case 4:
		test_rand_4();
		break;
	case 5:
		test_rand_5();
		break;
	default:
		abnormal_rand_case(caseIndex);
		break;
	}

	test_rand_down();
}

