void test__cdf_tole8_up(void);
void test__cdf_tole8_down(void);


void test__cdf_tole8_up(void){

	aunit_printf("\n##FUNCTION_START__cdf_tole8\n");
 }

void test__cdf_tole8_down(void){
	aunit_printf("\n##FUNCTION_END__cdf_tole8\n");
 }



void abnormal__cdf_tole8_case(int index);

void abnormal__cdf_tole8_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test__cdf_tole8_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_1,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_1\n");
}

void test__cdf_tole8_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_2,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",72057594037927936,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_2\n");
}

void test__cdf_tole8_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={18446744073709551615};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_3,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",18446744073709551615,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_3\n");
}

void test__cdf_tole8_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={12297829382473034410};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_4,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",12297829382473034410,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_4\n");
}

void test__cdf_tole8_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={18374686479671623680};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_5,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",255,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_5\n");
}

void test__cdf_tole8_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={255};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_6,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",18374686479671623680,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_6\n");
}

void test__cdf_tole8_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={71777214294589695};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_7,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",280375465082880,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_7\n");
}

void test__cdf_tole8_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_8,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",72057594037927936,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_8\n");
}

void test__cdf_tole8_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={18446744073709551614};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_9,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",18446744073709551614,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_9\n");
}

void test__cdf_tole8_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned long long int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={1311768467294899695};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test__cdf_tole8_10,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole8_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole8(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("_cdf_tole8","returnValue",17279655951921914642,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test__cdf_tole8_10\n");
}

void aunit_test_func_run(int caseIndex){

	test__cdf_tole8_up();

	switch(caseIndex){
	case 1:
		test__cdf_tole8_1();
		break;
	case 2:
		test__cdf_tole8_2();
		break;
	case 3:
		test__cdf_tole8_3();
		break;
	case 4:
		test__cdf_tole8_4();
		break;
	case 5:
		test__cdf_tole8_5();
		break;
	case 6:
		test__cdf_tole8_6();
		break;
	case 7:
		test__cdf_tole8_7();
		break;
	case 8:
		test__cdf_tole8_8();
		break;
	case 9:
		test__cdf_tole8_9();
		break;
	case 10:
		test__cdf_tole8_10();
		break;
	default:
		abnormal__cdf_tole8_case(caseIndex);
		break;
	}

	test__cdf_tole8_down();
}

