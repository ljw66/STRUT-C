void test_Stack_pop_up(void);
void test_Stack_pop_down(void);


void test_Stack_pop_up(void){

	aunit_printf("\n##FUNCTION_START_Stack_pop\n");
 }

void test_Stack_pop_down(void){
	aunit_printf("\n##FUNCTION_END_Stack_pop\n");
 }



void abnormal_Stack_pop_case(int index);

void abnormal_Stack_pop_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Stack_pop_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct T *stack;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	struct T *valueList_0[]={(struct T *)stack_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Stack_pop_1,false,0\n");
	aunit_printf("#CASE_START_test_Stack_pop_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = Stack_pop(stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("Stack_pop","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_Stack_pop_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_Stack_pop_up();

	switch(caseIndex){
	case 1:
		test_Stack_pop_1();
		break;
	default:
		abnormal_Stack_pop_case(caseIndex);
		break;
	}

	test_Stack_pop_down();
}

