void test_kson_by_path_up(void);
void test_kson_by_path_down(void);


void test_kson_by_path_up(void){

	aunit_printf("\n##FUNCTION_START_kson_by_path\n");
 }

void test_kson_by_path_down(void){
	aunit_printf("\n##FUNCTION_END_kson_by_path\n");
 }



void abnormal_kson_by_path_case(int index);

void abnormal_kson_by_path_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kson_by_path_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_node_t *p;
	int depth;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const kson_node_t *returnValue = 0;

	//ֵ�������
	kson_node_t *valueList_0[]={(kson_node_t *)p_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	kson_by_index_call_counter = 0;
	kson_by_key_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_by_path_7,false,0\n");
	aunit_printf("#CASE_START_test_kson_by_path_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(kson_node_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			depth=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kson_by_path(p,depth);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("kson_by_path","returnValue",4,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kson_by_index","kson_by_index_call_counter",kson_by_index_call_counter)
	OB_INT_EXPR("kson_by_key","kson_by_key_call_counter",kson_by_key_call_counter)

	aunit_printf("#CASE_END_test_kson_by_path_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_kson_by_path_up();

	switch(caseIndex){
	case 7:
		test_kson_by_path_7();
		break;
	default:
		abnormal_kson_by_path_case(caseIndex);
		break;
	}

	test_kson_by_path_down();
}

