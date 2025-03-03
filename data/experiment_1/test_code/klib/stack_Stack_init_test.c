void test_Stack_init_up(void);
void test_Stack_init_down(void);


void test_Stack_init_up(void){

	aunit_printf("\n##FUNCTION_START_Stack_init\n");
 }

void test_Stack_init_down(void){
	aunit_printf("\n##FUNCTION_END_Stack_init\n");
 }



void abnormal_Stack_init_case(int index);

void abnormal_Stack_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Stack_init_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Stack_T *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Stack_init_2,false,0\n");
	aunit_printf("#CASE_START_test_Stack_init_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = Stack_init();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("Stack_init","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_Stack_init_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_Stack_init_up();

	switch(caseIndex){
	case 2:
		test_Stack_init_2();
		break;
	default:
		abnormal_Stack_init_case(caseIndex);
		break;
	}

	test_Stack_init_down();
}

