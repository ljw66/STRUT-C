void test_kf_betai_up(void);
void test_kf_betai_down(void);


void test_kf_betai_up(void){

	aunit_printf("\n##FUNCTION_START_kf_betai\n");
 }

void test_kf_betai_down(void){
	aunit_printf("\n##FUNCTION_END_kf_betai\n");
 }



void abnormal_kf_betai_case(int index);

void abnormal_kf_betai_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kf_betai_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={3.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.1};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_1,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_1\n");
}

void test_kf_betai_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={2.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.6};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_2,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.7,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_2\n");
}

void test_kf_betai_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={1.0};
	unsigned int listLength_0=1;
	double valueList_1[]={2.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.9};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_3,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.2,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_3\n");
}

void test_kf_betai_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0.0};
	unsigned int listLength_0=1;
	double valueList_1[]={0.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_4,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_4\n");
}

void test_kf_betai_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={1000.0};
	unsigned int listLength_0=1;
	double valueList_1[]={2000.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.999};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_5,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.001,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_5\n");
}

void test_kf_betai_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={5.0};
	unsigned int listLength_0=1;
	double valueList_1[]={5.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_6,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_6\n");
}

void test_kf_betai_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={3.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.99999};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_7,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.0001,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_7\n");
}

void test_kf_betai_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={3.0};
	unsigned int listLength_1=1;
	double valueList_2[]={1e-05};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_8,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.0001,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_8\n");
}

void test_kf_betai_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={100.0};
	unsigned int listLength_0=1;
	double valueList_1[]={1.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_9,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.9,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_9\n");
}

void test_kf_betai_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={1.0};
	unsigned int listLength_0=1;
	double valueList_1[]={100.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_10,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.9,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_10\n");
}

void test_kf_betai_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={-2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={-3.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_11,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",1.5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_11\n");
}

void test_kf_betai_12(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0.0};
	unsigned int listLength_0=1;
	double valueList_1[]={3.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=12;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_12,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_12\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_12\n");
}

void test_kf_betai_13(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={3.0};
	unsigned int listLength_0=1;
	double valueList_1[]={0.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=13;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_13,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_13\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_13\n");
}

void test_kf_betai_14(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={0.0};
	unsigned int listLength_0=1;
	double valueList_1[]={0.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=14;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_14,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_14\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_14\n");
}

void test_kf_betai_15(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={3.0};
	unsigned int listLength_1=1;
	double valueList_2[]={1.0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=15;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_15,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_15\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_15\n");
}

void test_kf_betai_16(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double a;
	double b;
	double x;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={3.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=16;
	//初始化各桩函数调用计数器
	kf_betai_aux_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_betai_16,false,0\n");
	aunit_printf("#CASE_START_test_kf_betai_16\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kf_betai(a,b,x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kf_betai","returnValue",0.0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kf_betai_aux","kf_betai_aux_call_counter",kf_betai_aux_call_counter)

	aunit_printf("#CASE_END_test_kf_betai_16\n");
}

void aunit_test_func_run(int caseIndex){

	test_kf_betai_up();

	switch(caseIndex){
	case 1:
		test_kf_betai_1();
		break;
	case 2:
		test_kf_betai_2();
		break;
	case 3:
		test_kf_betai_3();
		break;
	case 4:
		test_kf_betai_4();
		break;
	case 5:
		test_kf_betai_5();
		break;
	case 6:
		test_kf_betai_6();
		break;
	case 7:
		test_kf_betai_7();
		break;
	case 8:
		test_kf_betai_8();
		break;
	case 9:
		test_kf_betai_9();
		break;
	case 10:
		test_kf_betai_10();
		break;
	case 11:
		test_kf_betai_11();
		break;
	case 12:
		test_kf_betai_12();
		break;
	case 13:
		test_kf_betai_13();
		break;
	case 14:
		test_kf_betai_14();
		break;
	case 15:
		test_kf_betai_15();
		break;
	case 16:
		test_kf_betai_16();
		break;
	default:
		abnormal_kf_betai_case(caseIndex);
		break;
	}

	test_kf_betai_down();
}

