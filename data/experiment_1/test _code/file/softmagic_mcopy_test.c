void test_mcopy_up(void);
void test_mcopy_down(void);


void test_mcopy_up(void){

	aunit_printf("\n##FUNCTION_START_mcopy\n");
 }

void test_mcopy_down(void){
	aunit_printf("\n##FUNCTION_END_mcopy\n");
 }



void abnormal_mcopy_case(int index);

void abnormal_mcopy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mcopy_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	union VALUETYPE *p;
	int type;
	int indir;
	unsigned char *s;
	unsigned int offset;
	unsigned int nbytes;
	struct magic *m;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={17};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	struct magic *valueList_4[]={(struct magic *)m_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={3};
	unsigned int listLength_5=1;
	union VALUETYPE *valueList_6[]={(union VALUETYPE *)p_PTRTO};
	unsigned int listLength_6=1;
	unsigned char *valueList_7[]={(unsigned char *)"abc"};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	unsigned short int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={'a'};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={'a'};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={'a'};
	unsigned int listLength_17=1;
	unsigned short int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned short int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned short int valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={'a'};
	unsigned int listLength_21=1;
	unsigned int valueList_22[]={0};
	unsigned int listLength_22=1;
	float valueList_23[]={0};
	unsigned int listLength_23=1;
	int valueList_24[]={0};
	unsigned int listLength_24=1;
	double valueList_25[]={0};
	unsigned int listLength_25=1;
	int valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned short int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={'a'};
	unsigned int listLength_28=1;
	unsigned short int valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={'a'};
	unsigned int listLength_30=1;
	signed char valueList_31[]={'a'};
	unsigned int listLength_31=1;
	unsigned char valueList_32[]={'a'};
	unsigned int listLength_32=1;
	unsigned short int valueList_33[]={0};
	unsigned int listLength_33=1;
	int valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned short int valueList_35[]={0};
	unsigned int listLength_35=1;
	short int valueList_36[]={0};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={'a'};
	unsigned int listLength_37=1;
	int valueList_38[]={0};
	unsigned int listLength_38=1;
	unsigned int valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned int valueList_40[]={0};
	unsigned int listLength_40=1;
	unsigned long long int valueList_41[]={0};
	unsigned int listLength_41=1;
	long long int valueList_42[]={0};
	unsigned int listLength_42=1;
	unsigned int valueList_43[]={0};
	unsigned int listLength_43=1;
	unsigned short int valueList_44[]={0};
	unsigned int listLength_44=1;
	char *valueList_45[]={(char *)0};
	unsigned int listLength_45=1;
	int valueList_46[]={0};
	unsigned int listLength_46=1;
	unsigned char valueList_47[]={'a'};
	unsigned int listLength_47=1;
	unsigned int valueList_48[]={0};
	unsigned int listLength_48=1;
	unsigned char valueList_49[]={'a'};
	unsigned int listLength_49=1;
	unsigned int valueList_50[]={0};
	unsigned int listLength_50=1;
	unsigned char valueList_51[]={'a'};
	unsigned int listLength_51=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memchr_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mcopy_9,false,0\n");
	aunit_printf("#CASE_START_test_mcopy_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			type=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			offset=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			indir=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			m=(struct magic *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			nbytes=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			p=(union VALUETYPE *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			s=(unsigned char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).file=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ms_PTRTO[0]).line=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).flags=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(m_PTRTO[0]).vallen=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(m_PTRTO[0]).reln=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(m_PTRTO[0]).flag=(unsigned short int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(ms_PTRTO[0]).elf_phnum_max=(unsigned short int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(p_PTRTO[0]).f=(float)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(ms_PTRTO[0]).event_flags=(int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(p_PTRTO[0]).d=(double)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(m_PTRTO[0]).in_offset=(int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(p_PTRTO[0]).h=(unsigned short int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(m_PTRTO[0]).mask_op=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(m_PTRTO[0]).in_type=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(p_PTRTO[0]).sb=(signed char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(p_PTRTO[0]).b=(unsigned char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(p_PTRTO[0]).sl=(int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(p_PTRTO[0]).sh=(short int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(m_PTRTO[0]).type=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(m_PTRTO[0]).offset=(int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(p_PTRTO[0]).l=(unsigned int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(p_PTRTO[0]).q=(unsigned long long int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(p_PTRTO[0]).sq=(long long int)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(m_PTRTO[0]).lineno=(unsigned int)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			(ms_PTRTO[0]).error=(int)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			(m_PTRTO[0]).factor=(unsigned char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			(m_PTRTO[0]).cond=(unsigned char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			(ms_PTRTO[0]).bytes_max=(unsigned int)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			(m_PTRTO[0]).in_op=(unsigned char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		returnValue = mcopy(ms,p,type,indir,s,offset,nbytes,m);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mcopy","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memchr","memchr_call_counter",memchr_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_mcopy_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_mcopy_up();

	switch(caseIndex){
	case 9:
		test_mcopy_9();
		break;
	default:
		abnormal_mcopy_case(caseIndex);
		break;
	}

	test_mcopy_down();
}

