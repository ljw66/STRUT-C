void test_delete_from_tail_up(void);
void test_delete_from_tail_down(void);


void test_delete_from_tail_up(void){

	aunit_printf("\n##FUNCTION_START_delete_from_tail\n");
 }

void test_delete_from_tail_down(void){
	aunit_printf("\n##FUNCTION_END_delete_from_tail\n");
 }



void abnormal_delete_from_tail_case(int index);

void abnormal_delete_from_tail_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_from_tail_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *head;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_from_tail_1,false,0\n");
	aunit_printf("#CASE_START_test_delete_from_tail_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = delete_from_tail(head);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("delete_from_tail","returnValue","NULL",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_delete_from_tail_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_from_tail_up();

	switch(caseIndex){
	case 1:
		test_delete_from_tail_1();
		break;
	default:
		abnormal_delete_from_tail_case(caseIndex);
		break;
	}

	test_delete_from_tail_down();
}

