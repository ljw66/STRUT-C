void test_bsclose_up(void);
void test_bsclose_down(void);


void test_bsclose_up(void){

	aunit_printf("\n##FUNCTION_START_bsclose\n");
 }

void test_bsclose_down(void){
	aunit_printf("\n##FUNCTION_END_bsclose\n");
 }



void abnormal_bsclose_case(int index);

void abnormal_bsclose_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsclose_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsclose_1,false,0\n");
	aunit_printf("#CASE_START_test_bsclose_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = bsclose(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bsclose","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsclose_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsclose_up();

	switch(caseIndex){
	case 1:
		test_bsclose_1();
		break;
	default:
		abnormal_bsclose_case(caseIndex);
		break;
	}

	test_bsclose_down();
}

