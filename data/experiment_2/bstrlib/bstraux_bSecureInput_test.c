void test_bSecureInput_up(void);
void test_bSecureInput_down(void);


void test_bSecureInput_up(void){

	aunit_printf("\n##FUNCTION_START_bSecureInput\n");
 }

void test_bSecureInput_down(void){
	aunit_printf("\n##FUNCTION_END_bSecureInput\n");
 }



void abnormal_bSecureInput_case(int index);

void abnormal_bSecureInput_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bSecureInput_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int maxlen;
	int termchar;
	int (*vgetchar)(void *);
	void *vgcCtx;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))vgetchar_STUB};
	unsigned int listLength_1=1;
	int valueList_2[]={66};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	bfromcstralloc_call_counter = 0;
	memcpy_call_counter = 0;
	bdestroy_call_counter = 0;
	memset_call_counter = 0;
	vgetchar_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bSecureInput_8,false,0\n");
	aunit_printf("#CASE_START_test_bSecureInput_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vgcCtx=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vgetchar=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			termchar=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bSecureInput(maxlen,termchar,vgetchar,vgcCtx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bSecureInput","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("bSecureInput","returnValue->slen",1,returnValue->slen)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bfromcstralloc","bfromcstralloc_call_counter",bfromcstralloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("vgetchar_STUB","vgetchar_STUB_call_counter",vgetchar_STUB_call_counter)

	aunit_printf("#CASE_END_test_bSecureInput_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_bSecureInput_up();

	switch(caseIndex){
	case 8:
		test_bSecureInput_8();
		break;
	default:
		abnormal_bSecureInput_case(caseIndex);
		break;
	}

	test_bSecureInput_down();
}

