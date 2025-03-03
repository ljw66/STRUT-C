void test_apprentice_map_up(void);
void test_apprentice_map_down(void);


void test_apprentice_map_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_map\n");
 }

void test_apprentice_map_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_map\n");
 }



void abnormal_apprentice_map_case(int index);

void abnormal_apprentice_map_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_map_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	char *fn;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_map *returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"test.db"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	check_buffer_call_counter = 0;
	read_call_counter = 0;
	parse_strength_call_counter = 0;
	file_badread_call_counter = 0;
	file_oomem_call_counter = 0;
	parse_mime_call_counter = 0;
	fstat_call_counter = 0;
	calloc_call_counter = 0;
	maxoff_t_call_counter = 0;
	file_error_call_counter = 0;
	mkdbname_call_counter = 0;
	parse_apple_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_map_8,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_map_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fn=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = apprentice_map(ms,fn);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("apprentice_map","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("apprentice_map","errno",0,errno)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("check_buffer","check_buffer_call_counter",check_buffer_call_counter)
	OB_INT_EXPR("read","read_call_counter",read_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("file_badread","file_badread_call_counter",file_badread_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fstat","fstat_call_counter",fstat_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("maxoff_t","maxoff_t_call_counter",maxoff_t_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("mkdbname","mkdbname_call_counter",mkdbname_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_apprentice_map_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_map_up();

	switch(caseIndex){
	case 8:
		test_apprentice_map_8();
		break;
	default:
		abnormal_apprentice_map_case(caseIndex);
		break;
	}

	test_apprentice_map_down();
}

