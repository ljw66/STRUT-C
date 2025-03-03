void test_createqueue_up(void);
void test_createqueue_down(void);


void test_createqueue_up(void){

	aunit_printf("\n##FUNCTION_START_createqueue\n");
 }

void test_createqueue_down(void){
	aunit_printf("\n##FUNCTION_END_createqueue\n");
 }



void abnormal_createqueue_case(int index);

void abnormal_createqueue_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_createqueue_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_createqueue_1,false,0\n");
	aunit_printf("#CASE_START_test_createqueue_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		createqueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("createqueue","rear","NULL",rear)
	TEST_ASSERT_EQUAL_LONG("createqueue","front","NULL",front)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_createqueue_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_createqueue_up();

	switch(caseIndex){
	case 1:
		test_createqueue_1();
		break;
	default:
		abnormal_createqueue_case(caseIndex);
		break;
	}

	test_createqueue_down();
}

