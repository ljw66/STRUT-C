void test_memmove_up(void);
void test_memmove_down(void);


void test_memmove_up(void){

	aunit_printf("\n##FUNCTION_START_memmove\n");
 }

void test_memmove_down(void){
	aunit_printf("\n##FUNCTION_END_memmove\n");
 }



void abnormal_memmove_case(int index);

void abnormal_memmove_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_memmove_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *dst;
	void *src;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x2000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x2004};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={8};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_memmove_5,false,0\n");
	aunit_printf("#CASE_START_test_memmove_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = memmove(dst,src,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("memmove","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("memmove","dst","0x2000",dst)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_memmove_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_memmove_up();

	switch(caseIndex){
	case 5:
		test_memmove_5();
		break;
	default:
		abnormal_memmove_case(caseIndex);
		break;
	}

	test_memmove_down();
}

