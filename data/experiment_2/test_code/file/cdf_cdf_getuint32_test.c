void test_cdf_getuint32_up(void);
void test_cdf_getuint32_down(void);


void test_cdf_getuint32_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_getuint32\n");
 }

void test_cdf_getuint32_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_getuint32\n");
 }



void abnormal_cdf_getuint32_case(int index);

void abnormal_cdf_getuint32_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_getuint32_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *p;
	unsigned int offs;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	uint8_t *valueList_0[]={(uint8_t *)"abcd"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={16909060};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_getuint32_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getuint32_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(uint8_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			offs=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			cdf_bo.u=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = cdf_getuint32(p,offs);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","returnValue",12345678,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","cdf_bo.u",16909060,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_getuint32_1\n");
}

void test_cdf_getuint32_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *p;
	unsigned int offs;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	uint8_t *valueList_0[]={(uint8_t *)"ijkl"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={12345678};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_getuint32_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getuint32_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(uint8_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			offs=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			cdf_bo.u=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = cdf_getuint32(p,offs);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","returnValue",98765432,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","cdf_bo.u",12345678,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_getuint32_2\n");
}

void test_cdf_getuint32_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *p;
	unsigned int offs;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	uint8_t *valueList_0[]={(uint8_t *)"qrst"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={16909060};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_getuint32_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getuint32_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(uint8_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			offs=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			cdf_bo.u=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = cdf_getuint32(p,offs);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","cdf_bo.u",16909060,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_getuint32_3\n");
}

void test_cdf_getuint32_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *p;
	unsigned int offs;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	uint8_t *valueList_0[]={(uint8_t *)"wxyz"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={87654321};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_getuint32_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getuint32_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(uint8_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			offs=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			cdf_bo.u=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = cdf_getuint32(p,offs);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","returnValue",12345678,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_getuint32","cdf_bo.u",87654321,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_getuint32_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_getuint32_up();

	switch(caseIndex){
	case 1:
		test_cdf_getuint32_1();
		break;
	case 2:
		test_cdf_getuint32_2();
		break;
	case 3:
		test_cdf_getuint32_3();
		break;
	case 4:
		test_cdf_getuint32_4();
		break;
	default:
		abnormal_cdf_getuint32_case(caseIndex);
		break;
	}

	test_cdf_getuint32_down();
}

