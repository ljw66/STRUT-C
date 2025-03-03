void test_aes_key_setup_up(void);
void test_aes_key_setup_down(void);


void test_aes_key_setup_up(void){

	aunit_printf("\n##FUNCTION_START_aes_key_setup\n");
 }

void test_aes_key_setup_down(void){
	aunit_printf("\n##FUNCTION_END_aes_key_setup\n");
 }



void abnormal_aes_key_setup_case(int index);

void abnormal_aes_key_setup_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_key_setup_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *key;
	WORD *w;
	int keysize;


	//值序列相关
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x9f};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x2b};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x15};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x1b};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x28};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0xd2};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0xab};
	unsigned int listLength_16=1;
	unsigned int valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0xcf};
	unsigned int listLength_20=1;
	unsigned int valueList_21[]={0};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x72};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={0};
	unsigned int listLength_23=1;
	unsigned int valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0x7e};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0x16};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x4b};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0xae};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0x1b};
	unsigned int listLength_29=1;
	unsigned int valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0xa6};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0xf7};
	unsigned int listLength_32=1;
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
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	SubWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_key_setup_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_key_setup_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			w_PTRTO[2]=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			w_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			w_PTRTO[6]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			w_PTRTO[4]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			w_PTRTO[10]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			w_PTRTO[12]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			w_PTRTO[14]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			w_PTRTO[15]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key[2]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			key[14]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			w_PTRTO[9]=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			key[4]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key[6]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key[8]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			w_PTRTO[3]=(unsigned int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			w_PTRTO[1]=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			w_PTRTO[7]=(unsigned int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			key[10]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			w_PTRTO[5]=(unsigned int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			key[12]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			w_PTRTO[11]=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			w_PTRTO[13]=(unsigned int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			key[1]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			key[3]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			key[13]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			key[5]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			key[15]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			w_PTRTO[8]=(unsigned int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			key[7]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			key[9]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		aes_key_setup(key,w,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[0]",0x2b7e1516,w[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[1]",0x28aed2a6,w[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[2]",0xabf7cf9f,w[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[3]",0x724b1b1b,w[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[4]",0x89d810e8,w[4])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[5]",0x6a2a2f1f,w[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[6]",0x12345678,w[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[7]",0x89d810e8,w[7])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("SubWord","SubWord_call_counter",SubWord_call_counter)

	aunit_printf("#CASE_END_test_aes_key_setup_1\n");
}

void test_aes_key_setup_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *key;
	WORD *w;
	int keysize;


	//值序列相关
	int valueList_0[]={192};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x2b};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x7b};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0xb0};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x62};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x64};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0xf3};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x6b};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned int valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0xf7};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0xe5};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={0};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0x52};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0xd2};
	unsigned int listLength_25=1;
	unsigned int valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x2c};
	unsigned int listLength_27=1;
	unsigned int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned int valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned int valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned int valueList_31[]={0};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0x8e};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0x79};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0xda};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0xea};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0xc8};
	unsigned int listLength_36=1;
	unsigned int valueList_37[]={0};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0x52};
	unsigned int listLength_38=1;
	unsigned int valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0x80};
	unsigned int listLength_40=1;
	unsigned int valueList_41[]={0};
	unsigned int listLength_41=1;
	unsigned int valueList_42[]={0};
	unsigned int listLength_42=1;
	unsigned int valueList_43[]={0};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0x73};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0x90};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0x0e};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0xf8};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0x10};
	unsigned int listLength_48=1;
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
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	unsigned char useLast_42=0;
	unsigned char useLast_43=0;
	unsigned char useLast_44=0;
	unsigned char useLast_45=0;
	unsigned char useLast_46=0;
	unsigned char useLast_47=0;
	unsigned char useLast_48=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	SubWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_key_setup_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_key_setup_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			w_PTRTO[0]=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key[11]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key[23]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			w_PTRTO[4]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			w_PTRTO[10]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			w_PTRTO[22]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			w_PTRTO[14]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			w_PTRTO[15]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			w_PTRTO[19]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key[2]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			w_PTRTO[9]=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			key[16]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key[6]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			w_PTRTO[3]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			w_PTRTO[7]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key[10]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			key[22]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			w_PTRTO[21]=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			w_PTRTO[13]=(unsigned int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			w_PTRTO[18]=(unsigned int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			key[3]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			key[15]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			w_PTRTO[8]=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			key[7]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			key[19]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			w_PTRTO[2]=(unsigned int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			key[21]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			w_PTRTO[6]=(unsigned int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			w_PTRTO[20]=(unsigned int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			w_PTRTO[12]=(unsigned int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			w_PTRTO[17]=(unsigned int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			key[0]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			key[14]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			key[4]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			key[18]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			key[8]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			w_PTRTO[1]=(unsigned int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			key[20]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			w_PTRTO[5]=(unsigned int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			key[12]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			w_PTRTO[23]=(unsigned int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			w_PTRTO[11]=(unsigned int)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			w_PTRTO[16]=(unsigned int)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			key[1]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			key[13]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			key[5]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			key[17]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			key[9]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		aes_key_setup(key,w,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[0]",0x8e73b0f7,w[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[1]",0xda0e6452,w[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[2]",0xc810f32b,w[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[3]",0x809079e5,w[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[4]",0x62f8ead2,w[4])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[5]",0x522c6b7b,w[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[6]",0x23456789,w[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[7]",0x62f8ead2,w[7])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("SubWord","SubWord_call_counter",SubWord_call_counter)

	aunit_printf("#CASE_END_test_aes_key_setup_2\n");
}

void test_aes_key_setup_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *key;
	WORD *w;
	int keysize;


	//值序列相关
	int valueList_0[]={256};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xf4};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xf0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0xd7};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x2d};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0xeb};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x1f};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x09};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x71};
	unsigned int listLength_18=1;
	unsigned int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0xdf};
	unsigned int listLength_20=1;
	unsigned int valueList_21[]={0};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0xae};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0x08};
	unsigned int listLength_23=1;
	unsigned int valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned int valueList_25[]={0};
	unsigned int listLength_25=1;
	unsigned int valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0x10};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0x81};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0xa3};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={0};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0xbe};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0x07};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0x61};
	unsigned int listLength_36=1;
	unsigned int valueList_37[]={0};
	unsigned int listLength_37=1;
	unsigned int valueList_38[]={0};
	unsigned int listLength_38=1;
	unsigned int valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned int valueList_40[]={0};
	unsigned int listLength_40=1;
	unsigned int valueList_41[]={0};
	unsigned int listLength_41=1;
	unsigned int valueList_42[]={0};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0x60};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0x77};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0x10};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0x15};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0x2c};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0x2b};
	unsigned int listLength_48=1;
	unsigned int valueList_49[]={0};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0x3b};
	unsigned int listLength_50=1;
	unsigned int valueList_51[]={0};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0x85};
	unsigned int listLength_52=1;
	unsigned int valueList_53[]={0};
	unsigned int listLength_53=1;
	unsigned int valueList_54[]={0};
	unsigned int listLength_54=1;
	unsigned int valueList_55[]={0};
	unsigned int listLength_55=1;
	unsigned int valueList_56[]={0};
	unsigned int listLength_56=1;
	unsigned int valueList_57[]={0};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0x3d};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0x7d};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0x98};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0xca};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0x35};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0x14};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0x73};
	unsigned int listLength_64=1;
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
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	unsigned char useLast_42=0;
	unsigned char useLast_43=0;
	unsigned char useLast_44=0;
	unsigned char useLast_45=0;
	unsigned char useLast_46=0;
	unsigned char useLast_47=0;
	unsigned char useLast_48=0;
	unsigned char useLast_49=0;
	unsigned char useLast_50=0;
	unsigned char useLast_51=0;
	unsigned char useLast_52=0;
	unsigned char useLast_53=0;
	unsigned char useLast_54=0;
	unsigned char useLast_55=0;
	unsigned char useLast_56=0;
	unsigned char useLast_57=0;
	unsigned char useLast_58=0;
	unsigned char useLast_59=0;
	unsigned char useLast_60=0;
	unsigned char useLast_61=0;
	unsigned char useLast_62=0;
	unsigned char useLast_63=0;
	unsigned char useLast_64=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	SubWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_key_setup_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_key_setup_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			w_PTRTO[0]=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key[31]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key[11]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key[23]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			w_PTRTO[4]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			w_PTRTO[30]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			w_PTRTO[10]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			w_PTRTO[22]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			w_PTRTO[14]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			w_PTRTO[27]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			w_PTRTO[15]=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			w_PTRTO[19]=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key[24]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			key[2]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			w_PTRTO[9]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key[16]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			key[28]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			key[6]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			w_PTRTO[3]=(unsigned int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			key[30]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			w_PTRTO[7]=(unsigned int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			key[10]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			key[22]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			w_PTRTO[21]=(unsigned int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			w_PTRTO[25]=(unsigned int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			w_PTRTO[13]=(unsigned int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			w_PTRTO[26]=(unsigned int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			w_PTRTO[18]=(unsigned int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			key[3]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			key[15]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			key[27]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			w_PTRTO[8]=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			key[7]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			key[19]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			w_PTRTO[2]=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			key[21]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			w_PTRTO[6]=(unsigned int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			w_PTRTO[20]=(unsigned int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			w_PTRTO[12]=(unsigned int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			w_PTRTO[24]=(unsigned int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			w_PTRTO[29]=(unsigned int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			w_PTRTO[17]=(unsigned int)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			key[0]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			key[14]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			key[26]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			key[4]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			key[18]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			key[8]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			w_PTRTO[1]=(unsigned int)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			key[20]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			w_PTRTO[5]=(unsigned int)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			key[12]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			w_PTRTO[31]=(unsigned int)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			w_PTRTO[23]=(unsigned int)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			w_PTRTO[11]=(unsigned int)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			w_PTRTO[16]=(unsigned int)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			w_PTRTO[28]=(unsigned int)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			key[1]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			key[13]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			key[25]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			key[5]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			key[17]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			key[29]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			key[9]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		aes_key_setup(key,w,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[0]",0x603deb10,w[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[1]",0x15ca71be,w[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[2]",0x2b73aef0,w[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[3]",0x857d7781,w[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[4]",0x1f352c07,w[4])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[5]",0x3b6108d7,w[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[6]",0x2d9810a3,w[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[7]",0x0914dff4,w[7])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[8]",0x34567890,w[8])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("aes_key_setup","w[9]",0x1f352c07,w[9])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("SubWord","SubWord_call_counter",SubWord_call_counter)

	aunit_printf("#CASE_END_test_aes_key_setup_3\n");
}

void test_aes_key_setup_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *key;
	WORD *w;
	int keysize;


	//值序列相关
	int valueList_0[]={100};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x0A};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x0B};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x0C};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x01};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x00};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x03};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x0D};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x02};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x0E};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x05};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x0F};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x04};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x07};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x06};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x09};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x08};
	unsigned int listLength_20=1;
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
	unsigned char useLast_20=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	SubWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_key_setup_4,false,0\n");
	aunit_printf("#CASE_START_test_aes_key_setup_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			w_PTRTO[3]=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			w_PTRTO[2]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			w_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			w_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key[10]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key[11]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key[12]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key[1]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			key[0]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key[3]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key[13]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			key[2]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key[14]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			key[5]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key[15]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key[4]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			key[7]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			key[6]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			key[9]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			key[8]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		aes_key_setup(key,w,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("SubWord","SubWord_call_counter",SubWord_call_counter)

	aunit_printf("#CASE_END_test_aes_key_setup_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_key_setup_up();

	switch(caseIndex){
	case 1:
		test_aes_key_setup_1();
		break;
	case 2:
		test_aes_key_setup_2();
		break;
	case 3:
		test_aes_key_setup_3();
		break;
	case 4:
		test_aes_key_setup_4();
		break;
	default:
		abnormal_aes_key_setup_case(caseIndex);
		break;
	}

	test_aes_key_setup_down();
}

