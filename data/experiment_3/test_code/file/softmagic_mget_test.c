void test_mget_up(void);
void test_mget_down(void);


void test_mget_up(void){

	aunit_printf("\n##FUNCTION_START_mget\n");
 }

void test_mget_down(void){
	aunit_printf("\n##FUNCTION_END_mget\n");
 }



void abnormal_mget_case(int index);

void abnormal_mget_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mget_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned char *s;
	unsigned int nbytes;
	unsigned int o;
	unsigned int cont_level;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	uint16_t *valueList_1[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)need_separator_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	uint16_t *valueList_6[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)found_match_PTRTO};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)returnval_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)printed_something_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)firstline_PTRTO};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={6};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={5};
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
	restore_cont_call_counter = 0;
	save_cont_call_counter = 0;
	file_printf_call_counter = 0;
	match_call_counter = 0;
	file_mdump_call_counter = 0;
	mcopy_call_counter = 0;
	file_push_buffer_call_counter = 0;
	fprintf_call_counter = 0;
	file_pop_buffer_call_counter = 0;
	cvt_id3_call_counter = 0;
	file_error_call_counter = 0;
	strtoull_call_counter = 0;
	file_magicfind_call_counter = 0;
	do_ops_call_counter = 0;
	memcpy_call_counter = 0;
	mdebug_call_counter = 0;
	cvt_flip_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	mconvert_call_counter = 0;
	file_fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mget_1,false,0\n");
	aunit_printf("#CASE_START_test_mget_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir_count=(uint16_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			need_separator=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			name_count=(uint16_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			found_match=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			returnval=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			printed_something=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			firstline=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			indir_count_PTRTO[0]=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = mget(ms,m,b,s,nbytes,o,cont_level,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mget","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("mget","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("restore_cont","restore_cont_call_counter",restore_cont_call_counter)
	OB_INT_EXPR("save_cont","save_cont_call_counter",save_cont_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("match","match_call_counter",match_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("mcopy","mcopy_call_counter",mcopy_call_counter)
	OB_INT_EXPR("file_push_buffer","file_push_buffer_call_counter",file_push_buffer_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_pop_buffer","file_pop_buffer_call_counter",file_pop_buffer_call_counter)
	OB_INT_EXPR("cvt_id3","cvt_id3_call_counter",cvt_id3_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("file_magicfind","file_magicfind_call_counter",file_magicfind_call_counter)
	OB_INT_EXPR("do_ops","do_ops_call_counter",do_ops_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("mdebug","mdebug_call_counter",mdebug_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("mconvert","mconvert_call_counter",mconvert_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_mget_1\n");
}

void test_mget_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned char *s;
	unsigned int nbytes;
	unsigned int o;
	unsigned int cont_level;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	uint16_t *valueList_1[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)need_separator_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	uint16_t *valueList_6[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)found_match_PTRTO};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)returnval_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)printed_something_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)firstline_PTRTO};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={4};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={3};
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
	restore_cont_call_counter = 0;
	save_cont_call_counter = 0;
	file_printf_call_counter = 0;
	match_call_counter = 0;
	file_mdump_call_counter = 0;
	mcopy_call_counter = 0;
	file_push_buffer_call_counter = 0;
	fprintf_call_counter = 0;
	file_pop_buffer_call_counter = 0;
	cvt_id3_call_counter = 0;
	file_error_call_counter = 0;
	strtoull_call_counter = 0;
	file_magicfind_call_counter = 0;
	do_ops_call_counter = 0;
	memcpy_call_counter = 0;
	mdebug_call_counter = 0;
	cvt_flip_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	mconvert_call_counter = 0;
	file_fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mget_2,false,0\n");
	aunit_printf("#CASE_START_test_mget_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir_count=(uint16_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			need_separator=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			name_count=(uint16_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			found_match=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			returnval=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			printed_something=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			firstline=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			name_count_PTRTO[0]=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = mget(ms,m,b,s,nbytes,o,cont_level,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mget","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("mget","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("restore_cont","restore_cont_call_counter",restore_cont_call_counter)
	OB_INT_EXPR("save_cont","save_cont_call_counter",save_cont_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("match","match_call_counter",match_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("mcopy","mcopy_call_counter",mcopy_call_counter)
	OB_INT_EXPR("file_push_buffer","file_push_buffer_call_counter",file_push_buffer_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_pop_buffer","file_pop_buffer_call_counter",file_pop_buffer_call_counter)
	OB_INT_EXPR("cvt_id3","cvt_id3_call_counter",cvt_id3_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("file_magicfind","file_magicfind_call_counter",file_magicfind_call_counter)
	OB_INT_EXPR("do_ops","do_ops_call_counter",do_ops_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("mdebug","mdebug_call_counter",mdebug_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("mconvert","mconvert_call_counter",mconvert_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_mget_2\n");
}

void test_mget_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned char *s;
	unsigned int nbytes;
	unsigned int o;
	unsigned int cont_level;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	uint16_t *valueList_1[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)need_separator_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	uint16_t *valueList_6[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)found_match_PTRTO};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)returnval_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)printed_something_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)firstline_PTRTO};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={1};
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
	restore_cont_call_counter = 0;
	save_cont_call_counter = 0;
	file_printf_call_counter = 0;
	match_call_counter = 0;
	file_mdump_call_counter = 0;
	mcopy_call_counter = 0;
	file_push_buffer_call_counter = 0;
	fprintf_call_counter = 0;
	file_pop_buffer_call_counter = 0;
	cvt_id3_call_counter = 0;
	file_error_call_counter = 0;
	strtoull_call_counter = 0;
	file_magicfind_call_counter = 0;
	do_ops_call_counter = 0;
	memcpy_call_counter = 0;
	mdebug_call_counter = 0;
	cvt_flip_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	mconvert_call_counter = 0;
	file_fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mget_3,false,0\n");
	aunit_printf("#CASE_START_test_mget_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir_count=(uint16_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			need_separator=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			name_count=(uint16_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			found_match=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			returnval=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			printed_something=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			firstline=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).flags=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(m_PTRTO[0]).type=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = mget(ms,m,b,s,nbytes,o,cont_level,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mget","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("mget","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("restore_cont","restore_cont_call_counter",restore_cont_call_counter)
	OB_INT_EXPR("save_cont","save_cont_call_counter",save_cont_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("match","match_call_counter",match_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("mcopy","mcopy_call_counter",mcopy_call_counter)
	OB_INT_EXPR("file_push_buffer","file_push_buffer_call_counter",file_push_buffer_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_pop_buffer","file_pop_buffer_call_counter",file_pop_buffer_call_counter)
	OB_INT_EXPR("cvt_id3","cvt_id3_call_counter",cvt_id3_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("file_magicfind","file_magicfind_call_counter",file_magicfind_call_counter)
	OB_INT_EXPR("do_ops","do_ops_call_counter",do_ops_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("mdebug","mdebug_call_counter",mdebug_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("mconvert","mconvert_call_counter",mconvert_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_mget_3\n");
}

void test_mget_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned char *s;
	unsigned int nbytes;
	unsigned int o;
	unsigned int cont_level;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	uint16_t *valueList_1[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)need_separator_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	uint16_t *valueList_6[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)found_match_PTRTO};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)returnval_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)printed_something_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)firstline_PTRTO};
	unsigned int listLength_10=1;
	int valueList_11[]={1};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={255};
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
	case_id=4;
	//初始化各桩函数调用计数器
	restore_cont_call_counter = 0;
	save_cont_call_counter = 0;
	file_printf_call_counter = 0;
	match_call_counter = 0;
	file_mdump_call_counter = 0;
	mcopy_call_counter = 0;
	file_push_buffer_call_counter = 0;
	fprintf_call_counter = 0;
	file_pop_buffer_call_counter = 0;
	cvt_id3_call_counter = 0;
	file_error_call_counter = 0;
	strtoull_call_counter = 0;
	file_magicfind_call_counter = 0;
	do_ops_call_counter = 0;
	memcpy_call_counter = 0;
	mdebug_call_counter = 0;
	cvt_flip_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	mconvert_call_counter = 0;
	file_fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mget_4,false,0\n");
	aunit_printf("#CASE_START_test_mget_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir_count=(uint16_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			need_separator=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			name_count=(uint16_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			found_match=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			returnval=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			printed_something=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			firstline=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			flip=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(m_PTRTO[0]).in_type=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = mget(ms,m,b,s,nbytes,o,cont_level,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mget","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("mget","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("restore_cont","restore_cont_call_counter",restore_cont_call_counter)
	OB_INT_EXPR("save_cont","save_cont_call_counter",save_cont_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("match","match_call_counter",match_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("mcopy","mcopy_call_counter",mcopy_call_counter)
	OB_INT_EXPR("file_push_buffer","file_push_buffer_call_counter",file_push_buffer_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_pop_buffer","file_pop_buffer_call_counter",file_pop_buffer_call_counter)
	OB_INT_EXPR("cvt_id3","cvt_id3_call_counter",cvt_id3_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("file_magicfind","file_magicfind_call_counter",file_magicfind_call_counter)
	OB_INT_EXPR("do_ops","do_ops_call_counter",do_ops_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("mdebug","mdebug_call_counter",mdebug_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("mconvert","mconvert_call_counter",mconvert_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_mget_4\n");
}

void test_mget_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned char *s;
	unsigned int nbytes;
	unsigned int o;
	unsigned int cont_level;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	uint16_t *valueList_1[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)need_separator_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	uint16_t *valueList_6[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)found_match_PTRTO};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)returnval_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)printed_something_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)firstline_PTRTO};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={1};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={1};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
	unsigned int listLength_13=1;
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
	unsigned char useLast_13=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	restore_cont_call_counter = 0;
	save_cont_call_counter = 0;
	file_printf_call_counter = 0;
	match_call_counter = 0;
	file_mdump_call_counter = 0;
	mcopy_call_counter = 0;
	file_push_buffer_call_counter = 0;
	fprintf_call_counter = 0;
	file_pop_buffer_call_counter = 0;
	cvt_id3_call_counter = 0;
	file_error_call_counter = 0;
	strtoull_call_counter = 0;
	file_magicfind_call_counter = 0;
	do_ops_call_counter = 0;
	memcpy_call_counter = 0;
	mdebug_call_counter = 0;
	cvt_flip_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	mconvert_call_counter = 0;
	file_fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mget_5,false,0\n");
	aunit_printf("#CASE_START_test_mget_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir_count=(uint16_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			need_separator=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			name_count=(uint16_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			found_match=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			returnval=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			printed_something=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			firstline=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			indir_count_PTRTO[0]=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			name_count_PTRTO[0]=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ms_PTRTO[0]).flags=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = mget(ms,m,b,s,nbytes,o,cont_level,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mget","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("mget","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("restore_cont","restore_cont_call_counter",restore_cont_call_counter)
	OB_INT_EXPR("save_cont","save_cont_call_counter",save_cont_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("match","match_call_counter",match_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("mcopy","mcopy_call_counter",mcopy_call_counter)
	OB_INT_EXPR("file_push_buffer","file_push_buffer_call_counter",file_push_buffer_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_pop_buffer","file_pop_buffer_call_counter",file_pop_buffer_call_counter)
	OB_INT_EXPR("cvt_id3","cvt_id3_call_counter",cvt_id3_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("file_magicfind","file_magicfind_call_counter",file_magicfind_call_counter)
	OB_INT_EXPR("do_ops","do_ops_call_counter",do_ops_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("mdebug","mdebug_call_counter",mdebug_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("mconvert","mconvert_call_counter",mconvert_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_mget_5\n");
}

void test_mget_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned char *s;
	unsigned int nbytes;
	unsigned int o;
	unsigned int cont_level;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	uint16_t *valueList_1[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)need_separator_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	uint16_t *valueList_6[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)found_match_PTRTO};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)returnval_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)printed_something_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)firstline_PTRTO};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={2};
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
	case_id=6;
	//初始化各桩函数调用计数器
	restore_cont_call_counter = 0;
	save_cont_call_counter = 0;
	file_printf_call_counter = 0;
	match_call_counter = 0;
	file_mdump_call_counter = 0;
	mcopy_call_counter = 0;
	file_push_buffer_call_counter = 0;
	fprintf_call_counter = 0;
	file_pop_buffer_call_counter = 0;
	cvt_id3_call_counter = 0;
	file_error_call_counter = 0;
	strtoull_call_counter = 0;
	file_magicfind_call_counter = 0;
	do_ops_call_counter = 0;
	memcpy_call_counter = 0;
	mdebug_call_counter = 0;
	cvt_flip_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	mconvert_call_counter = 0;
	file_fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mget_6,false,0\n");
	aunit_printf("#CASE_START_test_mget_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir_count=(uint16_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			need_separator=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			name_count=(uint16_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			found_match=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			returnval=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			printed_something=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			firstline=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).flags=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(m_PTRTO[0]).type=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = mget(ms,m,b,s,nbytes,o,cont_level,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mget","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("mget","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("restore_cont","restore_cont_call_counter",restore_cont_call_counter)
	OB_INT_EXPR("save_cont","save_cont_call_counter",save_cont_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("match","match_call_counter",match_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("mcopy","mcopy_call_counter",mcopy_call_counter)
	OB_INT_EXPR("file_push_buffer","file_push_buffer_call_counter",file_push_buffer_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_pop_buffer","file_pop_buffer_call_counter",file_pop_buffer_call_counter)
	OB_INT_EXPR("cvt_id3","cvt_id3_call_counter",cvt_id3_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("file_magicfind","file_magicfind_call_counter",file_magicfind_call_counter)
	OB_INT_EXPR("do_ops","do_ops_call_counter",do_ops_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("mdebug","mdebug_call_counter",mdebug_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("mconvert","mconvert_call_counter",mconvert_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_mget_6\n");
}

void test_mget_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned char *s;
	unsigned int nbytes;
	unsigned int o;
	unsigned int cont_level;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	uint16_t *valueList_1[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)need_separator_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	uint16_t *valueList_6[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={100};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)found_match_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)returnval_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)printed_something_PTRTO};
	unsigned int listLength_10=1;
	int *valueList_11[]={(int *)firstline_PTRTO};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={4};
	unsigned int listLength_13=1;
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
	unsigned char useLast_13=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	restore_cont_call_counter = 0;
	save_cont_call_counter = 0;
	file_printf_call_counter = 0;
	match_call_counter = 0;
	file_mdump_call_counter = 0;
	mcopy_call_counter = 0;
	file_push_buffer_call_counter = 0;
	fprintf_call_counter = 0;
	file_pop_buffer_call_counter = 0;
	cvt_id3_call_counter = 0;
	file_error_call_counter = 0;
	strtoull_call_counter = 0;
	file_magicfind_call_counter = 0;
	do_ops_call_counter = 0;
	memcpy_call_counter = 0;
	mdebug_call_counter = 0;
	cvt_flip_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	mconvert_call_counter = 0;
	file_fmtcheck_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mget_7,false,0\n");
	aunit_printf("#CASE_START_test_mget_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir_count=(uint16_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			need_separator=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			name_count=(uint16_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			nbytes=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			found_match=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			returnval=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			printed_something=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			firstline=(int *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).flags=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(m_PTRTO[0]).type=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = mget(ms,m,b,s,nbytes,o,cont_level,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("mget","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("mget","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("restore_cont","restore_cont_call_counter",restore_cont_call_counter)
	OB_INT_EXPR("save_cont","save_cont_call_counter",save_cont_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("match","match_call_counter",match_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("mcopy","mcopy_call_counter",mcopy_call_counter)
	OB_INT_EXPR("file_push_buffer","file_push_buffer_call_counter",file_push_buffer_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_pop_buffer","file_pop_buffer_call_counter",file_pop_buffer_call_counter)
	OB_INT_EXPR("cvt_id3","cvt_id3_call_counter",cvt_id3_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("file_magicfind","file_magicfind_call_counter",file_magicfind_call_counter)
	OB_INT_EXPR("do_ops","do_ops_call_counter",do_ops_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("mdebug","mdebug_call_counter",mdebug_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("mconvert","mconvert_call_counter",mconvert_call_counter)
	OB_INT_EXPR("file_fmtcheck","file_fmtcheck_call_counter",file_fmtcheck_call_counter)

	aunit_printf("#CASE_END_test_mget_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_mget_up();

	switch(caseIndex){
	case 1:
		test_mget_1();
		break;
	case 2:
		test_mget_2();
		break;
	case 3:
		test_mget_3();
		break;
	case 4:
		test_mget_4();
		break;
	case 5:
		test_mget_5();
		break;
	case 6:
		test_mget_6();
		break;
	case 7:
		test_mget_7();
		break;
	default:
		abnormal_mget_case(caseIndex);
		break;
	}

	test_mget_down();
}

