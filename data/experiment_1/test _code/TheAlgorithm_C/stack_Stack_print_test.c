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

void test_Stack_print_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct T *stack;


	//ֵ�������
	struct T *valueList_0[]={(struct T *)stack_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1234};
	unsigned int listLength_1=1;
	struct elem *valueList_2[]={(struct elem *)NULL};
	unsigned int listLength_2=1;
	elem_t *valueList_3[]={(elem_t *)&struct_elem1};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	Stack_size_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Stack_print_3,false,0\n");
	aunit_printf("#CASE_START_test_Stack_print_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_elem1.val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_elem1.next=(struct elem *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(stack_PTRTO[0]).head=(elem_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(stack_PTRTO[0]).count=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		Stack_print(stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("Stack_size","Stack_size_call_counter",Stack_size_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_Stack_print_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_Stack_print_up();

	switch(caseIndex){
	case 3:
		test_Stack_print_3();
		break;
	default:
		abnormal_Stack_print_case(caseIndex);
		break;
	}

	test_Stack_print_down();
}

