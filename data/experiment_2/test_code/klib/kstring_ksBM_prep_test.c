void test_ksBM_prep_up(void);
void test_ksBM_prep_down(void);


void test_ksBM_prep_up(void){

	aunit_printf("\n##FUNCTION_START_ksBM_prep\n");
 }

void test_ksBM_prep_down(void){
	aunit_printf("\n##FUNCTION_END_ksBM_prep\n");
 }



void abnormal_ksBM_prep_case(int index);

void abnormal_ksBM_prep_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksBM_prep_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ubyte_t *pat;
	int m;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int *returnValue = 0;

	//ֵ�������
	ubyte_t *valueList_0[]={(ubyte_t *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	calloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksBM_prep_1,false,0\n");
	aunit_printf("#CASE_START_test_ksBM_prep_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pat=(ubyte_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ksBM_prep(pat,m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("ksBM_prep","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_ksBM_prep_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksBM_prep_up();

	switch(caseIndex){
	case 1:
		test_ksBM_prep_1();
		break;
	default:
		abnormal_ksBM_prep_case(caseIndex);
		break;
	}

	test_ksBM_prep_down();
}

