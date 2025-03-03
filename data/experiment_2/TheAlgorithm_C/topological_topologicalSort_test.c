void test_topologicalSort_up(void);
void test_topologicalSort_down(void);


void test_topologicalSort_up(void){

	aunit_printf("\n##FUNCTION_START_topologicalSort\n");
 }

void test_topologicalSort_down(void){
	aunit_printf("\n##FUNCTION_END_topologicalSort\n");
 }



void abnormal_topologicalSort_case(int index);

void abnormal_topologicalSort_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_topologicalSort_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	struct node **valueList_1[]={(struct node * *)0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	topologicalSortHelper_call_counter = 0;
	createStack_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_topologicalSort_1,false,0\n");
	aunit_printf("#CASE_START_test_topologicalSort_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).adjLists=(struct node * *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).numVertices=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).visited=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		topologicalSort(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("topologicalSortHelper","topologicalSortHelper_call_counter",topologicalSortHelper_call_counter)
	OB_INT_EXPR("createStack","createStack_call_counter",createStack_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_topologicalSort_1\n");
}

void test_topologicalSort_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	topologicalSortHelper_call_counter = 0;
	createStack_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_topologicalSort_2,false,0\n");
	aunit_printf("#CASE_START_test_topologicalSort_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).numVertices=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).adjLists[0]=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		topologicalSort(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("topologicalSortHelper","topologicalSortHelper_call_counter",topologicalSortHelper_call_counter)
	OB_INT_EXPR("createStack","createStack_call_counter",createStack_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_topologicalSort_2\n");
}

void test_topologicalSort_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)0};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)0};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	topologicalSortHelper_call_counter = 0;
	createStack_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_topologicalSort_3,false,0\n");
	aunit_printf("#CASE_START_test_topologicalSort_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).numVertices=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(graph_PTRTO[0]).adjLists[0]=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(graph_PTRTO[0]).adjLists[1]=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		topologicalSort(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("topologicalSortHelper","topologicalSortHelper_call_counter",topologicalSortHelper_call_counter)
	OB_INT_EXPR("createStack","createStack_call_counter",createStack_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_topologicalSort_3\n");
}

void test_topologicalSort_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)0};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)0};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)0};
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
	pop_call_counter = 0;
	topologicalSortHelper_call_counter = 0;
	createStack_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_topologicalSort_4,false,0\n");
	aunit_printf("#CASE_START_test_topologicalSort_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			graph_PTRTO_0_visited_PTRTO[2]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(graph_PTRTO[0]).numVertices=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(graph_PTRTO[0]).adjLists[0]=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(graph_PTRTO[0]).adjLists[1]=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(graph_PTRTO[0]).adjLists[2]=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		topologicalSort(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("topologicalSortHelper","topologicalSortHelper_call_counter",topologicalSortHelper_call_counter)
	OB_INT_EXPR("createStack","createStack_call_counter",createStack_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_topologicalSort_4\n");
}

void test_topologicalSort_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	topologicalSortHelper_call_counter = 0;
	createStack_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_topologicalSort_5,false,0\n");
	aunit_printf("#CASE_START_test_topologicalSort_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).numVertices=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		topologicalSort(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("topologicalSortHelper","topologicalSortHelper_call_counter",topologicalSortHelper_call_counter)
	OB_INT_EXPR("createStack","createStack_call_counter",createStack_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_topologicalSort_5\n");
}

void test_topologicalSort_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	topologicalSortHelper_call_counter = 0;
	createStack_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_topologicalSort_6,false,0\n");
	aunit_printf("#CASE_START_test_topologicalSort_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).numVertices=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		topologicalSort(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("topologicalSortHelper","topologicalSortHelper_call_counter",topologicalSortHelper_call_counter)
	OB_INT_EXPR("createStack","createStack_call_counter",createStack_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_topologicalSort_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_topologicalSort_up();

	switch(caseIndex){
	case 1:
		test_topologicalSort_1();
		break;
	case 2:
		test_topologicalSort_2();
		break;
	case 3:
		test_topologicalSort_3();
		break;
	case 4:
		test_topologicalSort_4();
		break;
	case 5:
		test_topologicalSort_5();
		break;
	case 6:
		test_topologicalSort_6();
		break;
	default:
		abnormal_topologicalSort_case(caseIndex);
		break;
	}

	test_topologicalSort_down();
}

