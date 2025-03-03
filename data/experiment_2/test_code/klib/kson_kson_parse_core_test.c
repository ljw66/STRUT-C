void test_kson_parse_core_up(void);
void test_kson_parse_core_down(void);


void test_kson_parse_core_up(void){

	aunit_printf("\n##FUNCTION_START_kson_parse_core\n");
 }

void test_kson_parse_core_down(void){
	aunit_printf("\n##FUNCTION_END_kson_parse_core\n");
 }



void abnormal_kson_parse_core_case(int index);

void abnormal_kson_parse_core_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kson_parse_core_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *json;
	long int *_n;
	int *error;
	long int *parsed_len;

	//声明返回值局部变量，若为基本类型赋默认值
	kson_node_t *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"[]"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)error_PTRTO};
	unsigned int listLength_1=1;
	long int *valueList_2[]={(long int *)parsed_len_PTRTO};
	unsigned int listLength_2=1;
	long int *valueList_3[]={(long int *)_n_PTRTO};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	long int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	long int valueList_8[]={0};
	unsigned int listLength_8=1;
	long int valueList_9[]={0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	abort_call_counter = 0;
	strncpy_call_counter = 0;
	isspace_call_counter = 0;
	realloc_call_counter = 0;
	free_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_core_4,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_core_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			json=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			error=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			parsed_len=(long int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_n=(long int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			_n_PTRTO[0]=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			_n_PTRTO[1]=(long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			error_PTRTO[0]=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			error_PTRTO[1]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			parsed_len_PTRTO[0]=(long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			parsed_len_PTRTO[1]=(long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = kson_parse_core(json,_n,error,parsed_len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("kson_parse_core","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("kson_parse_core","error[0]",0,error[0])
	TEST_ASSERT_EQUAL_LONG("kson_parse_core","_n[0]",1,_n[0])
	TEST_ASSERT_EQUAL_LONG("kson_parse_core","parsed_len[0]",2,parsed_len[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("strncpy","strncpy_call_counter",strncpy_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_core_4\n");
}

void test_kson_parse_core_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *json;
	long int *_n;
	int *error;
	long int *parsed_len;

	//声明返回值局部变量，若为基本类型赋默认值
	kson_node_t *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"[1, 2, 3, #]"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)error_PTRTO};
	unsigned int listLength_1=1;
	long int *valueList_2[]={(long int *)parsed_len_PTRTO};
	unsigned int listLength_2=1;
	long int *valueList_3[]={(long int *)_n_PTRTO};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	long int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	long int valueList_8[]={0};
	unsigned int listLength_8=1;
	long int valueList_9[]={0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	abort_call_counter = 0;
	strncpy_call_counter = 0;
	isspace_call_counter = 0;
	realloc_call_counter = 0;
	free_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_core_5,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_core_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			json=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			error=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			parsed_len=(long int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_n=(long int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			_n_PTRTO[0]=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			_n_PTRTO[1]=(long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			error_PTRTO[0]=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			error_PTRTO[1]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			parsed_len_PTRTO[0]=(long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			parsed_len_PTRTO[1]=(long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = kson_parse_core(json,_n,error,parsed_len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("kson_parse_core","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("kson_parse_core","error[0]",2,error[0])
	TEST_ASSERT_EQUAL_LONG("kson_parse_core","_n[0]",0,_n[0])
	TEST_ASSERT_EQUAL_LONG("kson_parse_core","parsed_len[0]",9,parsed_len[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("strncpy","strncpy_call_counter",strncpy_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_core_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_kson_parse_core_up();

	switch(caseIndex){
	case 4:
		test_kson_parse_core_4();
		break;
	case 5:
		test_kson_parse_core_5();
		break;
	default:
		abnormal_kson_parse_core_case(caseIndex);
		break;
	}

	test_kson_parse_core_down();
}

