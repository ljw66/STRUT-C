void test_List_append_up(void);
void test_List_append_down(void);


void test_List_append_up(void){

	aunit_printf("\n##FUNCTION_START_List_append\n");
 }

void test_List_append_down(void){
	aunit_printf("\n##FUNCTION_END_List_append\n");
 }



void abnormal_List_append_case(int index);

void abnormal_List_append_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_List_append_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;
	struct List_T *tail;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	List_T returnValue = 0;

	//ֵ�������
	struct List_T *valueList_0[]={(struct List_T *)tail_PTRTO};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)list_PTRTO};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_List_append_7,false,0\n");
	aunit_printf("#CASE_START_test_List_append_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tail=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = List_append(list,tail);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_append","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_List_append_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_List_append_up();

	switch(caseIndex){
	case 7:
		test_List_append_7();
		break;
	default:
		abnormal_List_append_case(caseIndex);
		break;
	}

	test_List_append_down();
}

