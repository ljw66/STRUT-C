void test_uartputc_sync_up(void);
void test_uartputc_sync_down(void);


void test_uartputc_sync_up(void){

	aunit_printf("\n##FUNCTION_START_uartputc_sync\n");
 }

void test_uartputc_sync_down(void){
	aunit_printf("\n##FUNCTION_END_uartputc_sync\n");
 }



void abnormal_uartputc_sync_case(int index);

void abnormal_uartputc_sync_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_uartputc_sync_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={0};
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
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_1,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",0,panicked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_1\n");
}

void test_uartputc_sync_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_2,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",0,panicked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_2\n");
}

void test_uartputc_sync_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={255};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_3,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",0,panicked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_3\n");
}

void test_uartputc_sync_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_4,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",1,panicked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_4\n");
}

void test_uartputc_sync_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_5,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",1,panicked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_5\n");
}

void test_uartputc_sync_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int c;


	//ֵ�������
	int valueList_0[]={255};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartputc_sync_6,false,0\n");
	aunit_printf("#CASE_START_test_uartputc_sync_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			panicked=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		uartputc_sync(c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartputc_sync","panicked",1,panicked)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_uartputc_sync_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_uartputc_sync_up();

	switch(caseIndex){
	case 1:
		test_uartputc_sync_1();
		break;
	case 2:
		test_uartputc_sync_2();
		break;
	case 3:
		test_uartputc_sync_3();
		break;
	case 4:
		test_uartputc_sync_4();
		break;
	case 5:
		test_uartputc_sync_5();
		break;
	case 6:
		test_uartputc_sync_6();
		break;
	default:
		abnormal_uartputc_sync_case(caseIndex);
		break;
	}

	test_uartputc_sync_down();
}

