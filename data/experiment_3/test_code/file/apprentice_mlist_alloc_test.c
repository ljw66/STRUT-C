void test_mlist_alloc_up(void);
void test_mlist_alloc_down(void);


void test_mlist_alloc_up(void){

	aunit_printf("\n##FUNCTION_START_mlist_alloc\n");
 }

void test_mlist_alloc_down(void){
	aunit_printf("\n##FUNCTION_END_mlist_alloc\n");
 }



void abnormal_mlist_alloc_case(int index);

void abnormal_mlist_alloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mlist_alloc_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct mlist *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_alloc_1,false,0\n");
	aunit_printf("#CASE_START_test_mlist_alloc_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mlist_alloc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mlist_alloc","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_mlist_alloc_1\n");
}

void test_mlist_alloc_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct mlist *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_alloc_2,false,0\n");
	aunit_printf("#CASE_START_test_mlist_alloc_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mlist_alloc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mlist_alloc","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_mlist_alloc_2\n");
}

void test_mlist_alloc_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct mlist *returnValue = 0;

	//值序列相关
	//(ms->mlist)[0] is an invalid expression 
	//(ms->mlist)[1] is an invalid expression 
	//me->mp is an invalid expression 
	//*line is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_alloc_3,false,0\n");
	aunit_printf("#CASE_START_test_mlist_alloc_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mlist_alloc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("mlist_alloc","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_mlist_alloc_3\n");
}

void test_mlist_alloc_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct mlist *returnValue = 0;

	//值序列相关
	//(ms->mlist)[0] is an invalid expression 
	//(ms->mlist)[1] is an invalid expression 
	//me->mp is an invalid expression 
	//*line is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_alloc_4,false,0\n");
	aunit_printf("#CASE_START_test_mlist_alloc_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mlist_alloc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("mlist_alloc","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_mlist_alloc_4\n");
}

void test_mlist_alloc_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct mlist *returnValue = 0;

	//值序列相关
	//(ms->mlist)[0] is an invalid expression 
	//(ms->mlist)[1] is an invalid expression 
	//me->mp is an invalid expression 
	//*line is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_alloc_5,false,0\n");
	aunit_printf("#CASE_START_test_mlist_alloc_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mlist_alloc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("mlist_alloc","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_mlist_alloc_5\n");
}

void test_mlist_alloc_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct mlist *returnValue = 0;

	//值序列相关
	//(ms->mlist)[0] is an invalid expression 
	//(ms->mlist)[1] is an invalid expression 
	//me->mp is an invalid expression 
	//*line is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_alloc_6,false,0\n");
	aunit_printf("#CASE_START_test_mlist_alloc_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mlist_alloc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("mlist_alloc","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_mlist_alloc_6\n");
}

void test_mlist_alloc_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct mlist *returnValue = 0;

	//值序列相关
	//(ms->mlist)[0] is an invalid expression 
	//(ms->mlist)[1] is an invalid expression 
	//me->mp is an invalid expression 
	//*line is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_alloc_7,false,0\n");
	aunit_printf("#CASE_START_test_mlist_alloc_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mlist_alloc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("mlist_alloc","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_mlist_alloc_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_mlist_alloc_up();

	switch(caseIndex){
	case 1:
		test_mlist_alloc_1();
		break;
	case 2:
		test_mlist_alloc_2();
		break;
	case 3:
		test_mlist_alloc_3();
		break;
	case 4:
		test_mlist_alloc_4();
		break;
	case 5:
		test_mlist_alloc_5();
		break;
	case 6:
		test_mlist_alloc_6();
		break;
	case 7:
		test_mlist_alloc_7();
		break;
	default:
		abnormal_mlist_alloc_case(caseIndex);
		break;
	}

	test_mlist_alloc_down();
}

