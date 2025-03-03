void test_test_up(void);
void test_test_down(void);


void test_test_up(void){

	aunit_printf("\n##FUNCTION_START_test\n");
 }

void test_test_down(void){
	aunit_printf("\n##FUNCTION_END_test\n");
 }



void abnormal_test_case(int index);

void abnormal_test_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_test_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	segment_tree_build_call_counter = 0;
	segment_tree_dispose_call_counter = 0;
	abort_call_counter = 0;
	segment_tree_init_call_counter = 0;
	minimum_call_counter = 0;
	segment_tree_update_call_counter = 0;
	segment_tree_query_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_1,false,0\n");
	aunit_printf("#CASE_START_test_test_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("segment_tree_build","segment_tree_build_call_counter",segment_tree_build_call_counter)
	OB_INT_EXPR("segment_tree_dispose","segment_tree_dispose_call_counter",segment_tree_dispose_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("segment_tree_init","segment_tree_init_call_counter",segment_tree_init_call_counter)
	OB_INT_EXPR("minimum","minimum_call_counter",minimum_call_counter)
	OB_INT_EXPR("segment_tree_update","segment_tree_update_call_counter",segment_tree_update_call_counter)
	OB_INT_EXPR("segment_tree_query","segment_tree_query_call_counter",segment_tree_query_call_counter)

	aunit_printf("#CASE_END_test_test_1\n");
}

void test_test_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	segment_tree_build_call_counter = 0;
	segment_tree_dispose_call_counter = 0;
	abort_call_counter = 0;
	segment_tree_init_call_counter = 0;
	minimum_call_counter = 0;
	segment_tree_update_call_counter = 0;
	segment_tree_query_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_2,false,0\n");
	aunit_printf("#CASE_START_test_test_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("segment_tree_build","segment_tree_build_call_counter",segment_tree_build_call_counter)
	OB_INT_EXPR("segment_tree_dispose","segment_tree_dispose_call_counter",segment_tree_dispose_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("segment_tree_init","segment_tree_init_call_counter",segment_tree_init_call_counter)
	OB_INT_EXPR("minimum","minimum_call_counter",minimum_call_counter)
	OB_INT_EXPR("segment_tree_update","segment_tree_update_call_counter",segment_tree_update_call_counter)
	OB_INT_EXPR("segment_tree_query","segment_tree_query_call_counter",segment_tree_query_call_counter)

	aunit_printf("#CASE_END_test_test_2\n");
}

void test_test_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	segment_tree_build_call_counter = 0;
	segment_tree_dispose_call_counter = 0;
	abort_call_counter = 0;
	segment_tree_init_call_counter = 0;
	minimum_call_counter = 0;
	segment_tree_update_call_counter = 0;
	segment_tree_query_call_counter = 0;

	aunit_printf("###TEST_TREE_test_test_3,false,0\n");
	aunit_printf("#CASE_START_test_test_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		test();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("segment_tree_build","segment_tree_build_call_counter",segment_tree_build_call_counter)
	OB_INT_EXPR("segment_tree_dispose","segment_tree_dispose_call_counter",segment_tree_dispose_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("segment_tree_init","segment_tree_init_call_counter",segment_tree_init_call_counter)
	OB_INT_EXPR("minimum","minimum_call_counter",minimum_call_counter)
	OB_INT_EXPR("segment_tree_update","segment_tree_update_call_counter",segment_tree_update_call_counter)
	OB_INT_EXPR("segment_tree_query","segment_tree_query_call_counter",segment_tree_query_call_counter)

	aunit_printf("#CASE_END_test_test_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_test_up();

	switch(caseIndex){
	case 1:
		test_test_1();
		break;
	case 2:
		test_test_2();
		break;
	case 3:
		test_test_3();
		break;
	default:
		abnormal_test_case(caseIndex);
		break;
	}

	test_test_down();
}

