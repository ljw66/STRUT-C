void test_rand_up(void);
void test_rand_down(void);


void test_rand_up(void){

	aunit_printf("\n##FUNCTION_START_rand\n");
 }

void test_rand_down(void){
	aunit_printf("\n##FUNCTION_END_rand\n");
 }



void abnormal_rand_case(int index);

void abnormal_rand_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_rand_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_1,false,0\n");
	aunit_printf("#CASE_START_test_rand_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("rand","returnValue",42,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",12345,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_1\n");
}

void test_rand_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned long int valueList_0[]={100};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_2,false,0\n");
	aunit_printf("#CASE_START_test_rand_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("rand","returnValue",-1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",54321,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_2\n");
}

void test_rand_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned long int valueList_0[]={123456789};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_3,false,0\n");
	aunit_printf("#CASE_START_test_rand_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("rand","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",987654321,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_3\n");
}

void test_rand_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned long int valueList_0[]={4294967295};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_4,false,0\n");
	aunit_printf("#CASE_START_test_rand_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("rand","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",2147483647,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_4\n");
}

void test_rand_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned long int valueList_0[]={12345};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	do_rand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_rand_5,false,0\n");
	aunit_printf("#CASE_START_test_rand_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rand_next=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = rand();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("rand","returnValue",-12345,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("rand","rand_next",67890,rand_next)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("do_rand","do_rand_call_counter",do_rand_call_counter)

	aunit_printf("#CASE_END_test_rand_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_rand_up();

	switch(caseIndex){
	case 1:
		test_rand_1();
		break;
	case 2:
		test_rand_2();
		break;
	case 3:
		test_rand_3();
		break;
	case 4:
		test_rand_4();
		break;
	case 5:
		test_rand_5();
		break;
	default:
		abnormal_rand_case(caseIndex);
		break;
	}

	test_rand_down();
}

