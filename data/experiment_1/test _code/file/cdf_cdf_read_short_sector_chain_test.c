void test_cdf_read_short_sector_chain_up(void);
void test_cdf_read_short_sector_chain_down(void);


void test_cdf_read_short_sector_chain_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_read_short_sector_chain\n");
 }

void test_cdf_read_short_sector_chain_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_read_short_sector_chain\n");
 }



void abnormal_cdf_read_short_sector_chain_case(int index);

void abnormal_cdf_read_short_sector_chain_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_read_short_sector_chain_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_header_t *h;
	cdf_sat_t *ssat;
	cdf_stream_t *sst;
	int sid;
	unsigned int len;
	cdf_stream_t *scn;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={32};
	unsigned int listLength_0=1;
	cdf_sat_t *valueList_1[]={(cdf_sat_t *)ssat_PTRTO};
	unsigned int listLength_1=1;
	cdf_stream_t *valueList_2[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_2=1;
	cdf_header_t *valueList_3[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_3=1;
	int valueList_4[]={-1};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_5=1;
	cdf_secid_t *valueList_6[]={(cdf_secid_t *)0x1000};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={9};
	unsigned int listLength_7=1;
	unsigned short int valueList_8[]={6};
	unsigned int listLength_8=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	cdf_count_chain_call_counter = 0;
	cdf_zero_stream_call_counter = 0;
	_cdf_tole4_call_counter = 0;
	cdf_read_short_sector_call_counter = 0;
	cdf_calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_short_sector_chain_7,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_short_sector_chain_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ssat=(cdf_sat_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sst=(cdf_stream_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			h=(cdf_header_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			sid=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			scn=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ssat_PTRTO[0]).sat_tab=(cdf_secid_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = cdf_read_short_sector_chain(h,ssat,sst,sid,len,scn);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_read_short_sector_chain","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_short_sector_chain","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_count_chain","cdf_count_chain_call_counter",cdf_count_chain_call_counter)
	OB_INT_EXPR("cdf_zero_stream","cdf_zero_stream_call_counter",cdf_zero_stream_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)
	OB_INT_EXPR("cdf_read_short_sector","cdf_read_short_sector_call_counter",cdf_read_short_sector_call_counter)
	OB_INT_EXPR("cdf_calloc","cdf_calloc_call_counter",cdf_calloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_short_sector_chain_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_read_short_sector_chain_up();

	switch(caseIndex){
	case 7:
		test_cdf_read_short_sector_chain_7();
		break;
	default:
		abnormal_cdf_read_short_sector_chain_case(caseIndex);
		break;
	}

	test_cdf_read_short_sector_chain_down();
}

