void test_load_1_up(void);
void test_load_1_down(void);


void test_load_1_up(void){

	aunit_printf("\n##FUNCTION_START_load_1\n");
 }

void test_load_1_down(void){
	aunit_printf("\n##FUNCTION_END_load_1\n");
 }



void abnormal_load_1_case(int index);

void abnormal_load_1_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_load_1_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int action;
	char *fn;
	int *errs;
	struct magic_entry_set *mset;


	//值序列相关
	int *valueList_0[]={(int *)errs_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	struct magic_entry_set *valueList_2[]={(struct magic_entry_set *)mset_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={1};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)"valid_lines_file"};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={5};
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
	case_id=8;
	//初始化各桩函数调用计数器
	fopen_call_counter = 0;
	parse_strength_call_counter = 0;
	fclose_call_counter = 0;
	parse_mime_call_counter = 0;
	parse_call_counter = 0;
	memset_call_counter = 0;
	file_error_call_counter = 0;
	parse_apple_call_counter = 0;
	memcmp_call_counter = 0;
	parse_ext_call_counter = 0;
	addentry_call_counter = 0;
	getline_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_load_1_8,false,0\n");
	aunit_printf("#CASE_START_test_load_1_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errs=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			mset=(struct magic_entry_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			errs_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).file=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		load_1(ms,action,fn,errs,mset);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("load_1","errs[0]",0,errs[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fopen","fopen_call_counter",fopen_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("fclose","fclose_call_counter",fclose_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("parse","parse_call_counter",parse_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("addentry","addentry_call_counter",addentry_call_counter)
	OB_INT_EXPR("getline","getline_call_counter",getline_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_load_1_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_load_1_up();

	switch(caseIndex){
	case 8:
		test_load_1_8();
		break;
	default:
		abnormal_load_1_case(caseIndex);
		break;
	}

	test_load_1_down();
}

