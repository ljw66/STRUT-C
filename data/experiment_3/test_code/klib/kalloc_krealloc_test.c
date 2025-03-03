void test_krealloc_up(void);
void test_krealloc_down(void);


void test_krealloc_up(void){

	aunit_printf("\n##FUNCTION_START_krealloc\n");
 }

void test_krealloc_down(void){
	aunit_printf("\n##FUNCTION_END_krealloc\n");
 }



void abnormal_krealloc_case(int index);

void abnormal_krealloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_krealloc_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *_km;
	void *ap;
	unsigned int n_bytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x1234};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={128};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0x5678};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;
	memcpy_call_counter = 0;
	kmalloc_call_counter = 0;
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_krealloc_6,false,0\n");
	aunit_printf("#CASE_START_test_krealloc_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_km=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n_bytes=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ap=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = krealloc(_km,ap,n_bytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("krealloc","returnValue","0x9abc",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_krealloc_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_krealloc_up();

	switch(caseIndex){
	case 6:
		test_krealloc_6();
		break;
	default:
		abnormal_krealloc_case(caseIndex);
		break;
	}

	test_krealloc_down();
}

