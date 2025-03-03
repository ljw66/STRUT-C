void test_Stack_push_up(void);
void test_Stack_push_down(void);


void test_Stack_push_up(void){

	aunit_printf("\n##FUNCTION_START_Stack_push\n");
 }

void test_Stack_push_down(void){
	aunit_printf("\n##FUNCTION_END_Stack_push\n");
 }



void abnormal_Stack_push_case(int index);

void abnormal_Stack_push_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Stack_push_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct T *stack;
	void *val;


	//ֵ�������
	struct T *valueList_0[]={(struct T *)stack_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Stack_push_1,false,0\n");
	aunit_printf("#CASE_START_test_Stack_push_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		Stack_push(stack,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_Stack_push_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_Stack_push_up();

	switch(caseIndex){
	case 1:
		test_Stack_push_1();
		break;
	default:
		abnormal_Stack_push_case(caseIndex);
		break;
	}

	test_Stack_push_down();
}

