void test_init_file_tables_up(void);
void test_init_file_tables_down(void);


void test_init_file_tables_up(void){

	aunit_printf("\n##FUNCTION_START_init_file_tables\n");
 }

void test_init_file_tables_down(void){
	aunit_printf("\n##FUNCTION_END_init_file_tables\n");
 }



void abnormal_init_file_tables_case(int index);

void abnormal_init_file_tables_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_init_file_tables_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_init_file_tables_1,false,0\n");
	aunit_printf("#CASE_START_test_init_file_tables_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		init_file_tables();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_init_file_tables_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_init_file_tables_up();

	switch(caseIndex){
	case 1:
		test_init_file_tables_1();
		break;
	default:
		abnormal_init_file_tables_case(caseIndex);
		break;
	}

	test_init_file_tables_down();
}

