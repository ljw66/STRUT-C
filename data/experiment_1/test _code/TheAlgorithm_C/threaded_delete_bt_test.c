void test_delete_bt_up(void);
void test_delete_bt_down(void);


void test_delete_bt_up(void){

	aunit_printf("\n##FUNCTION_START_delete_bt\n");
 }

void test_delete_bt_down(void){
	aunit_printf("\n##FUNCTION_END_delete_bt\n");
 }



void abnormal_delete_bt_case(int index);

void abnormal_delete_bt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_bt_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	node **root;
	int ele;


	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_bt_10,false,0\n");
	aunit_printf("#CASE_START_test_delete_bt_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ele=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		delete_bt(root,ele);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_bt_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_bt_up();

	switch(caseIndex){
	case 10:
		test_delete_bt_10();
		break;
	default:
		abnormal_delete_bt_case(caseIndex);
		break;
	}

	test_delete_bt_down();
}

