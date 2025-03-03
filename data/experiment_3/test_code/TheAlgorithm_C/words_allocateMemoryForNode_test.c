void test_allocateMemoryForNode_up(void);
void test_allocateMemoryForNode_down(void);


void test_allocateMemoryForNode_up(void){

	aunit_printf("\n##FUNCTION_START_allocateMemoryForNode\n");
 }

void test_allocateMemoryForNode_down(void){
	aunit_printf("\n##FUNCTION_END_allocateMemoryForNode\n");
 }



void abnormal_allocateMemoryForNode_case(int index);

void abnormal_allocateMemoryForNode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_allocateMemoryForNode_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Node *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocateMemoryForNode_1,false,0\n");
	aunit_printf("#CASE_START_test_allocateMemoryForNode_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = allocateMemoryForNode();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("allocateMemoryForNode","returnValue","0x1000",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_allocateMemoryForNode_1\n");
}

void test_allocateMemoryForNode_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Node *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocateMemoryForNode_2,false,0\n");
	aunit_printf("#CASE_START_test_allocateMemoryForNode_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = allocateMemoryForNode();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("allocateMemoryForNode","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_allocateMemoryForNode_2\n");
}

void test_allocateMemoryForNode_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Node *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocateMemoryForNode_3,false,0\n");
	aunit_printf("#CASE_START_test_allocateMemoryForNode_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = allocateMemoryForNode();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("allocateMemoryForNode","returnValue","0x2000",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_allocateMemoryForNode_3\n");
}

void test_allocateMemoryForNode_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Node *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocateMemoryForNode_4,false,0\n");
	aunit_printf("#CASE_START_test_allocateMemoryForNode_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = allocateMemoryForNode();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("allocateMemoryForNode","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_allocateMemoryForNode_4\n");
}

void test_allocateMemoryForNode_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Node *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocateMemoryForNode_5,false,0\n");
	aunit_printf("#CASE_START_test_allocateMemoryForNode_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = allocateMemoryForNode();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("allocateMemoryForNode","returnValue","0x3000",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_allocateMemoryForNode_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_allocateMemoryForNode_up();

	switch(caseIndex){
	case 1:
		test_allocateMemoryForNode_1();
		break;
	case 2:
		test_allocateMemoryForNode_2();
		break;
	case 3:
		test_allocateMemoryForNode_3();
		break;
	case 4:
		test_allocateMemoryForNode_4();
		break;
	case 5:
		test_allocateMemoryForNode_5();
		break;
	default:
		abnormal_allocateMemoryForNode_case(caseIndex);
		break;
	}

	test_allocateMemoryForNode_down();
}

