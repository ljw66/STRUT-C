void test_apprentice_load_up(void);
void test_apprentice_load_down(void);


void test_apprentice_load_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_load\n");
 }

void test_apprentice_load_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_load\n");
 }



void abnormal_apprentice_load_case(int index);

void abnormal_apprentice_load_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_load_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	char *fn;
	int action;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_map *returnValue = 0;

	//值序列相关
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"/path/to/file"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	FILE *valueList_3[]={(FILE *)stderr_PTRTO};
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
	case_id=10;
	//初始化各桩函数调用计数器
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;
	realloc_call_counter = 0;
	cmpstrp_call_counter = 0;
	load_1_call_counter = 0;
	set_text_binary_call_counter = 0;
	strlen_call_counter = 0;
	readdir_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	asprintf_call_counter = 0;
	qsort_call_counter = 0;
	stat_call_counter = 0;
	parse_strength_call_counter = 0;
	set_last_default_call_counter = 0;
	file_oomem_call_counter = 0;
	fprintf_call_counter = 0;
	memset_call_counter = 0;
	parse_apple_call_counter = 0;
	magic_entry_free_call_counter = 0;
	closedir_call_counter = 0;
	opendir_call_counter = 0;
	coalesce_entries_call_counter = 0;
	apprentice_sort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_load_10,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_load_10\n");
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
			stderr=(FILE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = apprentice_load(ms,fn,action);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("apprentice_load","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("apprentice_load","returnValue->len",1,returnValue->len)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("cmpstrp","cmpstrp_call_counter",cmpstrp_call_counter)
	OB_INT_EXPR("load_1","load_1_call_counter",load_1_call_counter)
	OB_INT_EXPR("set_text_binary","set_text_binary_call_counter",set_text_binary_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("readdir","readdir_call_counter",readdir_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("asprintf","asprintf_call_counter",asprintf_call_counter)
	OB_INT_EXPR("qsort","qsort_call_counter",qsort_call_counter)
	OB_INT_EXPR("stat","stat_call_counter",stat_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("set_last_default","set_last_default_call_counter",set_last_default_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("magic_entry_free","magic_entry_free_call_counter",magic_entry_free_call_counter)
	OB_INT_EXPR("closedir","closedir_call_counter",closedir_call_counter)
	OB_INT_EXPR("opendir","opendir_call_counter",opendir_call_counter)
	OB_INT_EXPR("coalesce_entries","coalesce_entries_call_counter",coalesce_entries_call_counter)
	OB_INT_EXPR("apprentice_sort","apprentice_sort_call_counter",apprentice_sort_call_counter)

	aunit_printf("#CASE_END_test_apprentice_load_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_load_up();

	switch(caseIndex){
	case 10:
		test_apprentice_load_10();
		break;
	default:
		abnormal_apprentice_load_case(caseIndex);
		break;
	}

	test_apprentice_load_down();
}

