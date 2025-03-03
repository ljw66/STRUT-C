void test_file_or_fd_up(void);
void test_file_or_fd_down(void);


void test_file_or_fd_up(void){

	aunit_printf("\n##FUNCTION_START_file_or_fd\n");
 }

void test_file_or_fd_down(void){
	aunit_printf("\n##FUNCTION_END_file_or_fd\n");
 }



void abnormal_file_or_fd_case(int index);

void abnormal_file_or_fd_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_or_fd_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *inname;
	int fd;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"valid_file"};
	unsigned int listLength_2=1;
	int valueList_3[]={-1};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	sread_call_counter = 0;
	file_getbuffer_call_counter = 0;
	close_and_restore_call_counter = 0;
	unreadable_info_call_counter = 0;
	file_reset_call_counter = 0;
	file_fsmagic_call_counter = 0;
	file_buffer_call_counter = 0;
	file_error_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_or_fd_1,false,0\n");
	aunit_printf("#CASE_START_test_file_or_fd_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			inname=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			fd=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).event_flags=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).error=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).file=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ms_PTRTO[0]).line=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).flags=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = file_or_fd(ms,inname,fd);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_or_fd","errno",0,errno)
	TEST_ASSERT_EQUAL_STRING("file_or_fd","returnValue","file_content",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sread","sread_call_counter",sread_call_counter)
	OB_INT_EXPR("file_getbuffer","file_getbuffer_call_counter",file_getbuffer_call_counter)
	OB_INT_EXPR("close_and_restore","close_and_restore_call_counter",close_and_restore_call_counter)
	OB_INT_EXPR("unreadable_info","unreadable_info_call_counter",unreadable_info_call_counter)
	OB_INT_EXPR("file_reset","file_reset_call_counter",file_reset_call_counter)
	OB_INT_EXPR("file_fsmagic","file_fsmagic_call_counter",file_fsmagic_call_counter)
	OB_INT_EXPR("file_buffer","file_buffer_call_counter",file_buffer_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)

	aunit_printf("#CASE_END_test_file_or_fd_1\n");
}

void test_file_or_fd_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *inname;
	int fd;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"nonexistent_file"};
	unsigned int listLength_2=1;
	int valueList_3[]={-1};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	sread_call_counter = 0;
	file_getbuffer_call_counter = 0;
	close_and_restore_call_counter = 0;
	unreadable_info_call_counter = 0;
	file_reset_call_counter = 0;
	file_fsmagic_call_counter = 0;
	file_buffer_call_counter = 0;
	file_error_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_or_fd_2,false,0\n");
	aunit_printf("#CASE_START_test_file_or_fd_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			inname=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			fd=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).event_flags=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).error=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).file=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ms_PTRTO[0]).line=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).flags=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = file_or_fd(ms,inname,fd);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_or_fd","errno",2,errno)
	TEST_ASSERT_EQUAL_STRING("file_or_fd","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sread","sread_call_counter",sread_call_counter)
	OB_INT_EXPR("file_getbuffer","file_getbuffer_call_counter",file_getbuffer_call_counter)
	OB_INT_EXPR("close_and_restore","close_and_restore_call_counter",close_and_restore_call_counter)
	OB_INT_EXPR("unreadable_info","unreadable_info_call_counter",unreadable_info_call_counter)
	OB_INT_EXPR("file_reset","file_reset_call_counter",file_reset_call_counter)
	OB_INT_EXPR("file_fsmagic","file_fsmagic_call_counter",file_fsmagic_call_counter)
	OB_INT_EXPR("file_buffer","file_buffer_call_counter",file_buffer_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)

	aunit_printf("#CASE_END_test_file_or_fd_2\n");
}

void test_file_or_fd_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *inname;
	int fd;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"pipe_input"};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	sread_call_counter = 0;
	file_getbuffer_call_counter = 0;
	close_and_restore_call_counter = 0;
	unreadable_info_call_counter = 0;
	file_reset_call_counter = 0;
	file_fsmagic_call_counter = 0;
	file_buffer_call_counter = 0;
	file_error_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_or_fd_3,false,0\n");
	aunit_printf("#CASE_START_test_file_or_fd_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			inname=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			fd=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).event_flags=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).error=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).file=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ms_PTRTO[0]).line=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).flags=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = file_or_fd(ms,inname,fd);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_or_fd","errno",0,errno)
	TEST_ASSERT_EQUAL_STRING("file_or_fd","returnValue","pipe_content",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sread","sread_call_counter",sread_call_counter)
	OB_INT_EXPR("file_getbuffer","file_getbuffer_call_counter",file_getbuffer_call_counter)
	OB_INT_EXPR("close_and_restore","close_and_restore_call_counter",close_and_restore_call_counter)
	OB_INT_EXPR("unreadable_info","unreadable_info_call_counter",unreadable_info_call_counter)
	OB_INT_EXPR("file_reset","file_reset_call_counter",file_reset_call_counter)
	OB_INT_EXPR("file_fsmagic","file_fsmagic_call_counter",file_fsmagic_call_counter)
	OB_INT_EXPR("file_buffer","file_buffer_call_counter",file_buffer_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)

	aunit_printf("#CASE_END_test_file_or_fd_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_or_fd_up();

	switch(caseIndex){
	case 1:
		test_file_or_fd_1();
		break;
	case 2:
		test_file_or_fd_2();
		break;
	case 3:
		test_file_or_fd_3();
		break;
	default:
		abnormal_file_or_fd_case(caseIndex);
		break;
	}

	test_file_or_fd_down();
}

