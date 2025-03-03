void test_leftRotate_up(void);
void test_leftRotate_down(void);


void test_leftRotate_up(void){

	aunit_printf("\n##FUNCTION_START_leftRotate\n");
 }

void test_leftRotate_down(void){
	aunit_printf("\n##FUNCTION_END_leftRotate\n");
 }



void abnormal_leftRotate_case(int index);

void abnormal_leftRotate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_leftRotate_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Node *node;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Node *returnValue = 0;

	//ֵ�������
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)&node};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	int valueList_3[]={20};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)NULL};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)&struct_parent};
	unsigned int listLength_7=1;
	struct node *valueList_8[]={(struct node *)NULL};
	unsigned int listLength_8=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_leftRotate_3,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_parent.right=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_parent.left=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_parent.val=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_parent.par=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(node_PTRTO[0]).right=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).val=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).par=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).left=(struct node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = leftRotate(node);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_leftRotate_3\n");
}

void test_leftRotate_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Node *node;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Node *returnValue = 0;

	//ֵ�������
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)&node};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)NULL};
	unsigned int listLength_3=1;
	int valueList_4[]={20};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)NULL};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)NULL};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
	unsigned int listLength_7=1;
	struct node *valueList_8[]={(struct node *)&struct_parent};
	unsigned int listLength_8=1;
	struct node *valueList_9[]={(struct node *)&struct_leftChild};
	unsigned int listLength_9=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_leftRotate_4,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_leftChild.val=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_parent.right=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_parent.left=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_parent.val=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_parent.par=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).right=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).val=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).par=(struct node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(node_PTRTO[0]).left=(struct node *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = leftRotate(node);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_leftRotate_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_leftRotate_up();

	switch(caseIndex){
	case 3:
		test_leftRotate_3();
		break;
	case 4:
		test_leftRotate_4();
		break;
	default:
		abnormal_leftRotate_case(caseIndex);
		break;
	}

	test_leftRotate_down();
}

