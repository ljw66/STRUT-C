void test_viewlist_up(void);
void test_viewlist_down(void);


void test_viewlist_up(void){

	aunit_printf("\n##FUNCTION_START_viewlist\n");
 }

void test_viewlist_down(void){
	aunit_printf("\n##FUNCTION_END_viewlist\n");
 }



void abnormal_viewlist_case(int index);

void abnormal_viewlist_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_viewlist_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_viewlist_1,false,0\n");
	aunit_printf("#CASE_START_test_viewlist_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		viewlist();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_viewlist_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_viewlist_up();

	switch(caseIndex){
	case 1:
		test_viewlist_1();
		break;
	default:
		abnormal_viewlist_case(caseIndex);
		break;
	}

	test_viewlist_down();
}

