void test_kn_parse_up(void);
void test_kn_parse_down(void);


void test_kn_parse_up(void){

	aunit_printf("\n##FUNCTION_START_kn_parse\n");
 }

void test_kn_parse_down(void){
	aunit_printf("\n##FUNCTION_END_kn_parse\n");
 }



void abnormal_kn_parse_case(int index);

void abnormal_kn_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kn_parse_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *nhx;
	int *_n;
	int *_error;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	knhx1_t *returnValue = 0;

	//ֵ�������
	int *valueList_0[]={(int *)_error_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"(A,B)"};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)_n_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	add_node_call_counter = 0;
	isgraph_call_counter = 0;
	calloc_call_counter = 0;
	realloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kn_parse_8,false,0\n");
	aunit_printf("#CASE_START_test_kn_parse_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_error=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nhx=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			_n=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_n_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			_error_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = kn_parse(nhx,_n,_error);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("kn_parse","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("kn_parse","_error[0]",0,_error[0])
	TEST_ASSERT_EQUAL_INT("kn_parse","_n[0]",2,_n[0])
	TEST_ASSERT_EQUAL_INT("kn_parse","returnValue->parent",-1,returnValue->parent)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("add_node","add_node_call_counter",add_node_call_counter)
	OB_INT_EXPR("isgraph","isgraph_call_counter",isgraph_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_kn_parse_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_kn_parse_up();

	switch(caseIndex){
	case 8:
		test_kn_parse_8();
		break;
	default:
		abnormal_kn_parse_case(caseIndex);
		break;
	}

	test_kn_parse_down();
}

