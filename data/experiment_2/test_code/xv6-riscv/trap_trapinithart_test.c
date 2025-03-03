void test_trapinithart_up(void);
void test_trapinithart_down(void);


void test_trapinithart_up(void){

	aunit_printf("\n##FUNCTION_START_trapinithart\n");
 }

void test_trapinithart_down(void){
	aunit_printf("\n##FUNCTION_END_trapinithart\n");
 }



void abnormal_trapinithart_case(int index);

void abnormal_trapinithart_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_trapinithart_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	w_stvec_call_counter = 0;
	kernelvec_call_counter = 0;

	aunit_printf("###TEST_TREE_test_trapinithart_1,false,0\n");
	aunit_printf("#CASE_START_test_trapinithart_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		trapinithart();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stvec","w_stvec_call_counter",w_stvec_call_counter)
	OB_INT_EXPR("kernelvec","kernelvec_call_counter",kernelvec_call_counter)

	aunit_printf("#CASE_END_test_trapinithart_1\n");
}

void test_trapinithart_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	w_stvec_call_counter = 0;
	kernelvec_call_counter = 0;

	aunit_printf("###TEST_TREE_test_trapinithart_2,false,0\n");
	aunit_printf("#CASE_START_test_trapinithart_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		trapinithart();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stvec","w_stvec_call_counter",w_stvec_call_counter)
	OB_INT_EXPR("kernelvec","kernelvec_call_counter",kernelvec_call_counter)

	aunit_printf("#CASE_END_test_trapinithart_2\n");
}

void test_trapinithart_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	w_stvec_call_counter = 0;
	kernelvec_call_counter = 0;

	aunit_printf("###TEST_TREE_test_trapinithart_3,false,0\n");
	aunit_printf("#CASE_START_test_trapinithart_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		trapinithart();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stvec","w_stvec_call_counter",w_stvec_call_counter)
	OB_INT_EXPR("kernelvec","kernelvec_call_counter",kernelvec_call_counter)

	aunit_printf("#CASE_END_test_trapinithart_3\n");
}

void test_trapinithart_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	w_stvec_call_counter = 0;
	kernelvec_call_counter = 0;

	aunit_printf("###TEST_TREE_test_trapinithart_4,false,0\n");
	aunit_printf("#CASE_START_test_trapinithart_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		trapinithart();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stvec","w_stvec_call_counter",w_stvec_call_counter)
	OB_INT_EXPR("kernelvec","kernelvec_call_counter",kernelvec_call_counter)

	aunit_printf("#CASE_END_test_trapinithart_4\n");
}

void test_trapinithart_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	w_stvec_call_counter = 0;
	kernelvec_call_counter = 0;

	aunit_printf("###TEST_TREE_test_trapinithart_5,false,0\n");
	aunit_printf("#CASE_START_test_trapinithart_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		trapinithart();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stvec","w_stvec_call_counter",w_stvec_call_counter)
	OB_INT_EXPR("kernelvec","kernelvec_call_counter",kernelvec_call_counter)

	aunit_printf("#CASE_END_test_trapinithart_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_trapinithart_up();

	switch(caseIndex){
	case 1:
		test_trapinithart_1();
		break;
	case 2:
		test_trapinithart_2();
		break;
	case 3:
		test_trapinithart_3();
		break;
	case 4:
		test_trapinithart_4();
		break;
	case 5:
		test_trapinithart_5();
		break;
	default:
		abnormal_trapinithart_case(caseIndex);
		break;
	}

	test_trapinithart_down();
}

