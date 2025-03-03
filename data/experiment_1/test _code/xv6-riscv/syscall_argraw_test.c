void test_argraw_up(void);
void test_argraw_down(void);


void test_argraw_up(void){

	aunit_printf("\n##FUNCTION_START_argraw\n");
 }

void test_argraw_down(void){
	aunit_printf("\n##FUNCTION_END_argraw\n");
 }



void abnormal_argraw_case(int index);

void abnormal_argraw_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_argraw_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	panic_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argraw_8,false,0\n");
	aunit_printf("#CASE_START_test_argraw_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = argraw(n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argraw","returnValue",4321,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_argraw_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_argraw_up();

	switch(caseIndex){
	case 8:
		test_argraw_8();
		break;
	default:
		abnormal_argraw_case(caseIndex);
		break;
	}

	test_argraw_down();
}

