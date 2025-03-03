void test_argaddr_up(void);
void test_argaddr_down(void);


void test_argaddr_up(void){

	aunit_printf("\n##FUNCTION_START_argaddr\n");
 }

void test_argaddr_down(void){
	aunit_printf("\n##FUNCTION_END_argaddr\n");
 }



void abnormal_argaddr_case(int index);

void abnormal_argaddr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_argaddr_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	uint64 *ip;


	//值序列相关
	uint64 *valueList_0[]={(uint64 *)ip_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	argraw_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argaddr_1,false,0\n");
	aunit_printf("#CASE_START_test_argaddr_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ip_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ip_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		argaddr(n,ip);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[0]",42,ip[0])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[1]",0,ip[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("argraw","argraw_call_counter",argraw_call_counter)

	aunit_printf("#CASE_END_test_argaddr_1\n");
}

void test_argaddr_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	uint64 *ip;


	//值序列相关
	uint64 *valueList_0[]={(uint64 *)ip_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	argraw_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argaddr_2,false,0\n");
	aunit_printf("#CASE_START_test_argaddr_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ip_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ip_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		argaddr(n,ip);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[0]",84,ip[0])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[1]",0,ip[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("argraw","argraw_call_counter",argraw_call_counter)

	aunit_printf("#CASE_END_test_argaddr_2\n");
}

void test_argaddr_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	uint64 *ip;


	//值序列相关
	uint64 *valueList_0[]={(uint64 *)ip_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={-1};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	argraw_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argaddr_3,false,0\n");
	aunit_printf("#CASE_START_test_argaddr_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ip_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ip_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		argaddr(n,ip);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[0]",123,ip[0])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[1]",0,ip[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("argraw","argraw_call_counter",argraw_call_counter)

	aunit_printf("#CASE_END_test_argaddr_3\n");
}

void test_argaddr_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	uint64 *ip;


	//值序列相关
	uint64 *valueList_0[]={(uint64 *)ip_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={100};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	argraw_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argaddr_4,false,0\n");
	aunit_printf("#CASE_START_test_argaddr_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ip_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ip_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		argaddr(n,ip);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[0]",9999,ip[0])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[1]",0,ip[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("argraw","argraw_call_counter",argraw_call_counter)

	aunit_printf("#CASE_END_test_argaddr_4\n");
}

void test_argaddr_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	uint64 *ip;


	//值序列相关
	uint64 *valueList_0[]={(uint64 *)ip_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={1000};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	argraw_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argaddr_5,false,0\n");
	aunit_printf("#CASE_START_test_argaddr_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ip_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ip_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		argaddr(n,ip);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[0]",555,ip[0])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[1]",0,ip[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("argraw","argraw_call_counter",argraw_call_counter)

	aunit_printf("#CASE_END_test_argaddr_5\n");
}

void test_argaddr_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	uint64 *ip;


	//值序列相关
	uint64 *valueList_0[]={(uint64 *)ip_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2147483647};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	argraw_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argaddr_6,false,0\n");
	aunit_printf("#CASE_START_test_argaddr_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ip=(uint64 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ip_PTRTO[0]=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ip_PTRTO[1]=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		argaddr(n,ip);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[0]",987654321,ip[0])
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argaddr","ip[1]",0,ip[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("argraw","argraw_call_counter",argraw_call_counter)

	aunit_printf("#CASE_END_test_argaddr_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_argaddr_up();

	switch(caseIndex){
	case 1:
		test_argaddr_1();
		break;
	case 2:
		test_argaddr_2();
		break;
	case 3:
		test_argaddr_3();
		break;
	case 4:
		test_argaddr_4();
		break;
	case 5:
		test_argaddr_5();
		break;
	case 6:
		test_argaddr_6();
		break;
	default:
		abnormal_argaddr_case(caseIndex);
		break;
	}

	test_argaddr_down();
}

