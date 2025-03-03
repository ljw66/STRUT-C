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

void test_kmalloc_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kmem_t *_km;
	unsigned int n_bytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={128};
	unsigned int listLength_0=1;
	kmem_t *valueList_1[]={(kmem_t *)_km_PTRTO};
	unsigned int listLength_1=1;
	struct header_t *valueList_2[]={(struct header_t *)"loop_head"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	morecore_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kmalloc_7,false,0\n");
	aunit_printf("#CASE_START_test_kmalloc_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n_bytes=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(kmem_t *)_km=(kmem_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(_km_PTRTO[0]).loop_head->ptr=(struct header_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(_km_PTRTO[0]).loop_head->size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = kmalloc(_km,n_bytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("kmalloc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("morecore","morecore_call_counter",morecore_call_counter)

	aunit_printf("#CASE_END_test_kmalloc_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_kmalloc_up();

	switch(caseIndex){
	case 7:
		test_kmalloc_7();
		break;
	default:
		abnormal_kmalloc_case(caseIndex);
		break;
	}

	test_kmalloc_down();
}

