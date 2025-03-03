void test_insert_at_head_up(void);
void test_insert_at_head_down(void);


void test_insert_at_head_up(void){

	aunit_printf("\n##FUNCTION_START_insert_at_head\n");
 }

void test_insert_at_head_down(void){
	aunit_printf("\n##FUNCTION_END_insert_at_head\n");
 }



void abnormal_insert_at_head_case(int index);

void abnormal_insert_at_head_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insert_at_head_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *head;
	unsigned long long int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *returnValue = 0;

	//ֵ�������
	ListNode *valueList_0[]={(ListNode *)head_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={25};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={100};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)NULL};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)&struct_node1};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={50};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_head_2,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_head_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.value=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(head_PTRTO[0]).next=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head_PTRTO[0]).prev=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).value=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = insert_at_head(head,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("insert_at_head","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->value",50,head->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->prev->value",25,head->prev->value)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_head_2\n");
}

void test_insert_at_head_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *head;
	unsigned long long int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *returnValue = 0;

	//ֵ�������
	ListNode *valueList_0[]={(ListNode *)head_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={75};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={100};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={200};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)&struct_node2};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_node1};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={150};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_head_3,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_head_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.value=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node2.value=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head_PTRTO[0]).next=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).prev=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(head_PTRTO[0]).value=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = insert_at_head(head,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("insert_at_head","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->value",150,head->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->next->value",200,head->next->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->prev->value",75,head->prev->value)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_head_3\n");
}

void test_insert_at_head_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *head;
	unsigned long long int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *returnValue = 0;

	//ֵ�������
	ListNode *valueList_0[]={(ListNode *)head_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={150};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={100};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={200};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)&struct_node2};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_node1};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={150};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_head_4,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_head_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.value=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node2.value=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head_PTRTO[0]).next=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).prev=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(head_PTRTO[0]).value=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = insert_at_head(head,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("insert_at_head","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->value",150,head->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->next->value",200,head->next->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->prev->value",150,head->prev->value)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_head_4\n");
}

void test_insert_at_head_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *head;
	unsigned long long int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *returnValue = 0;

	//ֵ�������
	ListNode *valueList_0[]={(ListNode *)head_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={50};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={100};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={200};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)&head};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_node2};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)&struct_node1};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={150};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_head_5,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_head_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.value=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node2.value=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_node2.next=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).next=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(head_PTRTO[0]).prev=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(head_PTRTO[0]).value=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = insert_at_head(head,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("insert_at_head","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->next->next->value",50,head->next->next->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->value",150,head->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->next->next->value",200,head->next->next->value)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("insert_at_head","head->prev->value",50,head->prev->value)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_head_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_insert_at_head_up();

	switch(caseIndex){
	case 2:
		test_insert_at_head_2();
		break;
	case 3:
		test_insert_at_head_3();
		break;
	case 4:
		test_insert_at_head_4();
		break;
	case 5:
		test_insert_at_head_5();
		break;
	default:
		abnormal_insert_at_head_case(caseIndex);
		break;
	}

	test_insert_at_head_down();
}

