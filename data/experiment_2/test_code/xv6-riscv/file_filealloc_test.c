void test_filealloc_up(void);
void test_filealloc_down(void);


void test_filealloc_up(void){

	aunit_printf("\n##FUNCTION_START_filealloc\n");
 }

void test_filealloc_down(void){
	aunit_printf("\n##FUNCTION_END_filealloc\n");
 }



void abnormal_filealloc_case(int index);

void abnormal_filealloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_filealloc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filealloc_1,false,0\n");
	aunit_printf("#CASE_START_test_filealloc_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = filealloc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("filealloc","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_filealloc_1\n");
}

void test_filealloc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filealloc_2,false,0\n");
	aunit_printf("#CASE_START_test_filealloc_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = filealloc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("filealloc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_filealloc_2\n");
}

void test_filealloc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filealloc_3,false,0\n");
	aunit_printf("#CASE_START_test_filealloc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = filealloc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("filealloc","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_filealloc_3\n");
}

void test_filealloc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filealloc_4,false,0\n");
	aunit_printf("#CASE_START_test_filealloc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = filealloc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("filealloc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_filealloc_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_filealloc_up();

	switch(caseIndex){
	case 1:
		test_filealloc_1();
		break;
	case 2:
		test_filealloc_2();
		break;
	case 3:
		test_filealloc_3();
		break;
	case 4:
		test_filealloc_4();
		break;
	default:
		abnormal_filealloc_case(caseIndex);
		break;
	}

	test_filealloc_down();
}

