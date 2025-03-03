void test_file_setprogname_up(void);
void test_file_setprogname_down(void);


void test_file_setprogname_up(void){

	aunit_printf("\n##FUNCTION_START_file_setprogname\n");
 }

void test_file_setprogname_down(void){
	aunit_printf("\n##FUNCTION_END_file_setprogname\n");
 }



void abnormal_file_setprogname_case(int index);

void abnormal_file_setprogname_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_setprogname_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *progname;


	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_setprogname_1,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","abc",file_progname)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_setprogname_1\n");
}

void test_file_setprogname_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *progname;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_setprogname_2,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		file_setprogname(progname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_setprogname_2\n");
}

void test_file_setprogname_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *progname;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_setprogname_3,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		file_setprogname(progname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_setprogname_3\n");
}

void test_file_setprogname_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *progname;


	//ֵ�������
	char *valueList_0[]={(char *)"this_is_a_very_long_program_name_string"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_setprogname_4,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","this_is_a_very_long_program_name_string",file_progname)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_setprogname_4\n");
}

void test_file_setprogname_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *progname;


	//ֵ�������
	char *valueList_0[]={(char *)"!@#$%^&*()_+"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_setprogname_5,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","!@#$%^&*()_+",file_progname)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_setprogname_5\n");
}

void test_file_setprogname_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *progname;


	//ֵ�������
	char *valueList_0[]={(char *)"   leading_and_trailing_whitespace   "};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_setprogname_6,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","   leading_and_trailing_whitespace   ",file_progname)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_setprogname_6\n");
}

void test_file_setprogname_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *progname;


	//ֵ�������
	char *valueList_0[]={(char *)"�����ԧ�ѧާާ�"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_setprogname_7,false,0\n");
	aunit_printf("#CASE_START_test_file_setprogname_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			progname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_setprogname(progname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("file_setprogname","file_progname","�����ԧ�ѧާާ�",file_progname)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_setprogname_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_setprogname_up();

	switch(caseIndex){
	case 1:
		test_file_setprogname_1();
		break;
	case 2:
		test_file_setprogname_2();
		break;
	case 3:
		test_file_setprogname_3();
		break;
	case 4:
		test_file_setprogname_4();
		break;
	case 5:
		test_file_setprogname_5();
		break;
	case 6:
		test_file_setprogname_6();
		break;
	case 7:
		test_file_setprogname_7();
		break;
	default:
		abnormal_file_setprogname_case(caseIndex);
		break;
	}

	test_file_setprogname_down();
}

