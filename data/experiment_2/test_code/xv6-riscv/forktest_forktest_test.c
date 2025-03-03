void test_forktest_up(void);
void test_forktest_down(void);


void test_forktest_up(void){

	aunit_printf("\n##FUNCTION_START_forktest\n");
 }

void test_forktest_down(void){
	aunit_printf("\n##FUNCTION_END_forktest\n");
 }



void abnormal_forktest_case(int index);

void abnormal_forktest_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_forktest_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	fork_call_counter = 0;
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_forktest_1,false,0\n");
	aunit_printf("#CASE_START_test_forktest_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		forktest();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_forktest_1\n");
}

void test_forktest_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	fork_call_counter = 0;
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_forktest_2,false,0\n");
	aunit_printf("#CASE_START_test_forktest_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		forktest();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_forktest_2\n");
}

void test_forktest_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	fork_call_counter = 0;
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_forktest_3,false,0\n");
	aunit_printf("#CASE_START_test_forktest_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		forktest();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_forktest_3\n");
}

void test_forktest_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	fork_call_counter = 0;
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_forktest_4,false,0\n");
	aunit_printf("#CASE_START_test_forktest_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		forktest();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_forktest_4\n");
}

void test_forktest_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	wait_call_counter = 0;
	fork_call_counter = 0;
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_forktest_5,false,0\n");
	aunit_printf("#CASE_START_test_forktest_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		forktest();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_forktest_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_forktest_up();

	switch(caseIndex){
	case 1:
		test_forktest_1();
		break;
	case 2:
		test_forktest_2();
		break;
	case 3:
		test_forktest_3();
		break;
	case 4:
		test_forktest_4();
		break;
	case 5:
		test_forktest_5();
		break;
	default:
		abnormal_forktest_case(caseIndex);
		break;
	}

	test_forktest_down();
}

