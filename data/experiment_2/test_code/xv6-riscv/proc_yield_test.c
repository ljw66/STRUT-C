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

void test_yield_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	sched_call_counter = 0;
	mycpu_call_counter = 0;
	release_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_yield_1,false,0\n");
	aunit_printf("#CASE_START_test_yield_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		yield();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sched","sched_call_counter",sched_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_yield_1\n");
}

void test_yield_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	sched_call_counter = 0;
	mycpu_call_counter = 0;
	release_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_yield_2,false,0\n");
	aunit_printf("#CASE_START_test_yield_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		yield();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sched","sched_call_counter",sched_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_yield_2\n");
}

void test_yield_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	sched_call_counter = 0;
	mycpu_call_counter = 0;
	release_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_yield_3,false,0\n");
	aunit_printf("#CASE_START_test_yield_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		yield();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sched","sched_call_counter",sched_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_yield_3\n");
}

void test_yield_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	sched_call_counter = 0;
	mycpu_call_counter = 0;
	release_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_yield_4,false,0\n");
	aunit_printf("#CASE_START_test_yield_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		yield();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("sched","sched_call_counter",sched_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_yield_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_yield_up();

	switch(caseIndex){
	case 1:
		test_yield_1();
		break;
	case 2:
		test_yield_2();
		break;
	case 3:
		test_yield_3();
		break;
	case 4:
		test_yield_4();
		break;
	default:
		abnormal_yield_case(caseIndex);
		break;
	}

	test_yield_down();
}

