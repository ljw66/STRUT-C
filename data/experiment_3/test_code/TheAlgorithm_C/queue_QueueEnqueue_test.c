void test_QueueEnqueue_up(void);
void test_QueueEnqueue_down(void);


void test_QueueEnqueue_up(void){

	aunit_printf("\n##FUNCTION_START_QueueEnqueue\n");
 }

void test_QueueEnqueue_down(void){
	aunit_printf("\n##FUNCTION_END_QueueEnqueue\n");
 }



void abnormal_QueueEnqueue_case(int index);

void abnormal_QueueEnqueue_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_QueueEnqueue_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct QueueRep *Q;
	int v;


	//ֵ�������
	struct QueueRep *valueList_0[]={(struct QueueRep *)Q_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={30};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)NULL};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	NodeT *valueList_5[]={(NodeT *)&struct_node2};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	NodeT *valueList_7[]={(NodeT *)&struct_node1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_QueueEnqueue_2,false,0\n");
	aunit_printf("#CASE_START_test_QueueEnqueue_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			Q=(struct QueueRep *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node2.data=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node2.next=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_node1.data=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(Q_PTRTO[0]).tail=(NodeT *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(Q_PTRTO[0]).length=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(Q_PTRTO[0]).head=(NodeT *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		QueueEnqueue(Q,v);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("QueueEnqueue","Q->length",3,Q->length)
	TEST_ASSERT_EQUAL_INT("QueueEnqueue","Q->tail->data",30,Q->tail->data)
	TEST_ASSERT_EQUAL_LONG("QueueEnqueue","Q->tail->next","NULL",Q->tail->next)
	TEST_ASSERT_EQUAL_LONG("QueueEnqueue","struct_node2.next","&new_node",struct_node2.next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_QueueEnqueue_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_QueueEnqueue_up();

	switch(caseIndex){
	case 2:
		test_QueueEnqueue_2();
		break;
	default:
		abnormal_QueueEnqueue_case(caseIndex);
		break;
	}

	test_QueueEnqueue_down();
}

