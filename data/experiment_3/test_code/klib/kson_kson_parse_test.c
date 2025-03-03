void test_kson_parse_up(void);
void test_kson_parse_down(void);


void test_kson_parse_up(void){

	aunit_printf("\n##FUNCTION_START_kson_parse\n");
 }

void test_kson_parse_down(void){
	aunit_printf("\n##FUNCTION_END_kson_parse\n");
 }



void abnormal_kson_parse_case(int index);

void abnormal_kson_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kson_parse_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *json;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_1,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kson_parse(json);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("kson_parse","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_1\n");
}

void test_kson_parse_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *json;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_2,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kson_parse(json);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("kson_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_2\n");
}

void test_kson_parse_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *json;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_3,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kson_parse(json);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("kson_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_kson_parse_up();

	switch(caseIndex){
	case 1:
		test_kson_parse_1();
		break;
	case 2:
		test_kson_parse_2();
		break;
	case 3:
		test_kson_parse_3();
		break;
	default:
		abnormal_kson_parse_case(caseIndex);
		break;
	}

	test_kson_parse_down();
}

