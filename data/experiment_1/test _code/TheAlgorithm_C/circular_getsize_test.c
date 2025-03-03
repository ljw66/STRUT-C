void test_getsize_up(void);
void test_getsize_down(void);


void test_getsize_up(void){

	aunit_printf("\n##FUNCTION_START_getsize\n");
 }

void test_getsize_down(void){
	aunit_printf("\n##FUNCTION_END_getsize\n");
 }



void abnormal_getsize_case(int index);

void abnormal_getsize_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getsize_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ListNode *head;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_getsize_1,false,0\n");
	aunit_printf("#CASE_START_test_getsize_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = getsize(head);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("getsize","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_getsize_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_getsize_up();

	switch(caseIndex){
	case 1:
		test_getsize_1();
		break;
	default:
		abnormal_getsize_case(caseIndex);
		break;
	}

	test_getsize_down();
}

