void test_file_error_core_up(void);
void test_file_error_core_down(void);


void test_file_error_core_up(void){

	aunit_printf("\n##FUNCTION_START_file_error_core\n");
 }

void test_file_error_core_down(void){
	aunit_printf("\n##FUNCTION_END_file_error_core\n");
 }



void abnormal_file_error_core_case(int index);

void abnormal_file_error_core_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_error_core_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int error;
	char *f;
	void *va;
	unsigned int lineno;


	//值序列相关
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"Test message"};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strerror_call_counter = 0;
	file_printf_call_counter = 0;
	file_vprintf_call_counter = 0;
	file_clearbuf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_error_core_1,false,0\n");
	aunit_printf("#CASE_START_test_file_error_core_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lineno=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).event_flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		file_error_core(ms,error,f,va,lineno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->error",0,ms->error)
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->event_flags",1,ms->event_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_vprintf","file_vprintf_call_counter",file_vprintf_call_counter)
	OB_INT_EXPR("file_clearbuf","file_clearbuf_call_counter",file_clearbuf_call_counter)

	aunit_printf("#CASE_END_test_file_error_core_1\n");
}

void test_file_error_core_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int error;
	char *f;
	void *va;
	unsigned int lineno;


	//值序列相关
	unsigned int valueList_0[]={42};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"Test message"};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strerror_call_counter = 0;
	file_printf_call_counter = 0;
	file_vprintf_call_counter = 0;
	file_clearbuf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_error_core_2,false,0\n");
	aunit_printf("#CASE_START_test_file_error_core_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lineno=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).event_flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		file_error_core(ms,error,f,va,lineno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->error",0,ms->error)
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->event_flags",1,ms->event_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_vprintf","file_vprintf_call_counter",file_vprintf_call_counter)
	OB_INT_EXPR("file_clearbuf","file_clearbuf_call_counter",file_clearbuf_call_counter)

	aunit_printf("#CASE_END_test_file_error_core_2\n");
}

void test_file_error_core_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int error;
	char *f;
	void *va;
	unsigned int lineno;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"Error occurred"};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	strerror_call_counter = 0;
	file_printf_call_counter = 0;
	file_vprintf_call_counter = 0;
	file_clearbuf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_error_core_3,false,0\n");
	aunit_printf("#CASE_START_test_file_error_core_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lineno=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).event_flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		file_error_core(ms,error,f,va,lineno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->error",5,ms->error)
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->event_flags",1,ms->event_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_vprintf","file_vprintf_call_counter",file_vprintf_call_counter)
	OB_INT_EXPR("file_clearbuf","file_clearbuf_call_counter",file_clearbuf_call_counter)

	aunit_printf("#CASE_END_test_file_error_core_3\n");
}

void test_file_error_core_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int error;
	char *f;
	void *va;
	unsigned int lineno;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"Buffer test"};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"Non-empty buffer"};
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
	case_id=4;
	//初始化各桩函数调用计数器
	strerror_call_counter = 0;
	file_printf_call_counter = 0;
	file_vprintf_call_counter = 0;
	file_clearbuf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_error_core_4,false,0\n");
	aunit_printf("#CASE_START_test_file_error_core_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lineno=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).event_flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).o.buf=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		file_error_core(ms,error,f,va,lineno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->error",0,ms->error)
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->event_flags",1,ms->event_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_vprintf","file_vprintf_call_counter",file_vprintf_call_counter)
	OB_INT_EXPR("file_clearbuf","file_clearbuf_call_counter",file_clearbuf_call_counter)

	aunit_printf("#CASE_END_test_file_error_core_4\n");
}

void test_file_error_core_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int error;
	char *f;
	void *va;
	unsigned int lineno;


	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"Combined test"};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strerror_call_counter = 0;
	file_printf_call_counter = 0;
	file_vprintf_call_counter = 0;
	file_clearbuf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_error_core_5,false,0\n");
	aunit_printf("#CASE_START_test_file_error_core_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lineno=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).event_flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		file_error_core(ms,error,f,va,lineno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->error",2,ms->error)
	TEST_ASSERT_EQUAL_INT("file_error_core","ms->event_flags",1,ms->event_flags)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strerror","strerror_call_counter",strerror_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_vprintf","file_vprintf_call_counter",file_vprintf_call_counter)
	OB_INT_EXPR("file_clearbuf","file_clearbuf_call_counter",file_clearbuf_call_counter)

	aunit_printf("#CASE_END_test_file_error_core_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_error_core_up();

	switch(caseIndex){
	case 1:
		test_file_error_core_1();
		break;
	case 2:
		test_file_error_core_2();
		break;
	case 3:
		test_file_error_core_3();
		break;
	case 4:
		test_file_error_core_4();
		break;
	case 5:
		test_file_error_core_5();
		break;
	default:
		abnormal_file_error_core_case(caseIndex);
		break;
	}

	test_file_error_core_down();
}

