void test_file_getprogname_up(void);
void test_file_getprogname_down(void);


void test_file_getprogname_up(void){

	aunit_printf("\n##FUNCTION_START_file_getprogname\n");
 }

void test_file_getprogname_down(void){
	aunit_printf("\n##FUNCTION_END_file_getprogname\n");
 }



void abnormal_file_getprogname_case(int index);

void abnormal_file_getprogname_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_getprogname_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"my_program"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_getprogname_1,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file_progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = file_getprogname();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_getprogname","returnValue","my_program",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_getprogname_1\n");
}

void test_file_getprogname_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_getprogname_2,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = file_getprogname();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("file_getprogname","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_getprogname_2\n");
}

void test_file_getprogname_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_getprogname_3,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = file_getprogname();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("file_getprogname","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_getprogname_3\n");
}

void test_file_getprogname_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"prog@123"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_getprogname_4,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file_progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = file_getprogname();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_getprogname","returnValue","prog@123",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_getprogname_4\n");
}

void test_file_getprogname_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_getprogname_5,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = file_getprogname();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("file_getprogname","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_getprogname_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_getprogname_up();

	switch(caseIndex){
	case 1:
		test_file_getprogname_1();
		break;
	case 2:
		test_file_getprogname_2();
		break;
	case 3:
		test_file_getprogname_3();
		break;
	case 4:
		test_file_getprogname_4();
		break;
	case 5:
		test_file_getprogname_5();
		break;
	default:
		abnormal_file_getprogname_case(caseIndex);
		break;
	}

	test_file_getprogname_down();
}

