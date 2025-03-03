void test_uartgetc_up(void);
void test_uartgetc_down(void);


void test_uartgetc_up(void){

	aunit_printf("\n##FUNCTION_START_uartgetc\n");
 }

void test_uartgetc_down(void){
	aunit_printf("\n##FUNCTION_END_uartgetc\n");
 }



void abnormal_uartgetc_case(int index);

void abnormal_uartgetc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_uartgetc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_uartgetc_1,false,0\n");
	aunit_printf("#CASE_START_test_uartgetc_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = uartgetc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartgetc","returnValue",0x55,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_uartgetc_1\n");
}

void test_uartgetc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_uartgetc_2,false,0\n");
	aunit_printf("#CASE_START_test_uartgetc_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = uartgetc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartgetc","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_uartgetc_2\n");
}

void test_uartgetc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_uartgetc_3,false,0\n");
	aunit_printf("#CASE_START_test_uartgetc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = uartgetc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartgetc","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_uartgetc_3\n");
}

void test_uartgetc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_uartgetc_4,false,0\n");
	aunit_printf("#CASE_START_test_uartgetc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = uartgetc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartgetc","returnValue",0xAA,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_uartgetc_4\n");
}

void test_uartgetc_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_uartgetc_5,false,0\n");
	aunit_printf("#CASE_START_test_uartgetc_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = uartgetc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("uartgetc","returnValue",0xFF,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_uartgetc_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_uartgetc_up();

	switch(caseIndex){
	case 1:
		test_uartgetc_1();
		break;
	case 2:
		test_uartgetc_2();
		break;
	case 3:
		test_uartgetc_3();
		break;
	case 4:
		test_uartgetc_4();
		break;
	case 5:
		test_uartgetc_5();
		break;
	default:
		abnormal_uartgetc_case(caseIndex);
		break;
	}

	test_uartgetc_down();
}

