void test_cpuid_up(void);
void test_cpuid_down(void);


void test_cpuid_up(void){

	aunit_printf("\n##FUNCTION_START_cpuid\n");
 }

void test_cpuid_down(void){
	aunit_printf("\n##FUNCTION_END_cpuid\n");
 }



void abnormal_cpuid_case(int index);

void abnormal_cpuid_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cpuid_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	r_tp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cpuid_1,false,0\n");
	aunit_printf("#CASE_START_test_cpuid_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cpuid();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cpuid","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("r_tp","r_tp_call_counter",r_tp_call_counter)

	aunit_printf("#CASE_END_test_cpuid_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_cpuid_up();

	switch(caseIndex){
	case 1:
		test_cpuid_1();
		break;
	default:
		abnormal_cpuid_case(caseIndex);
		break;
	}

	test_cpuid_down();
}

