void test_file_mdump_up(void);
void test_file_mdump_down(void);


void test_file_mdump_up(void){

	aunit_printf("\n##FUNCTION_START_file_mdump\n");
 }

void test_file_mdump_down(void){
	aunit_printf("\n##FUNCTION_END_file_mdump\n");
 }



void abnormal_file_mdump_case(int index);

void abnormal_file_mdump_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_mdump_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic *m;


	//ֵ�������
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={'='};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={12345};
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
	case_id=4;
	//��ʼ����׮�������ü�����
	file_fmttime_call_counter = 0;
	file_fmtnum_call_counter = 0;
	file_fmtdate_call_counter = 0;
	fputc_call_counter = 0;
	file_showstr_call_counter = 0;
	file_fmtdatetime_call_counter = 0;
	file_fmtvarint_call_counter = 0;
	fprintf_call_counter = 0;
	file_print_guid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_mdump_4,false,0\n");
	aunit_printf("#CASE_START_test_file_mdump_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file_nnames=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stderr=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).flag=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).type=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(m_PTRTO[0]).reln=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(m_PTRTO[0]).value.l=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		file_mdump(m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_mdump","file_nnames",2,file_nnames)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_fmttime","file_fmttime_call_counter",file_fmttime_call_counter)
	OB_INT_EXPR("file_fmtnum","file_fmtnum_call_counter",file_fmtnum_call_counter)
	OB_INT_EXPR("file_fmtdate","file_fmtdate_call_counter",file_fmtdate_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("file_showstr","file_showstr_call_counter",file_showstr_call_counter)
	OB_INT_EXPR("file_fmtdatetime","file_fmtdatetime_call_counter",file_fmtdatetime_call_counter)
	OB_INT_EXPR("file_fmtvarint","file_fmtvarint_call_counter",file_fmtvarint_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_print_guid","file_print_guid_call_counter",file_print_guid_call_counter)

	aunit_printf("#CASE_END_test_file_mdump_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_mdump_up();

	switch(caseIndex){
	case 4:
		test_file_mdump_4();
		break;
	default:
		abnormal_file_mdump_case(caseIndex);
		break;
	}

	test_file_mdump_down();
}

