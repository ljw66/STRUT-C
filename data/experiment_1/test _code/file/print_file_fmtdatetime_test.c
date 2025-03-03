void test_file_fmtdatetime_up(void);
void test_file_fmtdatetime_down(void);


void test_file_fmtdatetime_up(void){

	aunit_printf("\n##FUNCTION_START_file_fmtdatetime\n");
 }

void test_file_fmtdatetime_down(void){
	aunit_printf("\n##FUNCTION_END_file_fmtdatetime\n");
 }



void abnormal_file_fmtdatetime_case(int index);

void abnormal_file_fmtdatetime_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_fmtdatetime_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bsize;
	unsigned long long int v;
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	unsigned long long int valueList_0[]={1672531200};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	cdf_timestamp_to_timespec_call_counter = 0;
	localtime_r_call_counter = 0;
	strlcpy_call_counter = 0;
	tzset_call_counter = 0;
	asctime_r_call_counter = 0;
	gmtime_r_call_counter = 0;
	strcspn_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtdatetime_6,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtdatetime_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			v=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			flags=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			bsize=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(gmtime_r_returnValue_PTRTO[0]).tm_sec=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = file_fmtdatetime(buf,bsize,v,flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtdatetime","returnValue","*Invalid datetime*",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_timestamp_to_timespec","cdf_timestamp_to_timespec_call_counter",cdf_timestamp_to_timespec_call_counter)
	OB_INT_EXPR("localtime_r","localtime_r_call_counter",localtime_r_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("tzset","tzset_call_counter",tzset_call_counter)
	OB_INT_EXPR("asctime_r","asctime_r_call_counter",asctime_r_call_counter)
	OB_INT_EXPR("gmtime_r","gmtime_r_call_counter",gmtime_r_call_counter)
	OB_INT_EXPR("strcspn","strcspn_call_counter",strcspn_call_counter)

	aunit_printf("#CASE_END_test_file_fmtdatetime_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_fmtdatetime_up();

	switch(caseIndex){
	case 6:
		test_file_fmtdatetime_6();
		break;
	default:
		abnormal_file_fmtdatetime_case(caseIndex);
		break;
	}

	test_file_fmtdatetime_down();
}

