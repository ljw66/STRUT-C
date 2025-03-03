void test_iter_up(void);
void test_iter_down(void);


void test_iter_up(void){

	aunit_printf("\n##FUNCTION_START_iter\n");
 }

void test_iter_down(void){
	aunit_printf("\n##FUNCTION_END_iter\n");
 }



void abnormal_iter_case(int index);

void abnormal_iter_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_iter_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_1,false,0\n");
	aunit_printf("#CASE_START_test_iter_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",7177,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_1\n");
}

void test_iter_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_2,false,0\n");
	aunit_printf("#CASE_START_test_iter_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",0,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_2\n");
}

void test_iter_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_3,false,0\n");
	aunit_printf("#CASE_START_test_iter_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",31,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_3\n");
}

void test_iter_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_4,false,0\n");
	aunit_printf("#CASE_START_test_iter_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",31,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_4\n");
}

void test_iter_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	fork_call_counter = 0;
	wait_call_counter = 0;
	unlink_call_counter = 0;
	go_call_counter = 0;
	kill_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_iter_5,false,0\n");
	aunit_printf("#CASE_START_test_iter_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		iter();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("iter","rand_next",7177,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("go","go_call_counter",go_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_iter_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_iter_up();

	switch(caseIndex){
	case 1:
		test_iter_1();
		break;
	case 2:
		test_iter_2();
		break;
	case 3:
		test_iter_3();
		break;
	case 4:
		test_iter_4();
		break;
	case 5:
		test_iter_5();
		break;
	default:
		abnormal_iter_case(caseIndex);
		break;
	}

	test_iter_down();
}

