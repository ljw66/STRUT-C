void test_eatsize_up(void);
void test_eatsize_down(void);


void test_eatsize_up(void){

	aunit_printf("\n##FUNCTION_START_eatsize\n");
 }

void test_eatsize_down(void){
	aunit_printf("\n##FUNCTION_END_eatsize\n");
 }



void abnormal_eatsize_case(int index);

void abnormal_eatsize_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_eatsize_12(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **p;


	//ֵ�������
	char *valueList_0[]={(char *)"ulmn"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=12;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	tolower_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	isupper_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_eatsize_12,false,0\n");
	aunit_printf("#CASE_START_test_eatsize_12\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		eatsize(p);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("eatsize","*p","mn",*p)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("isupper","isupper_call_counter",isupper_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_eatsize_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_eatsize_up();

	switch(caseIndex){
	case 12:
		test_eatsize_12();
		break;
	default:
		abnormal_eatsize_case(caseIndex);
		break;
	}

	test_eatsize_down();
}

