void test_bUuDecodeEx_up(void);
void test_bUuDecodeEx_down(void);


void test_bUuDecodeEx_up(void){

	aunit_printf("\n##FUNCTION_START_bUuDecodeEx\n");
 }

void test_bUuDecodeEx_down(void){
	aunit_printf("\n##FUNCTION_END_bUuDecodeEx\n");
 }



void abnormal_bUuDecodeEx_case(int index);

void abnormal_bUuDecodeEx_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bUuDecodeEx_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *src;
	int *badlines;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	int *valueList_0[]={(int *)badlines_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	bsUuDecode_call_counter = 0;
	bsclose_call_counter = 0;
	bfromcstralloc_call_counter = 0;
	bsread_call_counter = 0;
	bsFromBstrRef_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bUuDecodeEx_1,false,0\n");
	aunit_printf("#CASE_START_test_bUuDecodeEx_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			badlines=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			badlines_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			badlines_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = bUuDecodeEx(src,badlines);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bUuDecodeEx","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bsUuDecode","bsUuDecode_call_counter",bsUuDecode_call_counter)
	OB_INT_EXPR("bsclose","bsclose_call_counter",bsclose_call_counter)
	OB_INT_EXPR("bfromcstralloc","bfromcstralloc_call_counter",bfromcstralloc_call_counter)
	OB_INT_EXPR("bsread","bsread_call_counter",bsread_call_counter)
	OB_INT_EXPR("bsFromBstrRef","bsFromBstrRef_call_counter",bsFromBstrRef_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bUuDecodeEx_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_bUuDecodeEx_up();

	switch(caseIndex){
	case 1:
		test_bUuDecodeEx_1();
		break;
	default:
		abnormal_bUuDecodeEx_case(caseIndex);
		break;
	}

	test_bUuDecodeEx_down();
}

