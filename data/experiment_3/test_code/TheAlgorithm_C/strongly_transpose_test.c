void test_transpose_up(void);
void test_transpose_down(void);


void test_transpose_up(void){

	aunit_printf("\n##FUNCTION_START_transpose\n");
 }

void test_transpose_down(void){
	aunit_printf("\n##FUNCTION_END_transpose\n");
 }



void abnormal_transpose_case(int index);

void abnormal_transpose_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_transpose_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *g;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *returnValue = 0;

	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)g_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)0, 0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	createGraph_call_counter = 0;
	addEdge_call_counter = 0;

	aunit_printf("###TEST_TREE_test_transpose_3,false,0\n");
	aunit_printf("#CASE_START_test_transpose_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			g=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(g_PTRTO[0]).numVertices=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(g_PTRTO[0]).visited=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = transpose(g);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("transpose","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("createGraph","createGraph_call_counter",createGraph_call_counter)
	OB_INT_EXPR("addEdge","addEdge_call_counter",addEdge_call_counter)

	aunit_printf("#CASE_END_test_transpose_3\n");
}

void test_transpose_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *g;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *returnValue = 0;

	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)g_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	createGraph_call_counter = 0;
	addEdge_call_counter = 0;

	aunit_printf("###TEST_TREE_test_transpose_4,false,0\n");
	aunit_printf("#CASE_START_test_transpose_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			g=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(g_PTRTO[0]).numVertices=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = transpose(g);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("transpose","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("createGraph","createGraph_call_counter",createGraph_call_counter)
	OB_INT_EXPR("addEdge","addEdge_call_counter",addEdge_call_counter)

	aunit_printf("#CASE_END_test_transpose_4\n");
}

void test_transpose_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *g;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *returnValue = 0;

	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)g_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)0, 0, 0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	createGraph_call_counter = 0;
	addEdge_call_counter = 0;

	aunit_printf("###TEST_TREE_test_transpose_5,false,0\n");
	aunit_printf("#CASE_START_test_transpose_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			g=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(g_PTRTO[0]).numVertices=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(g_PTRTO[0]).visited=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = transpose(g);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("transpose","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("createGraph","createGraph_call_counter",createGraph_call_counter)
	OB_INT_EXPR("addEdge","addEdge_call_counter",addEdge_call_counter)

	aunit_printf("#CASE_END_test_transpose_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_transpose_up();

	switch(caseIndex){
	case 3:
		test_transpose_3();
		break;
	case 4:
		test_transpose_4();
		break;
	case 5:
		test_transpose_5();
		break;
	default:
		abnormal_transpose_case(caseIndex);
		break;
	}

	test_transpose_down();
}

