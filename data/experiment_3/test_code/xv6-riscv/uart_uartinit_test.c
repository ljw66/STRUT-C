void test_uartinit_up(void);
void test_uartinit_down(void);


void test_uartinit_up(void){

	aunit_printf("\n##FUNCTION_START_uartinit\n");
 }

void test_uartinit_down(void){
	aunit_printf("\n##FUNCTION_END_uartinit\n");
 }



void abnormal_uartinit_case(int index);

void abnormal_uartinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_uartinit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartinit_1,false,0\n");
	aunit_printf("#CASE_START_test_uartinit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uart_tx_lock.locked=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		uartinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("uartinit","uart_tx_lock.locked",0,uart_tx_lock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_uartinit_1\n");
}

void test_uartinit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartinit_2,false,0\n");
	aunit_printf("#CASE_START_test_uartinit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uart_tx_lock.locked=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		uartinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("uartinit","uart_tx_lock.locked",1,uart_tx_lock.locked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_uartinit_2\n");
}

void test_uartinit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartinit_3,false,0\n");
	aunit_printf("#CASE_START_test_uartinit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		uartinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("uartinit","uart_tx_lock.name","uart",uart_tx_lock.name)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_uartinit_3\n");
}

void test_uartinit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	char *valueList_0[]={(char *)"init"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartinit_4,false,0\n");
	aunit_printf("#CASE_START_test_uartinit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uart_tx_lock.name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		uartinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("uartinit","uart_tx_lock.name","uart",uart_tx_lock.name)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_uartinit_4\n");
}

void test_uartinit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartinit_5,false,0\n");
	aunit_printf("#CASE_START_test_uartinit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		uartinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)

	aunit_printf("#CASE_END_test_uartinit_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_uartinit_up();

	switch(caseIndex){
	case 1:
		test_uartinit_1();
		break;
	case 2:
		test_uartinit_2();
		break;
	case 3:
		test_uartinit_3();
		break;
	case 4:
		test_uartinit_4();
		break;
	case 5:
		test_uartinit_5();
		break;
	default:
		abnormal_uartinit_case(caseIndex);
		break;
	}

	test_uartinit_down();
}

