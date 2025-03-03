void test_ke_set_real_func1_up(void);
void test_ke_set_real_func1_down(void);


void test_ke_set_real_func1_up(void){

	aunit_printf("\n##FUNCTION_START_ke_set_real_func1\n");
 }

void test_ke_set_real_func1_down(void){
	aunit_printf("\n##FUNCTION_END_ke_set_real_func1\n");
 }



void abnormal_ke_set_real_func1_case(int index);

void abnormal_ke_set_real_func1_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_set_real_func1_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;
	char *name;
	double (*func)(double);

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double (*valueList_0[])(double)={(double (*)(double))func_STUB};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	double valueList_3[]={0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	ke1_t *valueList_6[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_real_func1_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_real_func1_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(double))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.r=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_ke1_s1.i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).n=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = ke_set_real_func1(ke,name,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_set_real_func1","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test_ke_set_real_func1_1\n");
}

void test_ke_set_real_func1_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;
	char *name;
	double (*func)(double);

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double (*valueList_0[])(double)={(double (*)(double))func_STUB};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"xyz"};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	ke1_t *valueList_5[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_real_func1_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_real_func1_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(double))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_set_real_func1(ke,name,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_set_real_func1","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test_ke_set_real_func1_2\n");
}

void test_ke_set_real_func1_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;
	char *name;
	double (*func)(double);

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double (*valueList_0[])(double)={(double (*)(double))func_STUB};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	ke1_t *valueList_5[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_real_func1_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_real_func1_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(double))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_set_real_func1(ke,name,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_set_real_func1","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test_ke_set_real_func1_3\n");
}

void test_ke_set_real_func1_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;
	char *name;
	double (*func)(double);

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double (*valueList_0[])(double)={(double (*)(double))func_STUB};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	ke1_t *valueList_5[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_real_func1_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_real_func1_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(double))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_set_real_func1(ke,name,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_set_real_func1","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test_ke_set_real_func1_4\n");
}

void test_ke_set_real_func1_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;
	char *name;
	double (*func)(double);

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double (*valueList_0[])(double)={(double (*)(double))func_STUB};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"xyz"};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	ke1_t *valueList_5[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_real_func1_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_real_func1_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(double))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_set_real_func1(ke,name,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_set_real_func1","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test_ke_set_real_func1_5\n");
}

void test_ke_set_real_func1_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;
	char *name;
	double (*func)(double);

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double (*valueList_0[])(double)={(double (*)(double))func_STUB};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	ke1_t *valueList_5[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_real_func1_6,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_real_func1_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(double))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_set_real_func1(ke,name,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_set_real_func1","returnValue",2,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test_ke_set_real_func1_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_set_real_func1_up();

	switch(caseIndex){
	case 1:
		test_ke_set_real_func1_1();
		break;
	case 2:
		test_ke_set_real_func1_2();
		break;
	case 3:
		test_ke_set_real_func1_3();
		break;
	case 4:
		test_ke_set_real_func1_4();
		break;
	case 5:
		test_ke_set_real_func1_5();
		break;
	case 6:
		test_ke_set_real_func1_6();
		break;
	default:
		abnormal_ke_set_real_func1_case(caseIndex);
		break;
	}

	test_ke_set_real_func1_down();
}

