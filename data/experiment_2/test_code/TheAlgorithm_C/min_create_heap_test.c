void test_create_heap_up(void);
void test_create_heap_down(void);


void test_create_heap_up(void){

	aunit_printf("\n##FUNCTION_START_create_heap\n");
 }

void test_create_heap_down(void){
	aunit_printf("\n##FUNCTION_END_create_heap\n");
 }



void abnormal_create_heap_case(int index);

void abnormal_create_heap_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_create_heap_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Heap *heap;

	//声明返回值局部变量，若为基本类型赋默认值
	Heap *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_1,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->count",0,heap->count)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->size",1,heap->size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_1\n");
}

void test_create_heap_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Heap *heap;

	//声明返回值局部变量，若为基本类型赋默认值
	Heap *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_2,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("create_heap","heap",0,heap)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_2\n");
}

void test_create_heap_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Heap *heap;

	//声明返回值局部变量，若为基本类型赋默认值
	Heap *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_3,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("create_heap","heap->p",0,heap->p)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_3\n");
}

void test_create_heap_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Heap *heap;

	//声明返回值局部变量，若为基本类型赋默认值
	Heap *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_4,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->count",0,heap->count)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->size",1,heap->size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_create_heap_up();

	switch(caseIndex){
	case 1:
		test_create_heap_1();
		break;
	case 2:
		test_create_heap_2();
		break;
	case 3:
		test_create_heap_3();
		break;
	case 4:
		test_create_heap_4();
		break;
	default:
		abnormal_create_heap_case(caseIndex);
		break;
	}

	test_create_heap_down();
}

