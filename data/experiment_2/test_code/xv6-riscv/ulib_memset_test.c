void test_memset_up(void);
void test_memset_down(void);


void test_memset_up(void){

	aunit_printf("\n##FUNCTION_START_memset\n");
 }

void test_memset_down(void){
	aunit_printf("\n##FUNCTION_END_memset\n");
 }



void abnormal_memset_case(int index);

void abnormal_memset_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_memset_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *dst;
	int c;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={65};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x12345678};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_memset_2,false,0\n");
	aunit_printf("#CASE_START_test_memset_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dst=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = memset(dst,c,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("memset","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("memset","dst[4]",65,dst[4])
	TEST_ASSERT_EQUAL_INT("memset","dst[0]",65,dst[0])
	TEST_ASSERT_EQUAL_INT("memset","dst[1]",65,dst[1])
	TEST_ASSERT_EQUAL_INT("memset","dst[2]",65,dst[2])
	TEST_ASSERT_EQUAL_INT("memset","dst[3]",65,dst[3])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_memset_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_memset_up();

	switch(caseIndex){
	case 2:
		test_memset_2();
		break;
	default:
		abnormal_memset_case(caseIndex);
		break;
	}

	test_memset_down();
}

