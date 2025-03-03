void test_mlist_free_up(void);
void test_mlist_free_down(void);


void test_mlist_free_up(void){

	aunit_printf("\n##FUNCTION_START_mlist_free\n");
 }

void test_mlist_free_down(void){
	aunit_printf("\n##FUNCTION_END_mlist_free\n");
 }



void abnormal_mlist_free_case(int index);

void abnormal_mlist_free_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mlist_free_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct mlist *mlist;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	mlist_free_one_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_free_1,false,0\n");
	aunit_printf("#CASE_START_test_mlist_free_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		mlist_free(mlist);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("mlist_free_one","mlist_free_one_call_counter",mlist_free_one_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_mlist_free_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_mlist_free_up();

	switch(caseIndex){
	case 1:
		test_mlist_free_1();
		break;
	default:
		abnormal_mlist_free_case(caseIndex);
		break;
	}

	test_mlist_free_down();
}

