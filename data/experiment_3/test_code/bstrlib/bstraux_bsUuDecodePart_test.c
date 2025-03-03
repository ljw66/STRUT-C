void test_bsUuDecodePart_up(void);
void test_bsUuDecodePart_down(void);


void test_bsUuDecodePart_up(void){

	aunit_printf("\n##FUNCTION_START_bsUuDecodePart\n");
 }

void test_bsUuDecodePart_down(void){
	aunit_printf("\n##FUNCTION_END_bsUuDecodePart\n");
 }



void abnormal_bsUuDecodePart_case(int index);

void abnormal_bsUuDecodePart_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsUuDecodePart_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *buff;
	unsigned int elsize;
	unsigned int nelem;
	void *parm;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)2};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)1};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	binchr_call_counter = 0;
	bdelete_call_counter = 0;
	memcpy_call_counter = 0;
	bsbufflength_call_counter = 0;
	bUuDecLine_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;
	bsreada_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsUuDecodePart_7,false,0\n");
	aunit_printf("#CASE_START_test_bsUuDecodePart_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nelem=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			elsize=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			buff=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bsUuDecodePart(buff,elsize,nelem,parm);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("bsUuDecodePart","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("binchr","binchr_call_counter",binchr_call_counter)
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("bsbufflength","bsbufflength_call_counter",bsbufflength_call_counter)
	OB_INT_EXPR("bUuDecLine","bUuDecLine_call_counter",bUuDecLine_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("bsreada","bsreada_call_counter",bsreada_call_counter)

	aunit_printf("#CASE_END_test_bsUuDecodePart_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsUuDecodePart_up();

	switch(caseIndex){
	case 7:
		test_bsUuDecodePart_7();
		break;
	default:
		abnormal_bsUuDecodePart_case(caseIndex);
		break;
	}

	test_bsUuDecodePart_down();
}

