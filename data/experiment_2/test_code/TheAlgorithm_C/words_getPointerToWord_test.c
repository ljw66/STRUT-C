void test_getPointerToWord_up(void);
void test_getPointerToWord_down(void);


void test_getPointerToWord_up(void){

	aunit_printf("\n##FUNCTION_START_getPointerToWord\n");
 }

void test_getPointerToWord_down(void){
	aunit_printf("\n##FUNCTION_END_getPointerToWord\n");
 }



void abnormal_getPointerToWord_case(int index);

void abnormal_getPointerToWord_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getPointerToWord_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"test"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;
	strcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getPointerToWord_1,false,0\n");
	aunit_printf("#CASE_START_test_getPointerToWord_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			word=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getPointerToWord(word);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("getPointerToWord","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)
	OB_INT_EXPR("strcpy","strcpy_call_counter",strcpy_call_counter)

	aunit_printf("#CASE_END_test_getPointerToWord_1\n");
}

void test_getPointerToWord_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;
	strcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getPointerToWord_2,false,0\n");
	aunit_printf("#CASE_START_test_getPointerToWord_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = getPointerToWord(word);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("getPointerToWord","returnValue","0x1000",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)
	OB_INT_EXPR("strcpy","strcpy_call_counter",strcpy_call_counter)

	aunit_printf("#CASE_END_test_getPointerToWord_2\n");
}

void test_getPointerToWord_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"failure"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;
	strcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getPointerToWord_3,false,0\n");
	aunit_printf("#CASE_START_test_getPointerToWord_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			word=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getPointerToWord(word);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("getPointerToWord","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)
	OB_INT_EXPR("strcpy","strcpy_call_counter",strcpy_call_counter)

	aunit_printf("#CASE_END_test_getPointerToWord_3\n");
}

void test_getPointerToWord_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"success"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;
	strcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getPointerToWord_4,false,0\n");
	aunit_printf("#CASE_START_test_getPointerToWord_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			word=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getPointerToWord(word);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("getPointerToWord","returnValue","0x3000",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)
	OB_INT_EXPR("strcpy","strcpy_call_counter",strcpy_call_counter)

	aunit_printf("#CASE_END_test_getPointerToWord_4\n");
}

void test_getPointerToWord_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"a"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;
	strcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getPointerToWord_5,false,0\n");
	aunit_printf("#CASE_START_test_getPointerToWord_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			word=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getPointerToWord(word);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("getPointerToWord","returnValue","0x4000",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)
	OB_INT_EXPR("strcpy","strcpy_call_counter",strcpy_call_counter)

	aunit_printf("#CASE_END_test_getPointerToWord_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_getPointerToWord_up();

	switch(caseIndex){
	case 1:
		test_getPointerToWord_1();
		break;
	case 2:
		test_getPointerToWord_2();
		break;
	case 3:
		test_getPointerToWord_3();
		break;
	case 4:
		test_getPointerToWord_4();
		break;
	case 5:
		test_getPointerToWord_5();
		break;
	default:
		abnormal_getPointerToWord_case(caseIndex);
		break;
	}

	test_getPointerToWord_down();
}

