void test_leftRotate_up(void);
void test_leftRotate_down(void);


void test_leftRotate_up(void){

	aunit_printf("\n##FUNCTION_START_leftRotate\n");
 }

void test_leftRotate_down(void){
	aunit_printf("\n##FUNCTION_END_leftRotate\n");
 }



void abnormal_leftRotate_case(int index);

void abnormal_leftRotate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_leftRotate_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Node *node;

	//声明返回值局部变量，若为基本类型赋默认值
	Node *returnValue = 0;

	//值序列相关
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)&node};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	int valueList_3[]={20};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)NULL};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)&struct_parent};
	unsigned int listLength_7=1;
	struct node *valueList_8[]={(struct node *)NULL};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_leftRotate_1,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_parent.right=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_parent.left=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_parent.val=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_parent.par=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(node_PTRTO[0]).right=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).val=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).par=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).left=(struct node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = leftRotate(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->par","NULL",node->par)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->left","&struct_parent",node->left)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_parent.par","&node",struct_parent.par)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_leftRotate_1\n");
}

void test_leftRotate_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Node *node;

	//声明返回值局部变量，若为基本类型赋默认值
	Node *returnValue = 0;

	//值序列相关
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)NULL};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)&struct_parent};
	unsigned int listLength_2=1;
	int valueList_3[]={30};
	unsigned int listLength_3=1;
	int valueList_4[]={25};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_grandparent};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)&node};
	unsigned int listLength_7=1;
	int valueList_8[]={15};
	unsigned int listLength_8=1;
	struct node *valueList_9[]={(struct node *)&struct_parent};
	unsigned int listLength_9=1;
	struct node *valueList_10[]={(struct node *)&struct_left_child};
	unsigned int listLength_10=1;
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
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_leftRotate_2,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_grandparent.left=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_grandparent.right=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_grandparent.val=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_parent.val=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_parent.par=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_left_child.val=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_left_child.par=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).val=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(node_PTRTO[0]).par=(struct node *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(node_PTRTO[0]).left=(struct node *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = leftRotate(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_grandparent.right","&node",struct_grandparent.right)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->par","&struct_grandparent",node->par)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->left","&struct_parent",node->left)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_parent.right","&struct_left_child",struct_parent.right)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_parent.par","&node",struct_parent.par)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_left_child.par","&struct_parent",struct_left_child.par)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_leftRotate_2\n");
}

void test_leftRotate_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Node *node;

	//声明返回值局部变量，若为基本类型赋默认值
	Node *returnValue = 0;

	//值序列相关
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)&struct_parent};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	int valueList_3[]={60};
	unsigned int listLength_3=1;
	int valueList_4[]={50};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_grandparent};
	unsigned int listLength_5=1;
	int valueList_6[]={40};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)&struct_parent};
	unsigned int listLength_7=1;
	struct node *valueList_8[]={(struct node *)NULL};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_leftRotate_3,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_grandparent.left=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_grandparent.right=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_grandparent.val=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_parent.val=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_parent.par=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).val=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).par=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).left=(struct node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = leftRotate(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_grandparent.left","&node",struct_grandparent.left)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->par","&struct_grandparent",node->par)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->left","&struct_parent",node->left)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_parent.right","NULL",struct_parent.right)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_parent.par","&node",struct_parent.par)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_leftRotate_3\n");
}

void test_leftRotate_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Node *node;

	//声明返回值局部变量，若为基本类型赋默认值
	Node *returnValue = 0;

	//值序列相关
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)NULL};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)NULL};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
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

	aunit_printf("###TEST_TREE_test_leftRotate_4,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(node_PTRTO[0]).right=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(node_PTRTO[0]).val=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(node_PTRTO[0]).par=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(node_PTRTO[0]).left=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = leftRotate(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->par","NULL",node->par)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_leftRotate_4\n");
}

void test_leftRotate_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Node *node;

	//声明返回值局部变量，若为基本类型赋默认值
	Node *returnValue = 0;

	//值序列相关
	Node *valueList_0[]={(Node *)node_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)&node};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	int valueList_3[]={80};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
	unsigned int listLength_4=1;
	int valueList_5[]={70};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)&struct_parent};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)NULL};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_leftRotate_5,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_parent.right=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_parent.left=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_parent.val=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_parent.par=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(node_PTRTO[0]).val=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).par=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).left=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = leftRotate(node);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("leftRotate","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->par","NULL",node->par)
	TEST_ASSERT_EQUAL_LONG("leftRotate","node->left","&struct_parent",node->left)
	TEST_ASSERT_EQUAL_LONG("leftRotate","struct_parent.par","&node",struct_parent.par)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_leftRotate_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_leftRotate_up();

	switch(caseIndex){
	case 1:
		test_leftRotate_1();
		break;
	case 2:
		test_leftRotate_2();
		break;
	case 3:
		test_leftRotate_3();
		break;
	case 4:
		test_leftRotate_4();
		break;
	case 5:
		test_leftRotate_5();
		break;
	default:
		abnormal_leftRotate_case(caseIndex);
		break;
	}

	test_leftRotate_down();
}

