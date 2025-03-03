void test_newQueue_up(void);
void test_newQueue_down(void);


void test_newQueue_up(void){

	aunit_printf("\n##FUNCTION_START_newQueue\n");
 }

void test_newQueue_down(void){
	aunit_printf("\n##FUNCTION_END_newQueue\n");
 }



void abnormal_newQueue_case(int index);

void abnormal_newQueue_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_newQueue_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	QueueRep *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_newQueue_2,false,0\n");
	aunit_printf("#CASE_START_test_newQueue_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = newQueue();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("newQueue","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_newQueue_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_newQueue_up();

	switch(caseIndex){
	case 2:
		test_newQueue_2();
		break;
	default:
		abnormal_newQueue_case(caseIndex);
		break;
	}

	test_newQueue_down();
}

