void test_removeEdge_up(void);
void test_removeEdge_down(void);


void test_removeEdge_up(void){

	aunit_printf("\n##FUNCTION_START_removeEdge\n");
 }

void test_removeEdge_down(void){
	aunit_printf("\n##FUNCTION_END_removeEdge\n");
 }



void abnormal_removeEdge_case(int index);

void abnormal_removeEdge_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_removeEdge_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct GraphRep *g;
	struct Edge e;


	//ֵ�������
	struct GraphRep *valueList_0[]={(struct GraphRep *)g_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
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
	abort_call_counter = 0;
	validV_call_counter = 0;

	aunit_printf("###TEST_TREE_test_removeEdge_6,false,0\n");
	aunit_printf("#CASE_START_test_removeEdge_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			g=(struct GraphRep *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			e.v=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			e.w=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(g_PTRTO[0]).nE=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(g_PTRTO[0]).nV=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		removeEdge(g,e);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("removeEdge","(g->edges)[0][1]",0,(g->edges)[0][1])
	TEST_ASSERT_EQUAL_INT("removeEdge","(g->edges)[1][0]",0,(g->edges)[1][0])
	TEST_ASSERT_EQUAL_INT("removeEdge","g->nE",0,g->nE)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("validV","validV_call_counter",validV_call_counter)

	aunit_printf("#CASE_END_test_removeEdge_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_removeEdge_up();

	switch(caseIndex){
	case 6:
		test_removeEdge_6();
		break;
	default:
		abnormal_removeEdge_case(caseIndex);
		break;
	}

	test_removeEdge_down();
}

