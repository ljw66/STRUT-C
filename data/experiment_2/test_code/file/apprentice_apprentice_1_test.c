void test_apprentice_1_up(void);
void test_apprentice_1_down(void);


void test_apprentice_1_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_1\n");
 }

void test_apprentice_1_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_1\n");
 }



void abnormal_apprentice_1_case(int index);

void abnormal_apprentice_1_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_1_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	char *fn;
	int action;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={432};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"testfile"};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0x000040};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	parse_strength_call_counter = 0;
	apprentice_load_call_counter = 0;
	file_magwarn_call_counter = 0;
	file_oomem_call_counter = 0;
	parse_mime_call_counter = 0;
	add_mlist_call_counter = 0;
	mlist_free_all_call_counter = 0;
	printf_call_counter = 0;
	file_error_call_counter = 0;
	apprentice_compile_call_counter = 0;
	parse_apple_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	apprentice_list_call_counter = 0;
	apprentice_map_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_1_9,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_1_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magicsize=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fn=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			action=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = apprentice_1(ms,fn,action);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("apprentice_1","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("apprentice_load","apprentice_load_call_counter",apprentice_load_call_counter)
	OB_INT_EXPR("file_magwarn","file_magwarn_call_counter",file_magwarn_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("add_mlist","add_mlist_call_counter",add_mlist_call_counter)
	OB_INT_EXPR("mlist_free_all","mlist_free_all_call_counter",mlist_free_all_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("apprentice_compile","apprentice_compile_call_counter",apprentice_compile_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("apprentice_list","apprentice_list_call_counter",apprentice_list_call_counter)
	OB_INT_EXPR("apprentice_map","apprentice_map_call_counter",apprentice_map_call_counter)

	aunit_printf("#CASE_END_test_apprentice_1_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_1_up();

	switch(caseIndex){
	case 9:
		test_apprentice_1_9();
		break;
	default:
		abnormal_apprentice_1_case(caseIndex);
		break;
	}

	test_apprentice_1_down();
}

