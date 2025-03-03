void test_mlist_free_one_up(void);
void test_mlist_free_one_down(void);


void test_mlist_free_one_up(void){

	aunit_printf("\n##FUNCTION_START_mlist_free_one\n");
 }

void test_mlist_free_one_down(void){
	aunit_printf("\n##FUNCTION_END_mlist_free_one\n");
 }



void abnormal_mlist_free_one_case(int index);

void abnormal_mlist_free_one_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mlist_free_one_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct mlist *ml;


	//ֵ�������
	struct mlist *valueList_0[]={(struct mlist *)ml_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	file_regfree_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_free_one_5,false,0\n");
	aunit_printf("#CASE_START_test_mlist_free_one_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ml=(struct mlist *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		mlist_free_one(ml);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("file_regfree","file_regfree_call_counter",file_regfree_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_mlist_free_one_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_mlist_free_one_up();

	switch(caseIndex){
	case 5:
		test_mlist_free_one_5();
		break;
	default:
		abnormal_mlist_free_one_case(caseIndex);
		break;
	}

	test_mlist_free_one_down();
}

