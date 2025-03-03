void test_file_trycdf_up(void);
void test_file_trycdf_down(void);


void test_file_trycdf_up(void){

	aunit_printf("\n##FUNCTION_START_file_trycdf\n");
 }

void test_file_trycdf_down(void){
	aunit_printf("\n##FUNCTION_END_file_trycdf\n");
 }



void abnormal_file_trycdf_case(int index);

void abnormal_file_trycdf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_trycdf_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct buffer *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	void *valueList_4[]={(void *)"buffer"};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1024};
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
	cdf_file_dir_info_call_counter = 0;
	cdf_read_ssat_call_counter = 0;
	cdf_read_short_stream_call_counter = 0;
	cdf_read_summary_info_call_counter = 0;
	cdf_read_user_stream_call_counter = 0;
	cdf_check_summary_info_call_counter = 0;
	file_printf_call_counter = 0;
	cdf_read_sat_call_counter = 0;
	cdf_zero_stream_call_counter = 0;
	cdf_read_doc_summary_info_call_counter = 0;
	cdf_read_header_call_counter = 0;
	cdf_read_dir_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_trycdf_9,false,0\n");
	aunit_printf("#CASE_START_test_file_trycdf_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ms_PTRTO[0]).flags=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).fd=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).fbuf=(void *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).flen=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_trycdf(ms,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_trycdf","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("file_trycdf","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_file_dir_info","cdf_file_dir_info_call_counter",cdf_file_dir_info_call_counter)
	OB_INT_EXPR("cdf_read_ssat","cdf_read_ssat_call_counter",cdf_read_ssat_call_counter)
	OB_INT_EXPR("cdf_read_short_stream","cdf_read_short_stream_call_counter",cdf_read_short_stream_call_counter)
	OB_INT_EXPR("cdf_read_summary_info","cdf_read_summary_info_call_counter",cdf_read_summary_info_call_counter)
	OB_INT_EXPR("cdf_read_user_stream","cdf_read_user_stream_call_counter",cdf_read_user_stream_call_counter)
	OB_INT_EXPR("cdf_check_summary_info","cdf_check_summary_info_call_counter",cdf_check_summary_info_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("cdf_read_sat","cdf_read_sat_call_counter",cdf_read_sat_call_counter)
	OB_INT_EXPR("cdf_zero_stream","cdf_zero_stream_call_counter",cdf_zero_stream_call_counter)
	OB_INT_EXPR("cdf_read_doc_summary_info","cdf_read_doc_summary_info_call_counter",cdf_read_doc_summary_info_call_counter)
	OB_INT_EXPR("cdf_read_header","cdf_read_header_call_counter",cdf_read_header_call_counter)
	OB_INT_EXPR("cdf_read_dir","cdf_read_dir_call_counter",cdf_read_dir_call_counter)

	aunit_printf("#CASE_END_test_file_trycdf_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_trycdf_up();

	switch(caseIndex){
	case 9:
		test_file_trycdf_9();
		break;
	default:
		abnormal_file_trycdf_case(caseIndex);
		break;
	}

	test_file_trycdf_down();
}

