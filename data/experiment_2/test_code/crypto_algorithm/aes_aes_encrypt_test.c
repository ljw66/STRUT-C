void test_aes_encrypt_up(void);
void test_aes_encrypt_down(void);


void test_aes_encrypt_up(void){

	aunit_printf("\n##FUNCTION_START_aes_encrypt\n");
 }

void test_aes_encrypt_down(void){
	aunit_printf("\n##FUNCTION_END_aes_encrypt\n");
 }



void abnormal_aes_encrypt_case(int index);

void abnormal_aes_encrypt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_encrypt_1(void){
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
	BYTE *valueList_2[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x28aed2a6};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x2b7e1516};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x09cf4f3c};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0xabf71588};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[3]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("aes_encrypt","out","output_value_here",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_1\n");
}

void test_aes_encrypt_2(void){
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
	BYTE *valueList_1[]={(BYTE *)"00112233445566778899aabbccddeeff"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x522c6b7b};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x62f8ead2};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0xda0e6452};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x8e73b0f7};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0x809079e5};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0xc810f32b};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key_PTRTO[5]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[4]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[3]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key_PTRTO[2]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("aes_encrypt","out","output_value_here",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_2\n");
}

void test_aes_encrypt_3(void){
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
	BYTE *valueList_1[]={(BYTE *)"00112233445566778899aabbccddeeff"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x3b6108d7};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x1f352c07};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x0914dff4};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x2d9810a3};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0x15ca71be};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0x603deb10};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x857d7781};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0x2b73aef0};
	unsigned int listLength_10=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key_PTRTO[5]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[4]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[7]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[6]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[1]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key_PTRTO[0]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			key_PTRTO[3]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key_PTRTO[2]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("aes_encrypt","out","output_value_here",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_3\n");
}

void test_aes_encrypt_4(void){
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
	BYTE *valueList_1[]={(BYTE *)"00000000000000000000000000000000"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x00000000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x00000000};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x00000000};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x00000000};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_4,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[3]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("aes_encrypt","out","output_value_here",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_4\n");
}

void test_aes_encrypt_5(void){
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
	BYTE *valueList_1[]={(BYTE *)"00000000000000000000000000000000"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x00000000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x00000000};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x00000000};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x00000000};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0x00000000};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0x00000000};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x00000000};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0x00000000};
	unsigned int listLength_10=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_5,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key_PTRTO[5]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[4]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[7]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[6]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[1]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key_PTRTO[0]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			key_PTRTO[3]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key_PTRTO[2]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("aes_encrypt","out","output_value_here",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_5\n");
}

void test_aes_encrypt_6(void){
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
	BYTE *valueList_1[]={(BYTE *)"ffeeddccbbaa99887766554433221100"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x522c6b7b};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x62f8ead2};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0xda0e6452};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x8e73b0f7};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0x809079e5};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0xc810f32b};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_6,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key_PTRTO[5]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[4]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key_PTRTO[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[3]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key_PTRTO[2]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("aes_encrypt","out","output_value_here",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_encrypt_up();

	switch(caseIndex){
	case 1:
		test_aes_encrypt_1();
		break;
	case 2:
		test_aes_encrypt_2();
		break;
	case 3:
		test_aes_encrypt_3();
		break;
	case 4:
		test_aes_encrypt_4();
		break;
	case 5:
		test_aes_encrypt_5();
		break;
	case 6:
		test_aes_encrypt_6();
		break;
	default:
		abnormal_aes_encrypt_case(caseIndex);
		break;
	}

	test_aes_encrypt_down();
}

