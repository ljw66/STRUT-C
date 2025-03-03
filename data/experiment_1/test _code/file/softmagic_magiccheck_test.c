void test_magiccheck_up(void);
void test_magiccheck_down(void);


void test_magiccheck_up(void){

	aunit_printf("\n##FUNCTION_START_magiccheck\n");
 }

void test_magiccheck_down(void){
	aunit_printf("\n##FUNCTION_END_magiccheck\n");
 }



void abnormal_magiccheck_case(int index);

void abnormal_magiccheck_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magiccheck_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	file_regex_t **m_cache;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	FILE *valueList_2[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_2=1;
	struct magic *valueList_3[]={(struct magic *)m_PTRTO};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={19};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={1};
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
	case_id=9;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	alloc_regex_call_counter = 0;
	der_cmp_call_counter = 0;
	file_signextend_call_counter = 0;
	file_showstr_call_counter = 0;
	file_magerror_call_counter = 0;
	isunordered_call_counter = 0;
	fprintf_call_counter = 0;
	file_error_call_counter = 0;
	isgreater_call_counter = 0;
	file_magic_strength_call_counter = 0;
	memcmp_call_counter = 0;
	memcpy_call_counter = 0;
	isless_call_counter = 0;
	file_regexec_call_counter = 0;
	file_strncmp16_call_counter = 0;
	free_call_counter = 0;
	file_strncmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magiccheck_9,false,0\n");
	aunit_printf("#CASE_START_test_magiccheck_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			returnValue=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			stderr=(FILE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			m=(struct magic *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).ms_value.q=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = magiccheck(ms,m,m_cache);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("magiccheck","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("alloc_regex","alloc_regex_call_counter",alloc_regex_call_counter)
	OB_INT_EXPR("der_cmp","der_cmp_call_counter",der_cmp_call_counter)
	OB_INT_EXPR("file_signextend","file_signextend_call_counter",file_signextend_call_counter)
	OB_INT_EXPR("file_showstr","file_showstr_call_counter",file_showstr_call_counter)
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("isunordered","isunordered_call_counter",isunordered_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("isgreater","isgreater_call_counter",isgreater_call_counter)
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("isless","isless_call_counter",isless_call_counter)
	OB_INT_EXPR("file_regexec","file_regexec_call_counter",file_regexec_call_counter)
	OB_INT_EXPR("file_strncmp16","file_strncmp16_call_counter",file_strncmp16_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("file_strncmp","file_strncmp_call_counter",file_strncmp_call_counter)

	aunit_printf("#CASE_END_test_magiccheck_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_magiccheck_up();

	switch(caseIndex){
	case 9:
		test_magiccheck_9();
		break;
	default:
		abnormal_magiccheck_case(caseIndex);
		break;
	}

	test_magiccheck_down();
}

