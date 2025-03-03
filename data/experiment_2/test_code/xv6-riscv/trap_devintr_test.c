void test_devintr_up(void);
void test_devintr_down(void);


void test_devintr_up(void){

	aunit_printf("\n##FUNCTION_START_devintr\n");
 }

void test_devintr_down(void){
	aunit_printf("\n##FUNCTION_END_devintr\n");
 }



void abnormal_devintr_case(int index);

void abnormal_devintr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_devintr_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	plic_complete_call_counter = 0;
	uartintr_call_counter = 0;
	plic_claim_call_counter = 0;
	r_scause_call_counter = 0;
	virtio_disk_intr_call_counter = 0;
	clockintr_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_devintr_7,false,0\n");
	aunit_printf("#CASE_START_test_devintr_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = devintr();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("devintr","returnValue",2,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("plic_complete","plic_complete_call_counter",plic_complete_call_counter)
	OB_INT_EXPR("uartintr","uartintr_call_counter",uartintr_call_counter)
	OB_INT_EXPR("plic_claim","plic_claim_call_counter",plic_claim_call_counter)
	OB_INT_EXPR("r_scause","r_scause_call_counter",r_scause_call_counter)
	OB_INT_EXPR("virtio_disk_intr","virtio_disk_intr_call_counter",virtio_disk_intr_call_counter)
	OB_INT_EXPR("clockintr","clockintr_call_counter",clockintr_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_devintr_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_devintr_up();

	switch(caseIndex){
	case 7:
		test_devintr_7();
		break;
	default:
		abnormal_devintr_case(caseIndex);
		break;
	}

	test_devintr_down();
}

