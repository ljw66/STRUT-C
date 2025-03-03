void test_dfs_up(void);
void test_dfs_down(void);


void test_dfs_up(void){

	aunit_printf("\n##FUNCTION_START_dfs\n");
 }

void test_dfs_down(void){
	aunit_printf("\n##FUNCTION_END_dfs\n");
 }



void abnormal_dfs_case(int index);

void abnormal_dfs_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_dfs_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int vertex;


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
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_dfs_4,false,0\n");
	aunit_printf("#CASE_START_test_dfs_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vertex=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).numVertices=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		dfs(graph,vertex);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_dfs_4\n");
}

void test_dfs_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;
	int vertex;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct Graph *valueList_1[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={4};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_dfs_5,false,0\n");
	aunit_printf("#CASE_START_test_dfs_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vertex=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			graph=(struct Graph *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).numVertices=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		dfs(graph,vertex);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_dfs_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_dfs_up();

	switch(caseIndex){
	case 4:
		test_dfs_4();
		break;
	case 5:
		test_dfs_5();
		break;
	default:
		abnormal_dfs_case(caseIndex);
		break;
	}

	test_dfs_down();
}

