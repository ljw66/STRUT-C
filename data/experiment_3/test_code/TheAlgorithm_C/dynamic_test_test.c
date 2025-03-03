void test_test_up(void);
void test_test_down(void);


void test_test_up(void){

	aunit_printf("\n##FUNCTION_START_test\n");
 }

void test_test_down(void){
	aunit_printf("\n##FUNCTION_END_test\n");
 }



void abnormal_test_case(int index);

void abnormal_test_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_test_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	create_stack_call_counter = 0;
	show_capacity_call_counter = 0;
	abort_call_counter = 0;
	stack_size_call_counter = 0;
	isempty_call_counter = 0;
	push_call_counter = 0;
	printf_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_1,false,0\n");
	aunit_printf("#CASE_START_test_test_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("create_stack","create_stack_call_counter",create_stack_call_counter)
	OB_INT_EXPR("show_capacity","show_capacity_call_counter",show_capacity_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("stack_size","stack_size_call_counter",stack_size_call_counter)
	OB_INT_EXPR("isempty","isempty_call_counter",isempty_call_counter)
	OB_INT_EXPR("push","push_call_counter",push_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_test_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_test_up();

	switch(caseIndex){
	case 1:
		test_test_1();
		break;
	default:
		abnormal_test_case(caseIndex);
		break;
	}

	test_test_down();
}

