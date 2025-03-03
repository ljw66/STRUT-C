void test_cdf_tole8_up(void);
void test_cdf_tole8_down(void);


void test_cdf_tole8_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_tole8\n");
 }

void test_cdf_tole8_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_tole8\n");
 }



void abnormal_cdf_tole8_case(int index);

void abnormal_cdf_tole8_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_tole8_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long long int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	unsigned long long int valueList_0[]={12345};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16909060};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",54321,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",16909060,cdf_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_1\n");
}

void test_cdf_tole8_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long long int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	unsigned long long int valueList_0[]={67890};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={12345};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",67890,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",12345,cdf_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_2\n");
}

void test_cdf_tole8_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long long int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	unsigned long long int valueList_0[]={98765};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16909060};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",16909060,cdf_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_3\n");
}

void test_cdf_tole8_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long long int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	_cdf_tole8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_tole8_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_tole8_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_tole8(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_tole8","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_tole8","cdf_bo.u",0,cdf_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)

	aunit_printf("#CASE_END_test_cdf_tole8_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_tole8_up();

	switch(caseIndex){
	case 1:
		test_cdf_tole8_1();
		break;
	case 2:
		test_cdf_tole8_2();
		break;
	case 3:
		test_cdf_tole8_3();
		break;
	case 4:
		test_cdf_tole8_4();
		break;
	default:
		abnormal_cdf_tole8_case(caseIndex);
		break;
	}

	test_cdf_tole8_down();
}

