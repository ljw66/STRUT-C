void test_bBase64Encode_up(void);
void test_bBase64Encode_down(void);


void test_bBase64Encode_up(void){

	aunit_printf("\n##FUNCTION_START_bBase64Encode\n");
 }

void test_bBase64Encode_down(void){
	aunit_printf("\n##FUNCTION_END_bBase64Encode\n");
 }



void abnormal_bBase64Encode_case(int index);

void abnormal_bBase64Encode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bBase64Encode_12(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"[65, 66]"};
	unsigned int listLength_1=1;
	char valueList_2[]={'o'};
	unsigned int listLength_2=1;
	char valueList_3[]={'J'};
	unsigned int listLength_3=1;
	char valueList_4[]={'0'};
	unsigned int listLength_4=1;
	char valueList_5[]={'U'};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={'g'};
	unsigned int listLength_7=1;
	char valueList_8[]={'s'};
	unsigned int listLength_8=1;
	char valueList_9[]={'M'};
	unsigned int listLength_9=1;
	char valueList_10[]={'4'};
	unsigned int listLength_10=1;
	char valueList_11[]={'Y'};
	unsigned int listLength_11=1;
	char valueList_12[]={'k'};
	unsigned int listLength_12=1;
	char valueList_13[]={'w'};
	unsigned int listLength_13=1;
	char valueList_14[]={'B'};
	unsigned int listLength_14=1;
	char valueList_15[]={'Q'};
	unsigned int listLength_15=1;
	char valueList_16[]={'c'};
	unsigned int listLength_16=1;
	char valueList_17[]={'F'};
	unsigned int listLength_17=1;
	char valueList_18[]={'8'};
	unsigned int listLength_18=1;
	char valueList_19[]={'p'};
	unsigned int listLength_19=1;
	char valueList_20[]={'1'};
	unsigned int listLength_20=1;
	char valueList_21[]={'V'};
	unsigned int listLength_21=1;
	char valueList_22[]={'h'};
	unsigned int listLength_22=1;
	char valueList_23[]={'t'};
	unsigned int listLength_23=1;
	char valueList_24[]={'N'};
	unsigned int listLength_24=1;
	char valueList_25[]={'5'};
	unsigned int listLength_25=1;
	char valueList_26[]={'Z'};
	unsigned int listLength_26=1;
	char valueList_27[]={'l'};
	unsigned int listLength_27=1;
	char valueList_28[]={'x'};
	unsigned int listLength_28=1;
	char valueList_29[]={'C'};
	unsigned int listLength_29=1;
	char valueList_30[]={'R'};
	unsigned int listLength_30=1;
	char valueList_31[]={'d'};
	unsigned int listLength_31=1;
	char valueList_32[]={'G'};
	unsigned int listLength_32=1;
	int valueList_33[]={2};
	unsigned int listLength_33=1;
	char valueList_34[]={'9'};
	unsigned int listLength_34=1;
	char valueList_35[]={'+'};
	unsigned int listLength_35=1;
	char valueList_36[]={'e'};
	unsigned int listLength_36=1;
	char valueList_37[]={'q'};
	unsigned int listLength_37=1;
	char valueList_38[]={'K'};
	unsigned int listLength_38=1;
	char valueList_39[]={'2'};
	unsigned int listLength_39=1;
	char valueList_40[]={'W'};
	unsigned int listLength_40=1;
	char valueList_41[]={'i'};
	unsigned int listLength_41=1;
	char valueList_42[]={'u'};
	unsigned int listLength_42=1;
	char valueList_43[]={'O'};
	unsigned int listLength_43=1;
	char valueList_44[]={'6'};
	unsigned int listLength_44=1;
	char valueList_45[]={'a'};
	unsigned int listLength_45=1;
	char valueList_46[]={'m'};
	unsigned int listLength_46=1;
	char valueList_47[]={'D'};
	unsigned int listLength_47=1;
	char valueList_48[]={'S'};
	unsigned int listLength_48=1;
	char valueList_49[]={'H'};
	unsigned int listLength_49=1;
	char valueList_50[]={'y'};
	unsigned int listLength_50=1;
	char valueList_51[]={'I'};
	unsigned int listLength_51=1;
	char valueList_52[]={'z'};
	unsigned int listLength_52=1;
	char valueList_53[]={'/'};
	unsigned int listLength_53=1;
	char valueList_54[]={'f'};
	unsigned int listLength_54=1;
	char valueList_55[]={'r'};
	unsigned int listLength_55=1;
	char valueList_56[]={'L'};
	unsigned int listLength_56=1;
	char valueList_57[]={'3'};
	unsigned int listLength_57=1;
	char valueList_58[]={'X'};
	unsigned int listLength_58=1;
	char valueList_59[]={'j'};
	unsigned int listLength_59=1;
	char valueList_60[]={'v'};
	unsigned int listLength_60=1;
	char valueList_61[]={'A'};
	unsigned int listLength_61=1;
	char valueList_62[]={'P'};
	unsigned int listLength_62=1;
	char valueList_63[]={'7'};
	unsigned int listLength_63=1;
	int valueList_64[]={10};
	unsigned int listLength_64=1;
	char valueList_65[]={'b'};
	unsigned int listLength_65=1;
	char valueList_66[]={'n'};
	unsigned int listLength_66=1;
	char valueList_67[]={'E'};
	unsigned int listLength_67=1;
	char valueList_68[]={'T'};
	unsigned int listLength_68=1;
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
	unsigned char useLast_65=0;
	unsigned char useLast_66=0;
	unsigned char useLast_67=0;
	unsigned char useLast_68=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=12;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bBase64Encode_12,false,0\n");
	aunit_printf("#CASE_START_test_bBase64Encode_12\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).data=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b64ETable[40]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			b64ETable[9]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b64ETable[52]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b64ETable[20]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b64ETable[64]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b64ETable[32]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			b64ETable[44]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			b64ETable[12]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			b64ETable[56]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			b64ETable[24]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			b64ETable[36]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			b64ETable[48]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			b64ETable[1]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			b64ETable[16]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			b64ETable[28]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			b64ETable[5]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			b64ETable[60]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			b64ETable[41]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			b64ETable[53]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			b64ETable[21]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			b64ETable[33]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			b64ETable[45]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			b64ETable[13]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			b64ETable[57]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			b64ETable[25]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			b64ETable[37]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			b64ETable[49]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			b64ETable[2]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			b64ETable[17]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			b64ETable[29]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			b64ETable[6]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(b_PTRTO[0]).slen=(int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			b64ETable[61]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			b64ETable[62]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			b64ETable[30]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			b64ETable[42]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			b64ETable[10]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			b64ETable[54]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			b64ETable[22]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			b64ETable[34]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			b64ETable[46]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			b64ETable[14]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			b64ETable[58]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			b64ETable[26]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			b64ETable[38]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			b64ETable[3]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			b64ETable[18]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			b64ETable[7]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			b64ETable[50]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			b64ETable[8]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			b64ETable[51]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			b64ETable[63]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			b64ETable[31]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			b64ETable[43]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			b64ETable[11]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			b64ETable[55]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			b64ETable[23]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			b64ETable[35]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			b64ETable[47]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			b64ETable[0]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			b64ETable[15]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			b64ETable[59]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			(b_PTRTO[0]).mlen=(int)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			b64ETable[27]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			b64ETable[39]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			b64ETable[4]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			b64ETable[19]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		returnValue = bBase64Encode(b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bBase64Encode","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bBase64Encode_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_bBase64Encode_up();

	switch(caseIndex){
	case 12:
		test_bBase64Encode_12();
		break;
	default:
		abnormal_bBase64Encode_case(caseIndex);
		break;
	}

	test_bBase64Encode_down();
}

