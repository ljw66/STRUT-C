void test_deletion_up(void);
void test_deletion_down(void);


void test_deletion_up(void){

	aunit_printf("\n##FUNCTION_START_deletion\n");
 }

void test_deletion_down(void){
	aunit_printf("\n##FUNCTION_END_deletion\n");
 }



void abnormal_deletion_case(int index);

void abnormal_deletion_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_deletion_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int pos;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_deletion_1,false,0\n");
	aunit_printf("#CASE_START_test_deletion_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pos=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = deletion(pos);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("deletion","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_deletion_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_deletion_up();

	switch(caseIndex){
	case 1:
		test_deletion_1();
		break;
	default:
		abnormal_deletion_case(caseIndex);
		break;
	}

	test_deletion_down();
}

