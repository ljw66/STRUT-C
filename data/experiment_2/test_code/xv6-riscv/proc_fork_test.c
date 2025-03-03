void test_fork_up(void);
void test_fork_down(void);


void test_fork_up(void){

	aunit_printf("\n##FUNCTION_START_fork\n");
 }

void test_fork_down(void){
	aunit_printf("\n##FUNCTION_END_fork\n");
 }



void abnormal_fork_case(int index);

void abnormal_fork_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fork_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={1024};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	uvmcopy_call_counter = 0;
	allocproc_call_counter = 0;
	safestrcpy_call_counter = 0;
	release_call_counter = 0;
	idup_call_counter = 0;
	freeproc_call_counter = 0;
	filedup_call_counter = 0;
	acquire_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fork_4,false,0\n");
	aunit_printf("#CASE_START_test_fork_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			wait_lock.locked=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[0].sz=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(allocproc_returnValue_PTRTO[0]).killed=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			proc[0].trapframe->a0=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = fork();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("fork","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uvmcopy","uvmcopy_call_counter",uvmcopy_call_counter)
	OB_INT_EXPR("allocproc","allocproc_call_counter",allocproc_call_counter)
	OB_INT_EXPR("safestrcpy","safestrcpy_call_counter",safestrcpy_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("idup","idup_call_counter",idup_call_counter)
	OB_INT_EXPR("freeproc","freeproc_call_counter",freeproc_call_counter)
	OB_INT_EXPR("filedup","filedup_call_counter",filedup_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_fork_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_fork_up();

	switch(caseIndex){
	case 4:
		test_fork_4();
		break;
	default:
		abnormal_fork_case(caseIndex);
		break;
	}

	test_fork_down();
}

