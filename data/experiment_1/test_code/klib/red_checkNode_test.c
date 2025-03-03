void test_checkNode_up(void);
void test_checkNode_down(void);


void test_checkNode_up(void){

	aunit_printf("\n##FUNCTION_START_checkNode\n");
 }

void test_checkNode_down(void){
	aunit_printf("\n##FUNCTION_END_checkNode\n");
 }



void abnormal_checkNode_case(int index);

void abnormal_checkNode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_checkNode_11(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Node *node;


	//ֵ�������
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)&node};
	unsigned int listLength_1=1;
	int valueList_2[]={12};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&struct_node2};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)&struct_node1};
	unsigned int listLength_6=1;
	int valueList_7[]={13};
	unsigned int listLength_7=1;
	struct node *valueList_8[]={(struct node *)&struct_node1};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={11};
	unsigned int listLength_10=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=11;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_checkNode_11,false,0\n");
	aunit_printf("#CASE_START_test_checkNode_11\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_node1.left=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.val=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node1.par=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_node2.color=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(node_PTRTO[0]).color=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_node2.left=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).val=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).par=(struct node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_node1.color=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			struct_node2.val=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		checkNode(node);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("checkNode","struct_node2.color",1,struct_node2.color)
	TEST_ASSERT_EQUAL_INT("checkNode","struct_node1.color",0,struct_node1.color)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_checkNode_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_checkNode_up();

	switch(caseIndex){
	case 11:
		test_checkNode_11();
		break;
	default:
		abnormal_checkNode_case(caseIndex);
		break;
	}

	test_checkNode_down();
}

