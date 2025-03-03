void test_file_setprogname_up(void);
void test_file_setprogname_down(void);


void test_file_setprogname_up(void){

	aunit_printf("\n##FUNCTION_START_file_setprogname\n");
 }

void test_file_setprogname_down(void){
	aunit_printf("\n##FUNCTION_END_file_setprogname\n");
 }



void abnormal_file_setprogname_case(int index);

void abnormal_file_setprogname_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_setprogname_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *progname;


	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_setprogname_1,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","abc",file_progname)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_setprogname_1\n");
}

void test_file_setprogname_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *progname;


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_setprogname_2,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		file_setprogname(progname);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_setprogname_2\n");
}

void test_file_setprogname_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *progname;


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_setprogname_3,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		file_setprogname(progname);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_setprogname_3\n");
}

void test_file_setprogname_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *progname;


	//值序列相关
	char *valueList_0[]={(char *)"this_is_a_very_long_program_name_string"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_setprogname_4,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","this_is_a_very_long_program_name_string",file_progname)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_setprogname_4\n");
}

void test_file_setprogname_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *progname;


	//值序列相关
	char *valueList_0[]={(char *)"!@#$%^&*()_+"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_setprogname_5,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","!@#$%^&*()_+",file_progname)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_setprogname_5\n");
}

void test_file_setprogname_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *progname;


	//值序列相关
	char *valueList_0[]={(char *)"   leading_and_trailing_whitespace   "};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_setprogname_6,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","   leading_and_trailing_whitespace   ",file_progname)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_setprogname_6\n");
}

void test_file_setprogname_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *progname;


	//值序列相关
	char *valueList_0[]={(char *)"Программа"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_file_setprogname_7,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","Программа",file_progname)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_file_setprogname_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_setprogname_up();

	switch(caseIndex){
	case 1:
		test_file_setprogname_1();
		break;
	case 2:
		test_file_setprogname_2();
		break;
	case 3:
		test_file_setprogname_3();
		break;
	case 4:
		test_file_setprogname_4();
		break;
	case 5:
		test_file_setprogname_5();
		break;
	case 6:
		test_file_setprogname_6();
		break;
	case 7:
		test_file_setprogname_7();
		break;
	default:
		abnormal_file_setprogname_case(caseIndex);
		break;
	}

	test_file_setprogname_down();
}

