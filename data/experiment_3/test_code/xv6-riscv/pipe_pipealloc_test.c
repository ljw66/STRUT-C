void test_pipealloc_up(void);
void test_pipealloc_down(void);


void test_pipealloc_up(void){

	aunit_printf("\n##FUNCTION_START_pipealloc\n");
 }

void test_pipealloc_down(void){
	aunit_printf("\n##FUNCTION_END_pipealloc\n");
 }



void abnormal_pipealloc_case(int index);

void abnormal_pipealloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_pipealloc_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file **f0;
	struct file **f1;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*f0 is an invalid expression 
	//*f1 is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	fileclose_call_counter = 0;
	kfree_call_counter = 0;
	filealloc_call_counter = 0;
	kalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_pipealloc_1,false,0\n");
	aunit_printf("#CASE_START_test_pipealloc_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = pipealloc(f0,f1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pipealloc","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("fileclose","fileclose_call_counter",fileclose_call_counter)
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("filealloc","filealloc_call_counter",filealloc_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)

	aunit_printf("#CASE_END_test_pipealloc_1\n");
}

void test_pipealloc_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file **f0;
	struct file **f1;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*f0 is an invalid expression 
	//*f1 is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	fileclose_call_counter = 0;
	kfree_call_counter = 0;
	filealloc_call_counter = 0;
	kalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_pipealloc_2,false,0\n");
	aunit_printf("#CASE_START_test_pipealloc_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = pipealloc(f0,f1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pipealloc","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("fileclose","fileclose_call_counter",fileclose_call_counter)
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("filealloc","filealloc_call_counter",filealloc_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)

	aunit_printf("#CASE_END_test_pipealloc_2\n");
}

void test_pipealloc_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file **f0;
	struct file **f1;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*f0 is an invalid expression 
	//*f1 is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	fileclose_call_counter = 0;
	kfree_call_counter = 0;
	filealloc_call_counter = 0;
	kalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_pipealloc_3,false,0\n");
	aunit_printf("#CASE_START_test_pipealloc_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = pipealloc(f0,f1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pipealloc","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("fileclose","fileclose_call_counter",fileclose_call_counter)
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("filealloc","filealloc_call_counter",filealloc_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)

	aunit_printf("#CASE_END_test_pipealloc_3\n");
}

void test_pipealloc_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file **f0;
	struct file **f1;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	//*f0 is an invalid expression 
	//*f1 is an invalid expression 
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	fileclose_call_counter = 0;
	kfree_call_counter = 0;
	filealloc_call_counter = 0;
	kalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_pipealloc_4,false,0\n");
	aunit_printf("#CASE_START_test_pipealloc_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = pipealloc(f0,f1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pipealloc","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("fileclose","fileclose_call_counter",fileclose_call_counter)
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("filealloc","filealloc_call_counter",filealloc_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)

	aunit_printf("#CASE_END_test_pipealloc_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_pipealloc_up();

	switch(caseIndex){
	case 1:
		test_pipealloc_1();
		break;
	case 2:
		test_pipealloc_2();
		break;
	case 3:
		test_pipealloc_3();
		break;
	case 4:
		test_pipealloc_4();
		break;
	default:
		abnormal_pipealloc_case(caseIndex);
		break;
	}

	test_pipealloc_down();
}

