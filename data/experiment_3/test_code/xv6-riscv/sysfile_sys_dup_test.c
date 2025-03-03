void test_sys_dup_up(void);
void test_sys_dup_down(void);


void test_sys_dup_up(void){

	aunit_printf("\n##FUNCTION_START_sys_dup\n");
 }

void test_sys_dup_down(void){
	aunit_printf("\n##FUNCTION_END_sys_dup\n");
 }



void abnormal_sys_dup_case(int index);

void abnormal_sys_dup_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_dup_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	argfd_call_counter = 0;
	filedup_call_counter = 0;
	fdalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_dup_1,false,0\n");
	aunit_printf("#CASE_START_test_sys_dup_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_dup();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_dup","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("argfd","argfd_call_counter",argfd_call_counter)
	OB_INT_EXPR("filedup","filedup_call_counter",filedup_call_counter)
	OB_INT_EXPR("fdalloc","fdalloc_call_counter",fdalloc_call_counter)

	aunit_printf("#CASE_END_test_sys_dup_1\n");
}

void test_sys_dup_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	argfd_call_counter = 0;
	filedup_call_counter = 0;
	fdalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_dup_2,false,0\n");
	aunit_printf("#CASE_START_test_sys_dup_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_dup();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_dup","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("argfd","argfd_call_counter",argfd_call_counter)
	OB_INT_EXPR("filedup","filedup_call_counter",filedup_call_counter)
	OB_INT_EXPR("fdalloc","fdalloc_call_counter",fdalloc_call_counter)

	aunit_printf("#CASE_END_test_sys_dup_2\n");
}

void test_sys_dup_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	argfd_call_counter = 0;
	filedup_call_counter = 0;
	fdalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_dup_3,false,0\n");
	aunit_printf("#CASE_START_test_sys_dup_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_dup();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_dup","returnValue",4,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("argfd","argfd_call_counter",argfd_call_counter)
	OB_INT_EXPR("filedup","filedup_call_counter",filedup_call_counter)
	OB_INT_EXPR("fdalloc","fdalloc_call_counter",fdalloc_call_counter)

	aunit_printf("#CASE_END_test_sys_dup_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_dup_up();

	switch(caseIndex){
	case 1:
		test_sys_dup_1();
		break;
	case 2:
		test_sys_dup_2();
		break;
	case 3:
		test_sys_dup_3();
		break;
	default:
		abnormal_sys_dup_case(caseIndex);
		break;
	}

	test_sys_dup_down();
}

