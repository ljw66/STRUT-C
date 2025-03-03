void test_List_append_up(void);
void test_List_append_down(void);


void test_List_append_up(void){

	aunit_printf("\n##FUNCTION_START_List_append\n");
 }

void test_List_append_down(void){
	aunit_printf("\n##FUNCTION_END_List_append\n");
 }



void abnormal_List_append_case(int index);

void abnormal_List_append_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_List_append_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;
	struct List_T *tail;

	//声明返回值局部变量，若为基本类型赋默认值
	List_T returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_List_append_1,false,0\n");
	aunit_printf("#CASE_START_test_List_append_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = List_append(list,tail);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_append","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_append","list","NULL",list)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_List_append_1\n");
}

void test_List_append_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;
	struct List_T *tail;

	//声明返回值局部变量，若为基本类型赋默认值
	List_T returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)42};
	unsigned int listLength_2=1;
	struct List_T *valueList_3[]={(struct List_T *)NULL};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_List_append_2,false,0\n");
	aunit_printf("#CASE_START_test_List_append_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tail_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tail_PTRTO[0]).next=(struct List_T *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = List_append(list,tail);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_append","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_append","list->val","42",list->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next","NULL",list->next)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_List_append_2\n");
}

void test_List_append_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;
	struct List_T *tail;

	//声明返回值局部变量，若为基本类型赋默认值
	List_T returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)10};
	unsigned int listLength_2=1;
	struct List_T *valueList_3[]={(struct List_T *)NULL};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_List_append_3,false,0\n");
	aunit_printf("#CASE_START_test_List_append_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(list_PTRTO[0]).next=(struct List_T *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = List_append(list,tail);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_append","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_append","list->val","10",list->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next","NULL",list->next)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_List_append_3\n");
}

void test_List_append_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;
	struct List_T *tail;

	//声明返回值局部变量，若为基本类型赋默认值
	List_T returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)10};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)30};
	unsigned int listLength_3=1;
	struct List_T *valueList_4[]={(struct List_T *)&struct_List_T1};
	unsigned int listLength_4=1;
	struct List_T *valueList_5[]={(struct List_T *)NULL};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_List_append_4,false,0\n");
	aunit_printf("#CASE_START_test_List_append_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tail_PTRTO[0]).val=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(list_PTRTO[0]).next=(struct List_T *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tail_PTRTO[0]).next=(struct List_T *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = List_append(list,tail);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_append","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_append","list->val","10",list->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->next->next","NULL",list->next->next->next)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->val","20",list->next->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->next->val","30",list->next->next->val)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_List_append_4\n");
}

void test_List_append_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;
	struct List_T *tail;

	//声明返回值局部变量，若为基本类型赋默认值
	List_T returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)10};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)30};
	unsigned int listLength_3=1;
	struct List_T *valueList_4[]={(struct List_T *)&struct_List_T1};
	unsigned int listLength_4=1;
	struct List_T *valueList_5[]={(struct List_T *)&struct_List_T2};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_List_append_5,false,0\n");
	aunit_printf("#CASE_START_test_List_append_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tail_PTRTO[0]).val=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(list_PTRTO[0]).next=(struct List_T *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tail_PTRTO[0]).next=(struct List_T *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = List_append(list,tail);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_append","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->next->next->val","40",list->next->next->next->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->val","10",list->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->next->next->next","NULL",list->next->next->next->next)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->val","20",list->next->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->next->val","30",list->next->next->val)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_List_append_5\n");
}

void test_List_append_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;
	struct List_T *tail;

	//声明返回值局部变量，若为基本类型赋默认值
	List_T returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)10};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)20};
	unsigned int listLength_3=1;
	struct List_T *valueList_4[]={(struct List_T *)NULL};
	unsigned int listLength_4=1;
	struct List_T *valueList_5[]={(struct List_T *)&tail};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_List_append_6,false,0\n");
	aunit_printf("#CASE_START_test_List_append_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tail_PTRTO[0]).val=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(list_PTRTO[0]).next=(struct List_T *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tail_PTRTO[0]).next=(struct List_T *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = List_append(list,tail);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_append","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_append","list->val","10",list->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->val","20",list->next->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next->next","&list->next",list->next->next)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_List_append_6\n");
}

void test_List_append_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;
	struct List_T *tail;

	//声明返回值局部变量，若为基本类型赋默认值
	List_T returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)10};
	unsigned int listLength_2=1;
	struct List_T *valueList_3[]={(struct List_T *)NULL};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_List_append_7,false,0\n");
	aunit_printf("#CASE_START_test_List_append_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(list_PTRTO[0]).next=(struct List_T *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = List_append(list,tail);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_append","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_append","list->val","10",list->val)
	TEST_ASSERT_EQUAL_LONG("List_append","list->next","&list",list->next)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_List_append_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_List_append_up();

	switch(caseIndex){
	case 1:
		test_List_append_1();
		break;
	case 2:
		test_List_append_2();
		break;
	case 3:
		test_List_append_3();
		break;
	case 4:
		test_List_append_4();
		break;
	case 5:
		test_List_append_5();
		break;
	case 6:
		test_List_append_6();
		break;
	case 7:
		test_List_append_7();
		break;
	default:
		abnormal_List_append_case(caseIndex);
		break;
	}

	test_List_append_down();
}

