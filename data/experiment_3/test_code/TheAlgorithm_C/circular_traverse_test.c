void test_traverse_up(void);
void test_traverse_down(void);


void test_traverse_up(void){

	aunit_printf("\n##FUNCTION_START_traverse\n");
 }

void test_traverse_down(void){
	aunit_printf("\n##FUNCTION_END_traverse\n");
 }



void abnormal_traverse_case(int index);

void abnormal_traverse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_traverse_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct node *valueList_0[]={(struct node *)last_PTRTO};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_traverse_1,false,0\n");
	aunit_printf("#CASE_START_test_traverse_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			last=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		traverse();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_traverse_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_traverse_up();

	switch(caseIndex){
	case 1:
		test_traverse_1();
		break;
	default:
		abnormal_traverse_case(caseIndex);
		break;
	}

	test_traverse_down();
}

