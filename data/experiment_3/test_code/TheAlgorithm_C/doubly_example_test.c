void test_example_up(void);
void test_example_down(void);


void test_example_up(void){

	aunit_printf("\n##FUNCTION_START_example\n");
 }

void test_example_down(void){
	aunit_printf("\n##FUNCTION_END_example\n");
 }



void abnormal_example_case(int index);

void abnormal_example_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_example_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	search_call_counter = 0;
	insert_call_counter = 0;
	create_call_counter = 0;
	delete_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_example_1,false,0\n");
	aunit_printf("#CASE_START_test_example_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		example();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("search","search_call_counter",search_call_counter)
	OB_INT_EXPR("insert","insert_call_counter",insert_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_example_1\n");
}

void test_example_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	search_call_counter = 0;
	insert_call_counter = 0;
	create_call_counter = 0;
	delete_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_example_2,false,0\n");
	aunit_printf("#CASE_START_test_example_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		example();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("search","search_call_counter",search_call_counter)
	OB_INT_EXPR("insert","insert_call_counter",insert_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_example_2\n");
}

void test_example_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	search_call_counter = 0;
	insert_call_counter = 0;
	create_call_counter = 0;
	delete_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_example_3,false,0\n");
	aunit_printf("#CASE_START_test_example_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		example();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("search","search_call_counter",search_call_counter)
	OB_INT_EXPR("insert","insert_call_counter",insert_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_example_3\n");
}

void test_example_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	search_call_counter = 0;
	insert_call_counter = 0;
	create_call_counter = 0;
	delete_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_example_4,false,0\n");
	aunit_printf("#CASE_START_test_example_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		example();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("search","search_call_counter",search_call_counter)
	OB_INT_EXPR("insert","insert_call_counter",insert_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_example_4\n");
}

void test_example_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	search_call_counter = 0;
	insert_call_counter = 0;
	create_call_counter = 0;
	delete_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_example_5,false,0\n");
	aunit_printf("#CASE_START_test_example_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		example();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("search","search_call_counter",search_call_counter)
	OB_INT_EXPR("insert","insert_call_counter",insert_call_counter)
	OB_INT_EXPR("create","create_call_counter",create_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_example_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_example_up();

	switch(caseIndex){
	case 1:
		test_example_1();
		break;
	case 2:
		test_example_2();
		break;
	case 3:
		test_example_3();
		break;
	case 4:
		test_example_4();
		break;
	case 5:
		test_example_5();
		break;
	default:
		abnormal_example_case(caseIndex);
		break;
	}

	test_example_down();
}

