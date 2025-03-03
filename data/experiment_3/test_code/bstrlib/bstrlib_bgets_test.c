void test_bgets_up(void);
void test_bgets_down(void);


void test_bgets_up(void){

	aunit_printf("\n##FUNCTION_START_bgets\n");
 }

void test_bgets_down(void){
	aunit_printf("\n##FUNCTION_END_bgets\n");
 }



void abnormal_bgets_case(int index);

void abnormal_bgets_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bgets_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int (*getcPtr)(void *);
	void *parm;
	char terminator;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	char valueList_0[]={'x'};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))getcPtr_STUB};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	getcPtr_STUB_call_counter = 0;
	bfromcstr_call_counter = 0;
	bgetsa_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bgets_1,false,0\n");
	aunit_printf("#CASE_START_test_bgets_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			terminator=(char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			getcPtr=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bgets(getcPtr,parm,terminator);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bgets","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getcPtr_STUB","getcPtr_STUB_call_counter",getcPtr_STUB_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bgetsa","bgetsa_call_counter",bgetsa_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bgets_1\n");
}

void test_bgets_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int (*getcPtr)(void *);
	void *parm;
	char terminator;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	char valueList_0[]={'y'};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))getcPtr_STUB};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	getcPtr_STUB_call_counter = 0;
	bfromcstr_call_counter = 0;
	bgetsa_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bgets_2,false,0\n");
	aunit_printf("#CASE_START_test_bgets_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			terminator=(char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			getcPtr=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bgets(getcPtr,parm,terminator);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bgets","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getcPtr_STUB","getcPtr_STUB_call_counter",getcPtr_STUB_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bgetsa","bgetsa_call_counter",bgetsa_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bgets_2\n");
}

void test_bgets_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int (*getcPtr)(void *);
	void *parm;
	char terminator;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	char valueList_0[]={'z'};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))getcPtr_STUB};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	getcPtr_STUB_call_counter = 0;
	bfromcstr_call_counter = 0;
	bgetsa_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bgets_3,false,0\n");
	aunit_printf("#CASE_START_test_bgets_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			terminator=(char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			getcPtr=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bgets(getcPtr,parm,terminator);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bgets","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getcPtr_STUB","getcPtr_STUB_call_counter",getcPtr_STUB_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bgetsa","bgetsa_call_counter",bgetsa_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bgets_3\n");
}

void test_bgets_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int (*getcPtr)(void *);
	void *parm;
	char terminator;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	char valueList_0[]={'w'};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))getcPtr_STUB};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	getcPtr_STUB_call_counter = 0;
	bfromcstr_call_counter = 0;
	bgetsa_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bgets_4,false,0\n");
	aunit_printf("#CASE_START_test_bgets_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			terminator=(char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			getcPtr=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bgets(getcPtr,parm,terminator);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bgets","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("getcPtr_STUB","getcPtr_STUB_call_counter",getcPtr_STUB_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bgetsa","bgetsa_call_counter",bgetsa_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bgets_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_bgets_up();

	switch(caseIndex){
	case 1:
		test_bgets_1();
		break;
	case 2:
		test_bgets_2();
		break;
	case 3:
		test_bgets_3();
		break;
	case 4:
		test_bgets_4();
		break;
	default:
		abnormal_bgets_case(caseIndex);
		break;
	}

	test_bgets_down();
}

