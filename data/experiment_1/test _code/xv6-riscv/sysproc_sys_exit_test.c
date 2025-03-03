void test_sys_exit_up(void);
void test_sys_exit_down(void);


void test_sys_exit_up(void){

	aunit_printf("\n##FUNCTION_START_sys_exit\n");
 }

void test_sys_exit_down(void){
	aunit_printf("\n##FUNCTION_END_sys_exit\n");
 }



void abnormal_sys_exit_case(int index);

void abnormal_sys_exit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_exit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	argint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_exit_1,false,0\n");
	aunit_printf("#CASE_START_test_sys_exit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_exit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_exit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)

	aunit_printf("#CASE_END_test_sys_exit_1\n");
}

void test_sys_exit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	argint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_exit_2,false,0\n");
	aunit_printf("#CASE_START_test_sys_exit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_exit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_exit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)

	aunit_printf("#CASE_END_test_sys_exit_2\n");
}

void test_sys_exit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	argint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_exit_3,false,0\n");
	aunit_printf("#CASE_START_test_sys_exit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_exit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_exit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)

	aunit_printf("#CASE_END_test_sys_exit_3\n");
}

void test_sys_exit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	argint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_exit_4,false,0\n");
	aunit_printf("#CASE_START_test_sys_exit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_exit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_exit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)

	aunit_printf("#CASE_END_test_sys_exit_4\n");
}

void test_sys_exit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	argint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_exit_5,false,0\n");
	aunit_printf("#CASE_START_test_sys_exit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_exit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_exit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)

	aunit_printf("#CASE_END_test_sys_exit_5\n");
}

void test_sys_exit_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	argint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_exit_6,false,0\n");
	aunit_printf("#CASE_START_test_sys_exit_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_exit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_exit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)

	aunit_printf("#CASE_END_test_sys_exit_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_exit_up();

	switch(caseIndex){
	case 1:
		test_sys_exit_1();
		break;
	case 2:
		test_sys_exit_2();
		break;
	case 3:
		test_sys_exit_3();
		break;
	case 4:
		test_sys_exit_4();
		break;
	case 5:
		test_sys_exit_5();
		break;
	case 6:
		test_sys_exit_6();
		break;
	default:
		abnormal_sys_exit_case(caseIndex);
		break;
	}

	test_sys_exit_down();
}

