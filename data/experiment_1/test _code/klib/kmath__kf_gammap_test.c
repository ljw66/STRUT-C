void test__kf_gammap_up(void);
void test__kf_gammap_down(void);


void test__kf_gammap_up(void){

	aunit_printf("\n##FUNCTION_START__kf_gammap\n");
 }

void test__kf_gammap_down(void){
	aunit_printf("\n##FUNCTION_END__kf_gammap\n");
 }



void abnormal__kf_gammap_case(int index);

void abnormal__kf_gammap_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test__kf_gammap_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double s;
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={-1};
	unsigned int listLength_0=1;
	double valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;
	kf_lgamma_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test__kf_gammap_7,false,0\n");
	aunit_printf("#CASE_START_test__kf_gammap_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = _kf_gammap(s,z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("_kf_gammap","returnValue",0.367879441171,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("kf_lgamma","kf_lgamma_call_counter",kf_lgamma_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test__kf_gammap_7\n");
}

void aunit_test_func_run(int caseIndex){

	test__kf_gammap_up();

	switch(caseIndex){
	case 7:
		test__kf_gammap_7();
		break;
	default:
		abnormal__kf_gammap_case(caseIndex);
		break;
	}

	test__kf_gammap_down();
}

