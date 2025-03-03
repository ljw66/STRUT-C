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
	WORD *valueList_1[]={(WORD *)key_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x88};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xDD};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x99};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xEE};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0xBB};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0xCC};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x44};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x55};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x66};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0xFF};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x77};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0x28AED2A6};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0xAA};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0x2B7E1516};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x00};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x11};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x22};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x33};
	unsigned int listLength_19=1;
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
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
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
			key=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			in[13]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			in[9]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			in[14]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			in[11]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			in[12]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			in[4]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			in[5]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			in[6]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			in[15]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			in[7]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key_PTRTO[1]=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			in[10]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			in[0]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			in[1]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			in[2]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			in[3]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		aes_decrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

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
	WORD *valueList_1[]={(WORD *)key_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x10};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xBA};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x32};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xDC};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x76};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x98};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x89};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0xAB};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0xCD};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0xFE};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0xEF};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0xABCDEF01};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x54};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0x3C4FCF09};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x01};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x23};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x45};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x67};
	unsigned int listLength_19=1;
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
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
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
			key=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			in[13]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			in[9]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			in[14]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			in[11]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			in[12]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			in[4]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			in[5]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			in[6]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			in[15]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			in[7]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key_PTRTO[1]=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			in[10]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			in[0]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			in[1]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			in[2]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			in[3]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		aes_decrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

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
	WORD *valueList_1[]={(WORD *)key_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x77};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x22};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x66};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x11};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x44};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x33};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0xBB};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0xAA};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x99};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x00};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x88};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0x0B0A0908};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x55};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0x0F0E0D0C};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0xFF};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0xEE};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0xDD};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0xCC};
	unsigned int listLength_19=1;
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
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
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
			key=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			in[13]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			in[9]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			in[14]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			in[11]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			in[12]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			in[4]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			in[5]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			in[6]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			in[15]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			in[7]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key_PTRTO[1]=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			in[10]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			in[0]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			in[1]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			in[2]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			in[3]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		aes_decrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

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

