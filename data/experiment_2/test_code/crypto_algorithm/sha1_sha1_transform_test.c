void test_sha1_transform_up(void);
void test_sha1_transform_down(void);


void test_sha1_transform_up(void){

	aunit_printf("\n##FUNCTION_START_sha1_transform\n");
 }

void test_sha1_transform_down(void){
	aunit_printf("\n##FUNCTION_END_sha1_transform\n");
 }



void abnormal_sha1_transform_case(int index);

void abnormal_sha1_transform_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sha1_transform_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned char valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={0};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={0};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={0};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0};
	unsigned int listLength_63=1;
	unsigned int valueList_64[]={0};
	unsigned int listLength_64=1;
	unsigned int valueList_65[]={0};
	unsigned int listLength_65=1;
	unsigned int valueList_66[]={0};
	unsigned int listLength_66=1;
	unsigned int valueList_67[]={0};
	unsigned int listLength_67=1;
	unsigned int valueList_68[]={0};
	unsigned int listLength_68=1;
	unsigned int valueList_69[]={0};
	unsigned int listLength_69=1;
	unsigned int valueList_70[]={0};
	unsigned int listLength_70=1;
	unsigned int valueList_71[]={0};
	unsigned int listLength_71=1;
	unsigned int valueList_72[]={0};
	unsigned int listLength_72=1;
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
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_1,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data[19]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data[27]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data[39]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			data[43]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			data[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			data[55]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			data[63]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			data[31]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			data[47]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			data[15]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			data[59]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			data[23]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			data[35]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			data[51]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			data[2]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			data[6]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			data[18]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			data[38]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			data[10]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			data[54]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			data[22]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			data[30]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			data[42]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			data[14]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			data[58]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			data[26]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			data[34]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			data[46]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			data[7]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			data[50]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			data[62]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			data[3]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			data[29]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			data[49]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			data[17]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			data[21]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			data[33]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			data[41]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			data[53]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			data[25]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			data[37]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			data[45]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			data[13]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			data[57]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			data[8]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			data[61]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			data[0]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			data[4]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			data[16]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			data[28]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			data[32]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			data[44]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			data[52]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			data[20]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			data[36]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			data[48]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			data[12]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			data[56]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			data[24]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			data[9]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			data[40]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			data[60]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			data[1]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			data[5]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_1\n");
}

