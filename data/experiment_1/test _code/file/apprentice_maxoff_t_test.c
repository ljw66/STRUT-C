void test_maxoff_t_up(void);
void test_maxoff_t_down(void);


void test_maxoff_t_up(void){

	aunit_printf("\n##FUNCTION_START_maxoff_t\n");
 }

void test_maxoff_t_down(void){
	aunit_printf("\n##FUNCTION_END_maxoff_t\n");
 }



void abnormal_maxoff_t_case(int index);

void abnormal_maxoff_t_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_maxoff_t_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	off_t returnValue = 0;

	//ֵ�������
	//line is an invalid expression 
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_maxoff_t_6,false,0\n");
	aunit_printf("#CASE_START_test_maxoff_t_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = maxoff_t();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("maxoff_t","returnValue",2147483647,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_maxoff_t_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_maxoff_t_up();

	switch(caseIndex){
	case 6:
		test_maxoff_t_6();
		break;
	default:
		abnormal_maxoff_t_case(caseIndex);
		break;
	}

	test_maxoff_t_down();
}

