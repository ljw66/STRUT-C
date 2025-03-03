void test_file_apprentice_up(void);
void test_file_apprentice_down(void);


void test_file_apprentice_up(void){

	aunit_printf("\n##FUNCTION_START_file_apprentice\n");
 }

void test_file_apprentice_down(void){
	aunit_printf("\n##FUNCTION_END_file_apprentice\n");
 }



void abnormal_file_apprentice_case(int index);

void abnormal_file_apprentice_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_apprentice_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *fn;
	int action;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"validpath"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	init_file_tables_call_counter = 0;
	parse_strength_call_counter = 0;
	apprentice_1_call_counter = 0;
	file_oomem_call_counter = 0;
	mlist_free_call_counter = 0;
	parse_mime_call_counter = 0;
	mlist_alloc_call_counter = 0;
	file_error_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_ext_call_counter = 0;
	file_reset_call_counter = 0;
	magic_getpath_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_apprentice_6,false,0\n");
	aunit_printf("#CASE_START_test_file_apprentice_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fn=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			action=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = file_apprentice(ms,fn,action);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_apprentice","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("init_file_tables","init_file_tables_call_counter",init_file_tables_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("apprentice_1","apprentice_1_call_counter",apprentice_1_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("mlist_free","mlist_free_call_counter",mlist_free_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("mlist_alloc","mlist_alloc_call_counter",mlist_alloc_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("file_reset","file_reset_call_counter",file_reset_call_counter)
	OB_INT_EXPR("magic_getpath","magic_getpath_call_counter",magic_getpath_call_counter)

	aunit_printf("#CASE_END_test_file_apprentice_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_apprentice_up();

	switch(caseIndex){
	case 6:
		test_file_apprentice_6();
		break;
	default:
		abnormal_file_apprentice_case(caseIndex);
		break;
	}

	test_file_apprentice_down();
}

