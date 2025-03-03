void test_morecore_up(void);
void test_morecore_down(void);


void test_morecore_up(void){

	aunit_printf("\n##FUNCTION_START_morecore\n");
 }

void test_morecore_down(void){
	aunit_printf("\n##FUNCTION_END_morecore\n");
 }



void abnormal_morecore_case(int index);

void abnormal_morecore_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_morecore_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kmem_t *km;
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	header_t *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	header_t *valueList_4[]={(header_t *)&struct_header_t2};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	header_t *valueList_6[]={(header_t *)&struct_header_t1};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_1,false,0\n");
	aunit_printf("#CASE_START_test_morecore_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nu=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_header_t1.size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t2.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).core_head=(header_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).par=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = morecore(km,nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_1\n");
}

void test_morecore_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kmem_t *km;
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	header_t *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={15};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={25};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={8};
	unsigned int listLength_3=1;
	header_t *valueList_4[]={(header_t *)&struct_header_t2};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	header_t *valueList_6[]={(header_t *)&struct_header_t1};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_2,false,0\n");
	aunit_printf("#CASE_START_test_morecore_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nu=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_header_t1.size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t2.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).core_head=(header_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).par=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = morecore(km,nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_2\n");
}

void test_morecore_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kmem_t *km;
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	header_t *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	header_t *valueList_4[]={(header_t *)&struct_header_t2};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	header_t *valueList_6[]={(header_t *)&struct_header_t1};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_3,false,0\n");
	aunit_printf("#CASE_START_test_morecore_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nu=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_header_t1.size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t2.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).core_head=(header_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).par=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = morecore(km,nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_3\n");
}

void test_morecore_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kmem_t *km;
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	header_t *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={50};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={30};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={40};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={16};
	unsigned int listLength_3=1;
	header_t *valueList_4[]={(header_t *)&struct_header_t2};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	header_t *valueList_6[]={(header_t *)&struct_header_t1};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_4,false,0\n");
	aunit_printf("#CASE_START_test_morecore_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nu=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_header_t1.size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t2.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).core_head=(header_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).par=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = morecore(km,nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_4\n");
}

void test_morecore_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kmem_t *km;
	unsigned int nu;

	//声明返回值局部变量，若为基本类型赋默认值
	header_t *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={8};
	unsigned int listLength_3=1;
	header_t *valueList_4[]={(header_t *)&struct_header_t2};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	header_t *valueList_6[]={(header_t *)&struct_header_t1};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;
	kmalloc_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_5,false,0\n");
	aunit_printf("#CASE_START_test_morecore_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nu=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_header_t1.size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_header_t2.size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(km_PTRTO[0]).min_core_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(km_PTRTO[0]).core_head=(header_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(km_PTRTO[0]).par=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(km_PTRTO[0]).loop_head=(header_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = morecore(km,nu);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_morecore_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_morecore_up();

	switch(caseIndex){
	case 1:
		test_morecore_1();
		break;
	case 2:
		test_morecore_2();
		break;
	case 3:
		test_morecore_3();
		break;
	case 4:
		test_morecore_4();
		break;
	case 5:
		test_morecore_5();
		break;
	default:
		abnormal_morecore_case(caseIndex);
		break;
	}

	test_morecore_down();
}

