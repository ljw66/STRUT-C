void test_segment_tree_init_up(void);
void test_segment_tree_init_down(void);


void test_segment_tree_init_up(void){

	aunit_printf("\n##FUNCTION_START_segment_tree_init\n");
 }

void test_segment_tree_init_down(void){
	aunit_printf("\n##FUNCTION_END_segment_tree_init\n");
 }



void abnormal_segment_tree_init_case(int index);

void abnormal_segment_tree_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_segment_tree_init_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *arr;
	unsigned int elem_size;
	unsigned int len;
	void *identity;
	void (*func)(const void *, const void *, void *);

	//声明返回值局部变量，若为基本类型赋默认值
	segment_tree *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	func_STUB_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_init_1,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_init_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elem_size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = segment_tree_init(arr,elem_size,len,identity,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("segment_tree_init","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_init_1\n");
}

void test_segment_tree_init_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *arr;
	unsigned int elem_size;
	unsigned int len;
	void *identity;
	void (*func)(const void *, const void *, void *);

	//声明返回值局部变量，若为基本类型赋默认值
	segment_tree *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	func_STUB_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_init_2,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_init_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elem_size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = segment_tree_init(arr,elem_size,len,identity,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("segment_tree_init","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_init_2\n");
}

void test_segment_tree_init_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *arr;
	unsigned int elem_size;
	unsigned int len;
	void *identity;
	void (*func)(const void *, const void *, void *);

	//声明返回值局部变量，若为基本类型赋默认值
	segment_tree *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	func_STUB_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_init_3,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_init_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elem_size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = segment_tree_init(arr,elem_size,len,identity,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("segment_tree_init","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_init_3\n");
}

void test_segment_tree_init_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *arr;
	unsigned int elem_size;
	unsigned int len;
	void *identity;
	void (*func)(const void *, const void *, void *);

	//声明返回值局部变量，若为基本类型赋默认值
	segment_tree *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	func_STUB_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_init_4,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_init_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elem_size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = segment_tree_init(arr,elem_size,len,identity,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("segment_tree_init","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_init_4\n");
}

void test_segment_tree_init_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *arr;
	unsigned int elem_size;
	unsigned int len;
	void *identity;
	void (*func)(const void *, const void *, void *);

	//声明返回值局部变量，若为基本类型赋默认值
	segment_tree *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	func_STUB_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_init_5,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_init_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elem_size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = segment_tree_init(arr,elem_size,len,identity,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("segment_tree_init","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_init_5\n");
}

void test_segment_tree_init_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *arr;
	unsigned int elem_size;
	unsigned int len;
	void *identity;
	void (*func)(const void *, const void *, void *);

	//声明返回值局部变量，若为基本类型赋默认值
	segment_tree *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	func_STUB_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_init_6,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_init_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elem_size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = segment_tree_init(arr,elem_size,len,identity,func);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("segment_tree_init","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_init_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_segment_tree_init_up();

	switch(caseIndex){
	case 1:
		test_segment_tree_init_1();
		break;
	case 2:
		test_segment_tree_init_2();
		break;
	case 3:
		test_segment_tree_init_3();
		break;
	case 4:
		test_segment_tree_init_4();
		break;
	case 5:
		test_segment_tree_init_5();
		break;
	case 6:
		test_segment_tree_init_6();
		break;
	default:
		abnormal_segment_tree_init_case(caseIndex);
		break;
	}

	test_segment_tree_init_down();
}

