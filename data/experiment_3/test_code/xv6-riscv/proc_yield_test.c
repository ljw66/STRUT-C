void test_yield_up(void);
void test_yield_down(void);


void test_yield_up(void){

	aunit_printf("\n##FUNCTION_START_yield\n");
 }

void test_yield_down(void){
	aunit_printf("\n##FUNCTION_END_yield\n");
 }



void abnormal_yield_case(int index);

void abnormal_yield_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_yield_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	sched_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_yield_5,false,0\n");
	aunit_printf("#CASE_START_test_yield_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		yield();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sched","sched_call_counter",sched_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_yield_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_yield_up();

	switch(caseIndex){
	case 5:
		test_yield_5();
		break;
	default:
		abnormal_yield_case(caseIndex);
		break;
	}

	test_yield_down();
}

