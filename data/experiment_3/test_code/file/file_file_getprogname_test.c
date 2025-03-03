void test_file_getprogname_up(void);
void test_file_getprogname_down(void);


void test_file_getprogname_up(void){

	aunit_printf("\n##FUNCTION_START_file_getprogname\n");
 }

void test_file_getprogname_down(void){
	aunit_printf("\n##FUNCTION_END_file_getprogname\n");
 }



void abnormal_file_getprogname_case(int index);

void abnormal_file_getprogname_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_getprogname_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"my_program"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_getprogname_1,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file_progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = file_getprogname();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("file_getprogname","returnValue","my_program",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_getprogname_1\n");
}

void test_file_getprogname_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_getprogname_2,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = file_getprogname();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("file_getprogname","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_getprogname_2\n");
}

void test_file_getprogname_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_getprogname_3,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = file_getprogname();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("file_getprogname","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_getprogname_3\n");
}

void test_file_getprogname_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"prog@123"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_getprogname_4,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file_progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = file_getprogname();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("file_getprogname","returnValue","prog@123",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_getprogname_4\n");
}

void test_file_getprogname_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_getprogname_5,false,0\n");
	aunit_printf("#CASE_START_test_file_getprogname_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = file_getprogname();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("file_getprogname","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_getprogname_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_getprogname_up();

	switch(caseIndex){
	case 1:
		test_file_getprogname_1();
		break;
	case 2:
		test_file_getprogname_2();
		break;
	case 3:
		test_file_getprogname_3();
		break;
	case 4:
		test_file_getprogname_4();
		break;
	case 5:
		test_file_getprogname_5();
		break;
	default:
		abnormal_file_getprogname_case(caseIndex);
		break;
	}

	test_file_getprogname_down();
}