void test_sha1_transform_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned char valueList_0[]={0x74};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0x31};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x3B};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x3F};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x6C};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x4B};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x53};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x35};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x43};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x70};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x4F};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x78};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x57};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x39};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x47};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x63};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x67};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x73};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x3A};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x6B};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x4A};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0x77};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x56};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0x34};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0x3E};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0x6F};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0x4E};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x30};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0x38};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0x42};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0x68};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0x46};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0x52};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0x5A};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0x64};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0x33};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0x45};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0x72};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0x76};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0x55};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0x37};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0x3D};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={0x49};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0x7A};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0x59};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0x2F};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0x41};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0x6E};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0x4D};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0x69};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0x51};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0x61};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0x65};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0x71};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={0x32};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0x36};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0x40};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={0x48};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0x75};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0x54};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0x2E};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0x44};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0x6D};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0x4C};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0x79};
	unsigned int listLength_64=1;
	unsigned char valueList_65[]={0x58};
	unsigned int listLength_65=1;
	unsigned char valueList_66[]={0x6A};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={0x3C};
	unsigned int listLength_67=1;
	unsigned char valueList_68[]={0x50};
	unsigned int listLength_68=1;
	unsigned char valueList_69[]={0x62};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={0x66};
	unsigned int listLength_70=1;
	unsigned int valueList_71[]={0x10325476};
	unsigned int listLength_71=1;
	unsigned int valueList_72[]={0x5A827999};
	unsigned int listLength_72=1;
	unsigned int valueList_73[]={0x8F1BBCDC};
	unsigned int listLength_73=1;
	unsigned int valueList_74[]={0x98BADCFE};
	unsigned int listLength_74=1;
	unsigned int valueList_75[]={0x6ED9EBA1};
	unsigned int listLength_75=1;
	unsigned int valueList_76[]={0xEFCDAB89};
	unsigned int listLength_76=1;
	unsigned int valueList_77[]={0xCA62C1D6};
	unsigned int listLength_77=1;
	unsigned int valueList_78[]={0xC3D2E1F0};
	unsigned int listLength_78=1;
	unsigned int valueList_79[]={0x67452301};
	unsigned int listLength_79=1;
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
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	unsigned char useLast_75=0;
	unsigned char useLast_76=0;
	unsigned char useLast_77=0;
	unsigned char useLast_78=0;
	unsigned char useLast_79=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_2,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data[19]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data[27]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data[39]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			data[43]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			data[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			data[55]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			data[63]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			data[31]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			data[47]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			data[15]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			data[59]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			data[23]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			data[67]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			data[35]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			data[51]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			data[2]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			data[6]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			data[18]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			data[38]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			data[10]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			data[54]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			data[22]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			data[66]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			data[30]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			data[42]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			data[14]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			data[58]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			data[26]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			data[34]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			data[46]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			data[7]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			data[50]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			data[62]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			data[70]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			data[3]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			data[29]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			data[49]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			data[17]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			data[21]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			data[65]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			data[33]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			data[41]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			data[53]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			data[25]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			data[69]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			data[37]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			data[45]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			data[13]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			data[57]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			data[8]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			data[61]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			data[0]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			data[4]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			data[16]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			data[28]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			data[32]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			data[44]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			data[52]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			data[20]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			data[64]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			data[36]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			data[48]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			data[12]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			data[56]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			data[24]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			data[68]=(unsigned char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			data[9]=(unsigned char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			data[40]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			data[60]=(unsigned char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			data[1]=(unsigned char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			data[5]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_2\n");
}

void test_sha1_transform_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned char valueList_0[]={0xAA};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0xAA};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xAA};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xAA};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0xAA};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xAA};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0xAA};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0xAA};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0xAA};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0xAA};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0xAA};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0xAA};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0xAA};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0xAA};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0xAA};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0xAA};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x55};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x55};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x55};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x55};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x55};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0x55};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x55};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0x55};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0x55};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0x55};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0x55};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x55};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0x55};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0x55};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0x55};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0xAA};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0x55};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0x55};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0x55};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0xAA};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0xAA};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0xAA};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0xAA};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0xAA};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0xAA};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0xAA};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={0xAA};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0xAA};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0xAA};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0xAA};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0xAA};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0xAA};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0xAA};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0xAA};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0x55};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0xAA};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0x55};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0x55};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={0x55};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0x55};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0x55};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={0x55};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0x55};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0x55};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0x55};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0x55};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0x55};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0x55};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0x55};
	unsigned int listLength_64=1;
	unsigned char valueList_65[]={0x55};
	unsigned int listLength_65=1;
	unsigned char valueList_66[]={0x55};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={0xAA};
	unsigned int listLength_67=1;
	unsigned char valueList_68[]={0x55};
	unsigned int listLength_68=1;
	unsigned char valueList_69[]={0x55};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={0xAA};
	unsigned int listLength_70=1;
	unsigned char valueList_71[]={0xAA};
	unsigned int listLength_71=1;
	unsigned int valueList_72[]={0x76543210};
	unsigned int listLength_72=1;
	unsigned int valueList_73[]={0x5A827999};
	unsigned int listLength_73=1;
	unsigned int valueList_74[]={0x8F1BBCDC};
	unsigned int listLength_74=1;
	unsigned int valueList_75[]={0xFEDCBA98};
	unsigned int listLength_75=1;
	unsigned int valueList_76[]={0x6ED9EBA1};
	unsigned int listLength_76=1;
	unsigned int valueList_77[]={0x89ABCDEF};
	unsigned int listLength_77=1;
	unsigned int valueList_78[]={0xCA62C1D6};
	unsigned int listLength_78=1;
	unsigned int valueList_79[]={0xF0E1D2C3};
	unsigned int listLength_79=1;
	unsigned int valueList_80[]={0x01234567};
	unsigned int listLength_80=1;
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
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	unsigned char useLast_75=0;
	unsigned char useLast_76=0;
	unsigned char useLast_77=0;
	unsigned char useLast_78=0;
	unsigned char useLast_79=0;
	unsigned char useLast_80=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_3,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data[19]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data[27]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data[39]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			data[43]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			data[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			data[55]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			data[63]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			data[31]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			data[47]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			data[15]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			data[59]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			data[23]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			data[67]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			data[35]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			data[51]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			data[71]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			data[2]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			data[6]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			data[18]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			data[38]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			data[10]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			data[54]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			data[22]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			data[66]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			data[30]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			data[42]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			data[14]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			data[58]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			data[26]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			data[34]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			data[46]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			data[7]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			data[50]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			data[62]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			data[70]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			data[3]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			data[29]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			data[49]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			data[17]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			data[21]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			data[65]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			data[33]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			data[41]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			data[53]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			data[25]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			data[69]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			data[37]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			data[45]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			data[13]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			data[57]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			data[8]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			data[61]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			data[0]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			data[4]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			data[16]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			data[28]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			data[32]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			data[44]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			data[52]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			data[20]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			data[64]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			data[36]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			data[48]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			data[12]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			data[56]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			data[24]=(unsigned char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			data[68]=(unsigned char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			data[9]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			data[40]=(unsigned char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			data[60]=(unsigned char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			data[1]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			data[5]=(unsigned char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_3\n");
}

void test_sha1_transform_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned char valueList_0[]={0xFF};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0xFF};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xFF};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xFF};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0xFF};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xFF};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0xFF};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0xFF};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0xFF};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0xFF};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0xFF};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0xFF};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0xFF};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0xFF};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0xFF};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0xFF};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0xFF};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0xFF};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0xFF};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0xFF};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0xFF};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0xFF};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0xFF};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0xFF};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0xFF};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0xFF};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0xFF};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0xFF};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0xFF};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0xFF};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0xFF};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0xFF};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0xFF};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0xFF};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0xFF};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0xFF};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0xFF};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0xFF};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0xFF};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0xFF};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0xFF};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0xFF};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={0xFF};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0xFF};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0xFF};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0xFF};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0xFF};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0xFF};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0xFF};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0xFF};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0xFF};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0xFF};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0xFF};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0xFF};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={0xFF};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0xFF};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0xFF};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={0xFF};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0xFF};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0xFF};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0xFF};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0xFF};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0xFF};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0xFF};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0xFF};
	unsigned int listLength_64=1;
	unsigned char valueList_65[]={0xFF};
	unsigned int listLength_65=1;
	unsigned char valueList_66[]={0xFF};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={0xFF};
	unsigned int listLength_67=1;
	unsigned char valueList_68[]={0xFF};
	unsigned int listLength_68=1;
	unsigned char valueList_69[]={0xFF};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={0xFF};
	unsigned int listLength_70=1;
	unsigned char valueList_71[]={0xFF};
	unsigned int listLength_71=1;
	unsigned int valueList_72[]={0xFFFFFFFF};
	unsigned int listLength_72=1;
	unsigned int valueList_73[]={0x5A827999};
	unsigned int listLength_73=1;
	unsigned int valueList_74[]={0x8F1BBCDC};
	unsigned int listLength_74=1;
	unsigned int valueList_75[]={0xFFFFFFFF};
	unsigned int listLength_75=1;
	unsigned int valueList_76[]={0x6ED9EBA1};
	unsigned int listLength_76=1;
	unsigned int valueList_77[]={0xFFFFFFFF};
	unsigned int listLength_77=1;
	unsigned int valueList_78[]={0xCA62C1D6};
	unsigned int listLength_78=1;
	unsigned int valueList_79[]={0xFFFFFFFF};
	unsigned int listLength_79=1;
	unsigned int valueList_80[]={0xFFFFFFFF};
	unsigned int listLength_80=1;
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
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	unsigned char useLast_75=0;
	unsigned char useLast_76=0;
	unsigned char useLast_77=0;
	unsigned char useLast_78=0;
	unsigned char useLast_79=0;
	unsigned char useLast_80=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_4,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data[19]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data[27]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data[39]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			data[43]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			data[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			data[55]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			data[63]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			data[31]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			data[47]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			data[15]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			data[59]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			data[23]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			data[67]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			data[35]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			data[51]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			data[71]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			data[2]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			data[6]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			data[18]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			data[38]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			data[10]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			data[54]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			data[22]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			data[66]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			data[30]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			data[42]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			data[14]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			data[58]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			data[26]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			data[34]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			data[46]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			data[7]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			data[50]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			data[62]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			data[70]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			data[3]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			data[29]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			data[49]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			data[17]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			data[21]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			data[65]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			data[33]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			data[41]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			data[53]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			data[25]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			data[69]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			data[37]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			data[45]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			data[13]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			data[57]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			data[8]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			data[61]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			data[0]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			data[4]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			data[16]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			data[28]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			data[32]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			data[44]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			data[52]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			data[20]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			data[64]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			data[36]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			data[48]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			data[12]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			data[56]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			data[24]=(unsigned char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			data[68]=(unsigned char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			data[9]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			data[40]=(unsigned char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			data[60]=(unsigned char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			data[1]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			data[5]=(unsigned char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_4\n");
}

void test_sha1_transform_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned char valueList_0[]={0x00};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0x00};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x00};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x00};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x00};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x00};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x00};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x00};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x00};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x00};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x00};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x00};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x00};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x00};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x00};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x00};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x00};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x00};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x00};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x00};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x00};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0x00};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x00};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0x00};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0x00};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0x00};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0x00};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x00};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0x00};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0x00};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0x00};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0x00};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0x00};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0x00};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0x00};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0x00};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0x00};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0x00};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0x00};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0x00};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0x00};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0x00};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={0x00};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0x00};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0x00};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0x00};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0x00};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0x00};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0x00};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0x00};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0x00};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0x00};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0x00};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0x00};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={0x00};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0x00};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0x00};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={0x00};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0x00};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0x00};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0x00};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0x00};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0x00};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0x00};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0x00};
	unsigned int listLength_64=1;
	unsigned char valueList_65[]={0x00};
	unsigned int listLength_65=1;
	unsigned char valueList_66[]={0x00};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={0x00};
	unsigned int listLength_67=1;
	unsigned char valueList_68[]={0x00};
	unsigned int listLength_68=1;
	unsigned char valueList_69[]={0x00};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={0x00};
	unsigned int listLength_70=1;
	unsigned char valueList_71[]={0x00};
	unsigned int listLength_71=1;
	unsigned int valueList_72[]={0x00000000};
	unsigned int listLength_72=1;
	unsigned int valueList_73[]={0x5A827999};
	unsigned int listLength_73=1;
	unsigned int valueList_74[]={0x8F1BBCDC};
	unsigned int listLength_74=1;
	unsigned int valueList_75[]={0x00000000};
	unsigned int listLength_75=1;
	unsigned int valueList_76[]={0x6ED9EBA1};
	unsigned int listLength_76=1;
	unsigned int valueList_77[]={0x00000000};
	unsigned int listLength_77=1;
	unsigned int valueList_78[]={0xCA62C1D6};
	unsigned int listLength_78=1;
	unsigned int valueList_79[]={0x00000000};
	unsigned int listLength_79=1;
	unsigned int valueList_80[]={0x00000000};
	unsigned int listLength_80=1;
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
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	unsigned char useLast_75=0;
	unsigned char useLast_76=0;
	unsigned char useLast_77=0;
	unsigned char useLast_78=0;
	unsigned char useLast_79=0;
	unsigned char useLast_80=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_5,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data[19]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data[27]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data[39]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			data[43]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			data[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			data[55]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			data[63]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			data[31]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			data[47]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			data[15]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			data[59]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			data[23]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			data[67]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			data[35]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			data[51]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			data[71]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			data[2]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			data[6]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			data[18]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			data[38]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			data[10]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			data[54]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			data[22]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			data[66]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			data[30]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			data[42]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			data[14]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			data[58]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			data[26]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			data[34]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			data[46]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			data[7]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			data[50]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			data[62]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			data[70]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			data[3]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			data[29]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			data[49]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			data[17]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			data[21]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			data[65]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			data[33]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			data[41]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			data[53]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			data[25]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			data[69]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			data[37]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			data[45]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			data[13]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			data[57]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			data[8]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			data[61]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			data[0]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			data[4]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			data[16]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			data[28]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			data[32]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			data[44]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			data[52]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			data[20]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			data[64]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			data[36]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			data[48]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			data[12]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			data[56]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			data[24]=(unsigned char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			data[68]=(unsigned char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			data[9]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			data[40]=(unsigned char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			data[60]=(unsigned char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			data[1]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			data[5]=(unsigned char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_5\n");
}

void test_sha1_transform_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned char valueList_0[]={0x4C};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0xC4};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xEF};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x98};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0xA9};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x78};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0xF0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x10};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x44};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x10};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x21};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0xB4};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x88};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0xCC};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x67};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x3C};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0x88};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0x56};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0xDE};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x3D};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0xCD};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0xCB};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x69};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0x79};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0xDD};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0xF1};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0x55};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0xBA};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0x43};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0xA5};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0xB5};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0x45};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0x11};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0x32};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0xF0};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0x2D};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0xE1};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0x99};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0x78};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0xE2};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0x1E};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0x2E};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={0x6A};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0xEE};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0x23};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0x22};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0xDC};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0x5A};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0xA6};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0xAA};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0xAB};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0x54};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0x65};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0x96};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={0x0F};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0xD2};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0x66};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={0x12};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0x9A};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0x1F};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0xD3};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0x01};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0x33};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0x76};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0x4B};
	unsigned int listLength_64=1;
	unsigned char valueList_65[]={0x5B};
	unsigned int listLength_65=1;
	unsigned char valueList_66[]={0xFF};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={0x89};
	unsigned int listLength_67=1;
	unsigned char valueList_68[]={0x0F};
	unsigned int listLength_68=1;
	unsigned char valueList_69[]={0x87};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={0x87};
	unsigned int listLength_70=1;
	unsigned char valueList_71[]={0x97};
	unsigned int listLength_71=1;
	unsigned char valueList_72[]={0xBB};
	unsigned int listLength_72=1;
	unsigned char valueList_73[]={0xED};
	unsigned int listLength_73=1;
	unsigned char valueList_74[]={0x77};
	unsigned int listLength_74=1;
	unsigned char valueList_75[]={0xFE};
	unsigned int listLength_75=1;
	unsigned char valueList_76[]={0xC3};
	unsigned int listLength_76=1;
	unsigned char valueList_77[]={0x34};
	unsigned int listLength_77=1;
	unsigned char valueList_78[]={0xBC};
	unsigned int listLength_78=1;
	unsigned int valueList_79[]={0x87654321};
	unsigned int listLength_79=1;
	unsigned int valueList_80[]={0x5A827999};
	unsigned int listLength_80=1;
	unsigned int valueList_81[]={0x8F1BBCDC};
	unsigned int listLength_81=1;
	unsigned int valueList_82[]={0x0FEDCBA9};
	unsigned int listLength_82=1;
	unsigned int valueList_83[]={0x6ED9EBA1};
	unsigned int listLength_83=1;
	unsigned int valueList_84[]={0x9ABCDEF0};
	unsigned int listLength_84=1;
	unsigned int valueList_85[]={0xCA62C1D6};
	unsigned int listLength_85=1;
	unsigned int valueList_86[]={0x1F2E3D4C};
	unsigned int listLength_86=1;
	unsigned int valueList_87[]={0x12345678};
	unsigned int listLength_87=1;
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
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	unsigned char useLast_75=0;
	unsigned char useLast_76=0;
	unsigned char useLast_77=0;
	unsigned char useLast_78=0;
	unsigned char useLast_79=0;
	unsigned char useLast_80=0;
	unsigned char useLast_81=0;
	unsigned char useLast_82=0;
	unsigned char useLast_83=0;
	unsigned char useLast_84=0;
	unsigned char useLast_85=0;
	unsigned char useLast_86=0;
	unsigned char useLast_87=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_6,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data[19]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data[27]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data[39]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			data[43]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			data[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			data[55]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			data[63]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			data[31]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			data[75]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			data[47]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			data[15]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			data[59]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			data[23]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			data[67]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			data[35]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			data[51]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			data[71]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			data[2]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			data[6]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			data[18]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			data[38]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			data[10]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			data[54]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			data[22]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			data[66]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			data[30]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			data[74]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			data[42]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			data[14]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			data[58]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			data[26]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			data[34]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			data[78]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			data[46]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			data[7]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			data[50]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			data[62]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			data[70]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			data[3]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			data[29]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			data[49]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			data[17]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			data[21]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			data[65]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			data[33]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			data[77]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			data[41]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			data[53]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			data[25]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			data[69]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			data[37]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			data[45]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			data[13]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			data[57]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			data[8]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			data[61]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			data[73]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			data[0]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			data[4]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			data[16]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			data[28]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			data[32]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			data[76]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			data[44]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			data[52]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			data[20]=(unsigned char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			data[64]=(unsigned char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			data[36]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			data[48]=(unsigned char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			data[12]=(unsigned char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			data[56]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			data[24]=(unsigned char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			data[68]=(unsigned char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			data[9]=(unsigned char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			data[72]=(unsigned char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			data[40]=(unsigned char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			data[60]=(unsigned char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			data[1]=(unsigned char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			data[5]=(unsigned char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_6\n");
}

void test_sha1_transform_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned char valueList_0[]={0xDE};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0xDA};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xDA};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xDE};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x0D};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xDE};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0xDA};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0xDE};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x0D};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0xDA};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x0D};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x0D};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0xDE};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x0D};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0xDA};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x0D};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0xBE};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0xBA};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0xC0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0x00};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0xF0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0xC0};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0xF0};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0xC0};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0xC0};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0xC0};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0x00};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0xF0};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0x00};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0xF0};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0xF0};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0xBE};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={0x00};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0x00};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0xF0};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0xEF};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0xAD};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0xEB};
	unsigned int listLength_37=1;
	unsigned char valueList_38[]={0xAD};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0xAD};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0xAD};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0xAD};
	unsigned int listLength_41=1;
	unsigned char valueList_42[]={0xAD};
	unsigned int listLength_42=1;
	unsigned char valueList_43[]={0xAD};
	unsigned int listLength_43=1;
	unsigned char valueList_44[]={0xEB};
	unsigned int listLength_44=1;
	unsigned char valueList_45[]={0xAD};
	unsigned int listLength_45=1;
	unsigned char valueList_46[]={0xEB};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={0xAD};
	unsigned int listLength_47=1;
	unsigned char valueList_48[]={0xEB};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={0xAD};
	unsigned int listLength_49=1;
	unsigned char valueList_50[]={0x8B};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={0xEB};
	unsigned int listLength_51=1;
	unsigned char valueList_52[]={0xDE};
	unsigned int listLength_52=1;
	unsigned char valueList_53[]={0xCA};
	unsigned int listLength_53=1;
	unsigned char valueList_54[]={0xDE};
	unsigned int listLength_54=1;
	unsigned char valueList_55[]={0xDE};
	unsigned int listLength_55=1;
	unsigned char valueList_56[]={0xBA};
	unsigned int listLength_56=1;
	unsigned char valueList_57[]={0xBA};
	unsigned int listLength_57=1;
	unsigned char valueList_58[]={0xDE};
	unsigned int listLength_58=1;
	unsigned char valueList_59[]={0xBA};
	unsigned int listLength_59=1;
	unsigned char valueList_60[]={0xDE};
	unsigned int listLength_60=1;
	unsigned char valueList_61[]={0x1C};
	unsigned int listLength_61=1;
	unsigned char valueList_62[]={0x1C};
	unsigned int listLength_62=1;
	unsigned char valueList_63[]={0x1C};
	unsigned int listLength_63=1;
	unsigned char valueList_64[]={0xBA};
	unsigned int listLength_64=1;
	unsigned char valueList_65[]={0x1C};
	unsigned int listLength_65=1;
	unsigned char valueList_66[]={0xBA};
	unsigned int listLength_66=1;
	unsigned char valueList_67[]={0xAD};
	unsigned int listLength_67=1;
	unsigned char valueList_68[]={0xDE};
	unsigned int listLength_68=1;
	unsigned char valueList_69[]={0x1C};
	unsigned int listLength_69=1;
	unsigned char valueList_70[]={0xAD};
	unsigned int listLength_70=1;
	unsigned char valueList_71[]={0xFE};
	unsigned int listLength_71=1;
	unsigned int valueList_72[]={0x1CEB00DA};
	unsigned int listLength_72=1;
	unsigned int valueList_73[]={0x5A827999};
	unsigned int listLength_73=1;
	unsigned int valueList_74[]={0x8F1BBCDC};
	unsigned int listLength_74=1;
	unsigned int valueList_75[]={0x8BADF00D};
	unsigned int listLength_75=1;
	unsigned int valueList_76[]={0x6ED9EBA1};
	unsigned int listLength_76=1;
	unsigned int valueList_77[]={0xCAFEBABE};
	unsigned int listLength_77=1;
	unsigned int valueList_78[]={0xCA62C1D6};
	unsigned int listLength_78=1;
	unsigned int valueList_79[]={0xDEADC0DE};
	unsigned int listLength_79=1;
	unsigned int valueList_80[]={0xDEADBEEF};
	unsigned int listLength_80=1;
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
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	unsigned char useLast_75=0;
	unsigned char useLast_76=0;
	unsigned char useLast_77=0;
	unsigned char useLast_78=0;
	unsigned char useLast_79=0;
	unsigned char useLast_80=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_7,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data[19]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data[27]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			data[39]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			data[43]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			data[11]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			data[55]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			data[63]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			data[31]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			data[47]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			data[15]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			data[59]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			data[23]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			data[67]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			data[35]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			data[51]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			data[71]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			data[2]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			data[6]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			data[18]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			data[38]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			data[10]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			data[54]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			data[22]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			data[66]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			data[30]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			data[42]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			data[14]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			data[58]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			data[26]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			data[34]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			data[46]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			data[7]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			data[50]=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			data[62]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			data[70]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			data[3]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			data[29]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			data[49]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			data[17]=(unsigned char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			data[21]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			data[65]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			data[33]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			data[41]=(unsigned char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			data[53]=(unsigned char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			data[25]=(unsigned char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			data[69]=(unsigned char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			data[37]=(unsigned char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			data[45]=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			data[13]=(unsigned char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			data[57]=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			data[8]=(unsigned char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			data[61]=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			data[0]=(unsigned char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			data[4]=(unsigned char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			data[16]=(unsigned char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			data[28]=(unsigned char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			data[32]=(unsigned char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			data[44]=(unsigned char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			data[52]=(unsigned char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			data[20]=(unsigned char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			data[64]=(unsigned char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			data[36]=(unsigned char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			data[48]=(unsigned char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			data[12]=(unsigned char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			data[56]=(unsigned char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			data[24]=(unsigned char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			data[68]=(unsigned char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			data[9]=(unsigned char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			data[40]=(unsigned char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			data[60]=(unsigned char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			data[1]=(unsigned char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			data[5]=(unsigned char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_sha1_transform_up();

	switch(caseIndex){
	case 1:
		test_sha1_transform_1();
		break;
	case 2:
		test_sha1_transform_2();
		break;
	case 3:
		test_sha1_transform_3();
		break;
	case 4:
		test_sha1_transform_4();
		break;
	case 5:
		test_sha1_transform_5();
		break;
	case 6:
		test_sha1_transform_6();
		break;
	case 7:
		test_sha1_transform_7();
		break;
	default:
		abnormal_sha1_transform_case(caseIndex);
		break;
	}

	test_sha1_transform_down();
}

