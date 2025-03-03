void test_km_init_up(void);
void test_km_init_down(void);


void test_km_init_up(void){

	aunit_printf("\n##FUNCTION_START_km_init\n");
 }

void test_km_init_down(void){
	aunit_printf("\n##FUNCTION_END_km_init\n");
 }



void abnormal_km_init_case(int index);

void abnormal_km_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_init_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	km_init2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init_1,false,0\n");
	aunit_printf("#CASE_START_test_km_init_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = km_init();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("km_init","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_init2","km_init2_call_counter",km_init2_call_counter)

	aunit_printf("#CASE_END_test_km_init_1\n");
}

void test_km_init_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	km_init2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init_2,false,0\n");
	aunit_printf("#CASE_START_test_km_init_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = km_init();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("km_init","returnValue",12345,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_init2","km_init2_call_counter",km_init2_call_counter)

	aunit_printf("#CASE_END_test_km_init_2\n");
}

void test_km_init_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	km_init2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init_3,false,0\n");
	aunit_printf("#CASE_START_test_km_init_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = km_init();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("km_init","returnValue",67890,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_init2","km_init2_call_counter",km_init2_call_counter)

	aunit_printf("#CASE_END_test_km_init_3\n");
}

void test_km_init_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	km_init2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init_4,false,0\n");
	aunit_printf("#CASE_START_test_km_init_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = km_init();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("km_init","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_init2","km_init2_call_counter",km_init2_call_counter)

	aunit_printf("#CASE_END_test_km_init_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_init_up();

	switch(caseIndex){
	case 1:
		test_km_init_1();
		break;
	case 2:
		test_km_init_2();
		break;
	case 3:
		test_km_init_3();
		break;
	case 4:
		test_km_init_4();
		break;
	default:
		abnormal_km_init_case(caseIndex);
		break;
	}

	test_km_init_down();
}

