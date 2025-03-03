void test_wsect_up(void);
void test_wsect_down(void);


void test_wsect_up(void){

	aunit_printf("\n##FUNCTION_START_wsect\n");
 }

void test_wsect_down(void){
	aunit_printf("\n##FUNCTION_END_wsect\n");
 }



void abnormal_wsect_case(int index);

void abnormal_wsect_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_wsect_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sec;
	void *buf;


	//ֵ�������
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_1,false,0\n");
	aunit_printf("#CASE_START_test_wsect_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",10,fsfd)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_1\n");
}

void test_wsect_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sec;
	void *buf;


	//ֵ�������
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	int valueList_1[]={15};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_2,false,0\n");
	aunit_printf("#CASE_START_test_wsect_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",15,fsfd)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_2\n");
}

void test_wsect_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sec;
	void *buf;


	//ֵ�������
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_3,false,0\n");
	aunit_printf("#CASE_START_test_wsect_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",20,fsfd)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_3\n");
}

void test_wsect_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sec;
	void *buf;


	//ֵ�������
	unsigned int valueList_0[]={4};
	unsigned int listLength_0=1;
	int valueList_1[]={25};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_4,false,0\n");
	aunit_printf("#CASE_START_test_wsect_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",25,fsfd)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_4\n");
}

void test_wsect_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int sec;
	void *buf;


	//ֵ�������
	unsigned int valueList_0[]={6};
	unsigned int listLength_0=1;
	int valueList_1[]={30};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_5,false,0\n");
	aunit_printf("#CASE_START_test_wsect_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",30,fsfd)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_wsect_up();

	switch(caseIndex){
	case 1:
		test_wsect_1();
		break;
	case 2:
		test_wsect_2();
		break;
	case 3:
		test_wsect_3();
		break;
	case 4:
		test_wsect_4();
		break;
	case 5:
		test_wsect_5();
		break;
	default:
		abnormal_wsect_case(caseIndex);
		break;
	}

	test_wsect_down();
}

