void test_consolewrite_up(void);
void test_consolewrite_down(void);


void test_consolewrite_up(void){

	aunit_printf("\n##FUNCTION_START_consolewrite\n");
 }

void test_consolewrite_down(void){
	aunit_printf("\n##FUNCTION_END_consolewrite\n");
 }



void abnormal_consolewrite_case(int index);

void abnormal_consolewrite_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_consolewrite_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int user_src;
	unsigned long int src;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={1000};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	uartputc_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consolewrite_1,false,0\n");
	aunit_printf("#CASE_START_test_consolewrite_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			user_src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = consolewrite(user_src,src,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("consolewrite","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uartputc","uartputc_call_counter",uartputc_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_consolewrite_1\n");
}

void test_consolewrite_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int user_src;
	unsigned long int src;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={1000};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	uartputc_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consolewrite_2,false,0\n");
	aunit_printf("#CASE_START_test_consolewrite_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			user_src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = consolewrite(user_src,src,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("consolewrite","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uartputc","uartputc_call_counter",uartputc_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_consolewrite_2\n");
}

void test_consolewrite_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int user_src;
	unsigned long int src;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={1000};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	uartputc_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consolewrite_3,false,0\n");
	aunit_printf("#CASE_START_test_consolewrite_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			user_src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = consolewrite(user_src,src,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("consolewrite","returnValue",3,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uartputc","uartputc_call_counter",uartputc_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_consolewrite_3\n");
}

void test_consolewrite_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int user_src;
	unsigned long int src;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={1000};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	uartputc_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consolewrite_4,false,0\n");
	aunit_printf("#CASE_START_test_consolewrite_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			user_src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = consolewrite(user_src,src,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("consolewrite","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uartputc","uartputc_call_counter",uartputc_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_consolewrite_4\n");
}

void test_consolewrite_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int user_src;
	unsigned long int src;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={1000};
	unsigned int listLength_1=1;
	int valueList_2[]={4};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	uartputc_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consolewrite_5,false,0\n");
	aunit_printf("#CASE_START_test_consolewrite_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			user_src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = consolewrite(user_src,src,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("consolewrite","returnValue",4,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uartputc","uartputc_call_counter",uartputc_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_consolewrite_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_consolewrite_up();

	switch(caseIndex){
	case 1:
		test_consolewrite_1();
		break;
	case 2:
		test_consolewrite_2();
		break;
	case 3:
		test_consolewrite_3();
		break;
	case 4:
		test_consolewrite_4();
		break;
	case 5:
		test_consolewrite_5();
		break;
	default:
		abnormal_consolewrite_case(caseIndex);
		break;
	}

	test_consolewrite_down();
}

