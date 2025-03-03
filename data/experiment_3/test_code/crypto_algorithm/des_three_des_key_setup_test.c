void test_three_des_key_setup_up(void);
void test_three_des_key_setup_down(void);


void test_three_des_key_setup_up(void){

	aunit_printf("\n##FUNCTION_START_three_des_key_setup\n");
 }

void test_three_des_key_setup_down(void){
	aunit_printf("\n##FUNCTION_END_three_des_key_setup\n");
 }



void abnormal_three_des_key_setup_case(int index);

void abnormal_three_des_key_setup_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_three_des_key_setup_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *key;
	BYTE (*schedule)[16][6];
	enum Anonymous_enum_17b9cfea_2 mode;


	//值序列相关
	enum Anonymous_enum_17b9cfea_2 valueList_0[]={DES_DECRYPT};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0x16};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x0C};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x18};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x01};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x03};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x0F};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x05};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x11};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x07};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x13};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x09};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x15};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x0B};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x17};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x0D};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x02};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x04};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x0E};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x06};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x10};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0x08};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x12};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0x0A};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0x14};
	unsigned int listLength_24=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	des_key_setup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_three_des_key_setup_1,false,0\n");
	aunit_printf("#CASE_START_test_three_des_key_setup_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			mode=(enum Anonymous_enum_17b9cfea_2 )valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			key[21]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key[11]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key[23]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key[0]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key[2]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key[14]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key[4]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key[16]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			key[6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key[18]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key[8]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			key[20]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key[10]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			key[22]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key[12]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key[1]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			key[3]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			key[13]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			key[5]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			key[15]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			key[7]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			key[17]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			key[9]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			key[19]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		three_des_key_setup(key,schedule,mode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("des_key_setup","des_key_setup_call_counter",des_key_setup_call_counter)

	aunit_printf("#CASE_END_test_three_des_key_setup_1\n");
}

void test_three_des_key_setup_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *key;
	BYTE (*schedule)[16][6];
	enum Anonymous_enum_17b9cfea_2 mode;


	//值序列相关
	unsigned char valueList_0[]={0x15};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0x16};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x0B};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x0C};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x17};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x18};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x0D};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x02};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x01};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x04};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x0E};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x03};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x0F};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x06};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x10};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x05};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x11};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x08};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x12};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x07};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x13};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0x0A};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x14};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0x09};
	unsigned int listLength_23=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	des_key_setup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_three_des_key_setup_2,false,0\n");
	aunit_printf("#CASE_START_test_three_des_key_setup_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			key[20]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			key[21]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key[10]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key[11]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key[22]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			key[23]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key[12]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key[1]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			key[0]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			key[3]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			key[13]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key[2]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			key[14]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			key[5]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			key[15]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key[4]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key[16]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			key[7]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			key[17]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			key[6]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			key[18]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			key[9]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			key[19]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			key[8]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		three_des_key_setup(key,schedule,mode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("des_key_setup","des_key_setup_call_counter",des_key_setup_call_counter)

	aunit_printf("#CASE_END_test_three_des_key_setup_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_three_des_key_setup_up();

	switch(caseIndex){
	case 1:
		test_three_des_key_setup_1();
		break;
	case 2:
		test_three_des_key_setup_2();
		break;
	default:
		abnormal_three_des_key_setup_case(caseIndex);
		break;
	}

	test_three_des_key_setup_down();
}

