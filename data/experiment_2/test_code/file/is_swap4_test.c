void test_swap4_up(void);
void test_swap4_down(void);


void test_swap4_up(void){

	aunit_printf("\n##FUNCTION_START_swap4\n");
 }

void test_swap4_down(void){
	aunit_printf("\n##FUNCTION_END_swap4\n");
 }



void abnormal_swap4_case(int index);

void abnormal_swap4_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_swap4_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_1,false,0\n");
	aunit_printf("#CASE_START_test_swap4_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_1\n");
}

void test_swap4_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={4294967295};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_2,false,0\n");
	aunit_printf("#CASE_START_test_swap4_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",4294967295,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_2\n");
}

void test_swap4_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={305419896};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_3,false,0\n");
	aunit_printf("#CASE_START_test_swap4_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",2018915346,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_3\n");
}

void test_swap4_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={2864434397};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_4,false,0\n");
	aunit_printf("#CASE_START_test_swap4_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",3721182122,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_4\n");
}

void test_swap4_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={255};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_5,false,0\n");
	aunit_printf("#CASE_START_test_swap4_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",4278190080,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_5\n");
}

void test_swap4_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={4278190080};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_6,false,0\n");
	aunit_printf("#CASE_START_test_swap4_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",255,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_6\n");
}

void test_swap4_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={16711935};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_7,false,0\n");
	aunit_printf("#CASE_START_test_swap4_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",4278255360,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_7\n");
}

void test_swap4_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={4278255360};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_8,false,0\n");
	aunit_printf("#CASE_START_test_swap4_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",16711935,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_8\n");
}

void test_swap4_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={2147483648};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_9,false,0\n");
	aunit_printf("#CASE_START_test_swap4_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",128,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_9\n");
}

void test_swap4_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_swap4_10,false,0\n");
	aunit_printf("#CASE_START_test_swap4_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = swap4(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("swap4","returnValue",16777216,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_swap4_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_swap4_up();

	switch(caseIndex){
	case 1:
		test_swap4_1();
		break;
	case 2:
		test_swap4_2();
		break;
	case 3:
		test_swap4_3();
		break;
	case 4:
		test_swap4_4();
		break;
	case 5:
		test_swap4_5();
		break;
	case 6:
		test_swap4_6();
		break;
	case 7:
		test_swap4_7();
		break;
	case 8:
		test_swap4_8();
		break;
	case 9:
		test_swap4_9();
		break;
	case 10:
		test_swap4_10();
		break;
	default:
		abnormal_swap4_case(caseIndex);
		break;
	}

	test_swap4_down();
}

