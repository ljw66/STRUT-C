void test_parseline_up(void);
void test_parseline_down(void);


void test_parseline_up(void){

	aunit_printf("\n##FUNCTION_START_parseline\n");
 }

void test_parseline_down(void){
	aunit_printf("\n##FUNCTION_END_parseline\n");
 }



void abnormal_parseline_case(int index);

void abnormal_parseline_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseline_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"echo hello",(char *)" ls"};
	unsigned int listLength_0=2;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=1;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	listcmd_call_counter = 0;
	gettoken_call_counter = 0;
	parsepipe_call_counter = 0;
	backcmd_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseline_3,false,0\n");
	aunit_printf("#CASE_START_test_parseline_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*ps=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = parseline(ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseline","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("listcmd","listcmd_call_counter",listcmd_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parsepipe","parsepipe_call_counter",parsepipe_call_counter)
	OB_INT_EXPR("backcmd","backcmd_call_counter",backcmd_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseline_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseline_up();

	switch(caseIndex){
	case 3:
		test_parseline_3();
		break;
	default:
		abnormal_parseline_case(caseIndex);
		break;
	}

	test_parseline_down();
}

