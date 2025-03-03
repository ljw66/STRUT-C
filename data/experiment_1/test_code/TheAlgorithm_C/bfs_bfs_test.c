void test_bfs_up(void);
void test_bfs_down(void);


void test_bfs_up(void){

	aunit_printf("\n##FUNCTION_START_bfs\n");
 }

void test_bfs_down(void){
	aunit_printf("\n##FUNCTION_END_bfs\n");
 }



void abnormal_bfs_case(int index);

void abnormal_bfs_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bfs_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int startVertex;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	enqueue_call_counter = 0;
	dequeue_call_counter = 0;
	isEmpty_call_counter = 0;
	pollQueue_call_counter = 0;
	createQueue_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bfs_6,false,0\n");
	aunit_printf("#CASE_START_test_bfs_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			startVertex=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			graph_PTRTO_0_visited_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			graph_PTRTO_0_visited_PTRTO[1]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(graph_PTRTO[0]).numVertices=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		bfs(graph,startVertex);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("enqueue","enqueue_call_counter",enqueue_call_counter)
	OB_INT_EXPR("dequeue","dequeue_call_counter",dequeue_call_counter)
	OB_INT_EXPR("isEmpty","isEmpty_call_counter",isEmpty_call_counter)
	OB_INT_EXPR("pollQueue","pollQueue_call_counter",pollQueue_call_counter)
	OB_INT_EXPR("createQueue","createQueue_call_counter",createQueue_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_bfs_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bfs_up();

	switch(caseIndex){
	case 6:
		test_bfs_6();
		break;
	default:
		abnormal_bfs_case(caseIndex);
		break;
	}

	test_bfs_down();
}

