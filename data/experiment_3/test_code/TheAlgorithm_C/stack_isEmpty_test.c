void test_isEmpty_up(void);
void test_isEmpty_down(void);


void test_isEmpty_up(void){

	aunit_printf("\n##FUNCTION_START_isEmpty\n");
 }

void test_isEmpty_down(void){
	aunit_printf("\n##FUNCTION_END_isEmpty\n");
 }



void abnormal_isEmpty_case(int index);

void abnormal_isEmpty_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_isEmpty_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_isEmpty_1,false,0\n");
	aunit_printf("#CASE_START_test_isEmpty_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			count=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = isEmpty();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isEmpty","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_INT("isEmpty","count",0,count)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_isEmpty_1\n");
}

void test_isEmpty_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_isEmpty_2,false,0\n");
	aunit_printf("#CASE_START_test_isEmpty_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			count=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = isEmpty();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isEmpty","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isEmpty","count",5,count)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_isEmpty_2\n");
}

void test_isEmpty_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={-1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_isEmpty_3,false,0\n");
	aunit_printf("#CASE_START_test_isEmpty_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			count=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = isEmpty();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isEmpty","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isEmpty","count",-1,count)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_isEmpty_3\n");
}

void test_isEmpty_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1000000};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_isEmpty_4,false,0\n");
	aunit_printf("#CASE_START_test_isEmpty_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			count=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = isEmpty();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isEmpty","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isEmpty","count",1000000,count)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_isEmpty_4\n");
}

void test_isEmpty_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={-1000000};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_isEmpty_5,false,0\n");
	aunit_printf("#CASE_START_test_isEmpty_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			count=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = isEmpty();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isEmpty","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isEmpty","count",-1000000,count)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_isEmpty_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_isEmpty_up();

	switch(caseIndex){
	case 1:
		test_isEmpty_1();
		break;
	case 2:
		test_isEmpty_2();
		break;
	case 3:
		test_isEmpty_3();
		break;
	case 4:
		test_isEmpty_4();
		break;
	case 5:
		test_isEmpty_5();
		break;
	default:
		abnormal_isEmpty_case(caseIndex);
		break;
	}

	test_isEmpty_down();
}

