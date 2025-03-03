void test_Dijkstra_up(void);
void test_Dijkstra_down(void);


void test_Dijkstra_up(void){

	aunit_printf("\n##FUNCTION_START_Dijkstra\n");
 }

void test_Dijkstra_down(void){
	aunit_printf("\n##FUNCTION_END_Dijkstra\n");
 }



void abnormal_Dijkstra_case(int index);

void abnormal_Dijkstra_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Dijkstra_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int src;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	minDistance_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Dijkstra_1,false,0\n");
	aunit_printf("#CASE_START_test_Dijkstra_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).vertexNum=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		Dijkstra(graph,src);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("minDistance","minDistance_call_counter",minDistance_call_counter)

	aunit_printf("#CASE_END_test_Dijkstra_1\n");
}

void test_Dijkstra_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int src;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	minDistance_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Dijkstra_2,false,0\n");
	aunit_printf("#CASE_START_test_Dijkstra_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).vertexNum=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		Dijkstra(graph,src);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("minDistance","minDistance_call_counter",minDistance_call_counter)

	aunit_printf("#CASE_END_test_Dijkstra_2\n");
}

void test_Dijkstra_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int src;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	minDistance_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Dijkstra_3,false,0\n");
	aunit_printf("#CASE_START_test_Dijkstra_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).vertexNum=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		Dijkstra(graph,src);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("minDistance","minDistance_call_counter",minDistance_call_counter)

	aunit_printf("#CASE_END_test_Dijkstra_3\n");
}

void test_Dijkstra_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int src;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	minDistance_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Dijkstra_4,false,0\n");
	aunit_printf("#CASE_START_test_Dijkstra_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).vertexNum=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		Dijkstra(graph,src);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("minDistance","minDistance_call_counter",minDistance_call_counter)

	aunit_printf("#CASE_END_test_Dijkstra_4\n");
}

void test_Dijkstra_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int src;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	minDistance_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Dijkstra_5,false,0\n");
	aunit_printf("#CASE_START_test_Dijkstra_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).vertexNum=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		Dijkstra(graph,src);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("minDistance","minDistance_call_counter",minDistance_call_counter)

	aunit_printf("#CASE_END_test_Dijkstra_5\n");
}

void test_Dijkstra_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int src;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;
	minDistance_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Dijkstra_6,false,0\n");
	aunit_printf("#CASE_START_test_Dijkstra_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).vertexNum=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		Dijkstra(graph,src);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)
	OB_INT_EXPR("minDistance","minDistance_call_counter",minDistance_call_counter)

	aunit_printf("#CASE_END_test_Dijkstra_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_Dijkstra_up();

	switch(caseIndex){
	case 1:
		test_Dijkstra_1();
		break;
	case 2:
		test_Dijkstra_2();
		break;
	case 3:
		test_Dijkstra_3();
		break;
	case 4:
		test_Dijkstra_4();
		break;
	case 5:
		test_Dijkstra_5();
		break;
	case 6:
		test_Dijkstra_6();
		break;
	default:
		abnormal_Dijkstra_case(caseIndex);
		break;
	}

	test_Dijkstra_down();
}

