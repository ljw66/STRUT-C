void test_cmpstrp_up(void);
void test_cmpstrp_down(void);


void test_cmpstrp_up(void){

	aunit_printf("\n##FUNCTION_START_cmpstrp\n");
 }

void test_cmpstrp_down(void){
	aunit_printf("\n##FUNCTION_END_cmpstrp\n");
 }



void abnormal_cmpstrp_case(int index);

void abnormal_cmpstrp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cmpstrp_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *p1;
	void *p2;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cmpstrp_2,false,0\n");
	aunit_printf("#CASE_START_test_cmpstrp_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = cmpstrp(p1,p2);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cmpstrp","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_cmpstrp_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_cmpstrp_up();

	switch(caseIndex){
	case 2:
		test_cmpstrp_2();
		break;
	default:
		abnormal_cmpstrp_case(caseIndex);
		break;
	}

	test_cmpstrp_down();
}

