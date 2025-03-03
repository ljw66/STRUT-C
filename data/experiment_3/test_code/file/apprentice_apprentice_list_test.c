void test_apprentice_list_up(void);
void test_apprentice_list_down(void);


void test_apprentice_list_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_list\n");
 }

void test_apprentice_list_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_list\n");
 }



void abnormal_apprentice_list_case(int index);

void abnormal_apprentice_list_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_list_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct mlist *mlist;
	int mode;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	struct mlist *valueList_1[]={(struct mlist *)mlist_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={1};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={0};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	struct mlist *valueList_38[]={(struct mlist *)&struct_mlist1};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={0};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={0};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	struct mlist *valueList_79[]={(struct mlist *)&struct_mlist2};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	struct magic *valueList_120[]={(struct magic *)&struct_magic1};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
	unsigned int listLength_121=1;
	char valueList_122[]={0};
	unsigned int listLength_122=1;
	char valueList_123[]={0};
	unsigned int listLength_123=1;
	char valueList_124[]={0};
	unsigned int listLength_124=1;
	char valueList_125[]={0};
	unsigned int listLength_125=1;
	char valueList_126[]={0};
	unsigned int listLength_126=1;
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	char valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	unsigned int valueList_141[]={1};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
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
	unsigned char useLast_88=0;
	unsigned char useLast_89=0;
	unsigned char useLast_90=0;
	unsigned char useLast_91=0;
	unsigned char useLast_92=0;
	unsigned char useLast_93=0;
	unsigned char useLast_94=0;
	unsigned char useLast_95=0;
	unsigned char useLast_96=0;
	unsigned char useLast_97=0;
	unsigned char useLast_98=0;
	unsigned char useLast_99=0;
	unsigned char useLast_100=0;
	unsigned char useLast_101=0;
	unsigned char useLast_102=0;
	unsigned char useLast_103=0;
	unsigned char useLast_104=0;
	unsigned char useLast_105=0;
	unsigned char useLast_106=0;
	unsigned char useLast_107=0;
	unsigned char useLast_108=0;
	unsigned char useLast_109=0;
	unsigned char useLast_110=0;
	unsigned char useLast_111=0;
	unsigned char useLast_112=0;
	unsigned char useLast_113=0;
	unsigned char useLast_114=0;
	unsigned char useLast_115=0;
	unsigned char useLast_116=0;
	unsigned char useLast_117=0;
	unsigned char useLast_118=0;
	unsigned char useLast_119=0;
	unsigned char useLast_120=0;
	unsigned char useLast_121=0;
	unsigned char useLast_122=0;
	unsigned char useLast_123=0;
	unsigned char useLast_124=0;
	unsigned char useLast_125=0;
	unsigned char useLast_126=0;
	unsigned char useLast_127=0;
	unsigned char useLast_128=0;
	unsigned char useLast_129=0;
	unsigned char useLast_130=0;
	unsigned char useLast_131=0;
	unsigned char useLast_132=0;
	unsigned char useLast_133=0;
	unsigned char useLast_134=0;
	unsigned char useLast_135=0;
	unsigned char useLast_136=0;
	unsigned char useLast_137=0;
	unsigned char useLast_138=0;
	unsigned char useLast_139=0;
	unsigned char useLast_140=0;
	unsigned char useLast_141=0;
	unsigned char useLast_142=0;
	unsigned char useLast_143=0;
	unsigned char useLast_144=0;
	unsigned char useLast_145=0;
	unsigned char useLast_146=0;
	unsigned char useLast_147=0;
	unsigned char useLast_148=0;
	unsigned char useLast_149=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_list_1,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_list_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			mode=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mlist=(struct mlist *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_magic1.cont_level=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_magic1.flag=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(struct_magic1.mimetype)[20]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(struct_magic1.mimetype)[32]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(struct_magic1.mimetype)[44]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(struct_magic1.mimetype)[56]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(struct_magic1.mimetype)[68]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(struct_magic1.mimetype)[9]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(struct_magic1.mimetype)[16]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(struct_magic1.desc)[5]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(struct_magic1.desc)[23]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(struct_magic1.desc)[35]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(struct_magic1.desc)[11]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(struct_magic1.desc)[63]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(struct_magic1.mimetype)[60]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(struct_magic1.mimetype)[72]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(struct_magic1.desc)[51]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(struct_magic1.desc)[19]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(struct_magic1.desc)[47]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(struct_magic1.desc)[59]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(struct_magic1.mimetype)[28]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(struct_magic1.mimetype)[1]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(struct_magic1.mimetype)[21]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(struct_magic1.mimetype)[33]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(struct_magic1.mimetype)[45]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(struct_magic1.mimetype)[57]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(struct_magic1.mimetype)[69]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(struct_magic1.desc)[34]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(struct_magic1.desc)[46]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(struct_magic1.desc)[10]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(struct_magic1.desc)[22]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(struct_magic1.mimetype)[61]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(struct_magic1.desc)[50]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(struct_magic1.mimetype)[73]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(struct_magic1.desc)[4]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(struct_magic1.desc)[62]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(mlist_PTRTO[0]).next=(struct mlist *)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(struct_magic1.desc)[18]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(struct_magic1.desc)[58]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(struct_magic1.mimetype)[17]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(struct_magic1.mimetype)[29]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(struct_magic1.mimetype)[2]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(struct_magic1.mimetype)[42]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(struct_magic1.mimetype)[54]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			(struct_magic1.mimetype)[66]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			(struct_magic1.mimetype)[78]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			(struct_magic1.mimetype)[14]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			(struct_magic1.mimetype)[26]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			(struct_magic1.mimetype)[7]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			(struct_magic1.mimetype)[38]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			(struct_magic1.desc)[45]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			(struct_magic1.desc)[57]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			(struct_magic1.desc)[21]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			(struct_magic1.desc)[33]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			(struct_magic1.mimetype)[70]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			(struct_magic1.desc)[3]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			(struct_magic1.desc)[61]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			(struct_magic1.mimetype)[30]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			(struct_magic1.desc)[29]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			(struct_magic1.desc)[17]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			(struct_magic1.mimetype)[31]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			(struct_magic1.desc)[60]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			(struct_magic1.mimetype)[43]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			(struct_magic1.mimetype)[55]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			(struct_magic1.mimetype)[67]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			(struct_magic1.mimetype)[8]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			(struct_magic1.mimetype)[79]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			(struct_magic1.mimetype)[15]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			(struct_magic1.mimetype)[27]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			(struct_magic1.desc)[56]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(struct_magic1.desc)[32]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(struct_magic1.desc)[44]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(struct_magic1.mimetype)[71]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			(struct_magic1.desc)[2]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			(struct_magic1.desc)[20]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			(struct_magic1.desc)[16]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			(struct_magic1.desc)[28]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(mlist_PTRTO[0]).prev=(struct mlist *)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			(struct_magic1.mimetype)[39]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			(struct_magic1.mimetype)[64]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			(struct_magic1.mimetype)[76]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			(struct_magic1.mimetype)[12]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			(struct_magic1.mimetype)[24]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			(struct_magic1.mimetype)[36]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			(struct_magic1.mimetype)[48]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			(struct_magic1.desc)[43]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			(struct_magic1.desc)[55]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			(struct_magic1.desc)[1]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			(struct_magic1.desc)[31]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			(struct_magic1.mimetype)[40]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			(struct_magic1.mimetype)[52]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			(struct_magic1.desc)[9]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			(struct_magic1.desc)[27]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			(struct_magic1.desc)[39]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			(struct_magic1.desc)[15]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			(struct_magic1.mimetype)[5]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			(struct_magic1.mimetype)[53]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			(struct_magic1.mimetype)[65]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			(struct_magic1.mimetype)[77]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			(struct_magic1.mimetype)[13]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			(struct_magic1.mimetype)[25]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			(struct_magic1.mimetype)[6]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			(struct_magic1.mimetype)[37]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			(struct_magic1.mimetype)[49]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			(struct_magic1.desc)[54]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			(struct_magic1.desc)[8]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			(struct_magic1.desc)[30]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			(struct_magic1.desc)[42]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			(struct_magic1.mimetype)[41]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			(struct_magic1.desc)[38]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			(struct_magic1.desc)[14]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			(struct_magic1.desc)[26]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			(struct_magic1.mimetype)[10]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			(struct_magic1.mimetype)[22]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			(struct_magic1.mimetype)[34]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			(struct_magic1.mimetype)[46]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			(struct_magic1.mimetype)[58]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			(struct_magic1.desc)[13]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			(mlist_PTRTO[0]).magic=(struct magic *)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			(struct_magic1.desc)[7]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			(struct_magic1.desc)[41]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			(struct_magic1.desc)[53]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			(struct_magic1.mimetype)[50]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			(struct_magic1.mimetype)[62]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			(struct_magic1.mimetype)[74]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			(struct_magic1.desc)[49]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			(struct_magic1.desc)[25]=(char)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			(struct_magic1.desc)[37]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			(struct_magic1.mimetype)[18]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			(struct_magic1.mimetype)[3]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			(struct_magic1.mimetype)[75]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			(struct_magic1.mimetype)[11]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			(struct_magic1.mimetype)[23]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			(struct_magic1.mimetype)[35]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			(struct_magic1.mimetype)[47]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			(struct_magic1.mimetype)[59]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			(struct_magic1.desc)[12]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			(struct_magic1.desc)[6]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			(struct_magic1.desc)[24]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			(mlist_PTRTO[0]).nmagic=(unsigned int)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			(struct_magic1.desc)[52]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			(struct_magic1.mimetype)[51]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			(struct_magic1.desc)[40]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			(struct_magic1.mimetype)[63]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			(struct_magic1.desc)[36]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			(struct_magic1.desc)[48]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			(struct_magic1.mimetype)[4]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			(struct_magic1.mimetype)[19]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		apprentice_list(mlist,mode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_apprentice_list_1\n");
}

void test_apprentice_list_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct mlist *mlist;
	int mode;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	struct mlist *valueList_1[]={(struct mlist *)mlist_PTRTO};
	unsigned int listLength_1=1;
	struct mlist *valueList_2[]={(struct mlist *)&struct_mlist1};
	unsigned int listLength_2=1;
	struct mlist *valueList_3[]={(struct mlist *)&struct_mlist2};
	unsigned int listLength_3=1;
	struct magic *valueList_4[]={(struct magic *)&struct_magic1};
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
	case_id=2;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_list_2,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_list_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			mode=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mlist=(struct mlist *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(mlist_PTRTO[0]).next=(struct mlist *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(mlist_PTRTO[0]).prev=(struct mlist *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(mlist_PTRTO[0]).magic=(struct magic *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(mlist_PTRTO[0]).nmagic=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		apprentice_list(mlist,mode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_apprentice_list_2\n");
}

void test_apprentice_list_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct mlist *mlist;
	int mode;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	struct mlist *valueList_1[]={(struct mlist *)mlist_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={1};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={0};
	unsigned int listLength_31=1;
	struct mlist *valueList_32[]={(struct mlist *)&struct_mlist1};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	struct magic *valueList_41[]={(struct magic *)&struct_magic1};
	unsigned int listLength_41=1;
	char valueList_42[]={0};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={0};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	unsigned int valueList_61[]={2};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	struct mlist *valueList_70[]={(struct mlist *)&struct_mlist2};
	unsigned int listLength_70=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_list_3,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_list_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			mode=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mlist=(struct mlist *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_magic1.cont_level=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_magic1.flag=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(struct_magic1.desc)[5]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(struct_magic1.desc)[23]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(struct_magic1.desc)[35]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(struct_magic1.desc)[43]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(struct_magic1.desc)[11]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(struct_magic1.desc)[55]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(struct_magic1.desc)[1]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(struct_magic1.desc)[63]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(struct_magic1.desc)[31]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(struct_magic1.desc)[51]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(struct_magic1.desc)[19]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(struct_magic1.desc)[9]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(struct_magic1.desc)[27]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(struct_magic1.desc)[39]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(struct_magic1.desc)[47]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(struct_magic1.desc)[15]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(struct_magic1.desc)[59]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(struct_magic1.desc)[34]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(struct_magic1.desc)[46]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(struct_magic1.desc)[10]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(struct_magic1.desc)[54]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(struct_magic1.desc)[8]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(struct_magic1.desc)[22]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(struct_magic1.desc)[30]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(struct_magic1.desc)[42]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(struct_magic1.desc)[50]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(struct_magic1.desc)[4]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(struct_magic1.desc)[62]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(mlist_PTRTO[0]).next=(struct mlist *)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(struct_magic1.desc)[18]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(struct_magic1.desc)[38]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(struct_magic1.desc)[14]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(struct_magic1.desc)[58]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(struct_magic1.desc)[26]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(struct_magic1.desc)[45]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(struct_magic1.desc)[13]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(struct_magic1.desc)[57]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(mlist_PTRTO[0]).magic=(struct magic *)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(struct_magic1.desc)[7]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(struct_magic1.desc)[21]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(struct_magic1.desc)[33]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(struct_magic1.desc)[41]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			(struct_magic1.desc)[53]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			(struct_magic1.desc)[3]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			(struct_magic1.desc)[61]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			(struct_magic1.desc)[29]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			(struct_magic1.desc)[49]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			(struct_magic1.desc)[17]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			(struct_magic1.desc)[25]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			(struct_magic1.desc)[37]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			(struct_magic1.desc)[60]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			(struct_magic1.desc)[12]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			(struct_magic1.desc)[56]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			(struct_magic1.desc)[6]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			(struct_magic1.desc)[24]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			(struct_magic1.desc)[32]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			(struct_magic1.desc)[44]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			(mlist_PTRTO[0]).nmagic=(unsigned int)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			(struct_magic1.desc)[52]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			(struct_magic1.desc)[2]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			(struct_magic1.desc)[20]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			(struct_magic1.desc)[40]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			(struct_magic1.desc)[16]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			(struct_magic1.desc)[28]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			(struct_magic1.desc)[36]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			(struct_magic1.desc)[48]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			(mlist_PTRTO[0]).prev=(struct mlist *)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		apprentice_list(mlist,mode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_apprentice_list_3\n");
}

void test_apprentice_list_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct mlist *mlist;
	int mode;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	struct mlist *valueList_1[]={(struct mlist *)mlist_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={2};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={0};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	char valueList_36[]={0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	struct mlist *valueList_38[]={(struct mlist *)&struct_mlist1};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	char valueList_42[]={0};
	unsigned int listLength_42=1;
	char valueList_43[]={0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	char valueList_50[]={0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	char valueList_55[]={0};
	unsigned int listLength_55=1;
	char valueList_56[]={0};
	unsigned int listLength_56=1;
	char valueList_57[]={0};
	unsigned int listLength_57=1;
	char valueList_58[]={0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	char valueList_62[]={0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	char valueList_65[]={0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	char valueList_67[]={0};
	unsigned int listLength_67=1;
	char valueList_68[]={0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	char valueList_70[]={0};
	unsigned int listLength_70=1;
	char valueList_71[]={0};
	unsigned int listLength_71=1;
	char valueList_72[]={0};
	unsigned int listLength_72=1;
	char valueList_73[]={0};
	unsigned int listLength_73=1;
	char valueList_74[]={0};
	unsigned int listLength_74=1;
	char valueList_75[]={0};
	unsigned int listLength_75=1;
	char valueList_76[]={0};
	unsigned int listLength_76=1;
	char valueList_77[]={0};
	unsigned int listLength_77=1;
	char valueList_78[]={0};
	unsigned int listLength_78=1;
	struct mlist *valueList_79[]={(struct mlist *)&struct_mlist2};
	unsigned int listLength_79=1;
	char valueList_80[]={0};
	unsigned int listLength_80=1;
	char valueList_81[]={0};
	unsigned int listLength_81=1;
	char valueList_82[]={0};
	unsigned int listLength_82=1;
	char valueList_83[]={0};
	unsigned int listLength_83=1;
	char valueList_84[]={0};
	unsigned int listLength_84=1;
	char valueList_85[]={0};
	unsigned int listLength_85=1;
	char valueList_86[]={0};
	unsigned int listLength_86=1;
	char valueList_87[]={0};
	unsigned int listLength_87=1;
	char valueList_88[]={0};
	unsigned int listLength_88=1;
	char valueList_89[]={0};
	unsigned int listLength_89=1;
	char valueList_90[]={0};
	unsigned int listLength_90=1;
	char valueList_91[]={0};
	unsigned int listLength_91=1;
	char valueList_92[]={0};
	unsigned int listLength_92=1;
	char valueList_93[]={0};
	unsigned int listLength_93=1;
	char valueList_94[]={0};
	unsigned int listLength_94=1;
	char valueList_95[]={0};
	unsigned int listLength_95=1;
	char valueList_96[]={0};
	unsigned int listLength_96=1;
	char valueList_97[]={0};
	unsigned int listLength_97=1;
	char valueList_98[]={0};
	unsigned int listLength_98=1;
	char valueList_99[]={0};
	unsigned int listLength_99=1;
	char valueList_100[]={0};
	unsigned int listLength_100=1;
	char valueList_101[]={0};
	unsigned int listLength_101=1;
	char valueList_102[]={0};
	unsigned int listLength_102=1;
	char valueList_103[]={0};
	unsigned int listLength_103=1;
	char valueList_104[]={0};
	unsigned int listLength_104=1;
	char valueList_105[]={0};
	unsigned int listLength_105=1;
	char valueList_106[]={0};
	unsigned int listLength_106=1;
	char valueList_107[]={0};
	unsigned int listLength_107=1;
	char valueList_108[]={0};
	unsigned int listLength_108=1;
	char valueList_109[]={0};
	unsigned int listLength_109=1;
	char valueList_110[]={0};
	unsigned int listLength_110=1;
	char valueList_111[]={0};
	unsigned int listLength_111=1;
	char valueList_112[]={0};
	unsigned int listLength_112=1;
	char valueList_113[]={0};
	unsigned int listLength_113=1;
	char valueList_114[]={0};
	unsigned int listLength_114=1;
	char valueList_115[]={0};
	unsigned int listLength_115=1;
	char valueList_116[]={0};
	unsigned int listLength_116=1;
	char valueList_117[]={0};
	unsigned int listLength_117=1;
	char valueList_118[]={0};
	unsigned int listLength_118=1;
	char valueList_119[]={0};
	unsigned int listLength_119=1;
	struct magic *valueList_120[]={(struct magic *)&struct_magic1};
	unsigned int listLength_120=1;
	char valueList_121[]={0};
	unsigned int listLength_121=1;
	char valueList_122[]={0};
	unsigned int listLength_122=1;
	char valueList_123[]={0};
	unsigned int listLength_123=1;
	char valueList_124[]={0};
	unsigned int listLength_124=1;
	char valueList_125[]={0};
	unsigned int listLength_125=1;
	char valueList_126[]={0};
	unsigned int listLength_126=1;
	char valueList_127[]={0};
	unsigned int listLength_127=1;
	char valueList_128[]={0};
	unsigned int listLength_128=1;
	char valueList_129[]={0};
	unsigned int listLength_129=1;
	char valueList_130[]={0};
	unsigned int listLength_130=1;
	char valueList_131[]={0};
	unsigned int listLength_131=1;
	char valueList_132[]={0};
	unsigned int listLength_132=1;
	char valueList_133[]={0};
	unsigned int listLength_133=1;
	char valueList_134[]={0};
	unsigned int listLength_134=1;
	char valueList_135[]={0};
	unsigned int listLength_135=1;
	char valueList_136[]={0};
	unsigned int listLength_136=1;
	char valueList_137[]={0};
	unsigned int listLength_137=1;
	char valueList_138[]={0};
	unsigned int listLength_138=1;
	char valueList_139[]={0};
	unsigned int listLength_139=1;
	char valueList_140[]={0};
	unsigned int listLength_140=1;
	unsigned int valueList_141[]={1};
	unsigned int listLength_141=1;
	char valueList_142[]={0};
	unsigned int listLength_142=1;
	char valueList_143[]={0};
	unsigned int listLength_143=1;
	char valueList_144[]={0};
	unsigned int listLength_144=1;
	char valueList_145[]={0};
	unsigned int listLength_145=1;
	char valueList_146[]={0};
	unsigned int listLength_146=1;
	char valueList_147[]={0};
	unsigned int listLength_147=1;
	char valueList_148[]={0};
	unsigned int listLength_148=1;
	char valueList_149[]={0};
	unsigned int listLength_149=1;
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
	unsigned char useLast_88=0;
	unsigned char useLast_89=0;
	unsigned char useLast_90=0;
	unsigned char useLast_91=0;
	unsigned char useLast_92=0;
	unsigned char useLast_93=0;
	unsigned char useLast_94=0;
	unsigned char useLast_95=0;
	unsigned char useLast_96=0;
	unsigned char useLast_97=0;
	unsigned char useLast_98=0;
	unsigned char useLast_99=0;
	unsigned char useLast_100=0;
	unsigned char useLast_101=0;
	unsigned char useLast_102=0;
	unsigned char useLast_103=0;
	unsigned char useLast_104=0;
	unsigned char useLast_105=0;
	unsigned char useLast_106=0;
	unsigned char useLast_107=0;
	unsigned char useLast_108=0;
	unsigned char useLast_109=0;
	unsigned char useLast_110=0;
	unsigned char useLast_111=0;
	unsigned char useLast_112=0;
	unsigned char useLast_113=0;
	unsigned char useLast_114=0;
	unsigned char useLast_115=0;
	unsigned char useLast_116=0;
	unsigned char useLast_117=0;
	unsigned char useLast_118=0;
	unsigned char useLast_119=0;
	unsigned char useLast_120=0;
	unsigned char useLast_121=0;
	unsigned char useLast_122=0;
	unsigned char useLast_123=0;
	unsigned char useLast_124=0;
	unsigned char useLast_125=0;
	unsigned char useLast_126=0;
	unsigned char useLast_127=0;
	unsigned char useLast_128=0;
	unsigned char useLast_129=0;
	unsigned char useLast_130=0;
	unsigned char useLast_131=0;
	unsigned char useLast_132=0;
	unsigned char useLast_133=0;
	unsigned char useLast_134=0;
	unsigned char useLast_135=0;
	unsigned char useLast_136=0;
	unsigned char useLast_137=0;
	unsigned char useLast_138=0;
	unsigned char useLast_139=0;
	unsigned char useLast_140=0;
	unsigned char useLast_141=0;
	unsigned char useLast_142=0;
	unsigned char useLast_143=0;
	unsigned char useLast_144=0;
	unsigned char useLast_145=0;
	unsigned char useLast_146=0;
	unsigned char useLast_147=0;
	unsigned char useLast_148=0;
	unsigned char useLast_149=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_list_4,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_list_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			mode=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mlist=(struct mlist *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_magic1.cont_level=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_magic1.flag=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(struct_magic1.mimetype)[20]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(struct_magic1.mimetype)[32]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(struct_magic1.mimetype)[44]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(struct_magic1.mimetype)[56]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(struct_magic1.mimetype)[68]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(struct_magic1.mimetype)[9]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(struct_magic1.mimetype)[16]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(struct_magic1.desc)[5]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(struct_magic1.desc)[23]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(struct_magic1.desc)[35]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(struct_magic1.desc)[11]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(struct_magic1.desc)[63]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(struct_magic1.mimetype)[60]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(struct_magic1.mimetype)[72]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(struct_magic1.desc)[51]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(struct_magic1.desc)[19]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(struct_magic1.desc)[47]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(struct_magic1.desc)[59]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(struct_magic1.mimetype)[28]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(struct_magic1.mimetype)[1]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(struct_magic1.mimetype)[21]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(struct_magic1.mimetype)[33]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(struct_magic1.mimetype)[45]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(struct_magic1.mimetype)[57]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(struct_magic1.mimetype)[69]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(struct_magic1.desc)[34]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(struct_magic1.desc)[46]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(struct_magic1.desc)[10]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(struct_magic1.desc)[22]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(struct_magic1.mimetype)[61]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(struct_magic1.desc)[50]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(struct_magic1.mimetype)[73]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(struct_magic1.desc)[4]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(struct_magic1.desc)[62]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(mlist_PTRTO[0]).next=(struct mlist *)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(struct_magic1.desc)[18]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(struct_magic1.desc)[58]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(struct_magic1.mimetype)[17]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(struct_magic1.mimetype)[29]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(struct_magic1.mimetype)[2]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(struct_magic1.mimetype)[42]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(struct_magic1.mimetype)[54]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			(struct_magic1.mimetype)[66]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			(struct_magic1.mimetype)[78]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			(struct_magic1.mimetype)[14]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			(struct_magic1.mimetype)[26]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			(struct_magic1.mimetype)[7]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			(struct_magic1.mimetype)[38]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			(struct_magic1.desc)[45]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			(struct_magic1.desc)[57]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			(struct_magic1.desc)[21]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			(struct_magic1.desc)[33]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			(struct_magic1.mimetype)[70]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			(struct_magic1.desc)[3]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			(struct_magic1.desc)[61]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			(struct_magic1.mimetype)[30]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			(struct_magic1.desc)[29]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			(struct_magic1.desc)[17]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			(struct_magic1.mimetype)[31]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			(struct_magic1.desc)[60]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			(struct_magic1.mimetype)[43]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			(struct_magic1.mimetype)[55]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			(struct_magic1.mimetype)[67]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			(struct_magic1.mimetype)[8]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			(struct_magic1.mimetype)[79]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			(struct_magic1.mimetype)[15]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			(struct_magic1.mimetype)[27]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			(struct_magic1.desc)[56]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(struct_magic1.desc)[32]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(struct_magic1.desc)[44]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(struct_magic1.mimetype)[71]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			(struct_magic1.desc)[2]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			(struct_magic1.desc)[20]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			(struct_magic1.desc)[16]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			(struct_magic1.desc)[28]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			(mlist_PTRTO[0]).prev=(struct mlist *)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			(struct_magic1.mimetype)[39]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			(struct_magic1.mimetype)[64]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			(struct_magic1.mimetype)[76]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			(struct_magic1.mimetype)[12]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			(struct_magic1.mimetype)[24]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			(struct_magic1.mimetype)[36]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			(struct_magic1.mimetype)[48]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			(struct_magic1.desc)[43]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			(struct_magic1.desc)[55]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			(struct_magic1.desc)[1]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			(struct_magic1.desc)[31]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			(struct_magic1.mimetype)[40]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			(struct_magic1.mimetype)[52]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			(struct_magic1.desc)[9]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			(struct_magic1.desc)[27]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			(struct_magic1.desc)[39]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			(struct_magic1.desc)[15]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			(struct_magic1.mimetype)[5]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			(struct_magic1.mimetype)[53]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			(struct_magic1.mimetype)[65]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			(struct_magic1.mimetype)[77]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			(struct_magic1.mimetype)[13]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			(struct_magic1.mimetype)[25]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			(struct_magic1.mimetype)[6]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			(struct_magic1.mimetype)[37]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			(struct_magic1.mimetype)[49]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			(struct_magic1.desc)[54]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			(struct_magic1.desc)[8]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			(struct_magic1.desc)[30]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			(struct_magic1.desc)[42]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			(struct_magic1.mimetype)[41]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			(struct_magic1.desc)[38]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			(struct_magic1.desc)[14]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			(struct_magic1.desc)[26]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			(struct_magic1.mimetype)[10]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			(struct_magic1.mimetype)[22]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			(struct_magic1.mimetype)[34]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			(struct_magic1.mimetype)[46]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			(struct_magic1.mimetype)[58]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			(struct_magic1.desc)[13]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			(mlist_PTRTO[0]).magic=(struct magic *)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			(struct_magic1.desc)[7]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			(struct_magic1.desc)[41]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			(struct_magic1.desc)[53]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			(struct_magic1.mimetype)[50]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			(struct_magic1.mimetype)[62]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			(struct_magic1.mimetype)[74]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			(struct_magic1.desc)[49]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			(struct_magic1.desc)[25]=(char)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			(struct_magic1.desc)[37]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			(struct_magic1.mimetype)[18]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			(struct_magic1.mimetype)[3]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			(struct_magic1.mimetype)[75]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			(struct_magic1.mimetype)[11]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			(struct_magic1.mimetype)[23]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			(struct_magic1.mimetype)[35]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			(struct_magic1.mimetype)[47]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		if(aUnItCoUnTeR<listLength_137 || useLast_137){
			(struct_magic1.mimetype)[59]=(char)valueList_137[aUnItCoUnTeR<listLength_137?aUnItCoUnTeR:listLength_137-1];

		}
		if(aUnItCoUnTeR<listLength_138 || useLast_138){
			(struct_magic1.desc)[12]=(char)valueList_138[aUnItCoUnTeR<listLength_138?aUnItCoUnTeR:listLength_138-1];

		}
		if(aUnItCoUnTeR<listLength_139 || useLast_139){
			(struct_magic1.desc)[6]=(char)valueList_139[aUnItCoUnTeR<listLength_139?aUnItCoUnTeR:listLength_139-1];

		}
		if(aUnItCoUnTeR<listLength_140 || useLast_140){
			(struct_magic1.desc)[24]=(char)valueList_140[aUnItCoUnTeR<listLength_140?aUnItCoUnTeR:listLength_140-1];

		}
		if(aUnItCoUnTeR<listLength_141 || useLast_141){
			(mlist_PTRTO[0]).nmagic=(unsigned int)valueList_141[aUnItCoUnTeR<listLength_141?aUnItCoUnTeR:listLength_141-1];

		}
		if(aUnItCoUnTeR<listLength_142 || useLast_142){
			(struct_magic1.desc)[52]=(char)valueList_142[aUnItCoUnTeR<listLength_142?aUnItCoUnTeR:listLength_142-1];

		}
		if(aUnItCoUnTeR<listLength_143 || useLast_143){
			(struct_magic1.mimetype)[51]=(char)valueList_143[aUnItCoUnTeR<listLength_143?aUnItCoUnTeR:listLength_143-1];

		}
		if(aUnItCoUnTeR<listLength_144 || useLast_144){
			(struct_magic1.desc)[40]=(char)valueList_144[aUnItCoUnTeR<listLength_144?aUnItCoUnTeR:listLength_144-1];

		}
		if(aUnItCoUnTeR<listLength_145 || useLast_145){
			(struct_magic1.mimetype)[63]=(char)valueList_145[aUnItCoUnTeR<listLength_145?aUnItCoUnTeR:listLength_145-1];

		}
		if(aUnItCoUnTeR<listLength_146 || useLast_146){
			(struct_magic1.desc)[36]=(char)valueList_146[aUnItCoUnTeR<listLength_146?aUnItCoUnTeR:listLength_146-1];

		}
		if(aUnItCoUnTeR<listLength_147 || useLast_147){
			(struct_magic1.desc)[48]=(char)valueList_147[aUnItCoUnTeR<listLength_147?aUnItCoUnTeR:listLength_147-1];

		}
		if(aUnItCoUnTeR<listLength_148 || useLast_148){
			(struct_magic1.mimetype)[4]=(char)valueList_148[aUnItCoUnTeR<listLength_148?aUnItCoUnTeR:listLength_148-1];

		}
		if(aUnItCoUnTeR<listLength_149 || useLast_149){
			(struct_magic1.mimetype)[19]=(char)valueList_149[aUnItCoUnTeR<listLength_149?aUnItCoUnTeR:listLength_149-1];

		}
		apprentice_list(mlist,mode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_apprentice_list_4\n");
}

void test_apprentice_list_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct mlist *mlist;
	int mode;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	struct mlist *valueList_1[]={(struct mlist *)mlist_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={1};
	unsigned int listLength_3=1;
	struct mlist *valueList_4[]={(struct mlist *)&struct_mlist1};
	unsigned int listLength_4=1;
	struct mlist *valueList_5[]={(struct mlist *)&struct_mlist2};
	unsigned int listLength_5=1;
	struct magic *valueList_6[]={(struct magic *)&struct_magic1};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={2};
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
	case_id=5;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_list_5,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_list_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			mode=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mlist=(struct mlist *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_magic1.cont_level=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_magic1.flag=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(mlist_PTRTO[0]).next=(struct mlist *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(mlist_PTRTO[0]).prev=(struct mlist *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(mlist_PTRTO[0]).magic=(struct magic *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(mlist_PTRTO[0]).nmagic=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		apprentice_list(mlist,mode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_apprentice_list_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_list_up();

	switch(caseIndex){
	case 1:
		test_apprentice_list_1();
		break;
	case 2:
		test_apprentice_list_2();
		break;
	case 3:
		test_apprentice_list_3();
		break;
	case 4:
		test_apprentice_list_4();
		break;
	case 5:
		test_apprentice_list_5();
		break;
	default:
		abnormal_apprentice_list_case(caseIndex);
		break;
	}

	test_apprentice_list_down();
}

