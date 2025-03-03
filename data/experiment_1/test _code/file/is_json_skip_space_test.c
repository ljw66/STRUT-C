void test_json_skip_space_up(void);
void test_json_skip_space_down(void);


void test_json_skip_space_up(void){

	aunit_printf("\n##FUNCTION_START_json_skip_space\n");
 }

void test_json_skip_space_down(void){
	aunit_printf("\n##FUNCTION_END_json_skip_space\n");
 }



void abnormal_json_skip_space_case(int index);

void abnormal_json_skip_space_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_skip_space_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const unsigned char *returnValue = 0;

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
	case_id=1;
	//��ʼ����׮�������ü�����
	json_isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_skip_space_1,false,0\n");
	aunit_printf("#CASE_START_test_json_skip_space_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = json_skip_space(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("json_skip_space","returnValue","abc",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isspace","json_isspace_call_counter",json_isspace_call_counter)

	aunit_printf("#CASE_END_test_json_skip_space_1\n");
}

void test_json_skip_space_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const unsigned char *returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abcd"};
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
	json_isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_skip_space_2,false,0\n");
	aunit_printf("#CASE_START_test_json_skip_space_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = json_skip_space(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("json_skip_space","returnValue","abc",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isspace","json_isspace_call_counter",json_isspace_call_counter)

	aunit_printf("#CASE_END_test_json_skip_space_2\n");
}

void test_json_skip_space_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const unsigned char *returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)" abc"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	json_isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_skip_space_3,false,0\n");
	aunit_printf("#CASE_START_test_json_skip_space_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = json_skip_space(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("json_skip_space","returnValue","abc",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isspace","json_isspace_call_counter",json_isspace_call_counter)

	aunit_printf("#CASE_END_test_json_skip_space_3\n");
}

void test_json_skip_space_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const unsigned char *returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"   abc"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	json_isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_skip_space_4,false,0\n");
	aunit_printf("#CASE_START_test_json_skip_space_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = json_skip_space(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("json_skip_space","returnValue","abc",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isspace","json_isspace_call_counter",json_isspace_call_counter)

	aunit_printf("#CASE_END_test_json_skip_space_4\n");
}

void test_json_skip_space_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const unsigned char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	json_isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_skip_space_5,false,0\n");
	aunit_printf("#CASE_START_test_json_skip_space_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = json_skip_space(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("json_skip_space","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isspace","json_isspace_call_counter",json_isspace_call_counter)

	aunit_printf("#CASE_END_test_json_skip_space_5\n");
}

void test_json_skip_space_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const unsigned char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	json_isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_skip_space_6,false,0\n");
	aunit_printf("#CASE_START_test_json_skip_space_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = json_skip_space(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("json_skip_space","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isspace","json_isspace_call_counter",json_isspace_call_counter)

	aunit_printf("#CASE_END_test_json_skip_space_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_skip_space_up();

	switch(caseIndex){
	case 1:
		test_json_skip_space_1();
		break;
	case 2:
		test_json_skip_space_2();
		break;
	case 3:
		test_json_skip_space_3();
		break;
	case 4:
		test_json_skip_space_4();
		break;
	case 5:
		test_json_skip_space_5();
		break;
	case 6:
		test_json_skip_space_6();
		break;
	default:
		abnormal_json_skip_space_case(caseIndex);
		break;
	}

	test_json_skip_space_down();
}

