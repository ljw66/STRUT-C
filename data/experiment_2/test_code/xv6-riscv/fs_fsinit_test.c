void test_fsinit_up(void);
void test_fsinit_down(void);


void test_fsinit_up(void){

	aunit_printf("\n##FUNCTION_START_fsinit\n");
 }

void test_fsinit_down(void){
	aunit_printf("\n##FUNCTION_END_fsinit\n");
 }



void abnormal_fsinit_case(int index);

void abnormal_fsinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fsinit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int dev;


	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_1,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x10203040,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_1\n");
}

void test_fsinit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int dev;


	//ֵ�������
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_2,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x12345678,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_2\n");
}

void test_fsinit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int dev;


	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_3,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x10203040,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_3\n");
}

void test_fsinit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int dev;


	//ֵ�������
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_4,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x87654321,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_4\n");
}

void test_fsinit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int dev;


	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_5,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x10203040,sb.magic)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_fsinit_up();

	switch(caseIndex){
	case 1:
		test_fsinit_1();
		break;
	case 2:
		test_fsinit_2();
		break;
	case 3:
		test_fsinit_3();
		break;
	case 4:
		test_fsinit_4();
		break;
	case 5:
		test_fsinit_5();
		break;
	default:
		abnormal_fsinit_case(caseIndex);
		break;
	}

	test_fsinit_down();
}

