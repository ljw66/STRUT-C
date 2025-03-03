void test_insert_up(void);
void test_insert_down(void);


void test_insert_up(void){

	aunit_printf("\n##FUNCTION_START_insert\n");
 }

void test_insert_down(void){
	aunit_printf("\n##FUNCTION_END_insert\n");
 }



void abnormal_insert_case(int index);

void abnormal_insert_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insert_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *node;
	int key;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	avlNode *valueList_0[]={(avlNode *)node_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={30};
	unsigned int listLength_1=1;
	struct AVLnode *valueList_2[]={(struct AVLnode *)node_PTRTO_1_left_PTRTO};
	unsigned int listLength_2=1;
	struct AVLnode *valueList_3[]={(struct AVLnode *)node_PTRTO_1_right_PTRTO};
	unsigned int listLength_3=1;
	int valueList_4[]={20};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	heightDiff_call_counter = 0;
	leftRotate_call_counter = 0;
	RightLeftRotate_call_counter = 0;
	max_call_counter = 0;
	newNode_call_counter = 0;
	nodeHeight_call_counter = 0;
	rightRotate_call_counter = 0;
	LeftRightRotate_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_3,false,0\n");
	aunit_printf("#CASE_START_test_insert_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			key=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(node_PTRTO[1]).left=(struct AVLnode *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(node_PTRTO[1]).right=(struct AVLnode *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(node_PTRTO[0]).key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(node_PTRTO[0]).height=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = insert(node,key);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("insert","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("heightDiff","heightDiff_call_counter",heightDiff_call_counter)
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("RightLeftRotate","RightLeftRotate_call_counter",RightLeftRotate_call_counter)
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("newNode","newNode_call_counter",newNode_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)
	OB_INT_EXPR("LeftRightRotate","LeftRightRotate_call_counter",LeftRightRotate_call_counter)

	aunit_printf("#CASE_END_test_insert_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_insert_up();

	switch(caseIndex){
	case 3:
		test_insert_3();
		break;
	default:
		abnormal_insert_case(caseIndex);
		break;
	}

	test_insert_down();
}

