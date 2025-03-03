void test_removes_up(void);
void test_removes_down(void);


void test_removes_up(void){

	aunit_printf("\n##FUNCTION_START_removes\n");
 }

void test_removes_down(void){
	aunit_printf("\n##FUNCTION_END_removes\n");
 }



void abnormal_removes_case(int index);

void abnormal_removes_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_removes_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	int valueList_2[]={7};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	free_call_counter = 0;
	printf_call_counter = 0;
	empty_call_counter = 0;

	aunit_printf("###TEST_TREE_test_removes_5,false,0\n");
	aunit_printf("#CASE_START_test_removes_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear->data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front->data=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			q.front->next->data=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = removes();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("removes","returnValue",50,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("empty","empty_call_counter",empty_call_counter)

	aunit_printf("#CASE_END_test_removes_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_removes_up();

	switch(caseIndex){
	case 5:
		test_removes_5();
		break;
	default:
		abnormal_removes_case(caseIndex);
		break;
	}

	test_removes_down();
}

