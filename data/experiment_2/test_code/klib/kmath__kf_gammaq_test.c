void test__kf_gammaq_up(void);
void test__kf_gammaq_down(void);


void test__kf_gammaq_up(void){

	aunit_printf("\n##FUNCTION_START__kf_gammaq\n");
 }

void test__kf_gammaq_down(void){
	aunit_printf("\n##FUNCTION_END__kf_gammaq\n");
 }



void abnormal__kf_gammaq_case(int index);

void abnormal__kf_gammaq_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test__kf_gammaq_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double s;
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	fabs_call_counter = 0;
	log_call_counter = 0;
	kf_lgamma_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test__kf_gammaq_1,false,0\n");
	aunit_printf("#CASE_START_test__kf_gammaq_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = _kf_gammaq(s,z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("_kf_gammaq","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("kf_lgamma","kf_lgamma_call_counter",kf_lgamma_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test__kf_gammaq_1\n");
}

void test__kf_gammaq_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double s;
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	fabs_call_counter = 0;
	log_call_counter = 0;
	kf_lgamma_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test__kf_gammaq_2,false,0\n");
	aunit_printf("#CASE_START_test__kf_gammaq_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = _kf_gammaq(s,z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("_kf_gammaq","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("kf_lgamma","kf_lgamma_call_counter",kf_lgamma_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test__kf_gammaq_2\n");
}

void test__kf_gammaq_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double s;
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={3};
	unsigned int listLength_0=1;
	double valueList_1[]={2};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	fabs_call_counter = 0;
	log_call_counter = 0;
	kf_lgamma_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test__kf_gammaq_3,false,0\n");
	aunit_printf("#CASE_START_test__kf_gammaq_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = _kf_gammaq(s,z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("_kf_gammaq","returnValue",0.367879,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("kf_lgamma","kf_lgamma_call_counter",kf_lgamma_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test__kf_gammaq_3\n");
}

void test__kf_gammaq_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double s;
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0};
	unsigned int listLength_0=1;
	double valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	fabs_call_counter = 0;
	log_call_counter = 0;
	kf_lgamma_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test__kf_gammaq_4,false,0\n");
	aunit_printf("#CASE_START_test__kf_gammaq_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = _kf_gammaq(s,z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("_kf_gammaq","returnValue",0.018316,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("kf_lgamma","kf_lgamma_call_counter",kf_lgamma_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test__kf_gammaq_4\n");
}

void test__kf_gammaq_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double s;
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={-2};
	unsigned int listLength_0=1;
	double valueList_1[]={-3};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	fabs_call_counter = 0;
	log_call_counter = 0;
	kf_lgamma_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test__kf_gammaq_5,false,0\n");
	aunit_printf("#CASE_START_test__kf_gammaq_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = _kf_gammaq(s,z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("_kf_gammaq","returnValue",2.718281,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("kf_lgamma","kf_lgamma_call_counter",kf_lgamma_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test__kf_gammaq_5\n");
}

void test__kf_gammaq_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double s;
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2};
	unsigned int listLength_0=1;
	double valueList_1[]={-1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	fabs_call_counter = 0;
	log_call_counter = 0;
	kf_lgamma_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test__kf_gammaq_6,false,0\n");
	aunit_printf("#CASE_START_test__kf_gammaq_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = _kf_gammaq(s,z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("_kf_gammaq","returnValue",0.367879,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("kf_lgamma","kf_lgamma_call_counter",kf_lgamma_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test__kf_gammaq_6\n");
}

void aunit_test_func_run(int caseIndex){

	test__kf_gammaq_up();

	switch(caseIndex){
	case 1:
		test__kf_gammaq_1();
		break;
	case 2:
		test__kf_gammaq_2();
		break;
	case 3:
		test__kf_gammaq_3();
		break;
	case 4:
		test__kf_gammaq_4();
		break;
	case 5:
		test__kf_gammaq_5();
		break;
	case 6:
		test__kf_gammaq_6();
		break;
	default:
		abnormal__kf_gammaq_case(caseIndex);
		break;
	}

	test__kf_gammaq_down();
}

