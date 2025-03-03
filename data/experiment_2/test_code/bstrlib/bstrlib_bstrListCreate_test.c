void test_bstrListCreate_up(void);
void test_bstrListCreate_down(void);


void test_bstrListCreate_up(void){

	aunit_printf("\n##FUNCTION_START_bstrListCreate\n");
 }

void test_bstrListCreate_down(void){
	aunit_printf("\n##FUNCTION_END_bstrListCreate\n");
 }



void abnormal_bstrListCreate_case(int index);

void abnormal_bstrListCreate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bstrListCreate_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bstrList *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bstrListCreate_5,false,0\n");
	aunit_printf("#CASE_START_test_bstrListCreate_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = bstrListCreate();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bstrListCreate","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_bstrListCreate_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bstrListCreate_up();

	switch(caseIndex){
	case 5:
		test_bstrListCreate_5();
		break;
	default:
		abnormal_bstrListCreate_case(caseIndex);
		break;
	}

	test_bstrListCreate_down();
}

