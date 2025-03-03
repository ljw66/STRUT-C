void test_sched_up(void);
void test_sched_down(void);


void test_sched_up(void){

	aunit_printf("\n##FUNCTION_START_sched\n");
 }

void test_sched_down(void){
	aunit_printf("\n##FUNCTION_END_sched\n");
 }



void abnormal_sched_case(int index);

void abnormal_sched_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sched_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	swtch_call_counter = 0;
	panic_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_2,false,0\n");
	aunit_printf("#CASE_START_test_sched_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[0].killed=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sched();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sched_2\n");
}

void test_sched_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	swtch_call_counter = 0;
	panic_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_3,false,0\n");
	aunit_printf("#CASE_START_test_sched_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[0].killed=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sched();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sched_3\n");
}

void test_sched_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	swtch_call_counter = 0;
	panic_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_4,false,0\n");
	aunit_printf("#CASE_START_test_sched_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[0].killed=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sched();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sched_4\n");
}

void test_sched_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	intr_get_call_counter = 0;
	swtch_call_counter = 0;
	panic_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sched_5,false,0\n");
	aunit_printf("#CASE_START_test_sched_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[0].killed=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sched();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("swtch","swtch_call_counter",swtch_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sched_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_sched_up();

	switch(caseIndex){
	case 2:
		test_sched_2();
		break;
	case 3:
		test_sched_3();
		break;
	case 4:
		test_sched_4();
		break;
	case 5:
		test_sched_5();
		break;
	default:
		abnormal_sched_case(caseIndex);
		break;
	}

	test_sched_down();
}

