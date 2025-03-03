void test_file_fsmagic_up(void);
void test_file_fsmagic_down(void);


void test_file_fsmagic_up(void){

	aunit_printf("\n##FUNCTION_START_file_fsmagic\n");
 }

void test_file_fsmagic_down(void){
	aunit_printf("\n##FUNCTION_END_file_fsmagic\n");
 }



void abnormal_file_fsmagic_case(int index);

void abnormal_file_fsmagic_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_fsmagic_15(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *fn;
	struct stat *sb;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"directory_file"};
	unsigned int listLength_1=1;
	struct stat *valueList_2[]={(struct stat *)sb_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={40000};
	unsigned int listLength_3=1;
	int valueList_4[]={0x000010};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=15;
	//初始化各桩函数调用计数器
	strerror_call_counter = 0;
	stat_call_counter = 0;
	readlink_call_counter = 0;
	bad_link_call_counter = 0;
	strrchr_call_counter = 0;
	file_printf_call_counter = 0;
	strlcpy_call_counter = 0;
	lstat_call_counter = 0;
	handle_mime_call_counter = 0;
	magic_file_call_counter = 0;
	strlcat_call_counter = 0;
	file_error_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fsmagic_15,false,0\n");
	aunit_printf("#CASE_START_test_file_fsmagic_15\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fn=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sb=(struct stat *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sb_PTRTO[0]).st_mode=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_fsmagic(ms,fn,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_fsmagic","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("file_fsmagic","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("stat","stat_call_counter",stat_call_counter)
	OB_INT_EXPR("readlink","readlink_call_counter",readlink_call_counter)
	OB_INT_EXPR("bad_link","bad_link_call_counter",bad_link_call_counter)
	OB_INT_EXPR("strrchr","strrchr_call_counter",strrchr_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("lstat","lstat_call_counter",lstat_call_counter)
	OB_INT_EXPR("handle_mime","handle_mime_call_counter",handle_mime_call_counter)
	OB_INT_EXPR("magic_file","magic_file_call_counter",magic_file_call_counter)
	OB_INT_EXPR("strlcat","strlcat_call_counter",strlcat_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)

	aunit_printf("#CASE_END_test_file_fsmagic_15\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_fsmagic_up();

	switch(caseIndex){
	case 15:
		test_file_fsmagic_15();
		break;
	default:
		abnormal_file_fsmagic_case(caseIndex);
		break;
	}

	test_file_fsmagic_down();
}

