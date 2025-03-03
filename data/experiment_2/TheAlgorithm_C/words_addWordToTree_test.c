void test_addWordToTree_up(void);
void test_addWordToTree_down(void);


void test_addWordToTree_up(void){

	aunit_printf("\n##FUNCTION_START_addWordToTree\n");
 }

void test_addWordToTree_down(void){
	aunit_printf("\n##FUNCTION_END_addWordToTree\n");
 }



void abnormal_addWordToTree_case(int index);

void abnormal_addWordToTree_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_addWordToTree_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;
	struct Node *currentNode;

	//声明返回值局部变量，若为基本类型赋默认值
	struct Node *returnValue = 0;

	//值序列相关
	struct Node *valueList_0[]={(struct Node *)currentNode_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"apple"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"banana"};
	unsigned int listLength_2=1;
	struct Node *valueList_3[]={(struct Node *)NULL};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={1};
	unsigned int listLength_4=1;
	struct Node *valueList_5[]={(struct Node *)NULL};
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
	case_id=3;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	allocateMemoryForNode_call_counter = 0;
	getPointerToWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_addWordToTree_3,false,0\n");
	aunit_printf("#CASE_START_test_addWordToTree_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			currentNode=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			word=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(currentNode_PTRTO[0]).word=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(currentNode_PTRTO[0]).left=(struct Node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(currentNode_PTRTO[0]).frequency=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(currentNode_PTRTO[0]).right=(struct Node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = addWordToTree(word,currentNode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("addWordToTree","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("addWordToTree","currentNode->left->frequency",1,currentNode->left->frequency)
	TEST_ASSERT_EQUAL_LONG("addWordToTree","currentNode->left->left","NULL",currentNode->left->left)
	TEST_ASSERT_EQUAL_LONG("addWordToTree","currentNode->left->right","NULL",currentNode->left->right)
	TEST_ASSERT_EQUAL_STRING("addWordToTree","currentNode->left->word","apple",currentNode->left->word)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("allocateMemoryForNode","allocateMemoryForNode_call_counter",allocateMemoryForNode_call_counter)
	OB_INT_EXPR("getPointerToWord","getPointerToWord_call_counter",getPointerToWord_call_counter)

	aunit_printf("#CASE_END_test_addWordToTree_3\n");
}

void test_addWordToTree_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;
	struct Node *currentNode;

	//声明返回值局部变量，若为基本类型赋默认值
	struct Node *returnValue = 0;

	//值序列相关
	struct Node *valueList_0[]={(struct Node *)currentNode_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"existingword"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"existingword"};
	unsigned int listLength_2=1;
	struct Node *valueList_3[]={(struct Node *)NULL};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={1};
	unsigned int listLength_4=1;
	struct Node *valueList_5[]={(struct Node *)NULL};
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
	strcmp_call_counter = 0;
	allocateMemoryForNode_call_counter = 0;
	getPointerToWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_addWordToTree_4,false,0\n");
	aunit_printf("#CASE_START_test_addWordToTree_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			currentNode=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			word=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(currentNode_PTRTO[0]).word=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(currentNode_PTRTO[0]).left=(struct Node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(currentNode_PTRTO[0]).frequency=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(currentNode_PTRTO[0]).right=(struct Node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = addWordToTree(word,currentNode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("addWordToTree","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("addWordToTree","currentNode->frequency",2,currentNode->frequency)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("allocateMemoryForNode","allocateMemoryForNode_call_counter",allocateMemoryForNode_call_counter)
	OB_INT_EXPR("getPointerToWord","getPointerToWord_call_counter",getPointerToWord_call_counter)

	aunit_printf("#CASE_END_test_addWordToTree_4\n");
}

void test_addWordToTree_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *word;
	struct Node *currentNode;

	//声明返回值局部变量，若为基本类型赋默认值
	struct Node *returnValue = 0;

	//值序列相关
	struct Node *valueList_0[]={(struct Node *)currentNode_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"cherry"};
	unsigned int listLength_1=1;
	struct Node *valueList_2[]={(struct Node *)NULL};
	unsigned int listLength_2=1;
	struct Node *valueList_3[]={(struct Node *)NULL};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"apple"};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={1};
	unsigned int listLength_5=1;
	struct Node *valueList_6[]={(struct Node *)NULL};
	unsigned int listLength_6=1;
	struct Node *valueList_7[]={(struct Node *)NULL};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)"date"};
	unsigned int listLength_8=1;
	unsigned long long int valueList_9[]={1};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)"banana"};
	unsigned int listLength_10=1;
	struct Node *valueList_11[]={(struct Node *)&struct_Node1};
	unsigned int listLength_11=1;
	unsigned long long int valueList_12[]={1};
	unsigned int listLength_12=1;
	struct Node *valueList_13[]={(struct Node *)&struct_Node2};
	unsigned int listLength_13=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	allocateMemoryForNode_call_counter = 0;
	getPointerToWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_addWordToTree_5,false,0\n");
	aunit_printf("#CASE_START_test_addWordToTree_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			currentNode=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			word=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_Node2.right=(struct Node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_Node1.left=(struct Node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_Node1.word=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_Node2.frequency=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_Node2.left=(struct Node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_Node1.right=(struct Node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			struct_Node2.word=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_Node1.frequency=(unsigned long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(currentNode_PTRTO[0]).word=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(currentNode_PTRTO[0]).left=(struct Node *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(currentNode_PTRTO[0]).frequency=(unsigned long long int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(currentNode_PTRTO[0]).right=(struct Node *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = addWordToTree(word,currentNode);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("addWordToTree","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("addWordToTree","currentNode->right->left->frequency",1,currentNode->right->left->frequency)
	TEST_ASSERT_EQUAL_LONG("addWordToTree","currentNode->right->left->right","NULL",currentNode->right->left->right)
	TEST_ASSERT_EQUAL_LONG("addWordToTree","currentNode->right->left->left","NULL",currentNode->right->left->left)
	TEST_ASSERT_EQUAL_STRING("addWordToTree","currentNode->right->left->word","cherry",currentNode->right->left->word)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("allocateMemoryForNode","allocateMemoryForNode_call_counter",allocateMemoryForNode_call_counter)
	OB_INT_EXPR("getPointerToWord","getPointerToWord_call_counter",getPointerToWord_call_counter)

	aunit_printf("#CASE_END_test_addWordToTree_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_addWordToTree_up();

	switch(caseIndex){
	case 3:
		test_addWordToTree_3();
		break;
	case 4:
		test_addWordToTree_4();
		break;
	case 5:
		test_addWordToTree_5();
		break;
	default:
		abnormal_addWordToTree_case(caseIndex);
		break;
	}

	test_addWordToTree_down();
}

