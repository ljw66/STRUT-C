void test_grow_up(void);
void test_grow_down(void);


void test_grow_up(void){

	aunit_printf("\n##FUNCTION_START_grow\n");
 }

void test_grow_down(void){
	aunit_printf("\n##FUNCTION_END_grow\n");
 }



void abnormal_grow_case(int index);

void abnormal_grow_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_grow_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_grow_2,false,0\n");
	aunit_printf("#CASE_START_test_grow_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			max=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*array=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		grow();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("grow","max",20,max)
	TEST_ASSERT_EQUAL_LONG("grow","*array","0x1000",*array)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_grow_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_grow_up();

	switch(caseIndex){
	case 2:
		test_grow_2();
		break;
	default:
		abnormal_grow_case(caseIndex);
		break;
	}

	test_grow_down();
}

