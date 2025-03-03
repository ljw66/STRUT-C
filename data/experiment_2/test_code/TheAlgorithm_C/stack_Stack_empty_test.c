void test_Stack_empty_up(void);
void test_Stack_empty_down(void);


void test_Stack_empty_up(void){

	aunit_printf("\n##FUNCTION_START_Stack_empty\n");
 }

void test_Stack_empty_down(void){
	aunit_printf("\n##FUNCTION_END_Stack_empty\n");
 }



void abnormal_Stack_empty_case(int index);

void abnormal_Stack_empty_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Stack_empty_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct T *stack;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	//(stack_PTRTO[0]).head is an invalid expression 
	//(stack_PTRTO[0]).count is an invalid expression 
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	elem_t *valueList_3[]={(elem_t *)0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Stack_empty_1,false,0\n");
	aunit_printf("#CASE_START_test_Stack_empty_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			stack->count=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			stack->head=(elem_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = Stack_empty(stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("Stack_empty","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_Stack_empty_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_Stack_empty_up();

	switch(caseIndex){
	case 1:
		test_Stack_empty_1();
		break;
	default:
		abnormal_Stack_empty_case(caseIndex);
		break;
	}

	test_Stack_empty_down();
}

