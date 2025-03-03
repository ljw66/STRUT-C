void test_destroyqueue_up(void);
void test_destroyqueue_down(void);


void test_destroyqueue_up(void){

	aunit_printf("\n##FUNCTION_START_destroyqueue\n");
 }

void test_destroyqueue_down(void){
	aunit_printf("\n##FUNCTION_END_destroyqueue\n");
 }



void abnormal_destroyqueue_case(int index);

void abnormal_destroyqueue_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_destroyqueue_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct node *valueList_0[]={(struct node *)0};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_destroyqueue_1,false,0\n");
	aunit_printf("#CASE_START_test_destroyqueue_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		destroyqueue();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.front",0,q.front)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_destroyqueue_1\n");
}

void test_destroyqueue_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct node *valueList_0[]={(struct node *)(struct node *)0x1};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)(struct node *)0x1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_destroyqueue_2,false,0\n");
	aunit_printf("#CASE_START_test_destroyqueue_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		destroyqueue();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.front",0,q.front)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_destroyqueue_2\n");
}

void test_destroyqueue_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct node *valueList_0[]={(struct node *)(struct node *)0x2};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)(struct node *)0x1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_destroyqueue_3,false,0\n");
	aunit_printf("#CASE_START_test_destroyqueue_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		destroyqueue();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.front",0,q.front)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_destroyqueue_3\n");
}

void test_destroyqueue_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct node *valueList_0[]={(struct node *)0};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)(struct node *)0x1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_destroyqueue_4,false,0\n");
	aunit_printf("#CASE_START_test_destroyqueue_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		destroyqueue();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.front",0,q.front)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_destroyqueue_4\n");
}

void test_destroyqueue_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct node *valueList_0[]={(struct node *)(struct node *)0x1};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_destroyqueue_5,false,0\n");
	aunit_printf("#CASE_START_test_destroyqueue_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q.rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		destroyqueue();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.rear",0,q.rear)
	TEST_ASSERT_EQUAL_LONG("destroyqueue","q.front",0,q.front)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_destroyqueue_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_destroyqueue_up();

	switch(caseIndex){
	case 1:
		test_destroyqueue_1();
		break;
	case 2:
		test_destroyqueue_2();
		break;
	case 3:
		test_destroyqueue_3();
		break;
	case 4:
		test_destroyqueue_4();
		break;
	case 5:
		test_destroyqueue_5();
		break;
	default:
		abnormal_destroyqueue_case(caseIndex);
		break;
	}

	test_destroyqueue_down();
}

