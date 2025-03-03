void test_add_item_label_up(void);
void test_add_item_label_down(void);


void test_add_item_label_up(void){

	aunit_printf("\n##FUNCTION_START_add_item_label\n");
 }

void test_add_item_label_down(void){
	aunit_printf("\n##FUNCTION_END_add_item_label\n");
 }



void abnormal_add_item_label_case(int index);

void abnormal_add_item_label_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_add_item_label_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Dictionary *dic;
	char *label;
	void *item;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"test"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_1,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			label=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_1\n");
}

void test_add_item_label_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Dictionary *dic;
	char *label;
	void *item;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"overflow"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_2,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			label=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_2\n");
}

void test_add_item_label_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Dictionary *dic;
	char *label;
	void *item;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"boundary"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_3,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			label=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_3\n");
}

void test_add_item_label_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Dictionary *dic;
	char *label;
	void *item;

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
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_4,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_4\n");
}

void test_add_item_label_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Dictionary *dic;
	char *label;
	void *item;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"averyverylonglabelstringthatexceedstypicallength"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_5,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			label=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_5\n");
}

void test_add_item_label_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Dictionary *dic;
	char *label;
	void *item;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"lowerbound"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_6,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			label=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_add_item_label_up();

	switch(caseIndex){
	case 1:
		test_add_item_label_1();
		break;
	case 2:
		test_add_item_label_2();
		break;
	case 3:
		test_add_item_label_3();
		break;
	case 4:
		test_add_item_label_4();
		break;
	case 5:
		test_add_item_label_5();
		break;
	case 6:
		test_add_item_label_6();
		break;
	default:
		abnormal_add_item_label_case(caseIndex);
		break;
	}

	test_add_item_label_down();
}

