void test_mprint_up(void);
void test_mprint_down(void);


void test_mprint_up(void){

	aunit_printf("\n##FUNCTION_START_mprint\n");
 }

void test_mprint_down(void){
	aunit_printf("\n##FUNCTION_END_mprint\n");
 }



void abnormal_mprint_case(int index);

void abnormal_mprint_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mprint_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={49};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={9876543210987654321};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={1234567890123456789};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	file_fmttime_call_counter = 0;
	file_signextend_call_counter = 0;
	file_printf_call_counter = 0;
	file_oomem_call_counter = 0;
	file_magerror_call_counter = 0;
	strcspn_call_counter = 0;
	file_strtrim_call_counter = 0;
	varexpand_call_counter = 0;
	check_fmt_call_counter = 0;
	file_pstring_length_size_call_counter = 0;
	file_fmtnum_call_counter = 0;
	file_fmtdate_call_counter = 0;
	file_printable_call_counter = 0;
	file_fmtdatetime_call_counter = 0;
	strndup_call_counter = 0;
	free_call_counter = 0;
	file_fmtcheck_call_counter = 0;
	file_print_guid_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mprint_10,false,0\n");
	aunit_printf("#CASE_START_test_mprint_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

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
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).type=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).ms_value.guid[1]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).ms_value.guid[0]=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = mprint(ms,m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("mprint","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_fmttime","file_fmttime_call_counter",file_fmttime_call_counter)
	OB_INT_EXPR("file_signextend","file_signextend_call_counter",file_signextend_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("strcspn","strcspn_call_counter",strcspn_call_counter)
	OB_INT_EXPR("file_strtrim","file_strtrim_call_counter",file_strtrim_call_counter)
	OB_INT_EXPR("varexpand","varexpand_call_counter",varexpand_call_counter)
	OB_INT_EXPR("check_fmt","check_fmt_call_counter",check_fmt_call_counter)
	OB_INT_EXPR("file_pstring_length_size","file_pstring_length_size_call_counter",file_pstring_length_size_call_counter)
	OB_INT_EXPR("file_fmtnum","file_fmtnum_call_counter",file_fmtnum_call_counter)
	OB_INT_EXPR("file_fmtdate","file_fmtdate_call_counter",file_fmtdate_call_counter)
	OB_INT_EXPR("file_printable","file_printable_call_counter",file_printable_call_counter)
	OB_INT_EXPR("file_fmtdatetime","file_fmtdatetime_call_counter",file_fmtdatetime_call_counter)
	OB_INT_EXPR("strndup","strndup_call_counter",strndup_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)
	OB_INT_EXPR("file_print_guid","file_print_guid_call_counter",file_print_guid_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_mprint_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_mprint_up();

	switch(caseIndex){
	case 10:
		test_mprint_10();
		break;
	default:
		abnormal_mprint_case(caseIndex);
		break;
	}

	test_mprint_down();
}

