void test_kcalloc_up(void);
void test_kcalloc_down(void);


void test_kcalloc_up(void){

	aunit_printf("\n##FUNCTION_START_kcalloc\n");
 }

void test_kcalloc_down(void){
	aunit_printf("\n##FUNCTION_END_kcalloc\n");
 }



void abnormal_kcalloc_case(int index);

void abnormal_kcalloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kcalloc_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *_km;
	unsigned int count;
	unsigned int size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={4};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	kmalloc_call_counter = 0;
	calloc_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kcalloc_7,false,0\n");
	aunit_printf("#CASE_START_test_kcalloc_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			size=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			count=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kcalloc(_km,count,size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("kcalloc","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kmalloc","kmalloc_call_counter",kmalloc_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_kcalloc_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_kcalloc_up();

	switch(caseIndex){
	case 7:
		test_kcalloc_7();
		break;
	default:
		abnormal_kcalloc_case(caseIndex);
		break;
	}

	test_kcalloc_down();
}

