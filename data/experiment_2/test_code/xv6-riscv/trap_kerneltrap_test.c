void test_kerneltrap_up(void);
void test_kerneltrap_down(void);


void test_kerneltrap_up(void){

	aunit_printf("\n##FUNCTION_START_kerneltrap\n");
 }

void test_kerneltrap_down(void){
	aunit_printf("\n##FUNCTION_END_kerneltrap\n");
 }



void abnormal_kerneltrap_case(int index);

void abnormal_kerneltrap_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kerneltrap_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	devintr_call_counter = 0;
	w_sstatus_call_counter = 0;
	intr_get_call_counter = 0;
	yield_call_counter = 0;
	r_scause_call_counter = 0;
	r_sepc_call_counter = 0;
	r_sstatus_call_counter = 0;
	w_sepc_call_counter = 0;
	r_stval_call_counter = 0;
	panic_call_counter = 0;
	myproc_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kerneltrap_6,false,0\n");
	aunit_printf("#CASE_START_test_kerneltrap_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		kerneltrap();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("devintr","devintr_call_counter",devintr_call_counter)
	OB_INT_EXPR("w_sstatus","w_sstatus_call_counter",w_sstatus_call_counter)
	OB_INT_EXPR("intr_get","intr_get_call_counter",intr_get_call_counter)
	OB_INT_EXPR("yield","yield_call_counter",yield_call_counter)
	OB_INT_EXPR("r_scause","r_scause_call_counter",r_scause_call_counter)
	OB_INT_EXPR("r_sepc","r_sepc_call_counter",r_sepc_call_counter)
	OB_INT_EXPR("r_sstatus","r_sstatus_call_counter",r_sstatus_call_counter)
	OB_INT_EXPR("w_sepc","w_sepc_call_counter",w_sepc_call_counter)
	OB_INT_EXPR("r_stval","r_stval_call_counter",r_stval_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_kerneltrap_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_kerneltrap_up();

	switch(caseIndex){
	case 6:
		test_kerneltrap_6();
		break;
	default:
		abnormal_kerneltrap_case(caseIndex);
		break;
	}

	test_kerneltrap_down();
}

