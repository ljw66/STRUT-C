void test_file_pipe2file_up(void);
void test_file_pipe2file_down(void);


void test_file_pipe2file_up(void){

	aunit_printf("\n##FUNCTION_START_file_pipe2file\n");
 }

void test_file_pipe2file_down(void){
	aunit_printf("\n##FUNCTION_END_file_pipe2file\n");
 }



void abnormal_file_pipe2file_case(int index);

void abnormal_file_pipe2file_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_pipe2file_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int fd;
	void *startbuf;
	unsigned int nbytes;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={100};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	sread_call_counter = 0;
	lseek_call_counter = 0;
	swrite_call_counter = 0;
	unlink_call_counter = 0;
	strlcpy_call_counter = 0;
	mktemp_call_counter = 0;
	lzmacmp_call_counter = 0;
	file_badseek_call_counter = 0;
	dup2_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;
	file_error_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_pipe2file_7,false,0\n");
	aunit_printf("#CASE_START_test_file_pipe2file_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fd=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).error=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = file_pipe2file(ms,fd,startbuf,nbytes);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_pipe2file","errno",22,errno)
	TEST_ASSERT_EQUAL_INT("file_pipe2file","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sread","sread_call_counter",sread_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("swrite","swrite_call_counter",swrite_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("mktemp","mktemp_call_counter",mktemp_call_counter)
	OB_INT_EXPR("lzmacmp","lzmacmp_call_counter",lzmacmp_call_counter)
	OB_INT_EXPR("file_badseek","file_badseek_call_counter",file_badseek_call_counter)
	OB_INT_EXPR("dup2","dup2_call_counter",dup2_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)

	aunit_printf("#CASE_END_test_file_pipe2file_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_pipe2file_up();

	switch(caseIndex){
	case 7:
		test_file_pipe2file_7();
		break;
	default:
		abnormal_file_pipe2file_case(caseIndex);
		break;
	}

	test_file_pipe2file_down();
}

