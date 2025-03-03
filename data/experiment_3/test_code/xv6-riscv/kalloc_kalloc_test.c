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

void test_kalloc_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	release_call_counter = 0;
	acquire_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kalloc_5,false,0\n");
	aunit_printf("#CASE_START_test_kalloc_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kalloc();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("kalloc","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_kalloc_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_kalloc_up();

	switch(caseIndex){
	case 5:
		test_kalloc_5();
		break;
	default:
		abnormal_kalloc_case(caseIndex);
		break;
	}

	test_kalloc_down();
}

