void test_sha256_transform_up(void);
void test_sha256_transform_down(void);


void test_sha256_transform_up(void){

	aunit_printf("\n##FUNCTION_START_sha256_transform\n");
 }

void test_sha256_transform_down(void){
	aunit_printf("\n##FUNCTION_END_sha256_transform\n");
 }



void abnormal_sha256_transform_case(int index);

void abnormal_sha256_transform_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sha256_transform_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA256_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]"};
	unsigned int listLength_0=1;
	SHA256_CTX *valueList_1[]={(SHA256_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={ 0xd192e819};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={ 0x748f82ee};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={ 0x72be5d74};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={ 0x2de92c6f};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={ 0x27b70a85};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={ 0x19a4c116};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={ 0x923f82a4};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={ 0xe49b69c1};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={ 0x983e5152};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={ 0x650a7354};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={ 0xc6e00bf3};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={ 0xb5c0fbcf};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={ 0xa2bfe8a1};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={ 0x391c0cb3};
	unsigned int listLength_15=1;
	unsigned int valueList_16[]={ 0x90befffa};
	unsigned int listLength_16=1;
	unsigned int valueList_17[]={ 0x2e1b2138};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={ 0xd6990624};
	unsigned int listLength_18=1;
	unsigned int valueList_19[]={ 0x4ed8aa4a};
	unsigned int listLength_19=1;
	unsigned int valueList_20[]={ 0x4a7484aa};
	unsigned int listLength_20=1;
	unsigned int valueList_21[]={ 0x766a0abb};
	unsigned int listLength_21=1;
	unsigned int valueList_22[]={ 0x1e376c08};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={ 0x80deb1fe};
	unsigned int listLength_23=1;
	unsigned int valueList_24[]={ 0x78a5636f};
	unsigned int listLength_24=1;
	unsigned int valueList_25[]={ 0x12835b01};
	unsigned int listLength_25=1;
	unsigned int valueList_26[]={ 0xa831c66d};
	unsigned int listLength_26=1;
	unsigned int valueList_27[]={ 0x59f111f1};
	unsigned int listLength_27=1;
	unsigned int valueList_28[]={ 0xefbe4786};
	unsigned int listLength_28=1;
	unsigned int valueList_29[]={ 0xd5a79147};
	unsigned int listLength_29=1;
	unsigned int valueList_30[]={ 0x71374491};
	unsigned int listLength_30=1;
	unsigned int valueList_31[]={ 0xa4506ceb};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={ 0xa81a664b};
	unsigned int listLength_32=1;
	unsigned int valueList_33[]={ 0x5cb0a9dc};
	unsigned int listLength_33=1;
	unsigned int valueList_34[]={ 0x4d2c6dfc};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={ 0xc24b8b70};
	unsigned int listLength_35=1;
	unsigned int valueList_36[]={ 0x5b9cca4f};
	unsigned int listLength_36=1;
	unsigned int valueList_37[]={ 0x243185be};
	unsigned int listLength_37=1;
	unsigned int valueList_38[]={ 0xb00327c8};
	unsigned int listLength_38=1;
	unsigned int valueList_39[]={ 0x81c2c92e};
	unsigned int listLength_39=1;
	unsigned int valueList_40[]={ 0xf40e3585};
	unsigned int listLength_40=1;
	unsigned int valueList_41[]={ 0x84c87814};
	unsigned int listLength_41=1;
	unsigned int valueList_42[]={ 0xd807aa98};
	unsigned int listLength_42=1;
	unsigned int valueList_43[]={ 0x9bdc06a7};
	unsigned int listLength_43=1;
	unsigned int valueList_44[]={ 0x3956c25b};
	unsigned int listLength_44=1;
	unsigned int valueList_45[]={ 0x0fc19dc6};
	unsigned int listLength_45=1;
	unsigned int valueList_46[]={0x428a2f98};
	unsigned int listLength_46=1;
	unsigned int valueList_47[]={ 0x06ca6351};
	unsigned int listLength_47=1;
	unsigned int valueList_48[]={ 0x2748774c};
	unsigned int listLength_48=1;
	unsigned int valueList_49[]={ 0xbef9a3f7};
	unsigned int listLength_49=1;
	unsigned int valueList_50[]={ 0x550c7dc3};
	unsigned int listLength_50=1;
	unsigned int valueList_51[]={ 0x682e6ff3};
	unsigned int listLength_51=1;
	unsigned int valueList_52[]={ 0x76f988da};
	unsigned int listLength_52=1;
	unsigned int valueList_53[]={ 0x14292967};
	unsigned int listLength_53=1;
	unsigned int valueList_54[]={ 0xc76c51a3};
	unsigned int listLength_54=1;
	unsigned int valueList_55[]={ 0xab1c5ed5};
	unsigned int listLength_55=1;
	unsigned int valueList_56[]={ 0xc19bf174};
	unsigned int listLength_56=1;
	unsigned int valueList_57[]={ 0x8cc70208};
	unsigned int listLength_57=1;
	unsigned int valueList_58[]={ 0xbf597fc7};
	unsigned int listLength_58=1;
	unsigned int valueList_59[]={ 0x53380d13};
	unsigned int listLength_59=1;
	unsigned int valueList_60[]={ 0x106aa070};
	unsigned int listLength_60=1;
	unsigned int valueList_61[]={ 0x240ca1cc};
	unsigned int listLength_61=1;
	unsigned int valueList_62[]={ 0x92722c85};
	unsigned int listLength_62=1;
	unsigned int valueList_63[]={ 0xe9b5dba5};
	unsigned int listLength_63=1;
	unsigned int valueList_64[]={ 0x34b0bcb5};
	unsigned int listLength_64=1;
	unsigned int valueList_65[]={ 0xc67178f2};
	unsigned int listLength_65=1;
	unsigned int valueList_66[]={ 0x9b05688c};
	unsigned int listLength_66=1;
	unsigned int valueList_67[]={ 0xbb67ae85};
	unsigned int listLength_67=1;
	unsigned int valueList_68[]={ 0x1f83d9ab};
	unsigned int listLength_68=1;
	unsigned int valueList_69[]={ 0x3c6ef372};
	unsigned int listLength_69=1;
	unsigned int valueList_70[]={ 0x5be0cd19};
	unsigned int listLength_70=1;
	unsigned int valueList_71[]={ 0xa54ff53a};
	unsigned int listLength_71=1;
	unsigned int valueList_72[]={0x6a09e667};
	unsigned int listLength_72=1;
	unsigned int valueList_73[]={ 0x510e527f};
	unsigned int listLength_73=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha256_transform_4,false,0\n");
	aunit_printf("#CASE_START_test_sha256_transform_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(SHA256_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			k[44]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			k[56]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			k[12]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			k[20]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			k[32]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			k[48]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			k[6]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			k[16]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			k[24]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			k[36]=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			k[28]=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			k[2]=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			k[40]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			k[52]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			k[60]=(unsigned int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			k[33]=(unsigned int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			k[45]=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			k[53]=(unsigned int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			k[21]=(unsigned int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			k[37]=(unsigned int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			k[49]=(unsigned int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			k[13]=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			k[57]=(unsigned int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			k[9]=(unsigned int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			k[25]=(unsigned int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			k[5]=(unsigned int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			k[17]=(unsigned int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			k[29]=(unsigned int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			k[1]=(unsigned int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			k[61]=(unsigned int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			k[41]=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			k[22]=(unsigned int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			k[34]=(unsigned int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			k[42]=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			k[54]=(unsigned int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			k[10]=(unsigned int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			k[26]=(unsigned int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			k[38]=(unsigned int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			k[46]=(unsigned int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			k[58]=(unsigned int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			k[8]=(unsigned int)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			k[14]=(unsigned int)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			k[4]=(unsigned int)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			k[18]=(unsigned int)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			k[0]=(unsigned int)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			k[30]=(unsigned int)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			k[50]=(unsigned int)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			k[62]=(unsigned int)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			k[11]=(unsigned int)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			k[55]=(unsigned int)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			k[23]=(unsigned int)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			k[31]=(unsigned int)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			k[43]=(unsigned int)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			k[7]=(unsigned int)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			k[15]=(unsigned int)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			k[59]=(unsigned int)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			k[27]=(unsigned int)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			k[35]=(unsigned int)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			k[47]=(unsigned int)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			k[19]=(unsigned int)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			k[39]=(unsigned int)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			k[3]=(unsigned int)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			k[51]=(unsigned int)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			k[63]=(unsigned int)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			((ctx_PTRTO[0]).state)[5]=(unsigned int)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			((ctx_PTRTO[0]).state)[1]=(unsigned int)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			((ctx_PTRTO[0]).state)[6]=(unsigned int)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			((ctx_PTRTO[0]).state)[2]=(unsigned int)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			((ctx_PTRTO[0]).state)[7]=(unsigned int)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			((ctx_PTRTO[0]).state)[3]=(unsigned int)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			((ctx_PTRTO[0]).state)[0]=(unsigned int)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			((ctx_PTRTO[0]).state)[4]=(unsigned int)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		sha256_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha256_transform_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_sha256_transform_up();

	switch(caseIndex){
	case 4:
		test_sha256_transform_4();
		break;
	default:
		abnormal_sha256_transform_case(caseIndex);
		break;
	}

	test_sha256_transform_down();
}

