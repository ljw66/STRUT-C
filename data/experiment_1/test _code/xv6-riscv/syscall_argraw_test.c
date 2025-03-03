void test_argraw_up(void);
void test_argraw_down(void);


void test_argraw_up(void){

	aunit_printf("\n##FUNCTION_START_argraw\n");
 }

void test_argraw_down(void){
	aunit_printf("\n##FUNCTION_END_argraw\n");
 }



void abnormal_argraw_case(int index);

void abnormal_argraw_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_argraw_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64 returnValue = 0;

	//ֵ�������
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	panic_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_argraw_8,false,0\n");
	aunit_printf("#CASE_START_test_argraw_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = argraw(n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("argraw","returnValue",4321,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_argraw_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_argraw_up();

	switch(caseIndex){
	case 8:
		test_argraw_8();
		break;
	default:
		abnormal_argraw_case(caseIndex);
		break;
	}

	test_argraw_down();
}

