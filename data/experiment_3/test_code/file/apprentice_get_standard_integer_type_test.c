void test_get_standard_integer_type_up(void);
void test_get_standard_integer_type_down(void);


void test_get_standard_integer_type_up(void){

	aunit_printf("\n##FUNCTION_START_get_standard_integer_type\n");
 }

void test_get_standard_integer_type_down(void){
	aunit_printf("\n##FUNCTION_END_get_standard_integer_type\n");
 }



void abnormal_get_standard_integer_type_case(int index);

void abnormal_get_standard_integer_type_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_standard_integer_type_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*t is an invalid expression 
	char *valueList_1[]={(char *)"C123"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_standard_integer_type_1,false,0\n");
	aunit_printf("#CASE_START_test_get_standard_integer_type_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_standard_integer_type(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_standard_integer_type","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_standard_integer_type_1\n");
}

void test_get_standard_integer_type_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*t is an invalid expression 
	char *valueList_1[]={(char *)"S123"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_standard_integer_type_2,false,0\n");
	aunit_printf("#CASE_START_test_get_standard_integer_type_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_standard_integer_type(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_standard_integer_type","returnValue",2,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_standard_integer_type_2\n");
}

void test_get_standard_integer_type_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*t is an invalid expression 
	char *valueList_1[]={(char *)"4XYZ"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_standard_integer_type_3,false,0\n");
	aunit_printf("#CASE_START_test_get_standard_integer_type_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_standard_integer_type(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_standard_integer_type","returnValue",4,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_standard_integer_type_3\n");
}

void test_get_standard_integer_type_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*t is an invalid expression 
	char *valueList_1[]={(char *)"Z123"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_standard_integer_type_4,false,0\n");
	aunit_printf("#CASE_START_test_get_standard_integer_type_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_standard_integer_type(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_standard_integer_type","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_standard_integer_type_4\n");
}

void test_get_standard_integer_type_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*t is an invalid expression 
	char *valueList_1[]={(char *)"91XYZ"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_standard_integer_type_5,false,0\n");
	aunit_printf("#CASE_START_test_get_standard_integer_type_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_standard_integer_type(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_standard_integer_type","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_standard_integer_type_5\n");
}

void test_get_standard_integer_type_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*t is an invalid expression 
	char *valueList_1[]={(char *)"-XYZ"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_standard_integer_type_6,false,0\n");
	aunit_printf("#CASE_START_test_get_standard_integer_type_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_standard_integer_type(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_standard_integer_type","returnValue",4,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_standard_integer_type_6\n");
}

void test_get_standard_integer_type_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*t is an invalid expression 
	char *valueList_1[]={(char *)"Q123"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_standard_integer_type_7,false,0\n");
	aunit_printf("#CASE_START_test_get_standard_integer_type_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_standard_integer_type(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_standard_integer_type","returnValue",24,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_standard_integer_type_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_standard_integer_type_up();

	switch(caseIndex){
	case 1:
		test_get_standard_integer_type_1();
		break;
	case 2:
		test_get_standard_integer_type_2();
		break;
	case 3:
		test_get_standard_integer_type_3();
		break;
	case 4:
		test_get_standard_integer_type_4();
		break;
	case 5:
		test_get_standard_integer_type_5();
		break;
	case 6:
		test_get_standard_integer_type_6();
		break;
	case 7:
		test_get_standard_integer_type_7();
		break;
	default:
		abnormal_get_standard_integer_type_case(caseIndex);
		break;
	}

	test_get_standard_integer_type_down();
}

