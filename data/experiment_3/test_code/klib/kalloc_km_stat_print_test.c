void test_km_stat_print_up(void);
void test_km_stat_print_down(void);


void test_km_stat_print_up(void){

	aunit_printf("\n##FUNCTION_START_km_stat_print\n");
 }

void test_km_stat_print_down(void){
	aunit_printf("\n##FUNCTION_END_km_stat_print\n");
 }



void abnormal_km_stat_print_case(int index);

void abnormal_km_stat_print_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_stat_print_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	km_stat_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_stat_print_1,false,0\n");
	aunit_printf("#CASE_START_test_km_stat_print_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		km_stat_print(km);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_stat","km_stat_call_counter",km_stat_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_km_stat_print_1\n");
}

void test_km_stat_print_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	km_stat_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_stat_print_2,false,0\n");
	aunit_printf("#CASE_START_test_km_stat_print_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		km_stat_print(km);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_stat","km_stat_call_counter",km_stat_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_km_stat_print_2\n");
}

void test_km_stat_print_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
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
	km_stat_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_stat_print_3,false,0\n");
	aunit_printf("#CASE_START_test_km_stat_print_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		km_stat_print(km);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_stat","km_stat_call_counter",km_stat_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_km_stat_print_3\n");
}

void test_km_stat_print_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	km_stat_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_stat_print_4,false,0\n");
	aunit_printf("#CASE_START_test_km_stat_print_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		km_stat_print(km);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_stat","km_stat_call_counter",km_stat_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_km_stat_print_4\n");
}

void test_km_stat_print_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	km_stat_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_stat_print_5,false,0\n");
	aunit_printf("#CASE_START_test_km_stat_print_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		km_stat_print(km);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("km_stat","km_stat_call_counter",km_stat_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_km_stat_print_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_stat_print_up();

	switch(caseIndex){
	case 1:
		test_km_stat_print_1();
		break;
	case 2:
		test_km_stat_print_2();
		break;
	case 3:
		test_km_stat_print_3();
		break;
	case 4:
		test_km_stat_print_4();
		break;
	case 5:
		test_km_stat_print_5();
		break;
	default:
		abnormal_km_stat_print_case(caseIndex);
		break;
	}

	test_km_stat_print_down();
}

