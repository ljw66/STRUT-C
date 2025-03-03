void test_insert_at_tail_up(void);
void test_insert_at_tail_down(void);


void test_insert_at_tail_up(void){

	aunit_printf("\n##FUNCTION_START_insert_at_tail\n");
 }

void test_insert_at_tail_down(void){
	aunit_printf("\n##FUNCTION_END_insert_at_tail\n");
 }



void abnormal_insert_at_tail_case(int index);

void abnormal_insert_at_tail_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insert_at_tail_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *head;
	unsigned long long int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *returnValue = 0;

	//ֵ�������
	unsigned long long int valueList_0[]={42};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_tail_1,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_tail_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = insert_at_tail(head,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("insert_at_tail","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_tail_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_insert_at_tail_up();

	switch(caseIndex){
	case 1:
		test_insert_at_tail_1();
		break;
	default:
		abnormal_insert_at_tail_case(caseIndex);
		break;
	}

	test_insert_at_tail_down();
}

