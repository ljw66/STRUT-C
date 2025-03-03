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

void test_createqueue_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)0};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_createqueue_1,false,0\n");
	aunit_printf("#CASE_START_test_createqueue_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		createqueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_createqueue_1\n");
}

void test_createqueue_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)1};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)1};
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
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		createqueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("createqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("createqueue","q.front",0,q.front)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_createqueue_2\n");
}

void test_createqueue_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)3};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_createqueue_3,false,0\n");
	aunit_printf("#CASE_START_test_createqueue_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		createqueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("createqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("createqueue","q.front",0,q.front)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_createqueue_3\n");
}

void test_createqueue_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_createqueue_4,false,0\n");
	aunit_printf("#CASE_START_test_createqueue_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		createqueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("createqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("createqueue","q.front",0,q.front)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_createqueue_4\n");
}

void test_createqueue_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_createqueue_5,false,0\n");
	aunit_printf("#CASE_START_test_createqueue_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		createqueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("createqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("createqueue","q.front",0,q.front)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_createqueue_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_createqueue_up();

	switch(caseIndex){
	case 1:
		test_createqueue_1();
		break;
	case 2:
		test_createqueue_2();
		break;
	case 3:
		test_createqueue_3();
		break;
	case 4:
		test_createqueue_4();
		break;
	case 5:
		test_createqueue_5();
		break;
	default:
		abnormal_createqueue_case(caseIndex);
		break;
	}

	test_createqueue_down();
}

