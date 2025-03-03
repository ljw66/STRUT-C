void test_fname_print_up(void);
void test_fname_print_down(void);


void test_fname_print_up(void){

	aunit_printf("\n##FUNCTION_START_fname_print\n");
 }

void test_fname_print_down(void){
	aunit_printf("\n##FUNCTION_END_fname_print\n");
 }



void abnormal_fname_print_case(int index);

void abnormal_fname_print_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fname_print_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *inname;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	putc_call_counter = 0;
	strlen_call_counter = 0;
	file_octal_call_counter = 0;
	isprint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fname_print_1,false,0\n");
	aunit_printf("#CASE_START_test_fname_print_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdout=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inname=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(stdout_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		fname_print(inname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putc","putc_call_counter",putc_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("file_octal","file_octal_call_counter",file_octal_call_counter)
	OB_INT_EXPR("isprint","isprint_call_counter",isprint_call_counter)

	aunit_printf("#CASE_END_test_fname_print_1\n");
}

void test_fname_print_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *inname;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"a\x01c"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	putc_call_counter = 0;
	strlen_call_counter = 0;
	file_octal_call_counter = 0;
	isprint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fname_print_2,false,0\n");
	aunit_printf("#CASE_START_test_fname_print_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdout=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inname=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(stdout_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		fname_print(inname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putc","putc_call_counter",putc_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("file_octal","file_octal_call_counter",file_octal_call_counter)
	OB_INT_EXPR("isprint","isprint_call_counter",isprint_call_counter)

	aunit_printf("#CASE_END_test_fname_print_2\n");
}

void test_fname_print_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *inname;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	putc_call_counter = 0;
	strlen_call_counter = 0;
	file_octal_call_counter = 0;
	isprint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fname_print_3,false,0\n");
	aunit_printf("#CASE_START_test_fname_print_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdout=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stdout_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fname_print(inname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putc","putc_call_counter",putc_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("file_octal","file_octal_call_counter",file_octal_call_counter)
	OB_INT_EXPR("isprint","isprint_call_counter",isprint_call_counter)

	aunit_printf("#CASE_END_test_fname_print_3\n");
}

void test_fname_print_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *inname;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"\x01\x02\x03"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	putc_call_counter = 0;
	strlen_call_counter = 0;
	file_octal_call_counter = 0;
	isprint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fname_print_4,false,0\n");
	aunit_printf("#CASE_START_test_fname_print_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdout=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inname=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(stdout_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		fname_print(inname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putc","putc_call_counter",putc_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("file_octal","file_octal_call_counter",file_octal_call_counter)
	OB_INT_EXPR("isprint","isprint_call_counter",isprint_call_counter)

	aunit_printf("#CASE_END_test_fname_print_4\n");
}

void test_fname_print_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *inname;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"a\x01b\x02c"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	putc_call_counter = 0;
	strlen_call_counter = 0;
	file_octal_call_counter = 0;
	isprint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fname_print_5,false,0\n");
	aunit_printf("#CASE_START_test_fname_print_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdout=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			inname=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(stdout_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		fname_print(inname);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putc","putc_call_counter",putc_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("file_octal","file_octal_call_counter",file_octal_call_counter)
	OB_INT_EXPR("isprint","isprint_call_counter",isprint_call_counter)

	aunit_printf("#CASE_END_test_fname_print_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_fname_print_up();

	switch(caseIndex){
	case 1:
		test_fname_print_1();
		break;
	case 2:
		test_fname_print_2();
		break;
	case 3:
		test_fname_print_3();
		break;
	case 4:
		test_fname_print_4();
		break;
	case 5:
		test_fname_print_5();
		break;
	default:
		abnormal_fname_print_case(caseIndex);
		break;
	}

	test_fname_print_down();
}

