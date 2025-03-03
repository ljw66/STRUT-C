void test_bNetStr2Bstr_up(void);
void test_bNetStr2Bstr_down(void);


void test_bNetStr2Bstr_up(void){

	aunit_printf("\n##FUNCTION_START_bNetStr2Bstr\n");
 }

void test_bNetStr2Bstr_down(void){
	aunit_printf("\n##FUNCTION_END_bNetStr2Bstr\n");
 }



void abnormal_bNetStr2Bstr_case(int index);

void abnormal_bNetStr2Bstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bNetStr2Bstr_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *buff;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"3:abc,"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	bfromcstr_call_counter = 0;
	memcpy_call_counter = 0;
	balloc_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bNetStr2Bstr_9,false,0\n");
	aunit_printf("#CASE_START_test_bNetStr2Bstr_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buff=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = bNetStr2Bstr(buff);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bNetStr2Bstr","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bNetStr2Bstr_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_bNetStr2Bstr_up();

	switch(caseIndex){
	case 9:
		test_bNetStr2Bstr_9();
		break;
	default:
		abnormal_bNetStr2Bstr_case(caseIndex);
		break;
	}

	test_bNetStr2Bstr_down();
}

