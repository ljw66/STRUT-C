void test_down_heapify_up(void);
void test_down_heapify_down(void);


void test_down_heapify_up(void){

	aunit_printf("\n##FUNCTION_START_down_heapify\n");
 }

void test_down_heapify_down(void){
	aunit_printf("\n##FUNCTION_END_down_heapify\n");
 }



void abnormal_down_heapify_case(int index);

void abnormal_down_heapify_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_down_heapify_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *heap;
	int index;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	Heap *valueList_1[]={(Heap *)heap_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={30};
	unsigned int listLength_2=1;
	int valueList_3[]={20};
	unsigned int listLength_3=1;
	int valueList_4[]={25};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	int valueList_6[]={15};
	unsigned int listLength_6=1;
	int valueList_7[]={5};
	unsigned int listLength_7=1;
	int valueList_8[]={6};
	unsigned int listLength_8=1;
	int valueList_9[]={6};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)heap_PTRTO_0_p_PTRTO};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_down_heapify_9,false,0\n");
	aunit_printf("#CASE_START_test_down_heapify_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			heap=(Heap *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			heap_PTRTO_0_p_PTRTO[5]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			heap_PTRTO_0_p_PTRTO[3]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			heap_PTRTO_0_p_PTRTO[4]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			heap_PTRTO_0_p_PTRTO[1]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			heap_PTRTO_0_p_PTRTO[2]=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			heap_PTRTO_0_p_PTRTO[0]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(heap_PTRTO[0]).size=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(heap_PTRTO[0]).count=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(heap_PTRTO[0]).p=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		down_heapify(heap,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("down_heapify","heap->p","[5, 10, 15, 20, 25, 30]",heap->p)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_down_heapify_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_down_heapify_up();

	switch(caseIndex){
	case 9:
		test_down_heapify_9();
		break;
	default:
		abnormal_down_heapify_case(caseIndex);
		break;
	}

	test_down_heapify_down();
}

