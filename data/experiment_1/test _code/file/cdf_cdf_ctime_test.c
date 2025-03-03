void test_cdf_ctime_up(void);
void test_cdf_ctime_down(void);


void test_cdf_ctime_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_ctime\n");
 }

void test_cdf_ctime_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_ctime\n");
 }



void abnormal_cdf_ctime_case(int index);

void abnormal_cdf_ctime_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_ctime_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	time_t *sec;
	char *buf;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	time_t *valueList_0[]={(time_t *)sec_PTRTO};
	unsigned int listLength_0=1;
	long int valueList_1[]={1672531200};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	ctime_r_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_ctime_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_ctime_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(time_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sec_PTRTO[0]=(long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_ctime(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_ctime","returnValue","Mon Jan  1 12:00:00 2023\n",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("ctime_r","ctime_r_call_counter",ctime_r_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_ctime_1\n");
}

void test_cdf_ctime_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	time_t *sec;
	char *buf;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	time_t *valueList_0[]={(time_t *)sec_PTRTO};
	unsigned int listLength_0=1;
	long int valueList_1[]={0x3afff487d0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	ctime_r_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_ctime_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_ctime_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(time_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sec_PTRTO[0]=(long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_ctime(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_ctime","returnValue","*Bad* 0x3afff487d0\n",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("ctime_r","ctime_r_call_counter",ctime_r_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_ctime_2\n");
}

void test_cdf_ctime_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	time_t *sec;
	char *buf;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	time_t *valueList_0[]={(time_t *)sec_PTRTO};
	unsigned int listLength_0=1;
	long int valueList_1[]={0x7fffffff};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	ctime_r_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_ctime_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_ctime_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(time_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sec_PTRTO[0]=(long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_ctime(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_ctime","returnValue","Tue Jan 19 03:14:07 2038\n",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("ctime_r","ctime_r_call_counter",ctime_r_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_ctime_3\n");
}

void test_cdf_ctime_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	time_t *sec;
	char *buf;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	time_t *valueList_0[]={(time_t *)sec_PTRTO};
	unsigned int listLength_0=1;
	long int valueList_1[]={-1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	ctime_r_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_ctime_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_ctime_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(time_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sec_PTRTO[0]=(long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_ctime(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_ctime","returnValue","*Bad* -0x000000000000001\n",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("ctime_r","ctime_r_call_counter",ctime_r_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_ctime_4\n");
}

void test_cdf_ctime_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	time_t *sec;
	char *buf;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	time_t *valueList_0[]={(time_t *)sec_PTRTO};
	unsigned int listLength_0=1;
	long int valueList_1[]={1672531200};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	ctime_r_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_ctime_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_ctime_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(time_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sec_PTRTO[0]=(long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_ctime(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_ctime","returnValue","*Bad* 0x0000000063b8e000\n",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("ctime_r","ctime_r_call_counter",ctime_r_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_ctime_5\n");
}

void test_cdf_ctime_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	time_t *sec;
	char *buf;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	time_t *valueList_0[]={(time_t *)sec_PTRTO};
	unsigned int listLength_0=1;
	long int valueList_1[]={0x3afff487cf};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	ctime_r_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_ctime_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_ctime_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(time_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sec_PTRTO[0]=(long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_ctime(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_ctime","returnValue","Wed Dec 31 23:59:59 9999\n",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("ctime_r","ctime_r_call_counter",ctime_r_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_cdf_ctime_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_ctime_up();

	switch(caseIndex){
	case 1:
		test_cdf_ctime_1();
		break;
	case 2:
		test_cdf_ctime_2();
		break;
	case 3:
		test_cdf_ctime_3();
		break;
	case 4:
		test_cdf_ctime_4();
		break;
	case 5:
		test_cdf_ctime_5();
		break;
	case 6:
		test_cdf_ctime_6();
		break;
	default:
		abnormal_cdf_ctime_case(caseIndex);
		break;
	}

	test_cdf_ctime_down();
}

