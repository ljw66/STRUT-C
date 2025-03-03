void test_add_item_index_up(void);
void test_add_item_index_down(void);


void test_add_item_index_up(void){

	aunit_printf("\n##FUNCTION_START_add_item_index\n");
 }

void test_add_item_index_down(void){
	aunit_printf("\n##FUNCTION_END_add_item_index\n");
 }



void abnormal_add_item_index_case(int index);

void abnormal_add_item_index_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_add_item_index_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dic;
	int index;
	void *item;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"new_max_item"};
	unsigned int listLength_0=1;
	int valueList_1[]={MAX_INDEX};
	unsigned int listLength_1=1;
	Dictionary *valueList_2[]={(Dictionary *)dic_PTRTO};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_add_item_index_8,false,0\n");
	aunit_printf("#CASE_START_test_add_item_index_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			item=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			index=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			dic=(Dictionary *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = add_item_index(dic,index,item);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("add_item_index","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_add_item_index_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_add_item_index_up();

	switch(caseIndex){
	case 8:
		test_add_item_index_8();
		break;
	default:
		abnormal_add_item_index_case(caseIndex);
		break;
	}

	test_add_item_index_down();
}

