void test_bstrListDestroy_up(void);
void test_bstrListDestroy_down(void);


void test_bstrListDestroy_up(void){

	aunit_printf("\n##FUNCTION_START_bstrListDestroy\n");
 }

void test_bstrListDestroy_down(void){
	aunit_printf("\n##FUNCTION_END_bstrListDestroy\n");
 }



void abnormal_bstrListDestroy_case(int index);

void abnormal_bstrListDestroy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bstrListDestroy_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bstrList *sl;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct bstrList *valueList_0[]={(struct bstrList *)sl_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	bstring *valueList_3[]={(bstring *)non-null pointer};
	unsigned int listLength_3=1;
	struct tagbstring *valueList_4[]={(struct tagbstring *)5};
	unsigned int listLength_4=1;
	struct tagbstring *valueList_5[]={(struct tagbstring *)non-null pointer};
	unsigned int listLength_5=1;
	struct tagbstring *valueList_6[]={(struct tagbstring *)10};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bstrListDestroy_6,false,0\n");
	aunit_printf("#CASE_START_test_bstrListDestroy_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sl=(struct bstrList *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(sl_PTRTO[0]).mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(sl_PTRTO[0]).qty=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sl_PTRTO[0]).entry=(bstring *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(sl_PTRTO[0]).entry[0].slen=(struct tagbstring *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sl_PTRTO[0]).entry[0].data=(struct tagbstring *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sl_PTRTO[0]).entry[0].mlen=(struct tagbstring *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = bstrListDestroy(sl);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bstrListDestroy","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bstrListDestroy_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bstrListDestroy_up();

	switch(caseIndex){
	case 6:
		test_bstrListDestroy_6();
		break;
	default:
		abnormal_bstrListDestroy_case(caseIndex);
		break;
	}

	test_bstrListDestroy_down();
}

