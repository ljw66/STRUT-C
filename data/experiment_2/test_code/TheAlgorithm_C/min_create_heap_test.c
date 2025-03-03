void test_create_heap_up(void);
void test_create_heap_down(void);


void test_create_heap_up(void){

	aunit_printf("\n##FUNCTION_START_create_heap\n");
 }

void test_create_heap_down(void){
	aunit_printf("\n##FUNCTION_END_create_heap\n");
 }



void abnormal_create_heap_case(int index);

void abnormal_create_heap_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_create_heap_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *heap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_1,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->count",0,heap->count)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->size",1,heap->size)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_1\n");
}

void test_create_heap_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *heap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_2,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("create_heap","heap",0,heap)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_2\n");
}

void test_create_heap_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *heap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_3,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("create_heap","heap->p",0,heap->p)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_3\n");
}

void test_create_heap_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *heap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Heap *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_heap_4,false,0\n");
	aunit_printf("#CASE_START_test_create_heap_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_heap(heap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("create_heap","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->count",0,heap->count)
	TEST_ASSERT_EQUAL_INT("create_heap","heap->size",1,heap->size)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_create_heap_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_create_heap_up();

	switch(caseIndex){
	case 1:
		test_create_heap_1();
		break;
	case 2:
		test_create_heap_2();
		break;
	case 3:
		test_create_heap_3();
		break;
	case 4:
		test_create_heap_4();
		break;
	default:
		abnormal_create_heap_case(caseIndex);
		break;
	}

	test_create_heap_down();
}

