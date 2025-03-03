void test_cdf_unpack_catalog_up(void);
void test_cdf_unpack_catalog_down(void);


void test_cdf_unpack_catalog_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_unpack_catalog\n");
 }

void test_cdf_unpack_catalog_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_unpack_catalog\n");
 }



void abnormal_cdf_unpack_catalog_case(int index);

void abnormal_cdf_unpack_catalog_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_unpack_catalog_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_header_t *h;
	cdf_stream_t *sst;
	cdf_catalog_t **cat;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_stream_t *valueList_0[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)123};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x01020304};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={12345};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={100};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	cdf_malloc_call_counter = 0;
	memcpy_call_counter = 0;
	_cdf_tole8_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	cdf_check_stream_call_counter = 0;
	_cdf_tole4_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_catalog_8,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_catalog_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sst=(cdf_stream_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(sst_PTRTO[0]).sst_tab=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			cdf_bo.u=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sst_PTRTO[0]).sst_len=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = cdf_unpack_catalog(h,sst,cat);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_unpack_catalog","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_malloc","cdf_malloc_call_counter",cdf_malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("cdf_check_stream","cdf_check_stream_call_counter",cdf_check_stream_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_catalog_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_unpack_catalog_up();

	switch(caseIndex){
	case 8:
		test_cdf_unpack_catalog_8();
		break;
	default:
		abnormal_cdf_unpack_catalog_case(caseIndex);
		break;
	}

	test_cdf_unpack_catalog_down();
}

