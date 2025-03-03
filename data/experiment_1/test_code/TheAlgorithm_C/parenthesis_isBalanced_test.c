void test_isBalanced_up(void);
void test_isBalanced_down(void);


void test_isBalanced_up(void){

	aunit_printf("\n##FUNCTION_START_isBalanced\n");
 }

void test_isBalanced_down(void){
	aunit_printf("\n##FUNCTION_END_isBalanced\n");
 }



void abnormal_isBalanced_case(int index);

void abnormal_isBalanced_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_isBalanced_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_isBalanced_3,false,0\n");
	aunit_printf("#CASE_START_test_isBalanced_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = isBalanced(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isBalanced","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_INT("isBalanced","c",0,c)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_isBalanced_3\n");
}

void test_isBalanced_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"{"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_isBalanced_4,false,0\n");
	aunit_printf("#CASE_START_test_isBalanced_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = isBalanced(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isBalanced","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isBalanced","c",1,c)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_isBalanced_4\n");
}

void test_isBalanced_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"}"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	pop_call_counter = 0;
	push_call_counter = 0;

	aunit_printf("###TEST_TREE_test_isBalanced_5,false,0\n");
	aunit_printf("#CASE_START_test_isBalanced_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = isBalanced(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("isBalanced","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("isBalanced","c",0,c)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("pop","pop_call_counter",pop_call_counter)
	OB_INT_EXPR("push","push_call_counter",push_call_counter)

	aunit_printf("#CASE_END_test_isBalanced_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_isBalanced_up();

	switch(caseIndex){
	case 3:
		test_isBalanced_3();
		break;
	case 4:
		test_isBalanced_4();
		break;
	case 5:
		test_isBalanced_5();
		break;
	default:
		abnormal_isBalanced_case(caseIndex);
		break;
	}

	test_isBalanced_down();
}

