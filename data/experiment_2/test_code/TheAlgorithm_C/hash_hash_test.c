void test_hash_up(void);
void test_hash_down(void);


void test_hash_up(void){

	aunit_printf("\n##FUNCTION_START_hash\n");
 }

void test_hash_down(void){
	aunit_printf("\n##FUNCTION_END_hash\n");
 }



void abnormal_hash_case(int index);

void abnormal_hash_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hash_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *value;

	//声明返回值局部变量，若为基本类型赋默认值
	long long int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"longer test string"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_hash_4,false,0\n");
	aunit_printf("#CASE_START_test_hash_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",1670344851,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_hash_4\n");
}

void test_hash_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *value;

	//声明返回值局部变量，若为基本类型赋默认值
	long long int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"special!@#"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_hash_5,false,0\n");
	aunit_printf("#CASE_START_test_hash_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",756730673,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_hash_5\n");
}

void test_hash_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *value;

	//声明返回值局部变量，若为基本类型赋默认值
	long long int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"1234567890"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_hash_6,false,0\n");
	aunit_printf("#CASE_START_test_hash_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",1097417196,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_hash_6\n");
}

void test_hash_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *value;

	//声明返回值局部变量，若为基本类型赋默认值
	long long int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"abc123"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_hash_7,false,0\n");
	aunit_printf("#CASE_START_test_hash_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",6448456,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_hash_7\n");
}

void test_hash_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *value;

	//声明返回值局部变量，若为基本类型赋默认值
	long long int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"hello world"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_hash_8,false,0\n");
	aunit_printf("#CASE_START_test_hash_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",156891329,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_hash_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_hash_up();

	switch(caseIndex){
	case 4:
		test_hash_4();
		break;
	case 5:
		test_hash_5();
		break;
	case 6:
		test_hash_6();
		break;
	case 7:
		test_hash_7();
		break;
	case 8:
		test_hash_8();
		break;
	default:
		abnormal_hash_case(caseIndex);
		break;
	}

	test_hash_down();
}

