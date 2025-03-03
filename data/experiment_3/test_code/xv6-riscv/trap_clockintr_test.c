void test_clockintr_up(void);
void test_clockintr_down(void);


void test_clockintr_up(void){

	aunit_printf("\n##FUNCTION_START_clockintr\n");
 }

void test_clockintr_down(void){
	aunit_printf("\n##FUNCTION_END_clockintr\n");
 }



void abnormal_clockintr_case(int index);

void abnormal_clockintr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_clockintr_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	wakeup_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_1,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",1,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_1\n");
}

void test_clockintr_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	wakeup_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_2,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",0,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_2\n");
}

void test_clockintr_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={0};
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
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	wakeup_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_3,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",1,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",0,tickslock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_3\n");
}

void test_clockintr_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={0};
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
	w_stimecmp_call_counter = 0;
	r_time_call_counter = 0;
	cpuid_call_counter = 0;
	wakeup_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clockintr_4,false,0\n");
	aunit_printf("#CASE_START_test_clockintr_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		clockintr();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","ticks",0,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("clockintr","tickslock.locked",1,tickslock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("w_stimecmp","w_stimecmp_call_counter",w_stimecmp_call_counter)
	OB_INT_EXPR("r_time","r_time_call_counter",r_time_call_counter)
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_clockintr_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_clockintr_up();

	switch(caseIndex){
	case 1:
		test_clockintr_1();
		break;
	case 2:
		test_clockintr_2();
		break;
	case 3:
		test_clockintr_3();
		break;
	case 4:
		test_clockintr_4();
		break;
	default:
		abnormal_clockintr_case(caseIndex);
		break;
	}

	test_clockintr_down();
}

