void test_allocpid_up(void);
void test_allocpid_down(void);


void test_allocpid_up(void){

	aunit_printf("\n##FUNCTION_START_allocpid\n");
 }

void test_allocpid_down(void){
	aunit_printf("\n##FUNCTION_END_allocpid\n");
 }



void abnormal_allocpid_case(int index);

void abnormal_allocpid_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_allocpid_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
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
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocpid_1,false,0\n");
	aunit_printf("#CASE_START_test_allocpid_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nextpid=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pid_lock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = allocpid();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("allocpid","nextpid",1,nextpid)
	TEST_ASSERT_EQUAL_INT("allocpid","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("allocpid","pid_lock.locked",0,pid_lock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_allocpid_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_allocpid_up();

	switch(caseIndex){
	case 1:
		test_allocpid_1();
		break;
	default:
		abnormal_allocpid_case(caseIndex);
		break;
	}

	test_allocpid_down();
}

