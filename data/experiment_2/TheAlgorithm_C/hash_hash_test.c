void test_hash_up(void);
void test_hash_down(void);


void test_hash_up(void){

	aunit_printf("\n##FUNCTION_START_hash\n");
 }

void test_hash_down(void){
	aunit_printf("\n##FUNCTION_END_hash\n");
 }



void abnormal_hash_case(int index);

void abnormal_hash_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hash_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"longer test string"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_hash_4,false,0\n");
	aunit_printf("#CASE_START_test_hash_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",1670344851,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_hash_4\n");
}

void test_hash_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"special!@#"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_hash_5,false,0\n");
	aunit_printf("#CASE_START_test_hash_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",756730673,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_hash_5\n");
}

void test_hash_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"1234567890"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_hash_6,false,0\n");
	aunit_printf("#CASE_START_test_hash_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",1097417196,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_hash_6\n");
}

void test_hash_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"abc123"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_hash_7,false,0\n");
	aunit_printf("#CASE_START_test_hash_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",6448456,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_hash_7\n");
}

void test_hash_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"hello world"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_hash_8,false,0\n");
	aunit_printf("#CASE_START_test_hash_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",156891329,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_hash_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_hash_up();

	switch(caseIndex){
	case 4:
		test_hash_4();
		break;
	case 5:
		test_hash_5();
		break;
	case 6:
		test_hash_6();
		break;
	case 7:
		test_hash_7();
		break;
	case 8:
		test_hash_8();
		break;
	default:
		abnormal_hash_case(caseIndex);
		break;
	}

	test_hash_down();
}

