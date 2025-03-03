void test_insert_up(void);
void test_insert_down(void);


void test_insert_up(void){

	aunit_printf("\n##FUNCTION_START_insert\n");
 }

void test_insert_down(void){
	aunit_printf("\n##FUNCTION_END_insert\n");
 }



void abnormal_insert_case(int index);

void abnormal_insert_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insert_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int x;


	//值序列相关
	int valueList_0[]={20};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)0};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	exit_call_counter = 0;
	malloc_call_counter = 0;
	printf_call_counter = 0;
	empty_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insert_2,false,0\n");
	aunit_printf("#CASE_START_test_insert_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q.rear=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			q.front=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		insert(x);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("insert","q.rear->data",20,q.rear->data)
	TEST_ASSERT_EQUAL_INT("insert","q.front->data",20,q.front->data)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("empty","empty_call_counter",empty_call_counter)

	aunit_printf("#CASE_END_test_insert_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_insert_up();

	switch(caseIndex){
	case 2:
		test_insert_2();
		break;
	default:
		abnormal_insert_case(caseIndex);
		break;
	}

	test_insert_down();
}

