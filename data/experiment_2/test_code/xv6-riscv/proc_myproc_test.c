void test_myproc_up(void);
void test_myproc_down(void);


void test_myproc_up(void){

	aunit_printf("\n##FUNCTION_START_myproc\n");
 }

void test_myproc_down(void){
	aunit_printf("\n##FUNCTION_END_myproc\n");
 }



void abnormal_myproc_case(int index);

void abnormal_myproc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_myproc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct proc *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_1,false,0\n");
	aunit_printf("#CASE_START_test_myproc_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = myproc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","proc[0]",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_1\n");
}

void test_myproc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct proc *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_2,false,0\n");
	aunit_printf("#CASE_START_test_myproc_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = myproc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","proc[0]",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_2\n");
}

void test_myproc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct proc *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_3,false,0\n");
	aunit_printf("#CASE_START_test_myproc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = myproc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","proc[0]",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_3\n");
}

void test_myproc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct proc *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_4,false,0\n");
	aunit_printf("#CASE_START_test_myproc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = myproc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","proc[0]",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_4\n");
}

void test_myproc_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct proc *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_5,false,0\n");
	aunit_printf("#CASE_START_test_myproc_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = myproc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","proc[0]",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_myproc_up();

	switch(caseIndex){
	case 1:
		test_myproc_1();
		break;
	case 2:
		test_myproc_2();
		break;
	case 3:
		test_myproc_3();
		break;
	case 4:
		test_myproc_4();
		break;
	case 5:
		test_myproc_5();
		break;
	default:
		abnormal_myproc_case(caseIndex);
		break;
	}

	test_myproc_down();
}

