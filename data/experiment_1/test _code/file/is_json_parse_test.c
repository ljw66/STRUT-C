void test_json_parse_up(void);
void test_json_parse_down(void);


void test_json_parse_up(void){

	aunit_printf("\n##FUNCTION_START_json_parse\n");
 }

void test_json_parse_down(void){
	aunit_printf("\n##FUNCTION_END_json_parse\n");
 }



void abnormal_json_parse_case(int index);

void abnormal_json_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_parse_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **ucp;
	unsigned char *ue;
	size_t *st;
	unsigned int lvl;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	size_t *valueList_0[]={(size_t *)st_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	json_parse_number_call_counter = 0;
	json_parse_const_call_counter = 0;
	json_parse_object_call_counter = 0;
	json_skip_space_call_counter = 0;
	json_parse_array_call_counter = 0;
	json_parse_string_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_parse_9,false,0\n");
	aunit_printf("#CASE_START_test_json_parse_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			st=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lvl=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			st_PTRTO[1]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			st_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = json_parse(ucp,ue,st,lvl);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_parse","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("json_parse_number","json_parse_number_call_counter",json_parse_number_call_counter)
	OB_INT_EXPR("json_parse_const","json_parse_const_call_counter",json_parse_const_call_counter)
	OB_INT_EXPR("json_parse_object","json_parse_object_call_counter",json_parse_object_call_counter)
	OB_INT_EXPR("json_skip_space","json_skip_space_call_counter",json_skip_space_call_counter)
	OB_INT_EXPR("json_parse_array","json_parse_array_call_counter",json_parse_array_call_counter)
	OB_INT_EXPR("json_parse_string","json_parse_string_call_counter",json_parse_string_call_counter)

	aunit_printf("#CASE_END_test_json_parse_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_parse_up();

	switch(caseIndex){
	case 9:
		test_json_parse_9();
		break;
	default:
		abnormal_json_parse_case(caseIndex);
		break;
	}

	test_json_parse_down();
}

