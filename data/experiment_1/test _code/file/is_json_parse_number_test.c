void test_json_parse_number_up(void);
void test_json_parse_number_down(void);


void test_json_parse_number_up(void){

	aunit_printf("\n##FUNCTION_START_json_parse_number\n");
 }

void test_json_parse_number_down(void){
	aunit_printf("\n##FUNCTION_END_json_parse_number\n");
 }



void abnormal_json_parse_number_case(int index);

void abnormal_json_parse_number_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_parse_number_14(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char **ucp;
	unsigned char *ue;
	unsigned int lvl;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"123e"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"123e"};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=14;
	//初始化各桩函数调用计数器
	json_isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_json_parse_number_14,false,0\n");
	aunit_printf("#CASE_START_test_json_parse_number_14\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lvl=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*ucp=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = json_parse_number(ucp,ue,lvl);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("json_parse_number","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("json_parse_number","*ucp","123e",*ucp)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("json_isdigit","json_isdigit_call_counter",json_isdigit_call_counter)

	aunit_printf("#CASE_END_test_json_parse_number_14\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_parse_number_up();

	switch(caseIndex){
	case 14:
		test_json_parse_number_14();
		break;
	default:
		abnormal_json_parse_number_case(caseIndex);
		break;
	}

	test_json_parse_number_down();
}

