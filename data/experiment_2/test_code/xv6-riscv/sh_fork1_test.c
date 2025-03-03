void test_fork1_up(void);
void test_fork1_down(void);


void test_fork1_up(void){

	aunit_printf("\n##FUNCTION_START_fork1\n");
 }

void test_fork1_down(void){
	aunit_printf("\n##FUNCTION_END_fork1\n");
 }



void abnormal_fork1_case(int index);

void abnormal_fork1_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fork1_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	fork_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fork1_1,false,0\n");
	aunit_printf("#CASE_START_test_fork1_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = fork1();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fork1","returnValue",1234,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fork1_1\n");
}

void test_fork1_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	fork_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fork1_2,false,0\n");
	aunit_printf("#CASE_START_test_fork1_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = fork1();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fork1","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fork1_2\n");
}

void test_fork1_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	fork_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fork1_3,false,0\n");
	aunit_printf("#CASE_START_test_fork1_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = fork1();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fork1","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fork1_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_fork1_up();

	switch(caseIndex){
	case 1:
		test_fork1_1();
		break;
	case 2:
		test_fork1_2();
		break;
	case 3:
		test_fork1_3();
		break;
	default:
		abnormal_fork1_case(caseIndex);
		break;
	}

	test_fork1_down();
}

