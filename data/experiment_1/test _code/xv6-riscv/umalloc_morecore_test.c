void test_morecore_up(void);
void test_morecore_down(void);


void test_morecore_up(void){

	aunit_printf("\n##FUNCTION_START_morecore\n");
 }

void test_morecore_down(void){
	aunit_printf("\n##FUNCTION_END_morecore\n");
 }



void abnormal_morecore_case(int index);

void abnormal_morecore_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_morecore_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Header *returnValue = 0;

	//ֵ�������
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2000};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_1,false,0\n");
	aunit_printf("#CASE_START_test_morecore_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_1\n");
}

void test_morecore_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Header *returnValue = 0;

	//ֵ�������
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4096};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_2,false,0\n");
	aunit_printf("#CASE_START_test_morecore_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_2\n");
}

void test_morecore_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Header *returnValue = 0;

	//ֵ�������
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5000};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_3,false,0\n");
	aunit_printf("#CASE_START_test_morecore_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("morecore","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_3\n");
}

void test_morecore_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int nu;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Header *returnValue = 0;

	//ֵ�������
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1000};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	sbrk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_morecore_4,false,0\n");
	aunit_printf("#CASE_START_test_morecore_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nu=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(freep_PTRTO[0]).x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = morecore(nu);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("morecore","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)

	aunit_printf("#CASE_END_test_morecore_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_morecore_up();

	switch(caseIndex){
	case 1:
		test_morecore_1();
		break;
	case 2:
		test_morecore_2();
		break;
	case 3:
		test_morecore_3();
		break;
	case 4:
		test_morecore_4();
		break;
	default:
		abnormal_morecore_case(caseIndex);
		break;
	}

	test_morecore_down();
}

