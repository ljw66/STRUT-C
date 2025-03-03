void test_push_up(void);
void test_push_down(void);


void test_push_up(void){

	aunit_printf("\n##FUNCTION_START_push\n");
 }

void test_push_down(void){
	aunit_printf("\n##FUNCTION_END_push\n");
 }



void abnormal_push_case(int index);

void abnormal_push_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_push_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Stack *stack;
	int element;


	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	int valueList_1[]={-1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_push_1,false,0\n");
	aunit_printf("#CASE_START_test_push_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			element=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stack_PTRTO[0]).top=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		push(stack,element);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("push","stack->top",0,stack->top)
	TEST_ASSERT_EQUAL_INT("push","(stack->arr)[0]",10,(stack->arr)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_push_1\n");
}

void test_push_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Stack *stack;
	int element;


	//值序列相关
	int valueList_0[]={20};
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

	aunit_printf("###TEST_TREE_test_push_2,false,0\n");
	aunit_printf("#CASE_START_test_push_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			element=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stack_PTRTO[0]).top=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		push(stack,element);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("push","(stack->arr)[1]",20,(stack->arr)[1])
	TEST_ASSERT_EQUAL_INT("push","stack->top",1,stack->top)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_push_2\n");
}

void test_push_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Stack *stack;
	int element;


	//值序列相关
	int valueList_0[]={30};
	unsigned int listLength_0=1;
	int valueList_1[]={19};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_push_3,false,0\n");
	aunit_printf("#CASE_START_test_push_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			element=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stack_PTRTO[0]).top=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		push(stack,element);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("push","(stack->arr)[20]",30,(stack->arr)[20])
	TEST_ASSERT_EQUAL_INT("push","stack->top",20,stack->top)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_push_3\n");
}

void test_push_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Stack *stack;
	int element;


	//值序列相关
	int valueList_0[]={40};
	unsigned int listLength_0=1;
	int valueList_1[]={38};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_push_4,false,0\n");
	aunit_printf("#CASE_START_test_push_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			element=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stack_PTRTO[0]).top=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		push(stack,element);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("push","stack->top",39,stack->top)
	TEST_ASSERT_EQUAL_INT("push","(stack->arr)[39]",40,(stack->arr)[39])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_push_4\n");
}

void test_push_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Stack *stack;
	int element;


	//值序列相关
	int valueList_0[]={50};
	unsigned int listLength_0=1;
	int valueList_1[]={39};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_push_5,false,0\n");
	aunit_printf("#CASE_START_test_push_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			element=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(stack_PTRTO[0]).top=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		push(stack,element);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("push","stack->top",40,stack->top)
	TEST_ASSERT_EQUAL_INT("push","(stack->arr)[40]",50,(stack->arr)[40])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_push_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_push_up();

	switch(caseIndex){
	case 1:
		test_push_1();
		break;
	case 2:
		test_push_2();
		break;
	case 3:
		test_push_3();
		break;
	case 4:
		test_push_4();
		break;
	case 5:
		test_push_5();
		break;
	default:
		abnormal_push_case(caseIndex);
		break;
	}

	test_push_down();
}

