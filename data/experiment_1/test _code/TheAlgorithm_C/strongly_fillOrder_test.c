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
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={-1};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
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
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).numVertices=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(stack_PTRTO[0]).top=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		fillOrder(vertex,graph,stack);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fillOrder","stack->top",0,stack->top)
	TEST_ASSERT_EQUAL_INT("fillOrder","(graph->visited)[0]",1,(graph->visited)[0])
	TEST_ASSERT_EQUAL_INT("fillOrder","(stack->arr)[0]",0,(stack->arr)[0])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_fillOrder_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_fillOrder_up();

	switch(caseIndex){
	case 1:
		test_fillOrder_1();
		break;
	default:
		abnormal_fillOrder_case(caseIndex);
		break;
	}

	test_fillOrder_down();
}

