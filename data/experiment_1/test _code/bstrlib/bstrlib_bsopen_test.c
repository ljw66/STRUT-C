void test_bsopen_up(void);
void test_bsopen_down(void);


void test_bsopen_up(void){

	aunit_printf("\n##FUNCTION_START_bsopen\n");
 }

void test_bsopen_down(void){
	aunit_printf("\n##FUNCTION_END_bsopen\n");
 }



void abnormal_bsopen_case(int index);

void abnormal_bsopen_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsopen_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	readPtr_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsopen_1,false,0\n");
	aunit_printf("#CASE_START_test_bsopen_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			parm=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = bsopen(readPtr,parm);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bsopen","returnValue","NULL",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)

	aunit_printf("#CASE_END_test_bsopen_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsopen_up();

	switch(caseIndex){
	case 1:
		test_bsopen_1();
		break;
	default:
		abnormal_bsopen_case(caseIndex);
		break;
	}

	test_bsopen_down();
}

