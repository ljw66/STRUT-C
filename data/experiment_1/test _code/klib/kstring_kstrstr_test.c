void test_kstrstr_up(void);
void test_kstrstr_down(void);


void test_kstrstr_up(void){

	aunit_printf("\n##FUNCTION_START_kstrstr\n");
 }

void test_kstrstr_down(void){
	aunit_printf("\n##FUNCTION_END_kstrstr\n");
 }



void abnormal_kstrstr_case(int index);

void abnormal_kstrstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kstrstr_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *str;
	char *pat;
	int **_prep;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	//*_prep is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	kmemmem_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kstrstr_1,false,0\n");
	aunit_printf("#CASE_START_test_kstrstr_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pat=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kstrstr(str,pat,_prep);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("kstrstr","returnValue","abc",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("kmemmem","kmemmem_call_counter",kmemmem_call_counter)

	aunit_printf("#CASE_END_test_kstrstr_1\n");
}

void test_kstrstr_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *str;
	char *pat;
	int **_prep;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abcdef"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"xyz"};
	unsigned int listLength_1=1;
	//*_prep is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	kmemmem_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kstrstr_2,false,0\n");
	aunit_printf("#CASE_START_test_kstrstr_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pat=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kstrstr(str,pat,_prep);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("kstrstr","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("kmemmem","kmemmem_call_counter",kmemmem_call_counter)

	aunit_printf("#CASE_END_test_kstrstr_2\n");
}

void test_kstrstr_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *str;
	char *pat;
	int **_prep;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abcdef"};
	unsigned int listLength_0=1;
	//*_prep is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	kmemmem_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kstrstr_3,false,0\n");
	aunit_printf("#CASE_START_test_kstrstr_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kstrstr(str,pat,_prep);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("kstrstr","returnValue","abcdef",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("kmemmem","kmemmem_call_counter",kmemmem_call_counter)

	aunit_printf("#CASE_END_test_kstrstr_3\n");
}

void test_kstrstr_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *str;
	char *pat;
	int **_prep;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	//*_prep is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	kmemmem_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kstrstr_4,false,0\n");
	aunit_printf("#CASE_START_test_kstrstr_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pat=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kstrstr(str,pat,_prep);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("kstrstr","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("kmemmem","kmemmem_call_counter",kmemmem_call_counter)

	aunit_printf("#CASE_END_test_kstrstr_4\n");
}

void test_kstrstr_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *str;
	char *pat;
	int **_prep;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcdef"};
	unsigned int listLength_1=1;
	//*_prep is an invalid expression 
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	kmemmem_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kstrstr_5,false,0\n");
	aunit_printf("#CASE_START_test_kstrstr_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pat=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kstrstr(str,pat,_prep);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("kstrstr","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("kmemmem","kmemmem_call_counter",kmemmem_call_counter)

	aunit_printf("#CASE_END_test_kstrstr_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_kstrstr_up();

	switch(caseIndex){
	case 1:
		test_kstrstr_1();
		break;
	case 2:
		test_kstrstr_2();
		break;
	case 3:
		test_kstrstr_3();
		break;
	case 4:
		test_kstrstr_4();
		break;
	case 5:
		test_kstrstr_5();
		break;
	default:
		abnormal_kstrstr_case(caseIndex);
		break;
	}

	test_kstrstr_down();
}

