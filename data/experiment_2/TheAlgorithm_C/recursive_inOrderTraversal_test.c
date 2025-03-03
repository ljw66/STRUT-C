void test_inOrderTraversal_up(void);
void test_inOrderTraversal_down(void);


void test_inOrderTraversal_up(void){

	aunit_printf("\n##FUNCTION_START_inOrderTraversal\n");
 }

void test_inOrderTraversal_down(void){
	aunit_printf("\n##FUNCTION_END_inOrderTraversal\n");
 }



void abnormal_inOrderTraversal_case(int index);

void abnormal_inOrderTraversal_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_inOrderTraversal_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct node *node;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)node_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_inOrderTraversal_1,false,0\n");
	aunit_printf("#CASE_START_test_inOrderTraversal_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		inOrderTraversal(node);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_inOrderTraversal_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_inOrderTraversal_up();

	switch(caseIndex){
	case 1:
		test_inOrderTraversal_1();
		break;
	default:
		abnormal_inOrderTraversal_case(caseIndex);
		break;
	}

	test_inOrderTraversal_down();
}

