void test_getopt_long_up(void);
void test_getopt_long_down(void);


void test_getopt_long_up(void){

	aunit_printf("\n##FUNCTION_START_getopt_long\n");
 }

void test_getopt_long_down(void){
	aunit_printf("\n##FUNCTION_END_getopt_long\n");
 }



void abnormal_getopt_long_case(int index);

void abnormal_getopt_long_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getopt_long_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int nargc;
	char **nargv;
	char *options;
	struct option *long_options;
	int *idx;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	struct option *valueList_3[]={(struct option *)long_options_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"abc"};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	int *valueList_6[]={(int *)idx_PTRTO};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	int valueList_10[]={0};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)"--option"};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)"option"};
	unsigned int listLength_12=1;
	int *valueList_13[]={(int *)0};
	unsigned int listLength_13=1;
	int valueList_14[]={1};
	unsigned int listLength_14=1;
	int valueList_15[]={0};
	unsigned int listLength_15=1;
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
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	strncmp_call_counter = 0;
	abort_call_counter = 0;
	getopt_internal_call_counter = 0;
	strchr_call_counter = 0;
	permute_args_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getopt_long_5,false,0\n");
	aunit_printf("#CASE_START_test_getopt_long_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nargc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			optind=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			optopt=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			long_options=(struct option *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			options=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			opterr=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			idx=(int *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			nonopt_start=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			nonopt_end=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			idx_PTRTO[1]=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			idx_PTRTO[0]=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			*nargv=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(long_options_PTRTO[0]).name=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(long_options_PTRTO[0]).flag=(int *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(long_options_PTRTO[0]).has_arg=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(long_options_PTRTO[0]).val=(int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = getopt_long(nargc,nargv,options,long_options,idx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getopt_long","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("getopt_long","optind",1,optind)
	TEST_ASSERT_EQUAL_INT("getopt_long","opterr",1,opterr)
	TEST_ASSERT_EQUAL_INT("getopt_long","optopt",0,optopt)
	TEST_ASSERT_EQUAL_INT("getopt_long","nonopt_start",0,nonopt_start)
	TEST_ASSERT_EQUAL_INT("getopt_long","nonopt_end",0,nonopt_end)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("strncmp","strncmp_call_counter",strncmp_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("getopt_internal","getopt_internal_call_counter",getopt_internal_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("permute_args","permute_args_call_counter",permute_args_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_getopt_long_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_getopt_long_up();

	switch(caseIndex){
	case 5:
		test_getopt_long_5();
		break;
	default:
		abnormal_getopt_long_case(caseIndex);
		break;
	}

	test_getopt_long_down();
}

