void test_ialloc_up(void);
void test_ialloc_down(void);


void test_ialloc_up(void){

	aunit_printf("\n##FUNCTION_START_ialloc\n");
 }

void test_ialloc_down(void){
	aunit_printf("\n##FUNCTION_END_ialloc\n");
 }



void abnormal_ialloc_case(int index);

void abnormal_ialloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ialloc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int type;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_1,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",1,freeinode)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_1\n");
}

void test_ialloc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int type;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_2,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",5,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",6,freeinode)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_2\n");
}

void test_ialloc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int type;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_3,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",10,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",11,freeinode)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_3\n");
}

void test_ialloc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int type;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={1000};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_4,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",1000,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",1001,freeinode)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_4\n");
}

void test_ialloc_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned short int type;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={65535};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	bzero_call_counter = 0;
	winode_call_counter = 0;
	xshort_call_counter = 0;
	xint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ialloc_5,false,0\n");
	aunit_printf("#CASE_START_test_ialloc_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freeinode=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			type=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = ialloc(type);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("ialloc","freeinode",1,freeinode)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bzero","bzero_call_counter",bzero_call_counter)
	OB_INT_EXPR("winode","winode_call_counter",winode_call_counter)
	OB_INT_EXPR("xshort","xshort_call_counter",xshort_call_counter)
	OB_INT_EXPR("xint","xint_call_counter",xint_call_counter)

	aunit_printf("#CASE_END_test_ialloc_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ialloc_up();

	switch(caseIndex){
	case 1:
		test_ialloc_1();
		break;
	case 2:
		test_ialloc_2();
		break;
	case 3:
		test_ialloc_3();
		break;
	case 4:
		test_ialloc_4();
		break;
	case 5:
		test_ialloc_5();
		break;
	default:
		abnormal_ialloc_case(caseIndex);
		break;
	}

	test_ialloc_down();
}

