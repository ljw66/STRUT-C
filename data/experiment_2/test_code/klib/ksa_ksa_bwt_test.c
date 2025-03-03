void test_ksa_bwt_up(void);
void test_ksa_bwt_down(void);


void test_ksa_bwt_up(void){

	aunit_printf("\n##FUNCTION_START_ksa_bwt\n");
 }

void test_ksa_bwt_down(void){
	aunit_printf("\n##FUNCTION_END_ksa_bwt\n");
 }



void abnormal_ksa_bwt_case(int index);

void abnormal_ksa_bwt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksa_bwt_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *T;
	int n;
	int k;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={256};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;
	ksa_sa_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksa_bwt_6,false,0\n");
	aunit_printf("#CASE_START_test_ksa_bwt_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			T=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			k=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ksa_bwt(T,n,k);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ksa_bwt","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("ksa_bwt","T","\u0000\u0000\u0000",T)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksa_sa","ksa_sa_call_counter",ksa_sa_call_counter)

	aunit_printf("#CASE_END_test_ksa_bwt_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksa_bwt_up();

	switch(caseIndex){
	case 6:
		test_ksa_bwt_6();
		break;
	default:
		abnormal_ksa_bwt_case(caseIndex);
		break;
	}

	test_ksa_bwt_down();
}

