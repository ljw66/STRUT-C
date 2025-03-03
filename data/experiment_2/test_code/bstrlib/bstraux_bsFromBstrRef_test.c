void test_bsFromBstrRef_up(void);
void test_bsFromBstrRef_down(void);


void test_bsFromBstrRef_up(void){

	aunit_printf("\n##FUNCTION_START_bsFromBstrRef\n");
 }

void test_bsFromBstrRef_down(void){
	aunit_printf("\n##FUNCTION_END_bsFromBstrRef\n");
 }



void abnormal_bsFromBstrRef_case(int index);

void abnormal_bsFromBstrRef_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsFromBstrRef_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *t;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)t_PTRTO};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)t_PTRTO_0_data_PTRTO};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)t_PTRTO_1_data_PTRTO};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	bsopen_call_counter = 0;
	readRef_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsFromBstrRef_6,false,0\n");
	aunit_printf("#CASE_START_test_bsFromBstrRef_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(t_PTRTO[0]).data=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(t_PTRTO[1]).data=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = bsFromBstrRef(t);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bsFromBstrRef","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bsopen","bsopen_call_counter",bsopen_call_counter)
	OB_INT_EXPR("readRef","readRef_call_counter",readRef_call_counter)

	aunit_printf("#CASE_END_test_bsFromBstrRef_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsFromBstrRef_up();

	switch(caseIndex){
	case 6:
		test_bsFromBstrRef_6();
		break;
	default:
		abnormal_bsFromBstrRef_case(caseIndex);
		break;
	}

	test_bsFromBstrRef_down();
}

