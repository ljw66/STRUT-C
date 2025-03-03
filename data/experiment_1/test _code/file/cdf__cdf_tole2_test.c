void test__cdf_tole2_up(void);
void test__cdf_tole2_down(void);


void test__cdf_tole2_up(void){

	aunit_printf("\n##FUNCTION_START__cdf_tole2\n");
 }

void test__cdf_tole2_down(void){
	aunit_printf("\n##FUNCTION_END__cdf_tole2\n");
 }



void abnormal__cdf_tole2_case(int index);

void abnormal__cdf_tole2_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test__cdf_tole2_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_1,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_1\n");
}

void test__cdf_tole2_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={65535};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_2,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",65535,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_2\n");
}

void test__cdf_tole2_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={43690};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_3,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",43690,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_3\n");
}

void test__cdf_tole2_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={21845};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_4,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",21845,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_4\n");
}

void test__cdf_tole2_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={255};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_5,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",65280,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_5\n");
}

void test__cdf_tole2_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={65280};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_6,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",255,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_6\n");
}

void test__cdf_tole2_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={4660};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_7,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",13330,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_7\n");
}

void test__cdf_tole2_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={43981};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_8,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",52651,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_8\n");
}

void test__cdf_tole2_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_9,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",256,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_9\n");
}

void test__cdf_tole2_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int sv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint16_t returnValue = 0;

	//ֵ�������
	unsigned short int valueList_0[]={32768};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test__cdf_tole2_10,false,0\n");
	aunit_printf("#CASE_START_test__cdf_tole2_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sv=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = _cdf_tole2(sv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("_cdf_tole2","returnValue",128,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test__cdf_tole2_10\n");
}

void aunit_test_func_run(int caseIndex){

	test__cdf_tole2_up();

	switch(caseIndex){
	case 1:
		test__cdf_tole2_1();
		break;
	case 2:
		test__cdf_tole2_2();
		break;
	case 3:
		test__cdf_tole2_3();
		break;
	case 4:
		test__cdf_tole2_4();
		break;
	case 5:
		test__cdf_tole2_5();
		break;
	case 6:
		test__cdf_tole2_6();
		break;
	case 7:
		test__cdf_tole2_7();
		break;
	case 8:
		test__cdf_tole2_8();
		break;
	case 9:
		test__cdf_tole2_9();
		break;
	case 10:
		test__cdf_tole2_10();
		break;
	default:
		abnormal__cdf_tole2_case(caseIndex);
		break;
	}

	test__cdf_tole2_down();
}

