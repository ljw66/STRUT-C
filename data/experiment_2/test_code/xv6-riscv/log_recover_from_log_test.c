void test_recover_from_log_up(void);
void test_recover_from_log_down(void);


void test_recover_from_log_up(void){

	aunit_printf("\n##FUNCTION_START_recover_from_log\n");
 }

void test_recover_from_log_down(void){
	aunit_printf("\n##FUNCTION_END_recover_from_log\n");
 }



void abnormal_recover_from_log_case(int index);

void abnormal_recover_from_log_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_recover_from_log_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	write_head_call_counter = 0;
	read_head_call_counter = 0;
	install_trans_call_counter = 0;

	aunit_printf("###TEST_TREE_test_recover_from_log_1,false,0\n");
	aunit_printf("#CASE_START_test_recover_from_log_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		recover_from_log();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("recover_from_log","log.lh.n",0,log.lh.n)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("write_head","write_head_call_counter",write_head_call_counter)
	OB_INT_EXPR("read_head","read_head_call_counter",read_head_call_counter)
	OB_INT_EXPR("install_trans","install_trans_call_counter",install_trans_call_counter)

	aunit_printf("#CASE_END_test_recover_from_log_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_recover_from_log_up();

	switch(caseIndex){
	case 1:
		test_recover_from_log_1();
		break;
	default:
		abnormal_recover_from_log_case(caseIndex);
		break;
	}

	test_recover_from_log_down();
}

