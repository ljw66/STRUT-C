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

void test_FloydWarshall_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	print_call_counter = 0;

	aunit_printf("###TEST_TREE_test_FloydWarshall_7,false,0\n");
	aunit_printf("#CASE_START_test_FloydWarshall_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).vertexNum=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		FloydWarshall(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print","print_call_counter",print_call_counter)

	aunit_printf("#CASE_END_test_FloydWarshall_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_FloydWarshall_up();

	switch(caseIndex){
	case 7:
		test_FloydWarshall_7();
		break;
	default:
		abnormal_FloydWarshall_case(caseIndex);
		break;
	}

	test_FloydWarshall_down();
}

