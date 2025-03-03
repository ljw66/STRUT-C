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

void test_recover_from_log_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	write_head_call_counter = 0;
	read_head_call_counter = 0;
	install_trans_call_counter = 0;

	aunit_printf("###TEST_TREE_test_recover_from_log_1,false,0\n");
	aunit_printf("#CASE_START_test_recover_from_log_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		recover_from_log();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("recover_from_log","log.lh.n",0,log.lh.n)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("write_head","write_head_call_counter",write_head_call_counter)
	OB_INT_EXPR("read_head","read_head_call_counter",read_head_call_counter)
	OB_INT_EXPR("install_trans","install_trans_call_counter",install_trans_call_counter)

	aunit_printf("#CASE_END_test_recover_from_log_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_recover_from_log_up();

	switch(caseIndex){
	case 1:
		test_recover_from_log_1();
		break;
	default:
		abnormal_recover_from_log_case(caseIndex);
		break;
	}

	test_recover_from_log_down();
}

