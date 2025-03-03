void test_segment_tree_query_up(void);
void test_segment_tree_query_down(void);


void test_segment_tree_query_up(void){

	aunit_printf("\n##FUNCTION_START_segment_tree_query\n");
 }

void test_segment_tree_query_down(void){
	aunit_printf("\n##FUNCTION_END_segment_tree_query\n");
 }



void abnormal_segment_tree_query_case(int index);

void abnormal_segment_tree_query_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_segment_tree_query_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	segment_tree *tree;
	long long int l;
	long long int r;
	void *res;


	//ֵ�������
	long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	segment_tree *valueList_1[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_1=1;
	long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)0};
	unsigned int listLength_3=1;
	void *valueList_4[]={(void *)0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	void (*valueList_7[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))0};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_segment_tree_query_1,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_query_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			r=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tree=(segment_tree *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).root=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).identity=(void *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(tree_PTRTO[0]).length=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		segment_tree_query(tree,l,r,res);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_segment_tree_query_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_segment_tree_query_up();

	switch(caseIndex){
	case 1:
		test_segment_tree_query_1();
		break;
	default:
		abnormal_segment_tree_query_case(caseIndex);
		break;
	}

	test_segment_tree_query_down();
}

