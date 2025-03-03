void test_FloydWarshall_up(void);
void test_FloydWarshall_down(void);


void test_FloydWarshall_up(void){

	aunit_printf("\n##FUNCTION_START_FloydWarshall\n");
 }

void test_FloydWarshall_down(void){
	aunit_printf("\n##FUNCTION_END_FloydWarshall\n");
 }



void abnormal_FloydWarshall_case(int index);

void abnormal_FloydWarshall_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_FloydWarshall_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Graph *graph;


	//值序列相关
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int **valueList_1[]={(int * *)0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_FloydWarshall_1,false,0\n");
	aunit_printf("#CASE_START_test_FloydWarshall_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).edges=(int * *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).vertexNum=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		FloydWarshall(graph);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_FloydWarshall_1\n");
}

void test_FloydWarshall_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Graph *graph;


	//值序列相关
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_FloydWarshall_2,false,0\n");
	aunit_printf("#CASE_START_test_FloydWarshall_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).vertexNum=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		FloydWarshall(graph);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_FloydWarshall_2\n");
}

void test_FloydWarshall_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Graph *graph;


	//值序列相关
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_FloydWarshall_3,false,0\n");
	aunit_printf("#CASE_START_test_FloydWarshall_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).vertexNum=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		FloydWarshall(graph);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_FloydWarshall_3\n");
}

void test_FloydWarshall_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Graph *graph;


	//值序列相关
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_FloydWarshall_4,false,0\n");
	aunit_printf("#CASE_START_test_FloydWarshall_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).vertexNum=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		FloydWarshall(graph);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_FloydWarshall_4\n");
}

void test_FloydWarshall_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct Graph *graph;


	//值序列相关
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_FloydWarshall_5,false,0\n");
	aunit_printf("#CASE_START_test_FloydWarshall_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).vertexNum=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		FloydWarshall(graph);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_FloydWarshall_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_FloydWarshall_up();

	switch(caseIndex){
	case 1:
		test_FloydWarshall_1();
		break;
	case 2:
		test_FloydWarshall_2();
		break;
	case 3:
		test_FloydWarshall_3();
		break;
	case 4:
		test_FloydWarshall_4();
		break;
	case 5:
		test_FloydWarshall_5();
		break;
	default:
		abnormal_FloydWarshall_case(caseIndex);
		break;
	}

	test_FloydWarshall_down();
}

