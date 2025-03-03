void test_KruskalMST_up(void);
void test_KruskalMST_down(void);


void test_KruskalMST_up(void){

	aunit_printf("\n##FUNCTION_START_KruskalMST\n");
 }

void test_KruskalMST_down(void){
	aunit_printf("\n##FUNCTION_END_KruskalMST\n");
 }



void abnormal_KruskalMST_case(int index);

void abnormal_KruskalMST_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_KruskalMST_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	struct Edge *valueList_1[]={(struct Edge *)NULL};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
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
	malloc_call_counter = 0;
	qsort_call_counter = 0;
	myComp_call_counter = 0;
	find_call_counter = 0;
	Union_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_KruskalMST_1,false,0\n");
	aunit_printf("#CASE_START_test_KruskalMST_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).edge=(struct Edge *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).E=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).V=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		KruskalMST(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("qsort","qsort_call_counter",qsort_call_counter)
	OB_INT_EXPR("myComp","myComp_call_counter",myComp_call_counter)
	OB_INT_EXPR("find","find_call_counter",find_call_counter)
	OB_INT_EXPR("Union","Union_call_counter",Union_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_KruskalMST_1\n");
}

void test_KruskalMST_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	struct Edge *valueList_1[]={(struct Edge *)NULL};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
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
	malloc_call_counter = 0;
	qsort_call_counter = 0;
	myComp_call_counter = 0;
	find_call_counter = 0;
	Union_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_KruskalMST_2,false,0\n");
	aunit_printf("#CASE_START_test_KruskalMST_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).edge=(struct Edge *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).E=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).V=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		KruskalMST(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("qsort","qsort_call_counter",qsort_call_counter)
	OB_INT_EXPR("myComp","myComp_call_counter",myComp_call_counter)
	OB_INT_EXPR("find","find_call_counter",find_call_counter)
	OB_INT_EXPR("Union","Union_call_counter",Union_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_KruskalMST_2\n");
}

void test_KruskalMST_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	struct Edge *valueList_4[]={(struct Edge *)&struct_Edge1};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	qsort_call_counter = 0;
	myComp_call_counter = 0;
	find_call_counter = 0;
	Union_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_KruskalMST_3,false,0\n");
	aunit_printf("#CASE_START_test_KruskalMST_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_Edge1.weight=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_Edge1.src=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_Edge1.dest=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(graph_PTRTO[0]).edge=(struct Edge *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(graph_PTRTO[0]).E=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(graph_PTRTO[0]).V=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		KruskalMST(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("qsort","qsort_call_counter",qsort_call_counter)
	OB_INT_EXPR("myComp","myComp_call_counter",myComp_call_counter)
	OB_INT_EXPR("find","find_call_counter",find_call_counter)
	OB_INT_EXPR("Union","Union_call_counter",Union_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_KruskalMST_3\n");
}

void test_KruskalMST_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	struct Edge *valueList_1[]={(struct Edge *)&struct_EdgeList};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int valueList_3[]={4};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	qsort_call_counter = 0;
	myComp_call_counter = 0;
	find_call_counter = 0;
	Union_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_KruskalMST_4,false,0\n");
	aunit_printf("#CASE_START_test_KruskalMST_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).edge=(struct Edge *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).E=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).V=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		KruskalMST(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("qsort","qsort_call_counter",qsort_call_counter)
	OB_INT_EXPR("myComp","myComp_call_counter",myComp_call_counter)
	OB_INT_EXPR("find","find_call_counter",find_call_counter)
	OB_INT_EXPR("Union","Union_call_counter",Union_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_KruskalMST_4\n");
}

void test_KruskalMST_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Graph *graph;


	//ֵ�������
	struct Graph *valueList_0[]={(struct Graph *)graph_PTRTO};
	unsigned int listLength_0=1;
	struct Edge *valueList_1[]={(struct Edge *)&struct_EdgeList};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	qsort_call_counter = 0;
	myComp_call_counter = 0;
	find_call_counter = 0;
	Union_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_KruskalMST_5,false,0\n");
	aunit_printf("#CASE_START_test_KruskalMST_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			graph=(struct Graph *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(graph_PTRTO[0]).edge=(struct Edge *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(graph_PTRTO[0]).E=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(graph_PTRTO[0]).V=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		KruskalMST(graph);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("qsort","qsort_call_counter",qsort_call_counter)
	OB_INT_EXPR("myComp","myComp_call_counter",myComp_call_counter)
	OB_INT_EXPR("find","find_call_counter",find_call_counter)
	OB_INT_EXPR("Union","Union_call_counter",Union_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_KruskalMST_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_KruskalMST_up();

	switch(caseIndex){
	case 1:
		test_KruskalMST_1();
		break;
	case 2:
		test_KruskalMST_2();
		break;
	case 3:
		test_KruskalMST_3();
		break;
	case 4:
		test_KruskalMST_4();
		break;
	case 5:
		test_KruskalMST_5();
		break;
	default:
		abnormal_KruskalMST_case(caseIndex);
		break;
	}

	test_KruskalMST_down();
}

