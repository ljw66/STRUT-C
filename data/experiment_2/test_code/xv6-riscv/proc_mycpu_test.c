void test_mycpu_up(void);
void test_mycpu_down(void);


void test_mycpu_up(void){

	aunit_printf("\n##FUNCTION_START_mycpu\n");
 }

void test_mycpu_down(void){
	aunit_printf("\n##FUNCTION_END_mycpu\n");
 }



void abnormal_mycpu_case(int index);

void abnormal_mycpu_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mycpu_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_1,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_1\n");
}

void test_mycpu_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_2,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_2\n");
}

void test_mycpu_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_3,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_3\n");
}

void test_mycpu_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_4,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_4\n");
}

void test_mycpu_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_5,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_5\n");
}

void test_mycpu_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_6,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_6\n");
}

void test_mycpu_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_7,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_7\n");
}

void test_mycpu_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct cpu *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_8,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_mycpu_up();

	switch(caseIndex){
	case 1:
		test_mycpu_1();
		break;
	case 2:
		test_mycpu_2();
		break;
	case 3:
		test_mycpu_3();
		break;
	case 4:
		test_mycpu_4();
		break;
	case 5:
		test_mycpu_5();
		break;
	case 6:
		test_mycpu_6();
		break;
	case 7:
		test_mycpu_7();
		break;
	case 8:
		test_mycpu_8();
		break;
	default:
		abnormal_mycpu_case(caseIndex);
		break;
	}

	test_mycpu_down();
}

