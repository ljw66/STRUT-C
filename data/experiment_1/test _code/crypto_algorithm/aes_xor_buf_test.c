void test_xor_buf_up(void);
void test_xor_buf_down(void);


void test_xor_buf_up(void){

	aunit_printf("\n##FUNCTION_START_xor_buf\n");
 }

void test_xor_buf_down(void){
	aunit_printf("\n##FUNCTION_END_xor_buf\n");
 }



void abnormal_xor_buf_case(int index);

void abnormal_xor_buf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_xor_buf_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"abc"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_1,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","abc",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_1\n");
}

void test_xor_buf_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\\x01"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\\x00"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_2,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\\x01",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_2\n");
}

void test_xor_buf_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\\x01\\x02\\x03"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\\x03\\x02\\x01"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_3,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\\x02\\x00\\x02",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_3\n");
}

void test_xor_buf_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\\xAA\\xBB\\xCC"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\\xAA\\xBB\\xCC"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_4,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\\x00\\x00\\x00",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_4\n");
}

void test_xor_buf_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\\x00\\x00\\x00"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\\x00\\x00\\x00"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_5,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\\x00\\x00\\x00",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_5\n");
}

void test_xor_buf_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={1024};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"A large array of bytes (e.g., 1024 bytes)"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"Another large array of bytes (e.g., 1024 bytes)"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_6,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","The XORed result of the two large arrays",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_6\n");
}

void test_xor_buf_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\\xFF\\xFF\\xFF"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\\x00\\xAA\\x55"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_7,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\\xFF\\x55\\xAA",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_7\n");
}

void test_xor_buf_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\\xAA\\xAA\\xAA"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\\x55\\x00\\xFF"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_xor_buf_8,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\\xFF\\xAA\\x55",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_xor_buf_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_xor_buf_up();

	switch(caseIndex){
	case 1:
		test_xor_buf_1();
		break;
	case 2:
		test_xor_buf_2();
		break;
	case 3:
		test_xor_buf_3();
		break;
	case 4:
		test_xor_buf_4();
		break;
	case 5:
		test_xor_buf_5();
		break;
	case 6:
		test_xor_buf_6();
		break;
	case 7:
		test_xor_buf_7();
		break;
	case 8:
		test_xor_buf_8();
		break;
	default:
		abnormal_xor_buf_case(caseIndex);
		break;
	}

	test_xor_buf_down();
}

