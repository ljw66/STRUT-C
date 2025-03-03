void test_kfree_up(void);
void test_kfree_down(void);


void test_kfree_up(void){

	aunit_printf("\n##FUNCTION_START_kfree\n");
 }

void test_kfree_down(void){
	aunit_printf("\n##FUNCTION_END_kfree\n");
 }



void abnormal_kfree_case(int index);

void abnormal_kfree_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kfree_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *_km;
	void *ap;


	//值序列相关
	void *valueList_0[]={(void *)0x2000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器
	free_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kfree_11,false,0\n");
	aunit_printf("#CASE_START_test_kfree_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_km=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ap=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		kfree(_km,ap);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_kfree_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_kfree_up();

	switch(caseIndex){
	case 11:
		test_kfree_11();
		break;
	default:
		abnormal_kfree_case(caseIndex);
		break;
	}

	test_kfree_down();
}

