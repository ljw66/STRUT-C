void test_ksw_u8_up(void);
void test_ksw_u8_down(void);


void test_ksw_u8_up(void){

	aunit_printf("\n##FUNCTION_START_ksw_u8\n");
 }

void test_ksw_u8_down(void){
	aunit_printf("\n##FUNCTION_END_ksw_u8\n");
 }



void abnormal_ksw_u8_case(int index);

void abnormal_ksw_u8_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksw_u8_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kswq_t *q;
	int tlen;
	uint8_t *target;
	int _gapo;
	int _gape;
	int xtra;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kswr_t returnValue;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	uint8_t *valueList_1[]={(uint8_t *)"abc"};
	unsigned int listLength_1=1;
	kswq_t *valueList_2[]={(kswq_t *)q_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={3};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={4};
	unsigned int listLength_7=1;
	__m128i *valueList_8[]={(__m128i *)0};
	unsigned int listLength_8=1;
	__m128i *valueList_9[]={(__m128i *)0};
	unsigned int listLength_9=1;
	__m128i *valueList_10[]={(__m128i *)0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={3};
	unsigned int listLength_11=1;
	__m128i *valueList_12[]={(__m128i *)0};
	unsigned int listLength_12=1;
	int valueList_13[]={10};
	unsigned int listLength_13=1;
	int valueList_14[]={5};
	unsigned int listLength_14=1;
	__m128i *valueList_15[]={(__m128i *)0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={2};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={5};
	unsigned int listLength_17=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	_mm_adds_epu8_call_counter = 0;
	__builtin_ia32_psrldqi128_call_counter = 0;
	_mm_max_epu8_call_counter = 0;
	_mm_movemask_epi8_call_counter = 0;
	realloc_call_counter = 0;
	_mm_load_si128_call_counter = 0;
	__builtin_ia32_pslldqi128_call_counter = 0;
	_mm_subs_epu8_call_counter = 0;
	__builtin_ia32_vec_ext_v8hi_call_counter = 0;
	_mm_set1_epi8_call_counter = 0;
	free_call_counter = 0;
	_mm_set1_epi32_call_counter = 0;
	_mm_cmpeq_epi8_call_counter = 0;
	_mm_store_si128_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_u8_6,false,0\n");
	aunit_printf("#CASE_START_test_ksw_u8_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_gape=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			target=(uint8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			q=(kswq_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_gapo=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			xtra=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			tlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			g_defr.score=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(q_PTRTO[0]).max=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(q_PTRTO[0]).Hmax=(__m128i *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(q_PTRTO[0]).H1=(__m128i *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(q_PTRTO[0]).E=(__m128i *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(q_PTRTO[0]).mdiff=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(q_PTRTO[0]).H0=(__m128i *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(q_PTRTO[0]).qlen=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(q_PTRTO[0]).slen=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(q_PTRTO[0]).qp=(__m128i *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(q_PTRTO[0]).shift=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(q_PTRTO[0]).size=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		returnValue = ksw_u8(q,tlen,target,_gapo,_gape,xtra);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ksw_u8","g_defr.score",0,g_defr.score)
	TEST_ASSERT_EQUAL_INT("ksw_u8","returnValue.score",255,returnValue.score)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_mm_adds_epu8","_mm_adds_epu8_call_counter",_mm_adds_epu8_call_counter)
	OB_INT_EXPR("__builtin_ia32_psrldqi128","__builtin_ia32_psrldqi128_call_counter",__builtin_ia32_psrldqi128_call_counter)
	OB_INT_EXPR("_mm_max_epu8","_mm_max_epu8_call_counter",_mm_max_epu8_call_counter)
	OB_INT_EXPR("_mm_movemask_epi8","_mm_movemask_epi8_call_counter",_mm_movemask_epi8_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("_mm_load_si128","_mm_load_si128_call_counter",_mm_load_si128_call_counter)
	OB_INT_EXPR("__builtin_ia32_pslldqi128","__builtin_ia32_pslldqi128_call_counter",__builtin_ia32_pslldqi128_call_counter)
	OB_INT_EXPR("_mm_subs_epu8","_mm_subs_epu8_call_counter",_mm_subs_epu8_call_counter)
	OB_INT_EXPR("__builtin_ia32_vec_ext_v8hi","__builtin_ia32_vec_ext_v8hi_call_counter",__builtin_ia32_vec_ext_v8hi_call_counter)
	OB_INT_EXPR("_mm_set1_epi8","_mm_set1_epi8_call_counter",_mm_set1_epi8_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("_mm_set1_epi32","_mm_set1_epi32_call_counter",_mm_set1_epi32_call_counter)
	OB_INT_EXPR("_mm_cmpeq_epi8","_mm_cmpeq_epi8_call_counter",_mm_cmpeq_epi8_call_counter)
	OB_INT_EXPR("_mm_store_si128","_mm_store_si128_call_counter",_mm_store_si128_call_counter)

	aunit_printf("#CASE_END_test_ksw_u8_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksw_u8_up();

	switch(caseIndex){
	case 6:
		test_ksw_u8_6();
		break;
	default:
		abnormal_ksw_u8_case(caseIndex);
		break;
	}

	test_ksw_u8_down();
}

