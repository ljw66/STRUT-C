void test_swap4_up(void);
void test_swap4_down(void);


void test_swap4_up(void){

	aunit_printf("\n##FUNCTION_START_swap4\n");
 }

void test_swap4_down(void){
	aunit_printf("\n##FUNCTION_END_swap4\n");
 }



void abnormal_swap4_case(int index);

void abnormal_swap4_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_swap4_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_1,false,0\n");
	aunit_printf("#CASE_START_test_swap4_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_1\n");
}

void test_swap4_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4294967295};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_2,false,0\n");
	aunit_printf("#CASE_START_test_swap4_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_2\n");
}

void test_swap4_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={305419896};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_3,false,0\n");
	aunit_printf("#CASE_START_test_swap4_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",2018915346,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_3\n");
}

void test_swap4_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={2864434397};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_4,false,0\n");
	aunit_printf("#CASE_START_test_swap4_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",3721182122,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_4\n");
}

void test_swap4_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={255};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_5,false,0\n");
	aunit_printf("#CASE_START_test_swap4_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",4278190080,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_5\n");
}

void test_swap4_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4278190080};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_6,false,0\n");
	aunit_printf("#CASE_START_test_swap4_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",255,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_6\n");
}

void test_swap4_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={16711935};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_7,false,0\n");
	aunit_printf("#CASE_START_test_swap4_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",4278255360,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_7\n");
}

void test_swap4_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4278255360};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_8,false,0\n");
	aunit_printf("#CASE_START_test_swap4_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",16711935,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_8\n");
}

void test_swap4_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={2147483648};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_9,false,0\n");
	aunit_printf("#CASE_START_test_swap4_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",128,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_9\n");
}

void test_swap4_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sv;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_swap4_10,false,0\n");
	aunit_printf("#CASE_START_test_swap4_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",16777216,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_swap4_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_swap4_up();

	switch(caseIndex){
	case 1:
		test_swap4_1();
		break;
	case 2:
		test_swap4_2();
		break;
	case 3:
		test_swap4_3();
		break;
	case 4:
		test_swap4_4();
		break;
	case 5:
		test_swap4_5();
		break;
	case 6:
		test_swap4_6();
		break;
	case 7:
		test_swap4_7();
		break;
	case 8:
		test_swap4_8();
		break;
	case 9:
		test_swap4_9();
		break;
	case 10:
		test_swap4_10();
		break;
	default:
		abnormal_swap4_case(caseIndex);
		break;
	}

	test_swap4_down();
}

