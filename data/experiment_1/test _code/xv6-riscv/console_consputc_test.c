void test_consputc_up(void);
void test_consputc_down(void);


void test_consputc_up(void){

	aunit_printf("\n##FUNCTION_START_consputc\n");
 }

void test_consputc_down(void){
	aunit_printf("\n##FUNCTION_END_consputc\n");
 }



void abnormal_consputc_case(int index);

void abnormal_consputc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_consputc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={256};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	uartputc_sync_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consputc_1,false,0\n");
	aunit_printf("#CASE_START_test_consputc_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		consputc(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uartputc_sync","uartputc_sync_call_counter",uartputc_sync_call_counter)

	aunit_printf("#CASE_END_test_consputc_1\n");
}

void test_consputc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={65};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	uartputc_sync_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consputc_2,false,0\n");
	aunit_printf("#CASE_START_test_consputc_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		consputc(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uartputc_sync","uartputc_sync_call_counter",uartputc_sync_call_counter)

	aunit_printf("#CASE_END_test_consputc_2\n");
}

void test_consputc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	uartputc_sync_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consputc_3,false,0\n");
	aunit_printf("#CASE_START_test_consputc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		consputc(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uartputc_sync","uartputc_sync_call_counter",uartputc_sync_call_counter)

	aunit_printf("#CASE_END_test_consputc_3\n");
}

void test_consputc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	uartputc_sync_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consputc_4,false,0\n");
	aunit_printf("#CASE_START_test_consputc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		consputc(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uartputc_sync","uartputc_sync_call_counter",uartputc_sync_call_counter)

	aunit_printf("#CASE_END_test_consputc_4\n");
}

void test_consputc_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={9};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	uartputc_sync_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consputc_5,false,0\n");
	aunit_printf("#CASE_START_test_consputc_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		consputc(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uartputc_sync","uartputc_sync_call_counter",uartputc_sync_call_counter)

	aunit_printf("#CASE_END_test_consputc_5\n");
}

void test_consputc_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={1024};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	uartputc_sync_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consputc_6,false,0\n");
	aunit_printf("#CASE_START_test_consputc_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		consputc(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uartputc_sync","uartputc_sync_call_counter",uartputc_sync_call_counter)

	aunit_printf("#CASE_END_test_consputc_6\n");
}

void test_consputc_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={-1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	uartputc_sync_call_counter = 0;

	aunit_printf("###TEST_TREE_test_consputc_7,false,0\n");
	aunit_printf("#CASE_START_test_consputc_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		consputc(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("uartputc_sync","uartputc_sync_call_counter",uartputc_sync_call_counter)

	aunit_printf("#CASE_END_test_consputc_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_consputc_up();

	switch(caseIndex){
	case 1:
		test_consputc_1();
		break;
	case 2:
		test_consputc_2();
		break;
	case 3:
		test_consputc_3();
		break;
	case 4:
		test_consputc_4();
		break;
	case 5:
		test_consputc_5();
		break;
	case 6:
		test_consputc_6();
		break;
	case 7:
		test_consputc_7();
		break;
	default:
		abnormal_consputc_case(caseIndex);
		break;
	}

	test_consputc_down();
}

