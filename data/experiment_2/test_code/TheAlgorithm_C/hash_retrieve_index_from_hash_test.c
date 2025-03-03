void test_retrieve_index_from_hash_up(void);
void test_retrieve_index_from_hash_down(void);


void test_retrieve_index_from_hash_up(void){

	aunit_printf("\n##FUNCTION_START_retrieve_index_from_hash\n");
 }

void test_retrieve_index_from_hash_down(void){
	aunit_printf("\n##FUNCTION_END_retrieve_index_from_hash\n");
 }



void abnormal_retrieve_index_from_hash_case(int index);

void abnormal_retrieve_index_from_hash_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_retrieve_index_from_hash_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_1,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_1\n");
}

void test_retrieve_index_from_hash_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_2,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_2\n");
}

void test_retrieve_index_from_hash_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_3,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_3\n");
}

void test_retrieve_index_from_hash_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={123456789};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1024};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_4,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",525,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_4\n");
}

void test_retrieve_index_from_hash_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0xFFFFFFFFFFFFFFFF};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_5,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",15,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_5\n");
}

void test_retrieve_index_from_hash_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0x0F0F0F0F0F0F0F0F};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={256};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_6,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",15,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_6\n");
}

void test_retrieve_index_from_hash_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0x123456789ABCDEF};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={512};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_7,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",366,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_7\n");
}

void test_retrieve_index_from_hash_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1024};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_8,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_8\n");
}

void test_retrieve_index_from_hash_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0xA5A5A5A5A5A5A5A5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={64};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_9,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",53,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_9\n");
}

void test_retrieve_index_from_hash_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int hash;
	unsigned int capacity;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int returnValue = 0;

	//ֵ�������
	long long int valueList_0[]={0x7FFFFFFFFFFFFFFF};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={128};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_10,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",63,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_retrieve_index_from_hash_up();

	switch(caseIndex){
	case 1:
		test_retrieve_index_from_hash_1();
		break;
	case 2:
		test_retrieve_index_from_hash_2();
		break;
	case 3:
		test_retrieve_index_from_hash_3();
		break;
	case 4:
		test_retrieve_index_from_hash_4();
		break;
	case 5:
		test_retrieve_index_from_hash_5();
		break;
	case 6:
		test_retrieve_index_from_hash_6();
		break;
	case 7:
		test_retrieve_index_from_hash_7();
		break;
	case 8:
		test_retrieve_index_from_hash_8();
		break;
	case 9:
		test_retrieve_index_from_hash_9();
		break;
	case 10:
		test_retrieve_index_from_hash_10();
		break;
	default:
		abnormal_retrieve_index_from_hash_case(caseIndex);
		break;
	}

	test_retrieve_index_from_hash_down();
}

