void test_List_toArray_up(void);
void test_List_toArray_down(void);


void test_List_toArray_up(void){

	aunit_printf("\n##FUNCTION_START_List_toArray\n");
 }

void test_List_toArray_down(void){
	aunit_printf("\n##FUNCTION_END_List_toArray\n");
 }



void abnormal_List_toArray_case(int index);

void abnormal_List_toArray_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_List_toArray_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void **returnValue = 0;

	//ֵ�������
	struct List_T *valueList_0[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	List_length_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_toArray_1,false,0\n");
	aunit_printf("#CASE_START_test_List_toArray_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			list=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = List_toArray(list);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_toArray","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("List_length","List_length_call_counter",List_length_call_counter)

	aunit_printf("#CASE_END_test_List_toArray_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_List_toArray_up();

	switch(caseIndex){
	case 1:
		test_List_toArray_1();
		break;
	default:
		abnormal_List_toArray_case(caseIndex);
		break;
	}

	test_List_toArray_down();
}

