void test_recover_from_log_up(void);
void test_recover_from_log_down(void);


void test_recover_from_log_up(void){

	aunit_printf("\n##FUNCTION_START_recover_from_log\n");
 }

void test_recover_from_log_down(void){
	aunit_printf("\n##FUNCTION_END_recover_from_log\n");
 }



void abnormal_recover_from_log_case(int index);

void abnormal_recover_from_log_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_recover_from_log_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	write_head_call_counter = 0;
	read_head_call_counter = 0;
	install_trans_call_counter = 0;

	aunit_printf("###TEST_TREE_test_recover_from_log_5,false,0\n");
	aunit_printf("#CASE_START_test_recover_from_log_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		recover_from_log();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("write_head","write_head_call_counter",write_head_call_counter)
	OB_INT_EXPR("read_head","read_head_call_counter",read_head_call_counter)
	OB_INT_EXPR("install_trans","install_trans_call_counter",install_trans_call_counter)

	aunit_printf("#CASE_END_test_recover_from_log_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_recover_from_log_up();

	switch(caseIndex){
	case 5:
		test_recover_from_log_5();
		break;
	default:
		abnormal_recover_from_log_case(caseIndex);
		break;
	}

	test_recover_from_log_down();
}

