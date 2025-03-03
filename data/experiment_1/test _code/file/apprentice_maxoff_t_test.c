void test_maxoff_t_up(void);
void test_maxoff_t_down(void);


void test_maxoff_t_up(void){

	aunit_printf("\n##FUNCTION_START_maxoff_t\n");
 }

void test_maxoff_t_down(void){
	aunit_printf("\n##FUNCTION_END_maxoff_t\n");
 }



void abnormal_maxoff_t_case(int index);

void abnormal_maxoff_t_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_maxoff_t_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	off_t returnValue = 0;

	//值序列相关
	//line is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_maxoff_t_6,false,0\n");
	aunit_printf("#CASE_START_test_maxoff_t_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = maxoff_t();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("maxoff_t","returnValue",2147483647,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_maxoff_t_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_maxoff_t_up();

	switch(caseIndex){
	case 6:
		test_maxoff_t_6();
		break;
	default:
		abnormal_maxoff_t_case(caseIndex);
		break;
	}

	test_maxoff_t_down();
}

