void test_json_parse_number_up(void);
void test_json_parse_number_down(void);


void test_json_parse_number_up(void){

	aunit_printf("\n##FUNCTION_START_json_parse_number\n");
 }

void test_json_parse_number_down(void){
	aunit_printf("\n##FUNCTION_END_json_parse_number\n");
 }



void abnormal_json_parse_number_case(int index);

void abnormal_json_parse_number_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_parse_number_14(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **ucp;
	unsigned char *ue;
	unsigned int lvl;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"123e"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"123e"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=14;
	//��ʼ����׮�������ü�����
	json_isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_parse_number_14,false,0\n");
	aunit_printf("#CASE_START_test_json_parse_number_14\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lvl=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*ucp=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = json_parse_number(ucp,ue,lvl);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_parse_number","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("json_parse_number","*ucp","123e",*ucp)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_isdigit","json_isdigit_call_counter",json_isdigit_call_counter)

	aunit_printf("#CASE_END_test_json_parse_number_14\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_parse_number_up();

	switch(caseIndex){
	case 14:
		test_json_parse_number_14();
		break;
	default:
		abnormal_json_parse_number_case(caseIndex);
		break;
	}

	test_json_parse_number_down();
}

