void test_bfromcstralloc_up(void);
void test_bfromcstralloc_down(void);


void test_bfromcstralloc_up(void){

	aunit_printf("\n##FUNCTION_START_bfromcstralloc\n");
 }

void test_bfromcstralloc_down(void){
	aunit_printf("\n##FUNCTION_END_bfromcstralloc\n");
 }



void abnormal_bfromcstralloc_case(int index);

void abnormal_bfromcstralloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bfromcstralloc_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int mlen;
	char *str;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	bstring returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	strlen_call_counter = 0;
	memcpy_call_counter = 0;
	snapUpSize_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bfromcstralloc_8,false,0\n");
	aunit_printf("#CASE_START_test_bfromcstralloc_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bfromcstralloc(mlen,str);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bfromcstralloc","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("bfromcstralloc","returnValue->slen",3,returnValue->slen)
	TEST_ASSERT_EQUAL_LONG("bfromcstralloc","returnValue->data","abc",returnValue->data)
	TEST_ASSERT_EQUAL_INT("bfromcstralloc","returnValue->mlen",5,returnValue->mlen)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_bfromcstralloc_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_bfromcstralloc_up();

	switch(caseIndex){
	case 8:
		test_bfromcstralloc_8();
		break;
	default:
		abnormal_bfromcstralloc_case(caseIndex);
		break;
	}

	test_bfromcstralloc_down();
}

