void test_sys_getpid_up(void);
void test_sys_getpid_down(void);


void test_sys_getpid_up(void){

	aunit_printf("\n##FUNCTION_START_sys_getpid\n");
 }

void test_sys_getpid_down(void){
	aunit_printf("\n##FUNCTION_END_sys_getpid\n");
 }



void abnormal_sys_getpid_case(int index);

void abnormal_sys_getpid_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_getpid_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_getpid_1,false,0\n");
	aunit_printf("#CASE_START_test_sys_getpid_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_getpid();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_getpid","returnValue",1234,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_getpid_1\n");
}

void test_sys_getpid_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_getpid_2,false,0\n");
	aunit_printf("#CASE_START_test_sys_getpid_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_getpid();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_getpid","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_getpid_2\n");
}

void test_sys_getpid_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_getpid_3,false,0\n");
	aunit_printf("#CASE_START_test_sys_getpid_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_getpid();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_getpid","returnValue",9999,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_getpid_3\n");
}

void test_sys_getpid_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_getpid_4,false,0\n");
	aunit_printf("#CASE_START_test_sys_getpid_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_getpid();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_getpid","returnValue",4294967295,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_getpid_4\n");
}

void test_sys_getpid_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_getpid_5,false,0\n");
	aunit_printf("#CASE_START_test_sys_getpid_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_getpid();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_getpid","returnValue",18446744073709551615,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_getpid_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_getpid_up();

	switch(caseIndex){
	case 1:
		test_sys_getpid_1();
		break;
	case 2:
		test_sys_getpid_2();
		break;
	case 3:
		test_sys_getpid_3();
		break;
	case 4:
		test_sys_getpid_4();
		break;
	case 5:
		test_sys_getpid_5();
		break;
	default:
		abnormal_sys_getpid_case(caseIndex);
		break;
	}

	test_sys_getpid_down();
}

