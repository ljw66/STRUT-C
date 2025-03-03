void test_delete_up(void);
void test_delete_down(void);


void test_delete_up(void){

	aunit_printf("\n##FUNCTION_START_delete\n");
 }

void test_delete_down(void){
	aunit_printf("\n##FUNCTION_END_delete\n");
 }



void abnormal_delete_case(int index);

void abnormal_delete_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *node;
	int queryNum;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	avlNode *valueList_0[]={(avlNode *)node_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={30};
	unsigned int listLength_3=1;
	struct AVLnode *valueList_4[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_4=1;
	int valueList_5[]={20};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode1};
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
	heightDiff_call_counter = 0;
	minNode_call_counter = 0;
	leftRotate_call_counter = 0;
	RightLeftRotate_call_counter = 0;
	max_call_counter = 0;
	nodeHeight_call_counter = 0;
	rightRotate_call_counter = 0;
	free_call_counter = 0;
	LeftRightRotate_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_5,false,0\n");
	aunit_printf("#CASE_START_test_delete_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			queryNum=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode1.key=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode2.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(node_PTRTO[0]).right=(struct AVLnode *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(node_PTRTO[0]).key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).height=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).left=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = delete(node,queryNum);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("delete","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("heightDiff","heightDiff_call_counter",heightDiff_call_counter)
	OB_INT_EXPR("minNode","minNode_call_counter",minNode_call_counter)
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("RightLeftRotate","RightLeftRotate_call_counter",RightLeftRotate_call_counter)
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("LeftRightRotate","LeftRightRotate_call_counter",LeftRightRotate_call_counter)

	aunit_printf("#CASE_END_test_delete_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_up();

	switch(caseIndex){
	case 5:
		test_delete_5();
		break;
	default:
		abnormal_delete_case(caseIndex);
		break;
	}

	test_delete_down();
}

