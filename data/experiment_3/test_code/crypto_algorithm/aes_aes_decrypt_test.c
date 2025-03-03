void test_aes_decrypt_up(void);
void test_aes_decrypt_down(void);


void test_aes_decrypt_up(void){

	aunit_printf("\n##FUNCTION_START_aes_decrypt\n");
 }

void test_aes_decrypt_down(void){
	aunit_printf("\n##FUNCTION_END_aes_decrypt\n");
 }



void abnormal_aes_decrypt_case(int index);

void abnormal_aes_decrypt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_decrypt_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	WORD *key;
	int keysize;


	//值序列相关
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"0123456789abcdef"};
	unsigned int listLength_1=1;
	WORD *valueList_2[]={(WORD *)key_PTRTO};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x28aed2a6};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x2b7e1516};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x09cf4f3c};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0xabf71588};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	InvMixColumns_call_counter = 0;
	AddRoundKey_call_counter = 0;
	InvShiftRows_call_counter = 0;
	InvSubBytes_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key=(WORD *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[3]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[2]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		aes_decrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[9]",0x6f,out[9])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[8]",0x77,out[8])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[7]",0xd7,out[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[6]",0x01,out[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[5]",0x6b,out[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[4]",0x7c,out[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[3]",0xfe,out[3])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[2]",0x30,out[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[12]",0x7b,out[12])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[1]",0xf2,out[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[13]",0xc5,out[13])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[0]",0x63,out[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[14]",0x2b,out[14])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[15]",0x76,out[15])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[10]",0x67,out[10])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[11]",0xab,out[11])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("InvMixColumns","InvMixColumns_call_counter",InvMixColumns_call_counter)
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("InvShiftRows","InvShiftRows_call_counter",InvShiftRows_call_counter)
	OB_INT_EXPR("InvSubBytes","InvSubBytes_call_counter",InvSubBytes_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_1\n");
}

void test_aes_decrypt_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	WORD *key;
	int keysize;


	//值序列相关
	int valueList_0[]={192};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"0123456789abcdef"};
	unsigned int listLength_1=1;
	WORD *valueList_2[]={(WORD *)key_PTRTO};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x28aed2a6};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x2b7e1516};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x28aed2a6};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0x2b7e1516};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0x09cf4f3c};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0xabf71588};
	unsigned int listLength_9=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	InvMixColumns_call_counter = 0;
	AddRoundKey_call_counter = 0;
	InvShiftRows_call_counter = 0;
	InvSubBytes_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key=(WORD *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[5]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[4]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[1]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key_PTRTO[3]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			key_PTRTO[2]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		aes_decrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[9]",0x6f,out[9])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[8]",0x77,out[8])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[7]",0xd7,out[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[6]",0x01,out[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[5]",0x6b,out[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[4]",0x7c,out[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[3]",0xfe,out[3])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[2]",0x30,out[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[12]",0x7b,out[12])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[1]",0xf2,out[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[13]",0xc5,out[13])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[0]",0x63,out[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[14]",0x2b,out[14])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[15]",0x76,out[15])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[10]",0x67,out[10])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[11]",0xab,out[11])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("InvMixColumns","InvMixColumns_call_counter",InvMixColumns_call_counter)
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("InvShiftRows","InvShiftRows_call_counter",InvShiftRows_call_counter)
	OB_INT_EXPR("InvSubBytes","InvSubBytes_call_counter",InvSubBytes_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_2\n");
}

void test_aes_decrypt_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	WORD *key;
	int keysize;


	//值序列相关
	int valueList_0[]={256};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"0123456789abcdef"};
	unsigned int listLength_1=1;
	WORD *valueList_2[]={(WORD *)key_PTRTO};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x28aed2a6};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x2b7e1516};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x09cf4f3c};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0xabf71588};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0x28aed2a6};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x2b7e1516};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0x09cf4f3c};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0xabf71588};
	unsigned int listLength_11=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	InvMixColumns_call_counter = 0;
	AddRoundKey_call_counter = 0;
	InvShiftRows_call_counter = 0;
	InvSubBytes_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key=(WORD *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[5]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[4]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[7]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[6]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key_PTRTO[1]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			key_PTRTO[0]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key_PTRTO[3]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key_PTRTO[2]=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		aes_decrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[9]",0x6f,out[9])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[8]",0x77,out[8])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[7]",0xd7,out[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[6]",0x01,out[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[5]",0x6b,out[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[4]",0x7c,out[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[3]",0xfe,out[3])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[2]",0x30,out[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[12]",0x7b,out[12])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[1]",0xf2,out[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[13]",0xc5,out[13])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[0]",0x63,out[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[14]",0x2b,out[14])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[15]",0x76,out[15])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[10]",0x67,out[10])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("aes_decrypt","out[11]",0xab,out[11])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("InvMixColumns","InvMixColumns_call_counter",InvMixColumns_call_counter)
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("InvShiftRows","InvShiftRows_call_counter",InvShiftRows_call_counter)
	OB_INT_EXPR("InvSubBytes","InvSubBytes_call_counter",InvSubBytes_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_decrypt_up();

	switch(caseIndex){
	case 1:
		test_aes_decrypt_1();
		break;
	case 2:
		test_aes_decrypt_2();
		break;
	case 3:
		test_aes_decrypt_3();
		break;
	default:
		abnormal_aes_decrypt_case(caseIndex);
		break;
	}

	test_aes_decrypt_down();
}

