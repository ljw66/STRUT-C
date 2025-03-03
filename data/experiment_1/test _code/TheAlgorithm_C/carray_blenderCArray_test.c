void test_blenderCArray_up(void);
void test_blenderCArray_down(void);


void test_blenderCArray_up(void){

	aunit_printf("\n##FUNCTION_START_blenderCArray\n");
 }

void test_blenderCArray_down(void){
	aunit_printf("\n##FUNCTION_END_blenderCArray\n");
 }



void abnormal_blenderCArray_case(int index);

void abnormal_blenderCArray_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_blenderCArray_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	CArray *array;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	CArray *valueList_0[]={(CArray *)array_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	rand_call_counter = 0;
	srand_call_counter = 0;
	swap_call_counter = 0;
	time_call_counter = 0;

	aunit_printf("###TEST_TREE_test_blenderCArray_2,false,0\n");
	aunit_printf("#CASE_START_test_blenderCArray_2\n");
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
		returnValue = blenderCArray(array);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("blenderCArray","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("rand","rand_call_counter",rand_call_counter)
	OB_INT_EXPR("srand","srand_call_counter",srand_call_counter)
	OB_INT_EXPR("swap","swap_call_counter",swap_call_counter)
	OB_INT_EXPR("time","time_call_counter",time_call_counter)

	aunit_printf("#CASE_END_test_blenderCArray_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_blenderCArray_up();

	switch(caseIndex){
	case 2:
		test_blenderCArray_2();
		break;
	default:
		abnormal_blenderCArray_case(caseIndex);
		break;
	}

	test_blenderCArray_down();
}

