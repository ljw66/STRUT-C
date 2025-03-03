void test_cdf_print_elapsed_time_up(void);
void test_cdf_print_elapsed_time_down(void);


void test_cdf_print_elapsed_time_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_print_elapsed_time\n");
 }

void test_cdf_print_elapsed_time_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_print_elapsed_time\n");
 }



void abnormal_cdf_print_elapsed_time_case(int index);

void abnormal_cdf_print_elapsed_time_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_print_elapsed_time_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bufsiz;
	long long int ts;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_print_elapsed_time_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_print_elapsed_time_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ts=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_print_elapsed_time(buf,bufsiz,ts);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_print_elapsed_time","returnValue",8,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_print_elapsed_time_1\n");
}

void test_cdf_print_elapsed_time_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bufsiz;
	long long int ts;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={8};
	unsigned int listLength_0=1;
	long long int valueList_1[]={10000000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_print_elapsed_time_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_print_elapsed_time_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ts=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_print_elapsed_time(buf,bufsiz,ts);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_print_elapsed_time","returnValue",8,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_print_elapsed_time_2\n");
}

void test_cdf_print_elapsed_time_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bufsiz;
	long long int ts;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	long long int valueList_1[]={900610000000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_print_elapsed_time_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_print_elapsed_time_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ts=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_print_elapsed_time(buf,bufsiz,ts);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_print_elapsed_time","returnValue",12,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_print_elapsed_time_3\n");
}

void test_cdf_print_elapsed_time_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bufsiz;
	long long int ts;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	long long int valueList_1[]={900610000000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_print_elapsed_time_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_print_elapsed_time_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ts=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_print_elapsed_time(buf,bufsiz,ts);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_print_elapsed_time","returnValue",6,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_print_elapsed_time_4\n");
}

void test_cdf_print_elapsed_time_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bufsiz;
	long long int ts;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	long long int valueList_1[]={864000000000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_print_elapsed_time_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_print_elapsed_time_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ts=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_print_elapsed_time(buf,bufsiz,ts);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_print_elapsed_time","returnValue",8,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_print_elapsed_time_5\n");
}

void test_cdf_print_elapsed_time_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bufsiz;
	long long int ts;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	long long int valueList_1[]={36610000000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_print_elapsed_time_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_print_elapsed_time_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ts=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_print_elapsed_time(buf,bufsiz,ts);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_print_elapsed_time","returnValue",11,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_print_elapsed_time_6\n");
}

void test_cdf_print_elapsed_time_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bufsiz;
	long long int ts;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_print_elapsed_time_7,false,0\n");
	aunit_printf("#CASE_START_test_cdf_print_elapsed_time_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bufsiz=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ts=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_print_elapsed_time(buf,bufsiz,ts);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_print_elapsed_time","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_print_elapsed_time_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_print_elapsed_time_up();

	switch(caseIndex){
	case 1:
		test_cdf_print_elapsed_time_1();
		break;
	case 2:
		test_cdf_print_elapsed_time_2();
		break;
	case 3:
		test_cdf_print_elapsed_time_3();
		break;
	case 4:
		test_cdf_print_elapsed_time_4();
		break;
	case 5:
		test_cdf_print_elapsed_time_5();
		break;
	case 6:
		test_cdf_print_elapsed_time_6();
		break;
	case 7:
		test_cdf_print_elapsed_time_7();
		break;
	default:
		abnormal_cdf_print_elapsed_time_case(caseIndex);
		break;
	}

	test_cdf_print_elapsed_time_down();
}

