void test_enque_up(void);
void test_enque_down(void);


void test_enque_up(void){

	aunit_printf("\n##FUNCTION_START_enque\n");
 }

void test_enque_down(void){
	aunit_printf("\n##FUNCTION_END_enque\n");
 }



void abnormal_enque_case(int index);

void abnormal_enque_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_enque_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int x;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)tmp_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_enque_1,false,0\n");
	aunit_printf("#CASE_START_test_enque_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tmp=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		enque(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("enque","head->data",10,head->data)
	TEST_ASSERT_EQUAL_LONG("enque","tail","head",tail)
	TEST_ASSERT_EQUAL_LONG("enque","head->pre","NULL",head->pre)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_enque_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_enque_up();

	switch(caseIndex){
	case 1:
		test_enque_1();
		break;
	default:
		abnormal_enque_case(caseIndex);
		break;
	}

	test_enque_down();
}

