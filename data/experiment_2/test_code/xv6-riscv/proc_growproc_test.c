void test_growproc_up(void);
void test_growproc_down(void);


void test_growproc_up(void){

	aunit_printf("\n##FUNCTION_START_growproc\n");
 }

void test_growproc_down(void){
	aunit_printf("\n##FUNCTION_END_growproc\n");
 }



void abnormal_growproc_case(int index);

void abnormal_growproc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_growproc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	uvmdealloc_call_counter = 0;
	push_off_call_counter = 0;
	uvmalloc_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_growproc_1,false,0\n");
	aunit_printf("#CASE_START_test_growproc_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = growproc(n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("growproc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("uvmdealloc","uvmdealloc_call_counter",uvmdealloc_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("uvmalloc","uvmalloc_call_counter",uvmalloc_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_growproc_1\n");
}

void test_growproc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	uvmdealloc_call_counter = 0;
	push_off_call_counter = 0;
	uvmalloc_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_growproc_2,false,0\n");
	aunit_printf("#CASE_START_test_growproc_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = growproc(n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("growproc","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("uvmdealloc","uvmdealloc_call_counter",uvmdealloc_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("uvmalloc","uvmalloc_call_counter",uvmalloc_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_growproc_2\n");
}

void test_growproc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={-10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	uvmdealloc_call_counter = 0;
	push_off_call_counter = 0;
	uvmalloc_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_growproc_3,false,0\n");
	aunit_printf("#CASE_START_test_growproc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = growproc(n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("growproc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("uvmdealloc","uvmdealloc_call_counter",uvmdealloc_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("uvmalloc","uvmalloc_call_counter",uvmalloc_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_growproc_3\n");
}

void test_growproc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	mycpu_call_counter = 0;
	uvmdealloc_call_counter = 0;
	push_off_call_counter = 0;
	uvmalloc_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_growproc_4,false,0\n");
	aunit_printf("#CASE_START_test_growproc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			n=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = growproc(n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("growproc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("uvmdealloc","uvmdealloc_call_counter",uvmdealloc_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("uvmalloc","uvmalloc_call_counter",uvmalloc_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_growproc_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_growproc_up();

	switch(caseIndex){
	case 1:
		test_growproc_1();
		break;
	case 2:
		test_growproc_2();
		break;
	case 3:
		test_growproc_3();
		break;
	case 4:
		test_growproc_4();
		break;
	default:
		abnormal_growproc_case(caseIndex);
		break;
	}

	test_growproc_down();
}

