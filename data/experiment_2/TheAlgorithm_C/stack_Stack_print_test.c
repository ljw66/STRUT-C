void test_Stack_print_up(void);
void test_Stack_print_down(void);


void test_Stack_print_up(void){

	aunit_printf("\n##FUNCTION_START_Stack_print\n");
 }

void test_Stack_print_down(void){
	aunit_printf("\n##FUNCTION_END_Stack_print\n");
 }



void abnormal_Stack_print_case(int index);

void abnormal_Stack_print_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Stack_print_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct T *stack;


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
	case_id=2;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	Stack_size_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Stack_print_2,false,0\n");
	aunit_printf("#CASE_START_test_Stack_print_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			stack->count=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			stack->head=(elem_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		Stack_print(stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("Stack_size","Stack_size_call_counter",Stack_size_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_Stack_print_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_Stack_print_up();

	switch(caseIndex){
	case 2:
		test_Stack_print_2();
		break;
	default:
		abnormal_Stack_print_case(caseIndex);
		break;
	}

	test_Stack_print_down();
}

