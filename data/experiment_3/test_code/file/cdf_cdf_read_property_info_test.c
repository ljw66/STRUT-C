void test_cdf_read_property_info_up(void);
void test_cdf_read_property_info_down(void);


void test_cdf_read_property_info_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_read_property_info\n");
 }

void test_cdf_read_property_info_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_read_property_info\n");
 }



void abnormal_cdf_read_property_info_case(int index);

void abnormal_cdf_read_property_info_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_read_property_info_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_stream_t *sst;
	cdf_header_t *h;
	unsigned int offs;
	cdf_property_info_t **info;
	size_t *count;
	size_t *maxcount;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	size_t *valueList_2[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_2=1;
	cdf_stream_t *valueList_3[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_3=1;
	cdf_header_t *valueList_4[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_4=1;
	size_t *valueList_5[]={(size_t *)count_PTRTO};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)1024};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	cdf_property_info_t *valueList_9[]={(cdf_property_info_t *)0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={1024};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0};
	unsigned int listLength_11=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	cdf_getuint32_call_counter = 0;
	cdf_check_stream_offset_call_counter = 0;
	cdf_copy_info_call_counter = 0;
	cdf_get_property_info_pos_call_counter = 0;
	_cdf_tole4_call_counter = 0;
	cdf_offset_call_counter = 0;
	cdf_grow_info_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_property_info_9,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_property_info_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			offs=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errno=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			maxcount=(size_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sst=(cdf_stream_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			h=(cdf_header_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			count=(size_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sst_PTRTO[0]).sst_tab=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			maxcount_PTRTO[0]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			*info=(cdf_property_info_t *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(sst_PTRTO[0]).sst_len=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			count_PTRTO[0]=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = cdf_read_property_info(sst,h,offs,info,count,maxcount);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_read_property_info","errno",79,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_property_info","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_getuint32","cdf_getuint32_call_counter",cdf_getuint32_call_counter)
	OB_INT_EXPR("cdf_check_stream_offset","cdf_check_stream_offset_call_counter",cdf_check_stream_offset_call_counter)
	OB_INT_EXPR("cdf_copy_info","cdf_copy_info_call_counter",cdf_copy_info_call_counter)
	OB_INT_EXPR("cdf_get_property_info_pos","cdf_get_property_info_pos_call_counter",cdf_get_property_info_pos_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)
	OB_INT_EXPR("cdf_offset","cdf_offset_call_counter",cdf_offset_call_counter)
	OB_INT_EXPR("cdf_grow_info","cdf_grow_info_call_counter",cdf_grow_info_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_property_info_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_read_property_info_up();

	switch(caseIndex){
	case 9:
		test_cdf_read_property_info_9();
		break;
	default:
		abnormal_cdf_read_property_info_case(caseIndex);
		break;
	}

	test_cdf_read_property_info_down();
}

