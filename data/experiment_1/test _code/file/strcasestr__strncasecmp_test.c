void test__strncasecmp_up(void);
void test__strncasecmp_down(void);


void test__strncasecmp_up(void){

	aunit_printf("\n##FUNCTION_START__strncasecmp\n");
 }

void test__strncasecmp_down(void){
	aunit_printf("\n##FUNCTION_END__strncasecmp\n");
 }



void abnormal__strncasecmp_case(int index);

void abnormal__strncasecmp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test__strncasecmp_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"xyz"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test__strncasecmp_1,false,0\n");
	aunit_printf("#CASE_START_test__strncasecmp_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s2=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = _strncasecmp(s1,s2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("_strncasecmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test__strncasecmp_1\n");
}

void test__strncasecmp_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"ABC"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test__strncasecmp_2,false,0\n");
	aunit_printf("#CASE_START_test__strncasecmp_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s2=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = _strncasecmp(s1,s2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("_strncasecmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test__strncasecmp_2\n");
}

void test__strncasecmp_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"abd"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test__strncasecmp_3,false,0\n");
	aunit_printf("#CASE_START_test__strncasecmp_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s2=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = _strncasecmp(s1,s2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("_strncasecmp","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test__strncasecmp_3\n");
}

void test__strncasecmp_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abd"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"abc"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test__strncasecmp_4,false,0\n");
	aunit_printf("#CASE_START_test__strncasecmp_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s2=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = _strncasecmp(s1,s2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("_strncasecmp","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test__strncasecmp_4\n");
}

void test__strncasecmp_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"abcdef"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test__strncasecmp_5,false,0\n");
	aunit_printf("#CASE_START_test__strncasecmp_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s2=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = _strncasecmp(s1,s2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("_strncasecmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test__strncasecmp_5\n");
}

void test__strncasecmp_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"ab\0d"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test__strncasecmp_6,false,0\n");
	aunit_printf("#CASE_START_test__strncasecmp_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s2=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = _strncasecmp(s1,s2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("_strncasecmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test__strncasecmp_6\n");
}

void test__strncasecmp_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"aBc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"AbD"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test__strncasecmp_7,false,0\n");
	aunit_printf("#CASE_START_test__strncasecmp_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s2=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = _strncasecmp(s1,s2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("_strncasecmp","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test__strncasecmp_7\n");
}

void aunit_test_func_run(int caseIndex){

	test__strncasecmp_up();

	switch(caseIndex){
	case 1:
		test__strncasecmp_1();
		break;
	case 2:
		test__strncasecmp_2();
		break;
	case 3:
		test__strncasecmp_3();
		break;
	case 4:
		test__strncasecmp_4();
		break;
	case 5:
		test__strncasecmp_5();
		break;
	case 6:
		test__strncasecmp_6();
		break;
	case 7:
		test__strncasecmp_7();
		break;
	default:
		abnormal__strncasecmp_case(caseIndex);
		break;
	}

	test__strncasecmp_down();
}

