void test_der_cmp_up(void);
void test_der_cmp_down(void);


void test_der_cmp_up(void){

	aunit_printf("\n##FUNCTION_START_der_cmp\n");
 }

void test_der_cmp_down(void){
	aunit_printf("\n##FUNCTION_END_der_cmp\n");
 }



void abnormal_der_cmp_case(int index);

void abnormal_der_cmp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_der_cmp_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct magic *valueList_0[]={(struct magic *)m_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	FILE *valueList_2[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={10};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)"test_input"};
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
	char valueList_21[]={tag=5};
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
	char valueList_38[]={0};
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
	char valueList_79[]={0};
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
	char valueList_120[]={0};
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	der_tag_call_counter = 0;
	strcmp_call_counter = 0;
	strlen_call_counter = 0;
	strncmp_call_counter = 0;
	der_data_call_counter = 0;
	strlcpy_call_counter = 0;
	getlength_call_counter = 0;
	gettag_call_counter = 0;
	fprintf_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_der_cmp_8,false,0\n");
	aunit_printf("#CASE_START_test_der_cmp_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			m=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			stderr=(FILE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).search.s_len=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).search.s=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			((m_PTRTO[0]).value.s)[118]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			((m_PTRTO[0]).value.s)[122]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			((m_PTRTO[0]).value.s)[110]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			((m_PTRTO[0]).value.s)[82]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			((m_PTRTO[0]).value.s)[94]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			((m_PTRTO[0]).value.s)[106]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			((m_PTRTO[0]).value.s)[70]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			((m_PTRTO[0]).value.s)[42]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			((m_PTRTO[0]).value.s)[54]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			((m_PTRTO[0]).value.s)[30]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			((m_PTRTO[0]).value.s)[14]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			((m_PTRTO[0]).value.s)[66]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			((m_PTRTO[0]).value.s)[0]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			((m_PTRTO[0]).value.s)[78]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			((m_PTRTO[0]).value.s)[26]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			((m_PTRTO[0]).value.s)[38]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			((m_PTRTO[0]).value.s)[8]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			((m_PTRTO[0]).value.s)[121]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			((m_PTRTO[0]).value.s)[93]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			((m_PTRTO[0]).value.s)[117]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			((m_PTRTO[0]).value.s)[81]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			((m_PTRTO[0]).value.s)[105]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			((m_PTRTO[0]).value.s)[53]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			((m_PTRTO[0]).value.s)[65]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			((m_PTRTO[0]).value.s)[41]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			((m_PTRTO[0]).value.s)[13]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			((m_PTRTO[0]).value.s)[25]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			((m_PTRTO[0]).value.s)[1]=(char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			((m_PTRTO[0]).value.s)[77]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			((m_PTRTO[0]).value.s)[120]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			((m_PTRTO[0]).value.s)[89]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			((m_PTRTO[0]).value.s)[37]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			((m_PTRTO[0]).value.s)[49]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			((m_PTRTO[0]).value.s)[9]=(char)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			((m_PTRTO[0]).value.s)[108]=(char)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			((m_PTRTO[0]).value.s)[100]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			((m_PTRTO[0]).value.s)[124]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			((m_PTRTO[0]).value.s)[112]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			((m_PTRTO[0]).value.s)[80]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			((m_PTRTO[0]).value.s)[92]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			((m_PTRTO[0]).value.s)[64]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			((m_PTRTO[0]).value.s)[76]=(char)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			((m_PTRTO[0]).value.s)[40]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			((m_PTRTO[0]).value.s)[52]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			((m_PTRTO[0]).value.s)[24]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			((m_PTRTO[0]).value.s)[2]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			((m_PTRTO[0]).value.s)[36]=(char)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			((m_PTRTO[0]).value.s)[88]=(char)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			((m_PTRTO[0]).value.s)[12]=(char)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			((m_PTRTO[0]).value.s)[48]=(char)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			((m_PTRTO[0]).value.s)[119]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			((m_PTRTO[0]).value.s)[107]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			((m_PTRTO[0]).value.s)[111]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			((m_PTRTO[0]).value.s)[123]=(char)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			((m_PTRTO[0]).value.s)[91]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			((m_PTRTO[0]).value.s)[75]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			((m_PTRTO[0]).value.s)[87]=(char)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			((m_PTRTO[0]).value.s)[51]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			((m_PTRTO[0]).value.s)[63]=(char)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			((m_PTRTO[0]).value.s)[3]=(char)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			((m_PTRTO[0]).value.s)[35]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			((m_PTRTO[0]).value.s)[47]=(char)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			((m_PTRTO[0]).value.s)[11]=(char)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			((m_PTRTO[0]).value.s)[99]=(char)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			((m_PTRTO[0]).value.s)[23]=(char)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			((m_PTRTO[0]).value.s)[59]=(char)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		if(aUnItCoUnTeR<listLength_75 || useLast_75){
			((m_PTRTO[0]).value.s)[19]=(char)valueList_75[aUnItCoUnTeR<listLength_75?aUnItCoUnTeR:listLength_75-1];

		}
		if(aUnItCoUnTeR<listLength_76 || useLast_76){
			((m_PTRTO[0]).value.s)[90]=(char)valueList_76[aUnItCoUnTeR<listLength_76?aUnItCoUnTeR:listLength_76-1];

		}
		if(aUnItCoUnTeR<listLength_77 || useLast_77){
			((m_PTRTO[0]).value.s)[102]=(char)valueList_77[aUnItCoUnTeR<listLength_77?aUnItCoUnTeR:listLength_77-1];

		}
		if(aUnItCoUnTeR<listLength_78 || useLast_78){
			((m_PTRTO[0]).value.s)[126]=(char)valueList_78[aUnItCoUnTeR<listLength_78?aUnItCoUnTeR:listLength_78-1];

		}
		if(aUnItCoUnTeR<listLength_79 || useLast_79){
			((m_PTRTO[0]).value.s)[50]=(char)valueList_79[aUnItCoUnTeR<listLength_79?aUnItCoUnTeR:listLength_79-1];

		}
		if(aUnItCoUnTeR<listLength_80 || useLast_80){
			((m_PTRTO[0]).value.s)[114]=(char)valueList_80[aUnItCoUnTeR<listLength_80?aUnItCoUnTeR:listLength_80-1];

		}
		if(aUnItCoUnTeR<listLength_81 || useLast_81){
			((m_PTRTO[0]).value.s)[86]=(char)valueList_81[aUnItCoUnTeR<listLength_81?aUnItCoUnTeR:listLength_81-1];

		}
		if(aUnItCoUnTeR<listLength_82 || useLast_82){
			((m_PTRTO[0]).value.s)[10]=(char)valueList_82[aUnItCoUnTeR<listLength_82?aUnItCoUnTeR:listLength_82-1];

		}
		if(aUnItCoUnTeR<listLength_83 || useLast_83){
			((m_PTRTO[0]).value.s)[98]=(char)valueList_83[aUnItCoUnTeR<listLength_83?aUnItCoUnTeR:listLength_83-1];

		}
		if(aUnItCoUnTeR<listLength_84 || useLast_84){
			((m_PTRTO[0]).value.s)[62]=(char)valueList_84[aUnItCoUnTeR<listLength_84?aUnItCoUnTeR:listLength_84-1];

		}
		if(aUnItCoUnTeR<listLength_85 || useLast_85){
			((m_PTRTO[0]).value.s)[4]=(char)valueList_85[aUnItCoUnTeR<listLength_85?aUnItCoUnTeR:listLength_85-1];

		}
		if(aUnItCoUnTeR<listLength_86 || useLast_86){
			((m_PTRTO[0]).value.s)[74]=(char)valueList_86[aUnItCoUnTeR<listLength_86?aUnItCoUnTeR:listLength_86-1];

		}
		if(aUnItCoUnTeR<listLength_87 || useLast_87){
			((m_PTRTO[0]).value.s)[46]=(char)valueList_87[aUnItCoUnTeR<listLength_87?aUnItCoUnTeR:listLength_87-1];

		}
		if(aUnItCoUnTeR<listLength_88 || useLast_88){
			((m_PTRTO[0]).value.s)[58]=(char)valueList_88[aUnItCoUnTeR<listLength_88?aUnItCoUnTeR:listLength_88-1];

		}
		if(aUnItCoUnTeR<listLength_89 || useLast_89){
			((m_PTRTO[0]).value.s)[22]=(char)valueList_89[aUnItCoUnTeR<listLength_89?aUnItCoUnTeR:listLength_89-1];

		}
		if(aUnItCoUnTeR<listLength_90 || useLast_90){
			((m_PTRTO[0]).value.s)[34]=(char)valueList_90[aUnItCoUnTeR<listLength_90?aUnItCoUnTeR:listLength_90-1];

		}
		if(aUnItCoUnTeR<listLength_91 || useLast_91){
			((m_PTRTO[0]).value.s)[18]=(char)valueList_91[aUnItCoUnTeR<listLength_91?aUnItCoUnTeR:listLength_91-1];

		}
		if(aUnItCoUnTeR<listLength_92 || useLast_92){
			((m_PTRTO[0]).value.s)[109]=(char)valueList_92[aUnItCoUnTeR<listLength_92?aUnItCoUnTeR:listLength_92-1];

		}
		if(aUnItCoUnTeR<listLength_93 || useLast_93){
			((m_PTRTO[0]).value.s)[113]=(char)valueList_93[aUnItCoUnTeR<listLength_93?aUnItCoUnTeR:listLength_93-1];

		}
		if(aUnItCoUnTeR<listLength_94 || useLast_94){
			((m_PTRTO[0]).value.s)[101]=(char)valueList_94[aUnItCoUnTeR<listLength_94?aUnItCoUnTeR:listLength_94-1];

		}
		if(aUnItCoUnTeR<listLength_95 || useLast_95){
			((m_PTRTO[0]).value.s)[61]=(char)valueList_95[aUnItCoUnTeR<listLength_95?aUnItCoUnTeR:listLength_95-1];

		}
		if(aUnItCoUnTeR<listLength_96 || useLast_96){
			((m_PTRTO[0]).value.s)[125]=(char)valueList_96[aUnItCoUnTeR<listLength_96?aUnItCoUnTeR:listLength_96-1];

		}
		if(aUnItCoUnTeR<listLength_97 || useLast_97){
			((m_PTRTO[0]).value.s)[97]=(char)valueList_97[aUnItCoUnTeR<listLength_97?aUnItCoUnTeR:listLength_97-1];

		}
		if(aUnItCoUnTeR<listLength_98 || useLast_98){
			((m_PTRTO[0]).value.s)[21]=(char)valueList_98[aUnItCoUnTeR<listLength_98?aUnItCoUnTeR:listLength_98-1];

		}
		if(aUnItCoUnTeR<listLength_99 || useLast_99){
			((m_PTRTO[0]).value.s)[5]=(char)valueList_99[aUnItCoUnTeR<listLength_99?aUnItCoUnTeR:listLength_99-1];

		}
		if(aUnItCoUnTeR<listLength_100 || useLast_100){
			((m_PTRTO[0]).value.s)[73]=(char)valueList_100[aUnItCoUnTeR<listLength_100?aUnItCoUnTeR:listLength_100-1];

		}
		if(aUnItCoUnTeR<listLength_101 || useLast_101){
			((m_PTRTO[0]).value.s)[85]=(char)valueList_101[aUnItCoUnTeR<listLength_101?aUnItCoUnTeR:listLength_101-1];

		}
		if(aUnItCoUnTeR<listLength_102 || useLast_102){
			((m_PTRTO[0]).value.s)[57]=(char)valueList_102[aUnItCoUnTeR<listLength_102?aUnItCoUnTeR:listLength_102-1];

		}
		if(aUnItCoUnTeR<listLength_103 || useLast_103){
			((m_PTRTO[0]).value.s)[69]=(char)valueList_103[aUnItCoUnTeR<listLength_103?aUnItCoUnTeR:listLength_103-1];

		}
		if(aUnItCoUnTeR<listLength_104 || useLast_104){
			((m_PTRTO[0]).value.s)[33]=(char)valueList_104[aUnItCoUnTeR<listLength_104?aUnItCoUnTeR:listLength_104-1];

		}
		if(aUnItCoUnTeR<listLength_105 || useLast_105){
			((m_PTRTO[0]).value.s)[45]=(char)valueList_105[aUnItCoUnTeR<listLength_105?aUnItCoUnTeR:listLength_105-1];

		}
		if(aUnItCoUnTeR<listLength_106 || useLast_106){
			((m_PTRTO[0]).value.s)[17]=(char)valueList_106[aUnItCoUnTeR<listLength_106?aUnItCoUnTeR:listLength_106-1];

		}
		if(aUnItCoUnTeR<listLength_107 || useLast_107){
			((m_PTRTO[0]).value.s)[29]=(char)valueList_107[aUnItCoUnTeR<listLength_107?aUnItCoUnTeR:listLength_107-1];

		}
		if(aUnItCoUnTeR<listLength_108 || useLast_108){
			((m_PTRTO[0]).value.s)[60]=(char)valueList_108[aUnItCoUnTeR<listLength_108?aUnItCoUnTeR:listLength_108-1];

		}
		if(aUnItCoUnTeR<listLength_109 || useLast_109){
			((m_PTRTO[0]).value.s)[104]=(char)valueList_109[aUnItCoUnTeR<listLength_109?aUnItCoUnTeR:listLength_109-1];

		}
		if(aUnItCoUnTeR<listLength_110 || useLast_110){
			((m_PTRTO[0]).value.s)[72]=(char)valueList_110[aUnItCoUnTeR<listLength_110?aUnItCoUnTeR:listLength_110-1];

		}
		if(aUnItCoUnTeR<listLength_111 || useLast_111){
			((m_PTRTO[0]).value.s)[116]=(char)valueList_111[aUnItCoUnTeR<listLength_111?aUnItCoUnTeR:listLength_111-1];

		}
		if(aUnItCoUnTeR<listLength_112 || useLast_112){
			((m_PTRTO[0]).value.s)[20]=(char)valueList_112[aUnItCoUnTeR<listLength_112?aUnItCoUnTeR:listLength_112-1];

		}
		if(aUnItCoUnTeR<listLength_113 || useLast_113){
			((m_PTRTO[0]).value.s)[6]=(char)valueList_113[aUnItCoUnTeR<listLength_113?aUnItCoUnTeR:listLength_113-1];

		}
		if(aUnItCoUnTeR<listLength_114 || useLast_114){
			((m_PTRTO[0]).value.s)[32]=(char)valueList_114[aUnItCoUnTeR<listLength_114?aUnItCoUnTeR:listLength_114-1];

		}
		if(aUnItCoUnTeR<listLength_115 || useLast_115){
			((m_PTRTO[0]).value.s)[84]=(char)valueList_115[aUnItCoUnTeR<listLength_115?aUnItCoUnTeR:listLength_115-1];

		}
		if(aUnItCoUnTeR<listLength_116 || useLast_116){
			((m_PTRTO[0]).value.s)[96]=(char)valueList_116[aUnItCoUnTeR<listLength_116?aUnItCoUnTeR:listLength_116-1];

		}
		if(aUnItCoUnTeR<listLength_117 || useLast_117){
			((m_PTRTO[0]).value.s)[68]=(char)valueList_117[aUnItCoUnTeR<listLength_117?aUnItCoUnTeR:listLength_117-1];

		}
		if(aUnItCoUnTeR<listLength_118 || useLast_118){
			((m_PTRTO[0]).value.s)[44]=(char)valueList_118[aUnItCoUnTeR<listLength_118?aUnItCoUnTeR:listLength_118-1];

		}
		if(aUnItCoUnTeR<listLength_119 || useLast_119){
			((m_PTRTO[0]).value.s)[56]=(char)valueList_119[aUnItCoUnTeR<listLength_119?aUnItCoUnTeR:listLength_119-1];

		}
		if(aUnItCoUnTeR<listLength_120 || useLast_120){
			((m_PTRTO[0]).value.s)[28]=(char)valueList_120[aUnItCoUnTeR<listLength_120?aUnItCoUnTeR:listLength_120-1];

		}
		if(aUnItCoUnTeR<listLength_121 || useLast_121){
			((m_PTRTO[0]).value.s)[16]=(char)valueList_121[aUnItCoUnTeR<listLength_121?aUnItCoUnTeR:listLength_121-1];

		}
		if(aUnItCoUnTeR<listLength_122 || useLast_122){
			((m_PTRTO[0]).value.s)[71]=(char)valueList_122[aUnItCoUnTeR<listLength_122?aUnItCoUnTeR:listLength_122-1];

		}
		if(aUnItCoUnTeR<listLength_123 || useLast_123){
			((m_PTRTO[0]).value.s)[115]=(char)valueList_123[aUnItCoUnTeR<listLength_123?aUnItCoUnTeR:listLength_123-1];

		}
		if(aUnItCoUnTeR<listLength_124 || useLast_124){
			((m_PTRTO[0]).value.s)[83]=(char)valueList_124[aUnItCoUnTeR<listLength_124?aUnItCoUnTeR:listLength_124-1];

		}
		if(aUnItCoUnTeR<listLength_125 || useLast_125){
			((m_PTRTO[0]).value.s)[103]=(char)valueList_125[aUnItCoUnTeR<listLength_125?aUnItCoUnTeR:listLength_125-1];

		}
		if(aUnItCoUnTeR<listLength_126 || useLast_126){
			((m_PTRTO[0]).value.s)[127]=(char)valueList_126[aUnItCoUnTeR<listLength_126?aUnItCoUnTeR:listLength_126-1];

		}
		if(aUnItCoUnTeR<listLength_127 || useLast_127){
			((m_PTRTO[0]).value.s)[7]=(char)valueList_127[aUnItCoUnTeR<listLength_127?aUnItCoUnTeR:listLength_127-1];

		}
		if(aUnItCoUnTeR<listLength_128 || useLast_128){
			((m_PTRTO[0]).value.s)[31]=(char)valueList_128[aUnItCoUnTeR<listLength_128?aUnItCoUnTeR:listLength_128-1];

		}
		if(aUnItCoUnTeR<listLength_129 || useLast_129){
			((m_PTRTO[0]).value.s)[43]=(char)valueList_129[aUnItCoUnTeR<listLength_129?aUnItCoUnTeR:listLength_129-1];

		}
		if(aUnItCoUnTeR<listLength_130 || useLast_130){
			((m_PTRTO[0]).value.s)[95]=(char)valueList_130[aUnItCoUnTeR<listLength_130?aUnItCoUnTeR:listLength_130-1];

		}
		if(aUnItCoUnTeR<listLength_131 || useLast_131){
			((m_PTRTO[0]).value.s)[79]=(char)valueList_131[aUnItCoUnTeR<listLength_131?aUnItCoUnTeR:listLength_131-1];

		}
		if(aUnItCoUnTeR<listLength_132 || useLast_132){
			((m_PTRTO[0]).value.s)[55]=(char)valueList_132[aUnItCoUnTeR<listLength_132?aUnItCoUnTeR:listLength_132-1];

		}
		if(aUnItCoUnTeR<listLength_133 || useLast_133){
			((m_PTRTO[0]).value.s)[67]=(char)valueList_133[aUnItCoUnTeR<listLength_133?aUnItCoUnTeR:listLength_133-1];

		}
		if(aUnItCoUnTeR<listLength_134 || useLast_134){
			((m_PTRTO[0]).value.s)[39]=(char)valueList_134[aUnItCoUnTeR<listLength_134?aUnItCoUnTeR:listLength_134-1];

		}
		if(aUnItCoUnTeR<listLength_135 || useLast_135){
			((m_PTRTO[0]).value.s)[15]=(char)valueList_135[aUnItCoUnTeR<listLength_135?aUnItCoUnTeR:listLength_135-1];

		}
		if(aUnItCoUnTeR<listLength_136 || useLast_136){
			((m_PTRTO[0]).value.s)[27]=(char)valueList_136[aUnItCoUnTeR<listLength_136?aUnItCoUnTeR:listLength_136-1];

		}
		returnValue = der_cmp(ms,m);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("der_cmp","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("der_tag","der_tag_call_counter",der_tag_call_counter)
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("strncmp","strncmp_call_counter",strncmp_call_counter)
	OB_INT_EXPR("der_data","der_data_call_counter",der_data_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("getlength","getlength_call_counter",getlength_call_counter)
	OB_INT_EXPR("gettag","gettag_call_counter",gettag_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_der_cmp_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_der_cmp_up();

	switch(caseIndex){
	case 8:
		test_der_cmp_8();
		break;
	default:
		abnormal_der_cmp_case(caseIndex);
		break;
	}

	test_der_cmp_down();
}

