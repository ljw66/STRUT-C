void test_kf_erfc_up(void);
void test_kf_erfc_down(void);


void test_kf_erfc_up(void){

	aunit_printf("\n##FUNCTION_START_kf_erfc\n");
 }

void test_kf_erfc_down(void){
	aunit_printf("\n##FUNCTION_END_kf_erfc\n");
 }



void abnormal_kf_erfc_case(int index);

void abnormal_kf_erfc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kf_erfc_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_8,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_erfc","returnValue",9.07998595249697e-05,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_kf_erfc_up();

	switch(caseIndex){
	case 8:
		test_kf_erfc_8();
		break;
	default:
		abnormal_kf_erfc_case(caseIndex);
		break;
	}

	test_kf_erfc_down();
}

