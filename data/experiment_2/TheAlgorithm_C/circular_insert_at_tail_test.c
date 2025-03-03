void test_insert_at_tail_up(void);
void test_insert_at_tail_down(void);


void test_insert_at_tail_up(void){

	aunit_printf("\n##FUNCTION_START_insert_at_tail\n");
 }

void test_insert_at_tail_down(void){
	aunit_printf("\n##FUNCTION_END_insert_at_tail\n");
 }



void abnormal_insert_at_tail_case(int index);

void abnormal_insert_at_tail_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insert_at_tail_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;
	unsigned long long int data;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)NULL};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={10};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_tail_1,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_tail_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = insert_at_tail(head,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","returnValue","&new_node",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_tail_1\n");
}

void test_insert_at_tail_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;
	unsigned long long int data;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)&head_node};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={40};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&tail_node};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={20};
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
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_tail_2,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_tail_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(head_PTRTO[0]).next=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(head_PTRTO[0]).prev=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head_PTRTO[0]).value=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = insert_at_tail(head,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","returnValue","&head_node",returnValue)
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","head->next","NULL",head->next)
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","head->prev","&new_node",head->prev)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_tail_2\n");
}

void test_insert_at_tail_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;
	unsigned long long int data;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)&head_node};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={50};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)&middle_node};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&middle_node};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={20};
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
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_tail_3,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_tail_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(head_PTRTO[0]).next=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(head_PTRTO[0]).prev=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head_PTRTO[0]).value=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = insert_at_tail(head,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","returnValue","&head_node",returnValue)
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","head->next","&middle_node",head->next)
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","head->prev","&new_node",head->prev)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_tail_3\n");
}

void test_insert_at_tail_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;
	unsigned long long int data;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)&single_node};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={70};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)&single_node};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&single_node};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={60};
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
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_tail_4,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_tail_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(head_PTRTO[0]).next=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(head_PTRTO[0]).prev=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head_PTRTO[0]).value=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = insert_at_tail(head,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","returnValue","&head_node",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_tail_4\n");
}

void test_insert_at_tail_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ListNode *head;
	unsigned long long int data;

	//声明返回值局部变量，若为基本类型赋默认值
	ListNode *returnValue = 0;

	//值序列相关
	ListNode *valueList_0[]={(ListNode *)NULL};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	create_node_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_at_tail_5,false,0\n");
	aunit_printf("#CASE_START_test_insert_at_tail_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(ListNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = insert_at_tail(head,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("insert_at_tail","returnValue","&new_node",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("create_node","create_node_call_counter",create_node_call_counter)

	aunit_printf("#CASE_END_test_insert_at_tail_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_insert_at_tail_up();

	switch(caseIndex){
	case 1:
		test_insert_at_tail_1();
		break;
	case 2:
		test_insert_at_tail_2();
		break;
	case 3:
		test_insert_at_tail_3();
		break;
	case 4:
		test_insert_at_tail_4();
		break;
	case 5:
		test_insert_at_tail_5();
		break;
	default:
		abnormal_insert_at_tail_case(caseIndex);
		break;
	}

	test_insert_at_tail_down();
}

