void test_kf_lgamma_up(void);
void test_kf_lgamma_down(void);


void test_kf_lgamma_up(void){

	aunit_printf("\n##FUNCTION_START_kf_lgamma\n");
 }

void test_kf_lgamma_down(void){
	aunit_printf("\n##FUNCTION_END_kf_lgamma\n");
 }



void abnormal_kf_lgamma_case(int index);

void abnormal_kf_lgamma_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kf_lgamma_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_1,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-4.390562087565899,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_1\n");
}

void test_kf_lgamma_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_2,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-3.502524222759134,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_2\n");
}

void test_kf_lgamma_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={3};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_3,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-3.1780538303479458,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_3\n");
}

void test_kf_lgamma_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0.5};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_4,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-4.079441541679835,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_4\n");
}

void test_kf_lgamma_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={10};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_5,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",9.210340371976184,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_5\n");
}

void test_kf_lgamma_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0.1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_6,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-6.737946999085467,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_6\n");
}

void test_kf_lgamma_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={100};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_7,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",359.1342053695754,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_7\n");
}

void test_kf_lgamma_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0.01};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_8,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-8.524083020347353,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_8\n");
}

void test_kf_lgamma_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0.001};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_9,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-10.309992155249153,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_9\n");
}

void test_kf_lgamma_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double z;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={50};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_10,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_DOUBLE_EXPR("kf_lgamma","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_kf_lgamma_up();

	switch(caseIndex){
	case 1:
		test_kf_lgamma_1();
		break;
	case 2:
		test_kf_lgamma_2();
		break;
	case 3:
		test_kf_lgamma_3();
		break;
	case 4:
		test_kf_lgamma_4();
		break;
	case 5:
		test_kf_lgamma_5();
		break;
	case 6:
		test_kf_lgamma_6();
		break;
	case 7:
		test_kf_lgamma_7();
		break;
	case 8:
		test_kf_lgamma_8();
		break;
	case 9:
		test_kf_lgamma_9();
		break;
	case 10:
		test_kf_lgamma_10();
		break;
	default:
		abnormal_kf_lgamma_case(caseIndex);
		break;
	}

	test_kf_lgamma_down();
}

