void test_apprentice_sort_up(void);
void test_apprentice_sort_down(void);


void test_apprentice_sort_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_sort\n");
 }

void test_apprentice_sort_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_sort\n");
 }



void abnormal_apprentice_sort_case(int index);

void abnormal_apprentice_sort_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_sort_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *a;
	void *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"magic_entry_a"};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"magic_entry_b"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	memcmp_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	file_mdump_call_counter = 0;
	file_magwarn1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_sort_8,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_sort_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = apprentice_sort(a,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("apprentice_sort","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("file_magwarn1","file_magwarn1_call_counter",file_magwarn1_call_counter)

	aunit_printf("#CASE_END_test_apprentice_sort_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_sort_up();

	switch(caseIndex){
	case 8:
		test_apprentice_sort_8();
		break;
	default:
		abnormal_apprentice_sort_case(caseIndex);
		break;
	}

	test_apprentice_sort_down();
}

