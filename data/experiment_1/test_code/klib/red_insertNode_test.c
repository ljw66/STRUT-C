void test_insertNode_up(void);
void test_insertNode_down(void);


void test_insertNode_up(void){

	aunit_printf("\n##FUNCTION_START_insertNode\n");
 }

void test_insertNode_down(void){
	aunit_printf("\n##FUNCTION_END_insertNode\n");
 }



void abnormal_insertNode_case(int index);

void abnormal_insertNode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insertNode_11(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int val;
	Node **root;


	//ֵ�������
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=11;
	//��ʼ����׮�������ü�����
	checkNode_call_counter = 0;
	newNode_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insertNode_11,false,0\n");
	aunit_printf("#CASE_START_test_insertNode_11\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		insertNode(val,root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("checkNode","checkNode_call_counter",checkNode_call_counter)
	OB_INT_EXPR("newNode","newNode_call_counter",newNode_call_counter)

	aunit_printf("#CASE_END_test_insertNode_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_insertNode_up();

	switch(caseIndex){
	case 11:
		test_insertNode_11();
		break;
	default:
		abnormal_insertNode_case(caseIndex);
		break;
	}

	test_insertNode_down();
}

