void test_matchhere_up(void);
void test_matchhere_down(void);


void test_matchhere_up(void){

	aunit_printf("\n##FUNCTION_START_matchhere\n");
 }

void test_matchhere_down(void){
	aunit_printf("\n##FUNCTION_END_matchhere\n");
 }



void abnormal_matchhere_case(int index);

void abnormal_matchhere_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_matchhere_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_1,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			text=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_1\n");
}

void test_matchhere_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"a*"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"aaaabc"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_2,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			re=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			text=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_2\n");
}

void test_matchhere_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc$"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_3,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			re=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			text=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_3\n");
}

void test_matchhere_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"a.c"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_4,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			re=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			text=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_4\n");
}

void test_matchhere_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abd"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_5,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			re=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			text=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_5\n");
}

void test_matchhere_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"a*"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"bc"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_6,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			re=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			text=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_6\n");
}

void test_matchhere_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc$"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcd"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_7,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			re=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			text=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_7\n");
}

void test_matchhere_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *re;
	char *text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"a.c"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"adc"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	matchstar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_matchhere_8,false,0\n");
	aunit_printf("#CASE_START_test_matchhere_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			re=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			text=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = matchhere(re,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("matchhere","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("matchstar","matchstar_call_counter",matchstar_call_counter)

	aunit_printf("#CASE_END_test_matchhere_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_matchhere_up();

	switch(caseIndex){
	case 1:
		test_matchhere_1();
		break;
	case 2:
		test_matchhere_2();
		break;
	case 3:
		test_matchhere_3();
		break;
	case 4:
		test_matchhere_4();
		break;
	case 5:
		test_matchhere_5();
		break;
	case 6:
		test_matchhere_6();
		break;
	case 7:
		test_matchhere_7();
		break;
	case 8:
		test_matchhere_8();
		break;
	default:
		abnormal_matchhere_case(caseIndex);
		break;
	}

	test_matchhere_down();
}

