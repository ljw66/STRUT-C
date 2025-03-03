void test_bformat_up(void);
void test_bformat_down(void);


void test_bformat_up(void){

	aunit_printf("\n##FUNCTION_START_bformat\n");
 }

void test_bformat_down(void){
	aunit_printf("\n##FUNCTION_END_bformat\n");
 }



void abnormal_bformat_case(int index);

void abnormal_bformat_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bformat_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *fmt;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"test"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	bfromcstralloc_call_counter = 0;
	balloc_call_counter = 0;
	vsnprintf_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bformat_9,false,0\n");
	aunit_printf("#CASE_START_test_bformat_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = bformat(fmt);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bformat","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("bformat","returnValue->slen",4,returnValue->slen)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("bfromcstralloc","bfromcstralloc_call_counter",bfromcstralloc_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bformat_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_bformat_up();

	switch(caseIndex){
	case 9:
		test_bformat_9();
		break;
	default:
		abnormal_bformat_case(caseIndex);
		break;
	}

	test_bformat_down();
}

