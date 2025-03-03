void test_uartintr_up(void);
void test_uartintr_down(void);


void test_uartintr_up(void){

	aunit_printf("\n##FUNCTION_START_uartintr\n");
 }

void test_uartintr_down(void){
	aunit_printf("\n##FUNCTION_END_uartintr\n");
 }



void abnormal_uartintr_case(int index);

void abnormal_uartintr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_uartintr_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	uartstart_call_counter = 0;
	uartgetc_call_counter = 0;
	acquire_call_counter = 0;
	consoleintr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartintr_5,false,0\n");
	aunit_printf("#CASE_START_test_uartintr_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uart_tx_lock.locked=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		uartintr();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("uartintr","uart_tx_lock.locked",0,uart_tx_lock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("uartstart","uartstart_call_counter",uartstart_call_counter)
	OB_INT_EXPR("uartgetc","uartgetc_call_counter",uartgetc_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("consoleintr","consoleintr_call_counter",consoleintr_call_counter)

	aunit_printf("#CASE_END_test_uartintr_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_uartintr_up();

	switch(caseIndex){
	case 5:
		test_uartintr_5();
		break;
	default:
		abnormal_uartintr_case(caseIndex);
		break;
	}

	test_uartintr_down();
}

