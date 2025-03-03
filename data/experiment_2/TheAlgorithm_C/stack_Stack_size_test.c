void test_Stack_size_up(void);
void test_Stack_size_down(void);


void test_Stack_size_up(void){

	aunit_printf("\n##FUNCTION_START_Stack_size\n");
 }

void test_Stack_size_down(void){
	aunit_printf("\n##FUNCTION_END_Stack_size\n");
 }



void abnormal_Stack_size_case(int index);

void abnormal_Stack_size_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Stack_size_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct T *stack;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	//(stack_PTRTO[0]).count is an invalid expression 
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Stack_size_1,false,0\n");
	aunit_printf("#CASE_START_test_Stack_size_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = Stack_size(stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("Stack_size","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_Stack_size_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_Stack_size_up();

	switch(caseIndex){
	case 1:
		test_Stack_size_1();
		break;
	default:
		abnormal_Stack_size_case(caseIndex);
		break;
	}

	test_Stack_size_down();
}

