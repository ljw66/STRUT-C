void test_parseredirs_up(void);
void test_parseredirs_down(void);


void test_parseredirs_up(void){

	aunit_printf("\n##FUNCTION_START_parseredirs\n");
 }

void test_parseredirs_down(void){
	aunit_printf("\n##FUNCTION_END_parseredirs\n");
 }



void abnormal_parseredirs_case(int index);

void abnormal_parseredirs_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseredirs_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct cmd *cmd;
	char **ps;
	char *es;

	//声明返回值局部变量，若为基本类型赋默认值
	struct cmd *returnValue = 0;

	//值序列相关
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	char valueList_1[]={"file"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"+ file"};
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
	case_id=5;
	//初始化各桩函数调用计数器
	gettoken_call_counter = 0;
	redircmd_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseredirs_5,false,0\n");
	aunit_printf("#CASE_START_test_parseredirs_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*es=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*ps=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(cmd_PTRTO[0]).type=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = parseredirs(cmd,ps,es);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("parseredirs","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("redircmd","redircmd_call_counter",redircmd_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseredirs_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseredirs_up();

	switch(caseIndex){
	case 5:
		test_parseredirs_5();
		break;
	default:
		abnormal_parseredirs_case(caseIndex);
		break;
	}

	test_parseredirs_down();
}

