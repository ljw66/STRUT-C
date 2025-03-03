void test_List_length_up(void);
void test_List_length_down(void);


void test_List_length_up(void){

	aunit_printf("\n##FUNCTION_START_List_length\n");
 }

void test_List_length_down(void){
	aunit_printf("\n##FUNCTION_END_List_length\n");
 }



void abnormal_List_length_case(int index);

void abnormal_List_length_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_List_length_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct List_T *valueList_0[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)42};
	unsigned int listLength_1=1;
	struct List_T *valueList_2[]={(struct List_T *)NULL};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_List_length_2,false,0\n");
	aunit_printf("#CASE_START_test_List_length_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			list=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(list_PTRTO[0]).val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).next=(struct List_T *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = List_length(list);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("List_length","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_List_length_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_List_length_up();

	switch(caseIndex){
	case 2:
		test_List_length_2();
		break;
	default:
		abnormal_List_length_case(caseIndex);
		break;
	}

	test_List_length_down();
}

