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
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct buffer *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
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
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
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
	//循环计数器,为用户变量/返回值赋值
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
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_trycdf","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("file_trycdf","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
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

