void test_test_up(void);
void test_test_down(void);


void test_test_up(void){

	aunit_printf("\n##FUNCTION_START_test\n");
 }

void test_test_down(void){
	aunit_printf("\n##FUNCTION_END_test\n");
 }



void abnormal_test_case(int index);

void abnormal_test_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_test_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_1,false,0\n");
	aunit_printf("#CASE_START_test_test_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_1\n");
}

void test_test_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_2,false,0\n");
	aunit_printf("#CASE_START_test_test_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_2\n");
}

void test_test_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_3,false,0\n");
	aunit_printf("#CASE_START_test_test_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_3\n");
}

void test_test_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_4,false,0\n");
	aunit_printf("#CASE_START_test_test_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_4\n");
}

void test_test_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_5,false,0\n");
	aunit_printf("#CASE_START_test_test_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_5\n");
}

void test_test_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_6,false,0\n");
	aunit_printf("#CASE_START_test_test_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_6\n");
}

void test_test_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	delete_from_head_call_counter = 0;
	insert_at_tail_call_counter = 0;
	getsize_call_counter = 0;
	abort_call_counter = 0;
	delete_from_tail_call_counter = 0;
	get_call_counter = 0;
	display_list_call_counter = 0;
	insert_at_head_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_7,false,0\n");
	aunit_printf("#CASE_START_test_test_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("delete_from_head","delete_from_head_call_counter",delete_from_head_call_counter)
	OB_INT_EXPR("insert_at_tail","insert_at_tail_call_counter",insert_at_tail_call_counter)
	OB_INT_EXPR("getsize","getsize_call_counter",getsize_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("delete_from_tail","delete_from_tail_call_counter",delete_from_tail_call_counter)
	OB_INT_EXPR("get","get_call_counter",get_call_counter)
	OB_INT_EXPR("display_list","display_list_call_counter",display_list_call_counter)
	OB_INT_EXPR("insert_at_head","insert_at_head_call_counter",insert_at_head_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_test_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_test_up();

	switch(caseIndex){
	case 1:
		test_test_1();
		break;
	case 2:
		test_test_2();
		break;
	case 3:
		test_test_3();
		break;
	case 4:
		test_test_4();
		break;
	case 5:
		test_test_5();
		break;
	case 6:
		test_test_6();
		break;
	case 7:
		test_test_7();
		break;
	default:
		abnormal_test_case(caseIndex);
		break;
	}

	test_test_down();
}

