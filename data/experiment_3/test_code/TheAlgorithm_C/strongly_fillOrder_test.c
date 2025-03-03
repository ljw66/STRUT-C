void test_fillOrder_up(void);
void test_fillOrder_down(void);


void test_fillOrder_up(void){

	aunit_printf("\n##FUNCTION_START_fillOrder\n");
 }

void test_fillOrder_down(void){
	aunit_printf("\n##FUNCTION_END_fillOrder\n");
 }



void abnormal_fillOrder_case(int index);

void abnormal_fillOrder_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fillOrder_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int vertex;
	struct Graph *graph;
	struct Stack *stack;


	//ֵ�������
	struct Stack *valueList_0[]={(struct Stack *)stack_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct Graph *valueList_2[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={-1};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fillOrder_1,false,0\n");
	aunit_printf("#CASE_START_test_fillOrder_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct Stack *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vertex=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph=(struct Graph *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(graph_PTRTO[0]).numVertices=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(stack_PTRTO[0]).top=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		fillOrder(vertex,graph,stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fillOrder","stack->top",0,stack->top)
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[0]",1,(graph->visited)[0])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_fillOrder_1\n");
}

void test_fillOrder_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int vertex;
	struct Graph *graph;
	struct Stack *stack;


	//ֵ�������
	struct Stack *valueList_0[]={(struct Stack *)stack_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct Graph *valueList_2[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	int valueList_6[]={-1};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fillOrder_2,false,0\n");
	aunit_printf("#CASE_START_test_fillOrder_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct Stack *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vertex=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph=(struct Graph *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(graph_PTRTO[0]).numVertices=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(stack_PTRTO[0]).top=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		fillOrder(vertex,graph,stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fillOrder","stack->top",1,stack->top)
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[0]",1,(graph->visited)[0])
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[1]",1,(graph->visited)[1])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_fillOrder_2\n");
}

void test_fillOrder_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int vertex;
	struct Graph *graph;
	struct Stack *stack;


	//ֵ�������
	struct Stack *valueList_0[]={(struct Stack *)stack_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct Graph *valueList_2[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	int valueList_6[]={-1};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fillOrder_3,false,0\n");
	aunit_printf("#CASE_START_test_fillOrder_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct Stack *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vertex=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph=(struct Graph *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(graph_PTRTO[0]).numVertices=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(stack_PTRTO[0]).top=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		fillOrder(vertex,graph,stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fillOrder","stack->top",0,stack->top)
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[0]",1,(graph->visited)[0])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_fillOrder_3\n");
}

void test_fillOrder_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int vertex;
	struct Graph *graph;
	struct Stack *stack;


	//ֵ�������
	struct Stack *valueList_0[]={(struct Stack *)stack_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct Graph *valueList_2[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	int valueList_7[]={-1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fillOrder_4,false,0\n");
	aunit_printf("#CASE_START_test_fillOrder_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct Stack *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vertex=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph=(struct Graph *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			graph_PTRTO_0_visited_PTRTO[2]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(graph_PTRTO[0]).numVertices=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(stack_PTRTO[0]).top=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		fillOrder(vertex,graph,stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fillOrder","stack->top",2,stack->top)
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[2]",1,(graph->visited)[2])
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[0]",1,(graph->visited)[0])
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[1]",1,(graph->visited)[1])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_fillOrder_4\n");
}

void test_fillOrder_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int vertex;
	struct Graph *graph;
	struct Stack *stack;


	//ֵ�������
	struct Stack *valueList_0[]={(struct Stack *)stack_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct Graph *valueList_2[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	int valueList_7[]={-1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fillOrder_5,false,0\n");
	aunit_printf("#CASE_START_test_fillOrder_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stack=(struct Stack *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vertex=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph=(struct Graph *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			graph_PTRTO_0_visited_PTRTO[2]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(graph_PTRTO[0]).numVertices=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(stack_PTRTO[0]).top=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		fillOrder(vertex,graph,stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fillOrder","stack->top",-1,stack->top)
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[2]",1,(graph->visited)[2])
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[0]",1,(graph->visited)[0])
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[1]",1,(graph->visited)[1])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_fillOrder_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_fillOrder_up();

	switch(caseIndex){
	case 1:
		test_fillOrder_1();
		break;
	case 2:
		test_fillOrder_2();
		break;
	case 3:
		test_fillOrder_3();
		break;
	case 4:
		test_fillOrder_4();
		break;
	case 5:
		test_fillOrder_5();
		break;
	default:
		abnormal_fillOrder_case(caseIndex);
		break;
	}

	test_fillOrder_down();
}

