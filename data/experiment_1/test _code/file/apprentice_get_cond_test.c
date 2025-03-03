void test_get_cond_up(void);
void test_get_cond_down(void);


void test_get_cond_up(void){

	aunit_printf("\n##FUNCTION_START_get_cond\n");
 }

void test_get_cond_down(void){
	aunit_printf("\n##FUNCTION_END_get_cond\n");
 }



void abnormal_get_cond_case(int index);

void abnormal_get_cond_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_cond_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *l;
	char **t;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"if "};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"initial"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	strncmp_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	isspace_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_cond_5,false,0\n");
	aunit_printf("#CASE_START_test_get_cond_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			l=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*t=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_cond(l,t);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("get_cond","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_STRING("get_cond","*t"," ",*t)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("strncmp","strncmp_call_counter",strncmp_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_get_cond_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_cond_up();

	switch(caseIndex){
	case 5:
		test_get_cond_5();
		break;
	default:
		abnormal_get_cond_case(caseIndex);
		break;
	}

	test_get_cond_down();
}

