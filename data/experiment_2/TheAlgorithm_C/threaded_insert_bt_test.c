void test_insert_bt_up(void);
void test_insert_bt_down(void);


void test_insert_bt_up(void){

	aunit_printf("\n##FUNCTION_START_insert_bt\n");
 }

void test_insert_bt_down(void){
	aunit_printf("\n##FUNCTION_END_insert_bt\n");
 }



void abnormal_insert_bt_case(int index);

void abnormal_insert_bt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insert_bt_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	node **root;
	int data;


	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_bt_1,false,0\n");
	aunit_printf("#CASE_START_test_insert_bt_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		insert_bt(root,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_bt_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_insert_bt_up();

	switch(caseIndex){
	case 1:
		test_insert_bt_1();
		break;
	default:
		abnormal_insert_bt_case(caseIndex);
		break;
	}

	test_insert_bt_down();
}

