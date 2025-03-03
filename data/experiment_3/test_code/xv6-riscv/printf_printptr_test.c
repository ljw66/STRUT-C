void test_printptr_up(void);
void test_printptr_down(void);


void test_printptr_up(void){

	aunit_printf("\n##FUNCTION_START_printptr\n");
 }

void test_printptr_down(void){
	aunit_printf("\n##FUNCTION_END_printptr\n");
 }



void abnormal_printptr_case(int index);

void abnormal_printptr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_printptr_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long int x;


	//ֵ�������
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	consputc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_printptr_1,false,0\n");
	aunit_printf("#CASE_START_test_printptr_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		printptr(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("consputc","consputc_call_counter",consputc_call_counter)

	aunit_printf("#CASE_END_test_printptr_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_printptr_up();

	switch(caseIndex){
	case 1:
		test_printptr_1();
		break;
	default:
		abnormal_printptr_case(caseIndex);
		break;
	}

	test_printptr_down();
}

