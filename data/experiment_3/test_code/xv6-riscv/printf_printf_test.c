void test_printf_up(void);
void test_printf_down(void);


void test_printf_up(void){

	aunit_printf("\n##FUNCTION_START_printf\n");
 }

void test_printf_down(void){
	aunit_printf("\n##FUNCTION_END_printf\n");
 }



void abnormal_printf_case(int index);

void abnormal_printf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_printf_14(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *fmt;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"%s"};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=14;
	//��ʼ����׮�������ü�����
	consputc_call_counter = 0;
	release_call_counter = 0;
	printint_call_counter = 0;
	printptr_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_printf_14,false,0\n");
	aunit_printf("#CASE_START_test_printf_14\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			fmt=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pr.locking=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = printf(fmt);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("printf","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("printf","pr.locking",0,pr.locking)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("consputc","consputc_call_counter",consputc_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("printint","printint_call_counter",printint_call_counter)
	OB_INT_EXPR("printptr","printptr_call_counter",printptr_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_printf_14\n");
}

void aunit_test_func_run(int caseIndex){

	test_printf_up();

	switch(caseIndex){
	case 14:
		test_printf_14();
		break;
	default:
		abnormal_printf_case(caseIndex);
		break;
	}

	test_printf_down();
}

