void test_kmalloc_up(void);
void test_kmalloc_down(void);


void test_kmalloc_up(void){

	aunit_printf("\n##FUNCTION_START_kmalloc\n");
 }

void test_kmalloc_down(void){
	aunit_printf("\n##FUNCTION_END_kmalloc\n");
 }



void abnormal_kmalloc_case(int index);

void abnormal_kmalloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kmalloc_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *_km;
	unsigned int n_bytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)123456};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={400};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	morecore_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kmalloc_9,false,0\n");
	aunit_printf("#CASE_START_test_kmalloc_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_km=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n_bytes=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kmalloc(_km,n_bytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("kmalloc","returnValue",123460,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("morecore","morecore_call_counter",morecore_call_counter)

	aunit_printf("#CASE_END_test_kmalloc_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_kmalloc_up();

	switch(caseIndex){
	case 9:
		test_kmalloc_9();
		break;
	default:
		abnormal_kmalloc_case(caseIndex);
		break;
	}

	test_kmalloc_down();
}

