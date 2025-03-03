void test_List_list_up(void);
void test_List_list_down(void);


void test_List_list_up(void){

	aunit_printf("\n##FUNCTION_START_List_list\n");
 }

void test_List_list_down(void){
	aunit_printf("\n##FUNCTION_END_List_list\n");
 }



void abnormal_List_list_case(int index);

void abnormal_List_list_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_List_list_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;
	void *val;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	List_T returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)NULL};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)NULL};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_List_list_5,false,0\n");
	aunit_printf("#CASE_START_test_List_list_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = List_list(list,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_list","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("List_list","list->val","element1",list->val)
	TEST_ASSERT_EQUAL_LONG("List_list","list->next","NULL",list->next)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_List_list_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_List_list_up();

	switch(caseIndex){
	case 5:
		test_List_list_5();
		break;
	default:
		abnormal_List_list_case(caseIndex);
		break;
	}

	test_List_list_down();
}

