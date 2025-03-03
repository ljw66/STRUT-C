void test_get_default_magic_up(void);
void test_get_default_magic_down(void);


void test_get_default_magic_up(void){

	aunit_printf("\n##FUNCTION_START_get_default_magic\n");
 }

void test_get_default_magic_down(void){
	aunit_printf("\n##FUNCTION_END_get_default_magic\n");
 }



void abnormal_get_default_magic_case(int index);

void abnormal_get_default_magic_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_default_magic_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_default_magic_2,false,0\n");
	aunit_printf("#CASE_START_test_get_default_magic_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = get_default_magic();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("get_default_magic","returnValue","/etc/magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)

	aunit_printf("#CASE_END_test_get_default_magic_2\n");
}

void test_get_default_magic_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_default_magic_3,false,0\n");
	aunit_printf("#CASE_START_test_get_default_magic_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = get_default_magic();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("get_default_magic","returnValue","/home/user/.magic/magic.mgc:/etc/magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)

	aunit_printf("#CASE_END_test_get_default_magic_3\n");
}

void test_get_default_magic_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_default_magic_4,false,0\n");
	aunit_printf("#CASE_START_test_get_default_magic_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = get_default_magic();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("get_default_magic","returnValue","/etc/magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)

	aunit_printf("#CASE_END_test_get_default_magic_4\n");
}

void test_get_default_magic_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_default_magic_5,false,0\n");
	aunit_printf("#CASE_START_test_get_default_magic_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = get_default_magic();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("get_default_magic","returnValue","/etc/magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)

	aunit_printf("#CASE_END_test_get_default_magic_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_default_magic_up();

	switch(caseIndex){
	case 2:
		test_get_default_magic_2();
		break;
	case 3:
		test_get_default_magic_3();
		break;
	case 4:
		test_get_default_magic_4();
		break;
	case 5:
		test_get_default_magic_5();
		break;
	default:
		abnormal_get_default_magic_case(caseIndex);
		break;
	}

	test_get_default_magic_down();
}

