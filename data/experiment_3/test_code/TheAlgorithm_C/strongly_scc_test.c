void test_scc_up(void);
void test_scc_down(void);


void test_scc_up(void){

	aunit_printf("\n##FUNCTION_START_scc\n");
 }

void test_scc_down(void){
	aunit_printf("\n##FUNCTION_END_scc\n");
 }



void abnormal_scc_case(int index);

void abnormal_scc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_scc_2(void){
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
	case_id=2;
	//��ʼ����׮�������ü�����
	dfs_call_counter = 0;
	pop_call_counter = 0;
	fillOrder_call_counter = 0;
	createStack_call_counter = 0;
	transpose_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_scc_2,false,0\n");
	aunit_printf("#CASE_START_test_scc_2\n");
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
		scc(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("dfs","dfs_call_counter",dfs_call_counter)
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("fillOrder","fillOrder_call_counter",fillOrder_call_counter)
	OB_INT_EXPR("createStack","createStack_call_counter",createStack_call_counter)
	OB_INT_EXPR("transpose","transpose_call_counter",transpose_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_scc_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_scc_up();

	switch(caseIndex){
	case 2:
		test_scc_2();
		break;
	default:
		abnormal_scc_case(caseIndex);
		break;
	}

	test_scc_down();
}

