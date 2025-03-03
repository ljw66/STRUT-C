void test_kalloc_up(void);
void test_kalloc_down(void);


void test_kalloc_up(void){

	aunit_printf("\n##FUNCTION_START_kalloc\n");
 }

void test_kalloc_down(void){
	aunit_printf("\n##FUNCTION_END_kalloc\n");
 }



void abnormal_kalloc_case(int index);

void abnormal_kalloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kalloc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	struct run *valueList_0[]={(struct run *)0x4000};
	unsigned int listLength_0=1;
	struct run *valueList_1[]={(struct run *)0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kalloc_4,false,0\n");
	aunit_printf("#CASE_START_test_kalloc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			kmem.freelist=(struct run *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			kmem.freelist->next=(struct run *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			kmem.lock.locked=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = kalloc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("kalloc","returnValue","0x4000",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_kalloc_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_kalloc_up();

	switch(caseIndex){
	case 4:
		test_kalloc_4();
		break;
	default:
		abnormal_kalloc_case(caseIndex);
		break;
	}

	test_kalloc_down();
}

