void test_bubbleSortCArray_up(void);
void test_bubbleSortCArray_down(void);


void test_bubbleSortCArray_up(void){

	aunit_printf("\n##FUNCTION_START_bubbleSortCArray\n");
 }

void test_bubbleSortCArray_down(void){
	aunit_printf("\n##FUNCTION_END_bubbleSortCArray\n");
 }



void abnormal_bubbleSortCArray_case(int index);

void abnormal_bubbleSortCArray_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bubbleSortCArray_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	CArray *array;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	CArray *valueList_0[]={(CArray *)array_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int *valueList_3[]={(int *)array_PTRTO_0_array_PTRTO};
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
	swap_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bubbleSortCArray_2,false,0\n");
	aunit_printf("#CASE_START_test_bubbleSortCArray_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			array=(CArray *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			array_PTRTO_0_array_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(array_PTRTO[0]).size=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(array_PTRTO[0]).array=(int *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bubbleSortCArray(array);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bubbleSortCArray","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("swap","swap_call_counter",swap_call_counter)

	aunit_printf("#CASE_END_test_bubbleSortCArray_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_bubbleSortCArray_up();

	switch(caseIndex){
	case 2:
		test_bubbleSortCArray_2();
		break;
	default:
		abnormal_bubbleSortCArray_case(caseIndex);
		break;
	}

	test_bubbleSortCArray_down();
}

