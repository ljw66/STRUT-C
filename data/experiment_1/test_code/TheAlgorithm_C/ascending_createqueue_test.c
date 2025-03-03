void test_createqueue_up(void);
void test_createqueue_down(void);


void test_createqueue_up(void){

	aunit_printf("\n##FUNCTION_START_createqueue\n");
 }

void test_createqueue_down(void){
	aunit_printf("\n##FUNCTION_END_createqueue\n");
 }



void abnormal_createqueue_case(int index);

void abnormal_createqueue_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_createqueue_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)rear_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)front_PTRTO};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_createqueue_2,false,0\n");
	aunit_printf("#CASE_START_test_createqueue_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		createqueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("createqueue","rear","NULL",rear)
	TEST_ASSERT_EQUAL_LONG("createqueue","front","NULL",front)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_createqueue_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_createqueue_up();

	switch(caseIndex){
	case 2:
		test_createqueue_2();
		break;
	default:
		abnormal_createqueue_case(caseIndex);
		break;
	}

	test_createqueue_down();
}

