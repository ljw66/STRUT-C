void test_file_warn_up(void);
void test_file_warn_down(void);


void test_file_warn_up(void){

	aunit_printf("\n##FUNCTION_START_file_warn\n");
 }

void test_file_warn_down(void){
	aunit_printf("\n##FUNCTION_END_file_warn\n");
 }



void abnormal_file_warn_case(int index);

void abnormal_file_warn_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_warn_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *fmt;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"Simple message"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	strerror_call_counter = 0;
	vfprintf_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_warn_1,false,0\n");
	aunit_printf("#CASE_START_test_file_warn_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stderr=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fmt=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		file_warn(fmt);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_warn","errno",0,errno)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("vfprintf","vfprintf_call_counter",vfprintf_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_file_warn_1\n");
}

void test_file_warn_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *fmt;


	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"Error occurred"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strerror_call_counter = 0;
	vfprintf_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_warn_2,false,0\n");
	aunit_printf("#CASE_START_test_file_warn_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stderr=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fmt=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		file_warn(fmt);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_warn","errno",5,errno)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("vfprintf","vfprintf_call_counter",vfprintf_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_file_warn_2\n");
}

void test_file_warn_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *fmt;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	strerror_call_counter = 0;
	vfprintf_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_warn_3,false,0\n");
	aunit_printf("#CASE_START_test_file_warn_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stderr=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		file_warn(fmt);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_warn","errno",0,errno)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("vfprintf","vfprintf_call_counter",vfprintf_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_file_warn_3\n");
}

void test_file_warn_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *fmt;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"Unexpected state"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={2};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	strerror_call_counter = 0;
	vfprintf_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_warn_4,false,0\n");
	aunit_printf("#CASE_START_test_file_warn_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stderr=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fmt=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		file_warn(fmt);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_warn","errno",0,errno)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("vfprintf","vfprintf_call_counter",vfprintf_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_file_warn_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_warn_up();

	switch(caseIndex){
	case 1:
		test_file_warn_1();
		break;
	case 2:
		test_file_warn_2();
		break;
	case 3:
		test_file_warn_3();
		break;
	case 4:
		test_file_warn_4();
		break;
	default:
		abnormal_file_warn_case(caseIndex);
		break;
	}

	test_file_warn_down();
}

