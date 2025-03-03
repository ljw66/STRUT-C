void test_initStack_up(void);
void test_initStack_down(void);


void test_initStack_up(void){

	aunit_printf("\n##FUNCTION_START_initStack\n");
 }

void test_initStack_down(void){
	aunit_printf("\n##FUNCTION_END_initStack\n");
 }



void abnormal_initStack_case(int index);

void abnormal_initStack_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_initStack_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	//*array is an invalid expression 
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_initStack_1,false,0\n");
	aunit_printf("#CASE_START_test_initStack_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		initStack();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_initStack_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_initStack_up();

	switch(caseIndex){
	case 1:
		test_initStack_1();
		break;
	default:
		abnormal_initStack_case(caseIndex);
		break;
	}

	test_initStack_down();
}

