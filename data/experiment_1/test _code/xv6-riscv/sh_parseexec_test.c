void test_parseexec_up(void);
void test_parseexec_down(void);


void test_parseexec_up(void){

	aunit_printf("\n##FUNCTION_START_parseexec\n");
 }

void test_parseexec_down(void){
	aunit_printf("\n##FUNCTION_END_parseexec\n");
 }



void abnormal_parseexec_case(int index);

void abnormal_parseexec_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseexec_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 arg11"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	execcmd_call_counter = 0;
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseblock_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseexec_4,false,0\n");
	aunit_printf("#CASE_START_test_parseexec_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*ps=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = parseexec(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseexec","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("execcmd","execcmd_call_counter",execcmd_call_counter)
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseblock","parseblock_call_counter",parseblock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseexec_4\n");
}

void test_parseexec_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"cmd > output.txt"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	execcmd_call_counter = 0;
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseblock_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseexec_5,false,0\n");
	aunit_printf("#CASE_START_test_parseexec_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*ps=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = parseexec(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseexec","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("parseexec","returnValue->type",2,returnValue->type)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("execcmd","execcmd_call_counter",execcmd_call_counter)
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseblock","parseblock_call_counter",parseblock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseexec_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseexec_up();

	switch(caseIndex){
	case 4:
		test_parseexec_4();
		break;
	case 5:
		test_parseexec_5();
		break;
	default:
		abnormal_parseexec_case(caseIndex);
		break;
	}

	test_parseexec_down();
}

