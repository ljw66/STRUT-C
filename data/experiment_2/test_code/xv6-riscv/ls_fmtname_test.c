void test_fmtname_up(void);
void test_fmtname_down(void);


void test_fmtname_up(void){

	aunit_printf("\n##FUNCTION_START_fmtname\n");
 }

void test_fmtname_down(void){
	aunit_printf("\n##FUNCTION_END_fmtname\n");
 }



void abnormal_fmtname_case(int index);

void abnormal_fmtname_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fmtname_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	memmove_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtname_1,false,0\n");
	aunit_printf("#CASE_START_test_fmtname_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = fmtname(path);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("fmtname","returnValue","abc           ",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_fmtname_1\n");
}

void test_fmtname_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"/usr/bin/test"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	memmove_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtname_2,false,0\n");
	aunit_printf("#CASE_START_test_fmtname_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = fmtname(path);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("fmtname","returnValue","test          ",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_fmtname_2\n");
}

void test_fmtname_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"/usr/bin/longfilename"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	memmove_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtname_3,false,0\n");
	aunit_printf("#CASE_START_test_fmtname_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = fmtname(path);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("fmtname","returnValue","longfilename",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_fmtname_3\n");
}

void test_fmtname_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"/usr/bin/verylongfilename"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	memmove_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtname_4,false,0\n");
	aunit_printf("#CASE_START_test_fmtname_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = fmtname(path);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("fmtname","returnValue","verylongfilename",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_fmtname_4\n");
}

void test_fmtname_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"fourteencharss"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	memmove_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtname_5,false,0\n");
	aunit_printf("#CASE_START_test_fmtname_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = fmtname(path);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("fmtname","returnValue","fourteencharss",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_fmtname_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_fmtname_up();

	switch(caseIndex){
	case 1:
		test_fmtname_1();
		break;
	case 2:
		test_fmtname_2();
		break;
	case 3:
		test_fmtname_3();
		break;
	case 4:
		test_fmtname_4();
		break;
	case 5:
		test_fmtname_5();
		break;
	default:
		abnormal_fmtname_case(caseIndex);
		break;
	}

	test_fmtname_down();
}

