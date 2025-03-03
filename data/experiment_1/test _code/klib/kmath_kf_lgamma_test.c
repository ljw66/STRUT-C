void test_kf_lgamma_up(void);
void test_kf_lgamma_down(void);


void test_kf_lgamma_up(void){

	aunit_printf("\n##FUNCTION_START_kf_lgamma\n");
 }

void test_kf_lgamma_down(void){
	aunit_printf("\n##FUNCTION_END_kf_lgamma\n");
 }



void abnormal_kf_lgamma_case(int index);

void abnormal_kf_lgamma_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kf_lgamma_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_2,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",2.078561643135244,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_kf_lgamma_up();

	switch(caseIndex){
	case 2:
		test_kf_lgamma_2();
		break;
	default:
		abnormal_kf_lgamma_case(caseIndex);
		break;
	}

	test_kf_lgamma_down();
}

