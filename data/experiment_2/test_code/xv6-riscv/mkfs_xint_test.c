void test_xint_up(void);
void test_xint_down(void);


void test_xint_up(void){

	aunit_printf("\n##FUNCTION_START_xint\n");
 }

void test_xint_down(void){
	aunit_printf("\n##FUNCTION_END_xint\n");
 }



void abnormal_xint_case(int index);

void abnormal_xint_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_xint_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_1,false,0\n");
	aunit_printf("#CASE_START_test_xint_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_1\n");
}

void test_xint_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4294967295};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_2,false,0\n");
	aunit_printf("#CASE_START_test_xint_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_2\n");
}

void test_xint_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={255};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_3,false,0\n");
	aunit_printf("#CASE_START_test_xint_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",255,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_3\n");
}

void test_xint_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4278190080};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_4,false,0\n");
	aunit_printf("#CASE_START_test_xint_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",4278190080,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_4\n");
}

void test_xint_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={16843009};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_5,false,0\n");
	aunit_printf("#CASE_START_test_xint_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",16843009,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_5\n");
}

void test_xint_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={65535};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_6,false,0\n");
	aunit_printf("#CASE_START_test_xint_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",65535,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_6\n");
}

void test_xint_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4294901760};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_7,false,0\n");
	aunit_printf("#CASE_START_test_xint_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",4294901760,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_7\n");
}

void test_xint_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int x;

	//声明返回值局部变量，若为基本类型赋默认值
	uint returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={305419896};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xint_8,false,0\n");
	aunit_printf("#CASE_START_test_xint_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xint(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("xint","returnValue",305419896,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xint_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_xint_up();

	switch(caseIndex){
	case 1:
		test_xint_1();
		break;
	case 2:
		test_xint_2();
		break;
	case 3:
		test_xint_3();
		break;
	case 4:
		test_xint_4();
		break;
	case 5:
		test_xint_5();
		break;
	case 6:
		test_xint_6();
		break;
	case 7:
		test_xint_7();
		break;
	case 8:
		test_xint_8();
		break;
	default:
		abnormal_xint_case(caseIndex);
		break;
	}

	test_xint_down();
}

