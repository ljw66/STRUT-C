void test_push_off_up(void);
void test_push_off_down(void);


void test_push_off_up(void){

	aunit_printf("\n##FUNCTION_START_push_off\n");
 }

void test_push_off_down(void){
	aunit_printf("\n##FUNCTION_END_push_off\n");
 }



void abnormal_push_off_case(int index);

void abnormal_push_off_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_push_off_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	intr_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_push_off_1,false,0\n");
	aunit_printf("#CASE_START_test_push_off_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		push_off();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("intr_off","intr_off_call_counter",intr_off_call_counter)

	aunit_printf("#CASE_END_test_push_off_1\n");
}

void test_push_off_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	intr_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_push_off_2,false,0\n");
	aunit_printf("#CASE_START_test_push_off_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		push_off();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("intr_off","intr_off_call_counter",intr_off_call_counter)

	aunit_printf("#CASE_END_test_push_off_2\n");
}

void test_push_off_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	intr_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_push_off_3,false,0\n");
	aunit_printf("#CASE_START_test_push_off_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		push_off();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("intr_off","intr_off_call_counter",intr_off_call_counter)

	aunit_printf("#CASE_END_test_push_off_3\n");
}

void test_push_off_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	intr_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_push_off_4,false,0\n");
	aunit_printf("#CASE_START_test_push_off_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		push_off();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("intr_off","intr_off_call_counter",intr_off_call_counter)

	aunit_printf("#CASE_END_test_push_off_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_push_off_up();

	switch(caseIndex){
	case 1:
		test_push_off_1();
		break;
	case 2:
		test_push_off_2();
		break;
	case 3:
		test_push_off_3();
		break;
	case 4:
		test_push_off_4();
		break;
	default:
		abnormal_push_off_case(caseIndex);
		break;
	}

	test_push_off_down();
}

