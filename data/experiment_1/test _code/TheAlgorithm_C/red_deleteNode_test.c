void test_deleteNode_up(void);
void test_deleteNode_down(void);


void test_deleteNode_up(void){

	aunit_printf("\n##FUNCTION_START_deleteNode\n");
 }

void test_deleteNode_down(void){
	aunit_printf("\n##FUNCTION_END_deleteNode\n");
 }



void abnormal_deleteNode_case(int index);

void abnormal_deleteNode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_deleteNode_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int val;
	Node **root;


	//ֵ�������
	int valueList_0[]={20};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	printf_call_counter = 0;
	checkForCase2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_deleteNode_9,false,0\n");
	aunit_printf("#CASE_START_test_deleteNode_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		deleteNode(val,root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("checkForCase2","checkForCase2_call_counter",checkForCase2_call_counter)

	aunit_printf("#CASE_END_test_deleteNode_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_deleteNode_up();

	switch(caseIndex){
	case 9:
		test_deleteNode_9();
		break;
	default:
		abnormal_deleteNode_case(caseIndex);
		break;
	}

	test_deleteNode_down();
}

