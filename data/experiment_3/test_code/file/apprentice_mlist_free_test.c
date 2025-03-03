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


	//ֵ�������
	struct mlist *valueList_0[]={(struct mlist *)0};
	unsigned int listLength_0=1;
	file_regex_t **valueList_1[]={(file_regex_t * *)0};
	unsigned int listLength_1=1;
	struct mlist *valueList_2[]={(struct mlist *)0};
	unsigned int listLength_2=1;
	struct magic *valueList_3[]={(struct magic *)&struct_magic1};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
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
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(mlist_PTRTO[0]).next=(struct mlist *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(mlist_PTRTO[0]).magic_rxcomp=(file_regex_t * *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(mlist_PTRTO[0]).prev=(struct mlist *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(mlist_PTRTO[0]).magic=(struct magic *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(mlist_PTRTO[0]).nmagic=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(mlist_PTRTO[0]).map=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
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

