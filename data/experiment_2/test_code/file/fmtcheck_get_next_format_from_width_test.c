void test_get_next_format_from_width_up(void);
void test_get_next_format_from_width_down(void);


void test_get_next_format_from_width_up(void){

	aunit_printf("\n##FUNCTION_START_get_next_format_from_width\n");
 }

void test_get_next_format_from_width_down(void){
	aunit_printf("\n##FUNCTION_END_get_next_format_from_width\n");
 }



void abnormal_get_next_format_from_width_case(int index);

void abnormal_get_next_format_from_width_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_next_format_from_width_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **pf;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	EFT returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)".*"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	get_next_format_from_precision_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_next_format_from_width_7,false,0\n");
	aunit_printf("#CASE_START_test_get_next_format_from_width_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*pf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = get_next_format_from_width(pf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_ENUM_EXPR("get_next_format_from_width","returnValue",returnValue)
	TEST_ASSERT_EQUAL_STRING("get_next_format_from_width","*pf","*",*pf)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_next_format_from_precision","get_next_format_from_precision_call_counter",get_next_format_from_precision_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_next_format_from_width_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_next_format_from_width_up();

	switch(caseIndex){
	case 7:
		test_get_next_format_from_width_7();
		break;
	default:
		abnormal_get_next_format_from_width_case(caseIndex);
		break;
	}

	test_get_next_format_from_width_down();
}

