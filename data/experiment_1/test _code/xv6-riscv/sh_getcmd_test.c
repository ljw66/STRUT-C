void test_getcmd_up(void);
void test_getcmd_down(void);


void test_getcmd_up(void){

	aunit_printf("\n##FUNCTION_START_getcmd\n");
 }

void test_getcmd_down(void){
	aunit_printf("\n##FUNCTION_END_getcmd\n");
 }



void abnormal_getcmd_case(int index);

void abnormal_getcmd_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getcmd_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	int nbuf;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	gets_call_counter = 0;
	write_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getcmd_1,false,0\n");
	aunit_printf("#CASE_START_test_getcmd_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbuf=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getcmd(buf,nbuf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getcmd","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("gets","gets_call_counter",gets_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_getcmd_1\n");
}

void test_getcmd_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	int nbuf;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	gets_call_counter = 0;
	write_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getcmd_2,false,0\n");
	aunit_printf("#CASE_START_test_getcmd_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbuf=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getcmd(buf,nbuf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getcmd","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("gets","gets_call_counter",gets_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_getcmd_2\n");
}

void test_getcmd_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	int nbuf;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	gets_call_counter = 0;
	write_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getcmd_3,false,0\n");
	aunit_printf("#CASE_START_test_getcmd_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbuf=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getcmd(buf,nbuf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getcmd","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("gets","gets_call_counter",gets_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_getcmd_3\n");
}

void test_getcmd_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	int nbuf;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	gets_call_counter = 0;
	write_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getcmd_4,false,0\n");
	aunit_printf("#CASE_START_test_getcmd_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbuf=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getcmd(buf,nbuf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getcmd","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("gets","gets_call_counter",gets_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_getcmd_4\n");
}

void test_getcmd_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	int nbuf;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	gets_call_counter = 0;
	write_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getcmd_5,false,0\n");
	aunit_printf("#CASE_START_test_getcmd_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbuf=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getcmd(buf,nbuf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("getcmd","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("gets","gets_call_counter",gets_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_getcmd_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_getcmd_up();

	switch(caseIndex){
	case 1:
		test_getcmd_1();
		break;
	case 2:
		test_getcmd_2();
		break;
	case 3:
		test_getcmd_3();
		break;
	case 4:
		test_getcmd_4();
		break;
	case 5:
		test_getcmd_5();
		break;
	default:
		abnormal_getcmd_case(caseIndex);
		break;
	}

	test_getcmd_down();
}

