void test_bJustifyMargin_up(void);
void test_bJustifyMargin_down(void);


void test_bJustifyMargin_up(void){

	aunit_printf("\n##FUNCTION_START_bJustifyMargin\n");
 }

void test_bJustifyMargin_down(void){
	aunit_printf("\n##FUNCTION_END_bJustifyMargin\n");
 }



void abnormal_bJustifyMargin_case(int index);

void abnormal_bJustifyMargin_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bJustifyMargin_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	int width;
	int space;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={32};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)0};
	unsigned int listLength_3=1;
	int valueList_4[]={5};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=13;
	//��ʼ����׮�������ü�����
	bconcat_call_counter = 0;
	bJustifyLeft_call_counter = 0;
	bsplit_call_counter = 0;
	bInsertChrs_call_counter = 0;
	bstrListDestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bJustifyMargin_13,false,0\n");
	aunit_printf("#CASE_START_test_bJustifyMargin_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			width=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			space=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bJustifyMargin(b,width,space);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bJustifyMargin","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)
	OB_INT_EXPR("bJustifyLeft","bJustifyLeft_call_counter",bJustifyLeft_call_counter)
	OB_INT_EXPR("bsplit","bsplit_call_counter",bsplit_call_counter)
	OB_INT_EXPR("bInsertChrs","bInsertChrs_call_counter",bInsertChrs_call_counter)
	OB_INT_EXPR("bstrListDestroy","bstrListDestroy_call_counter",bstrListDestroy_call_counter)

	aunit_printf("#CASE_END_test_bJustifyMargin_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_bJustifyMargin_up();

	switch(caseIndex){
	case 13:
		test_bJustifyMargin_13();
		break;
	default:
		abnormal_bJustifyMargin_case(caseIndex);
		break;
	}

	test_bJustifyMargin_down();
}

