void test_unwrap_up(void);
void test_unwrap_down(void);


void test_unwrap_up(void){

	aunit_printf("\n##FUNCTION_START_unwrap\n");
 }

void test_unwrap_down(void){
	aunit_printf("\n##FUNCTION_END_unwrap\n");
 }



void abnormal_unwrap_case(int index);

void abnormal_unwrap_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_unwrap_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *fn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stdin_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"test_file"};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	fopen_call_counter = 0;
	process_call_counter = 0;
	file_mbswidth_call_counter = 0;
	file_warn_call_counter = 0;
	getline_call_counter = 0;
	file_err_call_counter = 0;

	aunit_printf("###TEST_TREE_test_unwrap_10,false,0\n");
	aunit_printf("#CASE_START_test_unwrap_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nobuffer=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stdin=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			fn=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).flags=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).error=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = unwrap(ms,fn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("unwrap","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("fopen","fopen_call_counter",fopen_call_counter)
	OB_INT_EXPR("process","process_call_counter",process_call_counter)
	OB_INT_EXPR("file_mbswidth","file_mbswidth_call_counter",file_mbswidth_call_counter)
	OB_INT_EXPR("file_warn","file_warn_call_counter",file_warn_call_counter)
	OB_INT_EXPR("getline","getline_call_counter",getline_call_counter)
	OB_INT_EXPR("file_err","file_err_call_counter",file_err_call_counter)

	aunit_printf("#CASE_END_test_unwrap_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_unwrap_up();

	switch(caseIndex){
	case 10:
		test_unwrap_10();
		break;
	default:
		abnormal_unwrap_case(caseIndex);
		break;
	}

	test_unwrap_down();
}

