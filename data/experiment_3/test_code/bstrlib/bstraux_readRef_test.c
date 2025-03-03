void test_readRef_up(void);
void test_readRef_down(void);


void test_readRef_up(void){

	aunit_printf("\n##FUNCTION_START_readRef\n");
 }

void test_readRef_down(void){
	aunit_printf("\n##FUNCTION_END_readRef\n");
 }



void abnormal_readRef_case(int index);

void abnormal_readRef_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_readRef_8(void){
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
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readRef_8,false,0\n");
	aunit_printf("#CASE_START_test_readRef_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nelem=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			elsize=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = readRef(buff,elsize,nelem,parm);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("readRef","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_readRef_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_readRef_up();

	switch(caseIndex){
	case 8:
		test_readRef_8();
		break;
	default:
		abnormal_readRef_case(caseIndex);
		break;
	}

	test_readRef_down();
}

