void test_allocproc_up(void);
void test_allocproc_down(void);


void test_allocproc_up(void){

	aunit_printf("\n##FUNCTION_START_allocproc\n");
 }

void test_allocproc_down(void){
	aunit_printf("\n##FUNCTION_END_allocproc\n");
 }



void abnormal_allocproc_case(int index);

void abnormal_allocproc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_allocproc_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct proc *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	forkret_call_counter = 0;
	release_call_counter = 0;
	freeproc_call_counter = 0;
	kalloc_call_counter = 0;
	acquire_call_counter = 0;
	proc_pagetable_call_counter = 0;
	memset_call_counter = 0;
	allocpid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_allocproc_6,false,0\n");
	aunit_printf("#CASE_START_test_allocproc_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = allocproc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("allocproc","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("forkret","forkret_call_counter",forkret_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("freeproc","freeproc_call_counter",freeproc_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("proc_pagetable","proc_pagetable_call_counter",proc_pagetable_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("allocpid","allocpid_call_counter",allocpid_call_counter)

	aunit_printf("#CASE_END_test_allocproc_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_allocproc_up();

	switch(caseIndex){
	case 6:
		test_allocproc_6();
		break;
	default:
		abnormal_allocproc_case(caseIndex);
		break;
	}

	test_allocproc_down();
}

