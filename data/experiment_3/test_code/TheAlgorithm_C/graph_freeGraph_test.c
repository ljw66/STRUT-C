void test_freeGraph_up(void);
void test_freeGraph_down(void);


void test_freeGraph_up(void){

	aunit_printf("\n##FUNCTION_START_freeGraph\n");
 }

void test_freeGraph_down(void){
	aunit_printf("\n##FUNCTION_END_freeGraph\n");
 }



void abnormal_freeGraph_case(int index);

void abnormal_freeGraph_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_freeGraph_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct GraphRep *g;


	//ֵ�������
	struct GraphRep *valueList_0[]={(struct GraphRep *)g_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int **valueList_3[]={(int * *)non-null};
	unsigned int listLength_3=1;
	int *valueList_4[]={(int *)non-null};
	unsigned int listLength_4=1;
	int *valueList_5[]={(int *)non-null};
	unsigned int listLength_5=1;
	int *valueList_6[]={(int *)0};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)non-null};
	unsigned int listLength_7=1;
	int *valueList_8[]={(int *)non-null};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freeGraph_5,false,0\n");
	aunit_printf("#CASE_START_test_freeGraph_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			g=(struct GraphRep *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(g_PTRTO[0]).nE=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(g_PTRTO[0]).nV=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(g_PTRTO[0]).edges=(int * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(g_PTRTO[0]).edges[0]=(int *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(g_PTRTO[0]).edges[2]=(int *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(g_PTRTO[0]).edges[1]=(int *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(g_PTRTO[0]).edges[4]=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(g_PTRTO[0]).edges[3]=(int *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		freeGraph(g);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_freeGraph_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_freeGraph_up();

	switch(caseIndex){
	case 5:
		test_freeGraph_5();
		break;
	default:
		abnormal_freeGraph_case(caseIndex);
		break;
	}

	test_freeGraph_down();
}

