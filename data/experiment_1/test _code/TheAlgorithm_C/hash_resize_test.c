void test_resize_up(void);
void test_resize_down(void);


void test_resize_up(void){

	aunit_printf("\n##FUNCTION_START_resize\n");
 }

void test_resize_down(void){
	aunit_printf("\n##FUNCTION_END_resize\n");
 }



void abnormal_resize_case(int index);

void abnormal_resize_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_resize_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hash_set_t *set;


	//值序列相关
	hash_set_t *valueList_0[]={(hash_set_t *)set_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0};
	unsigned int listLength_3=1;
	void **valueList_4[]={(void * *)0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	retrieve_index_from_hash_call_counter = 0;
	calloc_call_counter = 0;
	realloc_call_counter = 0;
	free_call_counter = 0;
	hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_resize_1,false,0\n");
	aunit_printf("#CASE_START_test_resize_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			set=(hash_set_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(set_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(set_PTRTO[0]).length=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(set_PTRTO[0]).keys=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(set_PTRTO[0]).values=(void * *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		resize(set);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("retrieve_index_from_hash","retrieve_index_from_hash_call_counter",retrieve_index_from_hash_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("hash","hash_call_counter",hash_call_counter)

	aunit_printf("#CASE_END_test_resize_1\n");
}

void test_resize_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hash_set_t *set;


	//值序列相关
	hash_set_t *valueList_0[]={(hash_set_t *)set_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x4000};
	unsigned int listLength_3=1;
	void **valueList_4[]={(void * *)0x3000};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	retrieve_index_from_hash_call_counter = 0;
	calloc_call_counter = 0;
	realloc_call_counter = 0;
	free_call_counter = 0;
	hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_resize_2,false,0\n");
	aunit_printf("#CASE_START_test_resize_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			set=(hash_set_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(set_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(set_PTRTO[0]).length=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(set_PTRTO[0]).keys=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(set_PTRTO[0]).values=(void * *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		resize(set);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("retrieve_index_from_hash","retrieve_index_from_hash_call_counter",retrieve_index_from_hash_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("hash","hash_call_counter",hash_call_counter)

	aunit_printf("#CASE_END_test_resize_2\n");
}

void test_resize_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hash_set_t *set;


	//值序列相关
	hash_set_t *valueList_0[]={(hash_set_t *)set_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={8};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x9000};
	unsigned int listLength_3=1;
	void **valueList_4[]={(void * *)0x8000};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	retrieve_index_from_hash_call_counter = 0;
	calloc_call_counter = 0;
	realloc_call_counter = 0;
	free_call_counter = 0;
	hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_resize_3,false,0\n");
	aunit_printf("#CASE_START_test_resize_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			set=(hash_set_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(set_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(set_PTRTO[0]).length=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(set_PTRTO[0]).keys=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(set_PTRTO[0]).values=(void * *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		resize(set);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("retrieve_index_from_hash","retrieve_index_from_hash_call_counter",retrieve_index_from_hash_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("hash","hash_call_counter",hash_call_counter)

	aunit_printf("#CASE_END_test_resize_3\n");
}

void test_resize_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hash_set_t *set;


	//值序列相关
	hash_set_t *valueList_0[]={(hash_set_t *)set_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1024};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={512};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0xD000};
	unsigned int listLength_3=1;
	void **valueList_4[]={(void * *)0xC000};
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
	retrieve_index_from_hash_call_counter = 0;
	calloc_call_counter = 0;
	realloc_call_counter = 0;
	free_call_counter = 0;
	hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_resize_4,false,0\n");
	aunit_printf("#CASE_START_test_resize_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			set=(hash_set_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(set_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(set_PTRTO[0]).length=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(set_PTRTO[0]).keys=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(set_PTRTO[0]).values=(void * *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		resize(set);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("retrieve_index_from_hash","retrieve_index_from_hash_call_counter",retrieve_index_from_hash_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("hash","hash_call_counter",hash_call_counter)

	aunit_printf("#CASE_END_test_resize_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_resize_up();

	switch(caseIndex){
	case 1:
		test_resize_1();
		break;
	case 2:
		test_resize_2();
		break;
	case 3:
		test_resize_3();
		break;
	case 4:
		test_resize_4();
		break;
	default:
		abnormal_resize_case(caseIndex);
		break;
	}

	test_resize_down();
}

