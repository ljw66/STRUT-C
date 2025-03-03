void test_consoleintr_up(void);
void test_consoleintr_down(void);


void test_consoleintr_up(void){

	aunit_printf("\n##FUNCTION_START_consoleintr\n");
 }

void test_consoleintr_down(void){
	aunit_printf("\n##FUNCTION_END_consoleintr\n");
 }



void abnormal_consoleintr_case(int index);

void abnormal_consoleintr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_consoleintr_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={8};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	consputc_call_counter = 0;
	wakeup_call_counter = 0;
	release_call_counter = 0;
	procdump_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consoleintr_8,false,0\n");
	aunit_printf("#CASE_START_test_consoleintr_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cons.w=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			cons.e=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		consoleintr(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("consoleintr","cons.e",5,cons.e)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("consputc","consputc_call_counter",consputc_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("procdump","procdump_call_counter",procdump_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_consoleintr_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_consoleintr_up();

	switch(caseIndex){
	case 8:
		test_consoleintr_8();
		break;
	default:
		abnormal_consoleintr_case(caseIndex);
		break;
	}

	test_consoleintr_down();
}

