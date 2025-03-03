void test_argstr_up(void);
void test_argstr_down(void);


void test_argstr_up(void){

	aunit_printf("\n##FUNCTION_START_argstr\n");
 }

void test_argstr_down(void){
	aunit_printf("\n##FUNCTION_END_argstr\n");
 }



void abnormal_argstr_case(int index);

void abnormal_argstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_argstr_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	char *buf;
	int max;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
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
	fetchstr_call_counter = 0;
	argaddr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argstr_1,false,0\n");
	aunit_printf("#CASE_START_test_argstr_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = argstr(n,buf,max);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("argstr","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fetchstr","fetchstr_call_counter",fetchstr_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)

	aunit_printf("#CASE_END_test_argstr_1\n");
}

void test_argstr_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	char *buf;
	int max;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"xyz"};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	fetchstr_call_counter = 0;
	argaddr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argstr_2,false,0\n");
	aunit_printf("#CASE_START_test_argstr_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = argstr(n,buf,max);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("argstr","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fetchstr","fetchstr_call_counter",fetchstr_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)

	aunit_printf("#CASE_END_test_argstr_2\n");
}

void test_argstr_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	char *buf;
	int max;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	fetchstr_call_counter = 0;
	argaddr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argstr_3,false,0\n");
	aunit_printf("#CASE_START_test_argstr_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			max=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = argstr(n,buf,max);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("argstr","returnValue",3,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fetchstr","fetchstr_call_counter",fetchstr_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)

	aunit_printf("#CASE_END_test_argstr_3\n");
}

void test_argstr_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	char *buf;
	int max;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"test"};
	unsigned int listLength_0=1;
	int valueList_1[]={15};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	fetchstr_call_counter = 0;
	argaddr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argstr_4,false,0\n");
	aunit_printf("#CASE_START_test_argstr_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = argstr(n,buf,max);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("argstr","returnValue",10,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fetchstr","fetchstr_call_counter",fetchstr_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)

	aunit_printf("#CASE_END_test_argstr_4\n");
}

void test_argstr_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	char *buf;
	int max;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"sample"};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
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
	fetchstr_call_counter = 0;
	argaddr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argstr_5,false,0\n");
	aunit_printf("#CASE_START_test_argstr_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = argstr(n,buf,max);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("argstr","returnValue",15,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fetchstr","fetchstr_call_counter",fetchstr_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)

	aunit_printf("#CASE_END_test_argstr_5\n");
}

void test_argstr_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	char *buf;
	int max;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"buffer"};
	unsigned int listLength_0=1;
	int valueList_1[]={25};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	fetchstr_call_counter = 0;
	argaddr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argstr_6,false,0\n");
	aunit_printf("#CASE_START_test_argstr_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = argstr(n,buf,max);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("argstr","returnValue",20,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("fetchstr","fetchstr_call_counter",fetchstr_call_counter)
	OB_INT_EXPR("argaddr","argaddr_call_counter",argaddr_call_counter)

	aunit_printf("#CASE_END_test_argstr_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_argstr_up();

	switch(caseIndex){
	case 1:
		test_argstr_1();
		break;
	case 2:
		test_argstr_2();
		break;
	case 3:
		test_argstr_3();
		break;
	case 4:
		test_argstr_4();
		break;
	case 5:
		test_argstr_5();
		break;
	case 6:
		test_argstr_6();
		break;
	default:
		abnormal_argstr_case(caseIndex);
		break;
	}

	test_argstr_down();
}

