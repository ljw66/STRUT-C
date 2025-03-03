void test_getlen_up(void);
void test_getlen_down(void);


void test_getlen_up(void){

	aunit_printf("\n##FUNCTION_START_getlen\n");
 }

void test_getlen_down(void){
	aunit_printf("\n##FUNCTION_END_getlen\n");
 }



void abnormal_getlen_case(int index);

void abnormal_getlen_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getlen_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	//*uc is an invalid expression 
	unsigned int valueList_1[]={0x00000000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getlen_1,false,0\n");
	aunit_printf("#CASE_START_test_getlen_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			simh_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = getlen(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","returnValue",0x123456,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","simh_bo.u",0x00000000,simh_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_getlen_1\n");
}

void test_getlen_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	//*uc is an invalid expression 
	unsigned int valueList_1[]={0x01020304};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getlen_2,false,0\n");
	aunit_printf("#CASE_START_test_getlen_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			simh_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = getlen(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","returnValue",0xffffffff,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","simh_bo.u",0x01020304,simh_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_getlen_2\n");
}

void test_getlen_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	//*uc is an invalid expression 
	unsigned int valueList_1[]={0x01020304};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getlen_3,false,0\n");
	aunit_printf("#CASE_START_test_getlen_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			simh_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = getlen(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","returnValue",0x0000000c,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","simh_bo.u",0x01020304,simh_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_getlen_3\n");
}

void test_getlen_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	//*uc is an invalid expression 
	unsigned int valueList_1[]={0x00000000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getlen_4,false,0\n");
	aunit_printf("#CASE_START_test_getlen_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			simh_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = getlen(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","returnValue",0x00000006,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","simh_bo.u",0x00000000,simh_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_getlen_4\n");
}

void test_getlen_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	//*uc is an invalid expression 
	unsigned int valueList_1[]={0x01020304};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getlen_5,false,0\n");
	aunit_printf("#CASE_START_test_getlen_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			simh_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = getlen(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","returnValue",0x00000008,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","simh_bo.u",0x01020304,simh_bo.u)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_getlen_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_getlen_up();

	switch(caseIndex){
	case 1:
		test_getlen_1();
		break;
	case 2:
		test_getlen_2();
		break;
	case 3:
		test_getlen_3();
		break;
	case 4:
		test_getlen_4();
		break;
	case 5:
		test_getlen_5();
		break;
	default:
		abnormal_getlen_case(caseIndex);
		break;
	}

	test_getlen_down();
}

