void test_cdf_zero_stream_up(void);
void test_cdf_zero_stream_down(void);


void test_cdf_zero_stream_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_zero_stream\n");
 }

void test_cdf_zero_stream_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_zero_stream\n");
 }



void abnormal_cdf_zero_stream_case(int index);

void abnormal_cdf_zero_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_zero_stream_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_stream_t *scn;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_stream_t *valueList_0[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_zero_stream_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_zero_stream_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			scn=(cdf_stream_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(scn_PTRTO[0]).sst_ss=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(scn_PTRTO[0]).sst_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(scn_PTRTO[0]).sst_dirlen=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_zero_stream(scn);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_zero_stream","scn->sst_ss",0,scn->sst_ss)
	TEST_ASSERT_EQUAL_INT("cdf_zero_stream","returnValue",-1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_zero_stream","scn->sst_dirlen",0,scn->sst_dirlen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_zero_stream","scn->sst_len",0,scn->sst_len)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_zero_stream_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_zero_stream_up();

	switch(caseIndex){
	case 1:
		test_cdf_zero_stream_1();
		break;
	default:
		abnormal_cdf_zero_stream_case(caseIndex);
		break;
	}

	test_cdf_zero_stream_down();
}

