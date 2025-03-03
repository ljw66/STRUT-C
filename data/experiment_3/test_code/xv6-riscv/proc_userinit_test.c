void test_userinit_up(void);
void test_userinit_down(void);


void test_userinit_up(void){

	aunit_printf("\n##FUNCTION_START_userinit\n");
 }

void test_userinit_down(void){
	aunit_printf("\n##FUNCTION_END_userinit\n");
 }



void abnormal_userinit_case(int index);

void abnormal_userinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_userinit_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct proc *valueList_0[]={(struct proc *)initproc_PTRTO};
	unsigned int listLength_0=1;
	struct trapframe *valueList_1[]={(struct trapframe *)initproc_PTRTO_0_trapframe_PTRTO};
	unsigned int listLength_1=1;
	struct trapframe *valueList_2[]={(struct trapframe *)initproc_PTRTO_1_trapframe_PTRTO};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)initproc_PTRTO_1_chan_PTRTO};
	unsigned int listLength_3=1;
	void *valueList_4[]={(void *)initproc_PTRTO_0_chan_PTRTO};
	unsigned int listLength_4=1;
	struct proc *valueList_5[]={(struct proc *)initproc_PTRTO_0_parent_PTRTO};
	unsigned int listLength_5=1;
	uint64 *valueList_6[]={(uint64 *)initproc_PTRTO_0_pagetable_PTRTO};
	unsigned int listLength_6=1;
	uint64 *valueList_7[]={(uint64 *)initproc_PTRTO_1_pagetable_PTRTO};
	unsigned int listLength_7=1;
	struct proc *valueList_8[]={(struct proc *)initproc_PTRTO_1_parent_PTRTO};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	uvmfirst_call_counter = 0;
	allocproc_call_counter = 0;
	namei_call_counter = 0;
	safestrcpy_call_counter = 0;
	release_call_counter = 0;

	aunit_printf("###TEST_TREE_test_userinit_6,false,0\n");
	aunit_printf("#CASE_START_test_userinit_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			initproc=(struct proc *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(initproc_PTRTO[0]).trapframe=(struct trapframe *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(initproc_PTRTO[1]).trapframe=(struct trapframe *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(initproc_PTRTO[1]).chan=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(initproc_PTRTO[0]).chan=(void *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(initproc_PTRTO[0]).parent=(struct proc *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(initproc_PTRTO[0]).pagetable=(uint64 *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(initproc_PTRTO[1]).pagetable=(uint64 *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(initproc_PTRTO[1]).parent=(struct proc *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		userinit();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("uvmfirst","uvmfirst_call_counter",uvmfirst_call_counter)
	OB_INT_EXPR("allocproc","allocproc_call_counter",allocproc_call_counter)
	OB_INT_EXPR("namei","namei_call_counter",namei_call_counter)
	OB_INT_EXPR("safestrcpy","safestrcpy_call_counter",safestrcpy_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)

	aunit_printf("#CASE_END_test_userinit_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_userinit_up();

	switch(caseIndex){
	case 6:
		test_userinit_6();
		break;
	default:
		abnormal_userinit_case(caseIndex);
		break;
	}

	test_userinit_down();
}

