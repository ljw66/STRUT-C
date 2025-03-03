void test_insertEdge_up(void);
void test_insertEdge_down(void);


void test_insertEdge_up(void){

	aunit_printf("\n##FUNCTION_START_insertEdge\n");
 }

void test_insertEdge_down(void){
	aunit_printf("\n##FUNCTION_END_insertEdge\n");
 }



void abnormal_insertEdge_case(int index);

void abnormal_insertEdge_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_insertEdge_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct GraphRep *g;
	struct Edge e;


	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	validV_call_counter = 0;

	aunit_printf("###TEST_TREE_test_insertEdge_5,false,0\n");
	aunit_printf("#CASE_START_test_insertEdge_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			e.v=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			e.w=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(g_PTRTO[0]).nE=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(g_PTRTO[0]).nV=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(g_PTRTO[0]).edges[2][1]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(g_PTRTO[0]).edges[1][2]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		insertEdge(g,e);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("insertEdge","(g->edges)[1][2]",1,(g->edges)[1][2])
	TEST_ASSERT_EQUAL_INT("insertEdge","(g->edges)[2][1]",1,(g->edges)[2][1])
	TEST_ASSERT_EQUAL_INT("insertEdge","g->nE",4,g->nE)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("validV","validV_call_counter",validV_call_counter)

	aunit_printf("#CASE_END_test_insertEdge_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_insertEdge_up();

	switch(caseIndex){
	case 5:
		test_insertEdge_5();
		break;
	default:
		abnormal_insertEdge_case(caseIndex);
		break;
	}

	test_insertEdge_down();
}

