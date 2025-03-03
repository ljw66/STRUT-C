void test_mlist_free_up(void);
void test_mlist_free_down(void);


void test_mlist_free_up(void){

	aunit_printf("\n##FUNCTION_START_mlist_free\n");
 }

void test_mlist_free_down(void){
	aunit_printf("\n##FUNCTION_END_mlist_free\n");
 }



void abnormal_mlist_free_case(int index);

void abnormal_mlist_free_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mlist_free_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct mlist *mlist;


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	mlist_free_one_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_free_1,false,0\n");
	aunit_printf("#CASE_START_test_mlist_free_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		mlist_free(mlist);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("mlist_free_one","mlist_free_one_call_counter",mlist_free_one_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_mlist_free_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_mlist_free_up();

	switch(caseIndex){
	case 1:
		test_mlist_free_1();
		break;
	default:
		abnormal_mlist_free_case(caseIndex);
		break;
	}

	test_mlist_free_down();
}

