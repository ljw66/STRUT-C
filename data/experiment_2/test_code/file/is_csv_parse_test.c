void test_csv_parse_up(void);
void test_csv_parse_down(void);


void test_csv_parse_up(void){

	aunit_printf("\n##FUNCTION_START_csv_parse\n");
 }

void test_csv_parse_down(void){
	aunit_printf("\n##FUNCTION_END_csv_parse\n");
 }



void abnormal_csv_parse_case(int index);

void abnormal_csv_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_csv_parse_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	eatquote_call_counter = 0;

	aunit_printf("###TEST_TREE_test_csv_parse_1,false,0\n");
	aunit_printf("#CASE_START_test_csv_parse_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = csv_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("csv_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("eatquote","eatquote_call_counter",eatquote_call_counter)

	aunit_printf("#CASE_END_test_csv_parse_1\n");
}

void test_csv_parse_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"abc"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	eatquote_call_counter = 0;

	aunit_printf("###TEST_TREE_test_csv_parse_2,false,0\n");
	aunit_printf("#CASE_START_test_csv_parse_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = csv_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("csv_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("eatquote","eatquote_call_counter",eatquote_call_counter)

	aunit_printf("#CASE_END_test_csv_parse_2\n");
}

void test_csv_parse_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"field1,field2,field3"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"field1,field2,field3"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	eatquote_call_counter = 0;

	aunit_printf("###TEST_TREE_test_csv_parse_3,false,0\n");
	aunit_printf("#CASE_START_test_csv_parse_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = csv_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("csv_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("eatquote","eatquote_call_counter",eatquote_call_counter)

	aunit_printf("#CASE_END_test_csv_parse_3\n");
}

void test_csv_parse_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"a,b,c\\nd,e,f\\ng,h,i"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"a,b,c\\nd,e,f\\ng,h,i"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	eatquote_call_counter = 0;

	aunit_printf("###TEST_TREE_test_csv_parse_4,false,0\n");
	aunit_printf("#CASE_START_test_csv_parse_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = csv_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("csv_parse","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("eatquote","eatquote_call_counter",eatquote_call_counter)

	aunit_printf("#CASE_END_test_csv_parse_4\n");
}

void test_csv_parse_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"a,b,c\\nd,e\\ng,h,i"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"a,b,c\\nd,e\\ng,h,i"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	eatquote_call_counter = 0;

	aunit_printf("###TEST_TREE_test_csv_parse_5,false,0\n");
	aunit_printf("#CASE_START_test_csv_parse_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = csv_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("csv_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("eatquote","eatquote_call_counter",eatquote_call_counter)

	aunit_printf("#CASE_END_test_csv_parse_5\n");
}

void test_csv_parse_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	eatquote_call_counter = 0;

	aunit_printf("###TEST_TREE_test_csv_parse_6,false,0\n");
	aunit_printf("#CASE_START_test_csv_parse_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = csv_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("csv_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("eatquote","eatquote_call_counter",eatquote_call_counter)

	aunit_printf("#CASE_END_test_csv_parse_6\n");
}

void test_csv_parse_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	eatquote_call_counter = 0;

	aunit_printf("###TEST_TREE_test_csv_parse_7,false,0\n");
	aunit_printf("#CASE_START_test_csv_parse_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = csv_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("csv_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("eatquote","eatquote_call_counter",eatquote_call_counter)

	aunit_printf("#CASE_END_test_csv_parse_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_csv_parse_up();

	switch(caseIndex){
	case 1:
		test_csv_parse_1();
		break;
	case 2:
		test_csv_parse_2();
		break;
	case 3:
		test_csv_parse_3();
		break;
	case 4:
		test_csv_parse_4();
		break;
	case 5:
		test_csv_parse_5();
		break;
	case 6:
		test_csv_parse_6();
		break;
	case 7:
		test_csv_parse_7();
		break;
	default:
		abnormal_csv_parse_case(caseIndex);
		break;
	}

	test_csv_parse_down();
}

