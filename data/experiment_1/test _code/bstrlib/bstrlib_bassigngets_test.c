void test_bassigngets_up(void);
void test_bassigngets_down(void);


void test_bassigngets_up(void){

	aunit_printf("\n##FUNCTION_START_bassigngets\n");
 }

void test_bassigngets_down(void){
	aunit_printf("\n##FUNCTION_END_bassigngets\n");
 }



void abnormal_bassigngets_case(int index);

void abnormal_bassigngets_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bassigngets_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	int (*getcPtr)(void *);
	void *parm;
	char terminator;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0};
	unsigned int listLength_1=1;
	char valueList_2[]={'a'};
	unsigned int listLength_2=1;
	int (*valueList_3[])(void *)={(int (*)(void *))getcPtr_STUB};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"some_data"};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
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
	case_id=9;
	//��ʼ����׮�������ü�����
	getcPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bassigngets_9,false,0\n");
	aunit_printf("#CASE_START_test_bassigngets_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			terminator=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			getcPtr=(int (*)(void *))valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).mlen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = bassigngets(b,getcPtr,parm,terminator);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bassigngets","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getcPtr_STUB","getcPtr_STUB_call_counter",getcPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_bassigngets_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_bassigngets_up();

	switch(caseIndex){
	case 9:
		test_bassigngets_9();
		break;
	default:
		abnormal_bassigngets_case(caseIndex);
		break;
	}

	test_bassigngets_down();
}

