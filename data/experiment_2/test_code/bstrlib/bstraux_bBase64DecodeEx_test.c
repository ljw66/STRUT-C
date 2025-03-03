void test_bBase64DecodeEx_up(void);
void test_bBase64DecodeEx_down(void);


void test_bBase64DecodeEx_up(void){

	aunit_printf("\n##FUNCTION_START_bBase64DecodeEx\n");
 }

void test_bBase64DecodeEx_down(void){
	aunit_printf("\n##FUNCTION_END_bBase64DecodeEx\n");
 }



void abnormal_bBase64DecodeEx_case(int index);

void abnormal_bBase64DecodeEx_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bBase64DecodeEx_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	int *boolTruncError;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	int *valueList_0[]={(int *)boolTruncError_PTRTO};
	unsigned int listLength_0=1;
	struct tagbstring *valueList_1[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"TW$@"};
	unsigned int listLength_2=1;
	int valueList_3[]={4};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	base64DecodeSymbol_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bBase64DecodeEx_10,false,0\n");
	aunit_printf("#CASE_START_test_bBase64DecodeEx_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			boolTruncError=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(struct tagbstring *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).data=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = bBase64DecodeEx(b,boolTruncError);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bBase64DecodeEx","boolTruncError",1,boolTruncError)
	TEST_ASSERT_EQUAL_LONG("bBase64DecodeEx","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("base64DecodeSymbol","base64DecodeSymbol_call_counter",base64DecodeSymbol_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bBase64DecodeEx_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_bBase64DecodeEx_up();

	switch(caseIndex){
	case 10:
		test_bBase64DecodeEx_10();
		break;
	default:
		abnormal_bBase64DecodeEx_case(caseIndex);
		break;
	}

	test_bBase64DecodeEx_down();
}

