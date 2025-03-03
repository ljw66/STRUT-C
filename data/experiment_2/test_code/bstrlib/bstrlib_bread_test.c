void test_bread_up(void);
void test_bread_down(void);


void test_bread_up(void){

	aunit_printf("\n##FUNCTION_START_bread\n");
 }

void test_bread_down(void){
	aunit_printf("\n##FUNCTION_END_bread\n");
 }



void abnormal_bread_case(int index);

void abnormal_bread_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bread_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	readPtr_STUB_call_counter = 0;
	breada_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_1,false,0\n");
	aunit_printf("#CASE_START_test_bread_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = bread(readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bread","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("breada","breada_call_counter",breada_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bread_1\n");
}

void test_bread_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	readPtr_STUB_call_counter = 0;
	breada_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_2,false,0\n");
	aunit_printf("#CASE_START_test_bread_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = bread(readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bread","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("breada","breada_call_counter",breada_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bread_2\n");
}

void test_bread_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	readPtr_STUB_call_counter = 0;
	breada_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_3,false,0\n");
	aunit_printf("#CASE_START_test_bread_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = bread(readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bread","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("breada","breada_call_counter",breada_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bread_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_bread_up();

	switch(caseIndex){
	case 1:
		test_bread_1();
		break;
	case 2:
		test_bread_2();
		break;
	case 3:
		test_bread_3();
		break;
	default:
		abnormal_bread_case(caseIndex);
		break;
	}

	test_bread_down();
}

