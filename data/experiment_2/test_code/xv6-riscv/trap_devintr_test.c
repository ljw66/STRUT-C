void test_devintr_up(void);
void test_devintr_down(void);


void test_devintr_up(void){

	aunit_printf("\n##FUNCTION_START_devintr\n");
 }

void test_devintr_down(void){
	aunit_printf("\n##FUNCTION_END_devintr\n");
 }



void abnormal_devintr_case(int index);

void abnormal_devintr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_devintr_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	plic_complete_call_counter = 0;
	uartintr_call_counter = 0;
	plic_claim_call_counter = 0;
	r_scause_call_counter = 0;
	virtio_disk_intr_call_counter = 0;
	clockintr_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_devintr_7,false,0\n");
	aunit_printf("#CASE_START_test_devintr_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = devintr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("devintr","returnValue",2,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("plic_complete","plic_complete_call_counter",plic_complete_call_counter)
	OB_INT_EXPR("uartintr","uartintr_call_counter",uartintr_call_counter)
	OB_INT_EXPR("plic_claim","plic_claim_call_counter",plic_claim_call_counter)
	OB_INT_EXPR("r_scause","r_scause_call_counter",r_scause_call_counter)
	OB_INT_EXPR("virtio_disk_intr","virtio_disk_intr_call_counter",virtio_disk_intr_call_counter)
	OB_INT_EXPR("clockintr","clockintr_call_counter",clockintr_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_devintr_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_devintr_up();

	switch(caseIndex){
	case 7:
		test_devintr_7();
		break;
	default:
		abnormal_devintr_case(caseIndex);
		break;
	}

	test_devintr_down();
}

