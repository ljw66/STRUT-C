void test_init_hash_set_up(void);
void test_init_hash_set_down(void);


void test_init_hash_set_up(void){

	aunit_printf("\n##FUNCTION_START_init_hash_set\n");
 }

void test_init_hash_set_down(void){
	aunit_printf("\n##FUNCTION_END_init_hash_set\n");
 }



void abnormal_init_hash_set_case(int index);

void abnormal_init_hash_set_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_init_hash_set_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hash_set_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_init_hash_set_1,false,0\n");
	aunit_printf("#CASE_START_test_init_hash_set_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = init_hash_set();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("init_hash_set","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_init_hash_set_1\n");
}

void test_init_hash_set_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hash_set_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_init_hash_set_2,false,0\n");
	aunit_printf("#CASE_START_test_init_hash_set_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = init_hash_set();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("init_hash_set","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_init_hash_set_2\n");
}

void test_init_hash_set_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hash_set_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_init_hash_set_3,false,0\n");
	aunit_printf("#CASE_START_test_init_hash_set_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = init_hash_set();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("init_hash_set","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_init_hash_set_3\n");
}

void test_init_hash_set_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hash_set_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_init_hash_set_4,false,0\n");
	aunit_printf("#CASE_START_test_init_hash_set_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = init_hash_set();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("init_hash_set","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_init_hash_set_4\n");
}

void test_init_hash_set_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hash_set_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_init_hash_set_5,false,0\n");
	aunit_printf("#CASE_START_test_init_hash_set_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = init_hash_set();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("init_hash_set","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_init_hash_set_5\n");
}

void test_init_hash_set_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hash_set_t *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	calloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_init_hash_set_6,false,0\n");
	aunit_printf("#CASE_START_test_init_hash_set_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = init_hash_set();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("init_hash_set","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)

	aunit_printf("#CASE_END_test_init_hash_set_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_init_hash_set_up();

	switch(caseIndex){
	case 1:
		test_init_hash_set_1();
		break;
	case 2:
		test_init_hash_set_2();
		break;
	case 3:
		test_init_hash_set_3();
		break;
	case 4:
		test_init_hash_set_4();
		break;
	case 5:
		test_init_hash_set_5();
		break;
	case 6:
		test_init_hash_set_6();
		break;
	default:
		abnormal_init_hash_set_case(caseIndex);
		break;
	}

	test_init_hash_set_down();
}

