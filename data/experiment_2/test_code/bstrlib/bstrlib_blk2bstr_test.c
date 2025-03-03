void test_blk2bstr_up(void);
void test_blk2bstr_down(void);


void test_blk2bstr_up(void){

	aunit_printf("\n##FUNCTION_START_blk2bstr\n");
 }

void test_blk2bstr_down(void){
	aunit_printf("\n##FUNCTION_END_blk2bstr\n");
 }



void abnormal_blk2bstr_case(int index);

void abnormal_blk2bstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_blk2bstr_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_1,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_1\n");
}

void test_blk2bstr_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={-1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_2,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_2\n");
}

void test_blk2bstr_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_3,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_3\n");
}

void test_blk2bstr_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_4,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_4\n");
}

void test_blk2bstr_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_5,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_5\n");
}

void test_blk2bstr_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_6,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_6\n");
}

void test_blk2bstr_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"some data"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	snapUpSize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blk2bstr_7,false,0\n");
	aunit_printf("#CASE_START_test_blk2bstr_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = blk2bstr(blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("blk2bstr","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("blk2bstr","returnValue->slen",5,returnValue->slen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)

	aunit_printf("#CASE_END_test_blk2bstr_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_blk2bstr_up();

	switch(caseIndex){
	case 1:
		test_blk2bstr_1();
		break;
	case 2:
		test_blk2bstr_2();
		break;
	case 3:
		test_blk2bstr_3();
		break;
	case 4:
		test_blk2bstr_4();
		break;
	case 5:
		test_blk2bstr_5();
		break;
	case 6:
		test_blk2bstr_6();
		break;
	case 7:
		test_blk2bstr_7();
		break;
	default:
		abnormal_blk2bstr_case(caseIndex);
		break;
	}

	test_blk2bstr_down();
}

