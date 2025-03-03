void test_aes_encrypt_cbc_mac_up(void);
void test_aes_encrypt_cbc_mac_down(void);


void test_aes_encrypt_cbc_mac_up(void){

	aunit_printf("\n##FUNCTION_START_aes_encrypt_cbc_mac\n");
 }

void test_aes_encrypt_cbc_mac_down(void){
	aunit_printf("\n##FUNCTION_END_aes_encrypt_cbc_mac\n");
 }



void abnormal_aes_encrypt_cbc_mac_case(int index);

void abnormal_aes_encrypt_cbc_mac_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_encrypt_cbc_mac_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdefghijklmno"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={15};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"initialvector123"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_encrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_cbc_mac_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_cbc_mac_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iv=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key=(WORD *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = aes_encrypt_cbc_mac(in,in_len,out,key,keysize,iv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_encrypt_cbc_mac","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_encrypt","aes_encrypt_call_counter",aes_encrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_cbc_mac_1\n");
}

void test_aes_encrypt_cbc_mac_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdefghijklmnop"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={16};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"initialvector123"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x12345678};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_encrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_cbc_mac_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_cbc_mac_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iv=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key=(WORD *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = aes_encrypt_cbc_mac(in,in_len,out,key,keysize,iv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_encrypt_cbc_mac","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_LONG("aes_encrypt_cbc_mac","out","encryptedblock",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_encrypt","aes_encrypt_call_counter",aes_encrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_cbc_mac_2\n");
}

void test_aes_encrypt_cbc_mac_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdefghijklmnopqrstuvwxy01234567"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={32};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"initialvector123"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x12345678};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_encrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_cbc_mac_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_cbc_mac_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iv=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key=(WORD *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = aes_encrypt_cbc_mac(in,in_len,out,key,keysize,iv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_encrypt_cbc_mac","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_LONG("aes_encrypt_cbc_mac","out","encryptedblock2",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_encrypt","aes_encrypt_call_counter",aes_encrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_cbc_mac_3\n");
}

void test_aes_encrypt_cbc_mac_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdefghijklmnop"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={16};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"initialvector123"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x12345678};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_encrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_cbc_mac_4,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_cbc_mac_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iv=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key=(WORD *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = aes_encrypt_cbc_mac(in,in_len,out,key,keysize,iv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_encrypt_cbc_mac","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_encrypt","aes_encrypt_call_counter",aes_encrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_cbc_mac_4\n");
}

void test_aes_encrypt_cbc_mac_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"initialvector123"};
	unsigned int listLength_2=1;
	WORD *valueList_3[]={(WORD *)key_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x12345678};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_encrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_cbc_mac_5,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_cbc_mac_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in_len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iv=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key=(WORD *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = aes_encrypt_cbc_mac(in,in_len,out,key,keysize,iv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_encrypt_cbc_mac","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_encrypt","aes_encrypt_call_counter",aes_encrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_cbc_mac_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_encrypt_cbc_mac_up();

	switch(caseIndex){
	case 1:
		test_aes_encrypt_cbc_mac_1();
		break;
	case 2:
		test_aes_encrypt_cbc_mac_2();
		break;
	case 3:
		test_aes_encrypt_cbc_mac_3();
		break;
	case 4:
		test_aes_encrypt_cbc_mac_4();
		break;
	case 5:
		test_aes_encrypt_cbc_mac_5();
		break;
	default:
		abnormal_aes_encrypt_cbc_mac_case(caseIndex);
		break;
	}

	test_aes_encrypt_cbc_mac_down();
}

