void test_freeTreeMemory_up(void);
void test_freeTreeMemory_down(void);


void test_freeTreeMemory_up(void){

	aunit_printf("\n##FUNCTION_START_freeTreeMemory\n");
 }

void test_freeTreeMemory_down(void){
	aunit_printf("\n##FUNCTION_END_freeTreeMemory\n");
 }



void abnormal_freeTreeMemory_case(int index);

void abnormal_freeTreeMemory_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_freeTreeMemory_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Node *node;


	//值序列相关
	struct Node *valueList_0[]={(struct Node *)node_PTRTO};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freeTreeMemory_1,false,0\n");
	aunit_printf("#CASE_START_test_freeTreeMemory_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		freeTreeMemory(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_freeTreeMemory_1\n");
}

void test_freeTreeMemory_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Node *node;


	//值序列相关
	struct Node *valueList_0[]={(struct Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct Node *valueList_1[]={(struct Node *)NULL};
	unsigned int listLength_1=1;
	struct Node *valueList_2[]={(struct Node *)NULL};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={5};
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

	aunit_printf("###TEST_TREE_test_freeTreeMemory_2,false,0\n");
	aunit_printf("#CASE_START_test_freeTreeMemory_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(node_PTRTO[0]).right=(struct Node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(node_PTRTO[0]).left=(struct Node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(node_PTRTO[0]).frequency=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		freeTreeMemory(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_freeTreeMemory_2\n");
}

void test_freeTreeMemory_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Node *node;


	//值序列相关
	struct Node *valueList_0[]={(struct Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct Node *valueList_1[]={(struct Node *)NULL};
	unsigned int listLength_1=1;
	struct Node *valueList_2[]={(struct Node *)NULL};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={3};
	unsigned int listLength_3=1;
	struct Node *valueList_4[]={(struct Node *)NULL};
	unsigned int listLength_4=1;
	struct Node *valueList_5[]={(struct Node *)&struct_Node1};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={10};
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
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freeTreeMemory_3,false,0\n");
	aunit_printf("#CASE_START_test_freeTreeMemory_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_Node1.left=(struct Node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_Node1.right=(struct Node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_Node1.frequency=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(node_PTRTO[0]).right=(struct Node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(node_PTRTO[0]).left=(struct Node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).frequency=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		freeTreeMemory(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_freeTreeMemory_3\n");
}

void test_freeTreeMemory_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Node *node;


	//值序列相关
	struct Node *valueList_0[]={(struct Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct Node *valueList_1[]={(struct Node *)NULL};
	unsigned int listLength_1=1;
	struct Node *valueList_2[]={(struct Node *)NULL};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={7};
	unsigned int listLength_3=1;
	struct Node *valueList_4[]={(struct Node *)NULL};
	unsigned int listLength_4=1;
	struct Node *valueList_5[]={(struct Node *)NULL};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={5};
	unsigned int listLength_6=1;
	struct Node *valueList_7[]={(struct Node *)&struct_Node2};
	unsigned int listLength_7=1;
	struct Node *valueList_8[]={(struct Node *)&struct_Node1};
	unsigned int listLength_8=1;
	unsigned long long int valueList_9[]={20};
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
	case_id=4;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freeTreeMemory_4,false,0\n");
	aunit_printf("#CASE_START_test_freeTreeMemory_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_Node2.right=(struct Node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_Node1.left=(struct Node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_Node2.frequency=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_Node2.left=(struct Node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_Node1.right=(struct Node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_Node1.frequency=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).right=(struct Node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).left=(struct Node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(node_PTRTO[0]).frequency=(unsigned long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		freeTreeMemory(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_freeTreeMemory_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_freeTreeMemory_up();

	switch(caseIndex){
	case 1:
		test_freeTreeMemory_1();
		break;
	case 2:
		test_freeTreeMemory_2();
		break;
	case 3:
		test_freeTreeMemory_3();
		break;
	case 4:
		test_freeTreeMemory_4();
		break;
	default:
		abnormal_freeTreeMemory_case(caseIndex);
		break;
	}

	test_freeTreeMemory_down();
}

