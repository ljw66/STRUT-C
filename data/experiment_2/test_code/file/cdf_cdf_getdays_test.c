void test_cdf_getdays_up(void);
void test_cdf_getdays_down(void);


void test_cdf_getdays_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_getdays\n");
 }

void test_cdf_getdays_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_getdays\n");
 }



void abnormal_cdf_getdays_case(int index);

void abnormal_cdf_getdays_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_getdays_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1601};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_1\n");
}

void test_cdf_getdays_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1602};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",365,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_2\n");
}

void test_cdf_getdays_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1605};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",1461,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_3\n");
}

void test_cdf_getdays_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1701};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",36524,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_4\n");
}

void test_cdf_getdays_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1600};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_5\n");
}

void test_cdf_getdays_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={2000};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",146097,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_6\n");
}

void test_cdf_getdays_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={-1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_7,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_7\n");
}

void test_cdf_getdays_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_8,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_8\n");
}

void test_cdf_getdays_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3000};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_9,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",511068,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_9\n");
}

void test_cdf_getdays_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int year;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1605};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_getdays_10,false,0\n");
	aunit_printf("#CASE_START_test_cdf_getdays_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			year=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = cdf_getdays(year);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_getdays","returnValue",1461,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_getdays_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_getdays_up();

	switch(caseIndex){
	case 1:
		test_cdf_getdays_1();
		break;
	case 2:
		test_cdf_getdays_2();
		break;
	case 3:
		test_cdf_getdays_3();
		break;
	case 4:
		test_cdf_getdays_4();
		break;
	case 5:
		test_cdf_getdays_5();
		break;
	case 6:
		test_cdf_getdays_6();
		break;
	case 7:
		test_cdf_getdays_7();
		break;
	case 8:
		test_cdf_getdays_8();
		break;
	case 9:
		test_cdf_getdays_9();
		break;
	case 10:
		test_cdf_getdays_10();
		break;
	default:
		abnormal_cdf_getdays_case(caseIndex);
		break;
	}

	test_cdf_getdays_down();
}

