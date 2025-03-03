void test_procinit_up(void);
void test_procinit_down(void);


void test_procinit_up(void){

	aunit_printf("\n##FUNCTION_START_procinit\n");
 }

void test_procinit_down(void){
	aunit_printf("\n##FUNCTION_END_procinit\n");
 }



void abnormal_procinit_case(int index);

void abnormal_procinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_procinit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_procinit_1,false,0\n");
	aunit_printf("#CASE_START_test_procinit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			wait_lock.locked=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pid_lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[0].kstack=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			proc[0].lock.locked=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		procinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("procinit","wait_lock.locked",0,wait_lock.locked)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("procinit","pid_lock.locked",0,pid_lock.locked)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("procinit","(proc[0]).lock.locked",0,(proc[0]).lock.locked)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("procinit","(proc[0]).kstack","((1L << (9 + 9 + 9 + 12 - 1)) - 4096) - 2 * 4096",(proc[0]).kstack)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_procinit_1\n");
}

void test_procinit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={1};
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
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_procinit_2,false,0\n");
	aunit_printf("#CASE_START_test_procinit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			wait_lock.locked=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pid_lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		procinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("procinit","wait_lock.locked",0,wait_lock.locked)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("procinit","pid_lock.locked",0,pid_lock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_procinit_2\n");
}

void test_procinit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned long int valueList_0[]={0};
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
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_procinit_3,false,0\n");
	aunit_printf("#CASE_START_test_procinit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[63].kstack=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[63].lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		procinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("procinit","(proc[63]).lock.locked",0,(proc[63]).lock.locked)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("procinit","(proc[63]).kstack","((1L << (9 + 9 + 9 + 12 - 1)) - 4096) - 128 * 4096",(proc[63]).kstack)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_procinit_3\n");
}

void test_procinit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_procinit_4,false,0\n");
	aunit_printf("#CASE_START_test_procinit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		procinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_procinit_4\n");
}

void test_procinit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_procinit_5,false,0\n");
	aunit_printf("#CASE_START_test_procinit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[10].kstack=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		procinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("procinit","(proc[10]).kstack","((1L << (9 + 9 + 9 + 12 - 1)) - 4096) - 22 * 4096",(proc[10]).kstack)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_procinit_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_procinit_up();

	switch(caseIndex){
	case 1:
		test_procinit_1();
		break;
	case 2:
		test_procinit_2();
		break;
	case 3:
		test_procinit_3();
		break;
	case 4:
		test_procinit_4();
		break;
	case 5:
		test_procinit_5();
		break;
	default:
		abnormal_procinit_case(caseIndex);
		break;
	}

	test_procinit_down();
}

