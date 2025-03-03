void test_xshort_up(void);
void test_xshort_down(void);


void test_xshort_up(void){

	aunit_printf("\n##FUNCTION_START_xshort\n");
 }

void test_xshort_down(void){
	aunit_printf("\n##FUNCTION_END_xshort\n");
 }



void abnormal_xshort_case(int index);

void abnormal_xshort_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_xshort_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_1,false,0\n");
	aunit_printf("#CASE_START_test_xshort_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_1\n");
}

void test_xshort_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={65535};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_2,false,0\n");
	aunit_printf("#CASE_START_test_xshort_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",65535,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_2\n");
}

void test_xshort_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_3,false,0\n");
	aunit_printf("#CASE_START_test_xshort_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_3\n");
}

void test_xshort_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={256};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_4,false,0\n");
	aunit_printf("#CASE_START_test_xshort_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",256,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_4\n");
}

void test_xshort_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={257};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_5,false,0\n");
	aunit_printf("#CASE_START_test_xshort_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",257,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_5\n");
}

void test_xshort_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={32768};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_6,false,0\n");
	aunit_printf("#CASE_START_test_xshort_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",32768,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_6\n");
}

void test_xshort_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={65280};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_7,false,0\n");
	aunit_printf("#CASE_START_test_xshort_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",65280,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_7\n");
}

void test_xshort_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={4660};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_8,false,0\n");
	aunit_printf("#CASE_START_test_xshort_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",4660,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_8\n");
}

void test_xshort_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={43981};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_9,false,0\n");
	aunit_printf("#CASE_START_test_xshort_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",43981,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_9\n");
}

void test_xshort_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned short int x;

	//声明返回值局部变量，若为基本类型赋默认值
	ushort returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={4660};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xshort_10,false,0\n");
	aunit_printf("#CASE_START_test_xshort_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = xshort(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("xshort","returnValue",4660,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xshort_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_xshort_up();

	switch(caseIndex){
	case 1:
		test_xshort_1();
		break;
	case 2:
		test_xshort_2();
		break;
	case 3:
		test_xshort_3();
		break;
	case 4:
		test_xshort_4();
		break;
	case 5:
		test_xshort_5();
		break;
	case 6:
		test_xshort_6();
		break;
	case 7:
		test_xshort_7();
		break;
	case 8:
		test_xshort_8();
		break;
	case 9:
		test_xshort_9();
		break;
	case 10:
		test_xshort_10();
		break;
	default:
		abnormal_xshort_case(caseIndex);
		break;
	}

	test_xshort_down();
}

