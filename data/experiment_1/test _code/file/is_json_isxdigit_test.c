void test_json_isxdigit_up(void);
void test_json_isxdigit_down(void);


void test_json_isxdigit_up(void){

	aunit_printf("\n##FUNCTION_START_json_isxdigit\n");
 }

void test_json_isxdigit_down(void){
	aunit_printf("\n##FUNCTION_END_json_isxdigit\n");
 }



void abnormal_json_isxdigit_case(int index);

void abnormal_json_isxdigit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_isxdigit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={5};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	json_isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_isxdigit_1,false,0\n");
	aunit_printf("#CASE_START_test_json_isxdigit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isxdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isxdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isdigit","json_isdigit_call_counter",json_isdigit_call_counter)

	aunit_printf("#CASE_END_test_json_isxdigit_1\n");
}

void test_json_isxdigit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'a'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	json_isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_isxdigit_2,false,0\n");
	aunit_printf("#CASE_START_test_json_isxdigit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isxdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isxdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isdigit","json_isdigit_call_counter",json_isdigit_call_counter)

	aunit_printf("#CASE_END_test_json_isxdigit_2\n");
}

void test_json_isxdigit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'F'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	json_isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_isxdigit_3,false,0\n");
	aunit_printf("#CASE_START_test_json_isxdigit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isxdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isxdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isdigit","json_isdigit_call_counter",json_isdigit_call_counter)

	aunit_printf("#CASE_END_test_json_isxdigit_3\n");
}

void test_json_isxdigit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'z'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	json_isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_isxdigit_4,false,0\n");
	aunit_printf("#CASE_START_test_json_isxdigit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isxdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isxdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isdigit","json_isdigit_call_counter",json_isdigit_call_counter)

	aunit_printf("#CASE_END_test_json_isxdigit_4\n");
}

void test_json_isxdigit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'g'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	json_isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_isxdigit_5,false,0\n");
	aunit_printf("#CASE_START_test_json_isxdigit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isxdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isxdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isdigit","json_isdigit_call_counter",json_isdigit_call_counter)

	aunit_printf("#CASE_END_test_json_isxdigit_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_isxdigit_up();

	switch(caseIndex){
	case 1:
		test_json_isxdigit_1();
		break;
	case 2:
		test_json_isxdigit_2();
		break;
	case 3:
		test_json_isxdigit_3();
		break;
	case 4:
		test_json_isxdigit_4();
		break;
	case 5:
		test_json_isxdigit_5();
		break;
	default:
		abnormal_json_isxdigit_case(caseIndex);
		break;
	}

	test_json_isxdigit_down();
}

