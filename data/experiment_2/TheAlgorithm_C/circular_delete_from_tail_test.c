void test_delete_from_tail_up(void);
void test_delete_from_tail_down(void);


void test_delete_from_tail_up(void){

	aunit_printf("\n##FUNCTION_START_delete_from_tail\n");
 }

void test_delete_from_tail_down(void){
	aunit_printf("\n##FUNCTION_END_delete_from_tail\n");
 }



void abnormal_delete_from_tail_case(int index);

void abnormal_delete_from_tail_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_from_tail_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)NULL};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	free_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_from_tail_1,false,0\n");
	aunit_printf("#CASE_START_test_delete_from_tail_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = delete_from_tail(head);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("delete_from_tail","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_delete_from_tail_1\n");
}

void test_delete_from_tail_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)&node1};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={1};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&node1};
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
	free_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_from_tail_2,false,0\n");
	aunit_printf("#CASE_START_test_delete_from_tail_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			node1.value=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			node1.next=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			node1.prev=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = delete_from_tail(head);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("delete_from_tail","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_delete_from_tail_2\n");
}

void test_delete_from_tail_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)&node1};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)&node3};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={2};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&node1};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)&node1};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&node2};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={1};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)&node2};
	unsigned int listLength_7=1;
	unsigned long long int valueList_8[]={3};
	unsigned int listLength_8=1;
	struct node *valueList_9[]={(struct node *)&node3};
	unsigned int listLength_9=1;
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
	unsigned char useLast_9=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	free_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_from_tail_3,false,0\n");
	aunit_printf("#CASE_START_test_delete_from_tail_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			node2.next=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			node2.value=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			node2.prev=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			node3.next=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			node3.prev=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			node1.value=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			node1.next=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			node3.value=(unsigned long long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			node1.prev=(struct node *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = delete_from_tail(head);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("delete_from_tail","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("delete_from_tail","head","&node1",head)
	TEST_ASSERT_EQUAL_LONG("delete_from_tail","node2.next","&node1",node2.next)
	TEST_ASSERT_EQUAL_LONG("delete_from_tail","node1.prev","&node2",node1.prev)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_delete_from_tail_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_from_tail_up();

	switch(caseIndex){
	case 1:
		test_delete_from_tail_1();
		break;
	case 2:
		test_delete_from_tail_2();
		break;
	case 3:
		test_delete_from_tail_3();
		break;
	default:
		abnormal_delete_from_tail_case(caseIndex);
		break;
	}

	test_delete_from_tail_down();
}

