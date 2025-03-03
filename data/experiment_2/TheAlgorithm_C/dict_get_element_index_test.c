void test_get_element_index_up(void);
void test_get_element_index_down(void);


void test_get_element_index_up(void){

	aunit_printf("\n##FUNCTION_START_get_element_index\n");
 }

void test_get_element_index_down(void){
	aunit_printf("\n##FUNCTION_END_get_element_index\n");
 }



void abnormal_get_element_index_case(int index);

void abnormal_get_element_index_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_element_index_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dict;
	int index;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={500};
	unsigned int listLength_0=1;
	int valueList_1[]={1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_element_index_1,false,0\n");
	aunit_printf("#CASE_START_test_get_element_index_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dict_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_element_index(dict,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("get_element_index","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("get_element_index","(dict->elements)[500]","expected_element",(dict->elements)[500])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_get_element_index_1\n");
}

void test_get_element_index_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dict;
	int index;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={-1};
	unsigned int listLength_0=1;
	int valueList_1[]={1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_element_index_2,false,0\n");
	aunit_printf("#CASE_START_test_get_element_index_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dict_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_element_index(dict,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("get_element_index","returnValue","NULL",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_get_element_index_2\n");
}

void test_get_element_index_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dict;
	int index;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1000};
	unsigned int listLength_0=1;
	int valueList_1[]={1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_element_index_3,false,0\n");
	aunit_printf("#CASE_START_test_get_element_index_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dict_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_element_index(dict,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("get_element_index","returnValue","NULL",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_get_element_index_3\n");
}

void test_get_element_index_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dict;
	int index;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_element_index_4,false,0\n");
	aunit_printf("#CASE_START_test_get_element_index_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dict_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_element_index(dict,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("get_element_index","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("get_element_index","(dict->elements)[0]","expected_element",(dict->elements)[0])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_get_element_index_4\n");
}

void test_get_element_index_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dict;
	int index;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={999};
	unsigned int listLength_0=1;
	int valueList_1[]={1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_element_index_5,false,0\n");
	aunit_printf("#CASE_START_test_get_element_index_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dict_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_element_index(dict,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("get_element_index","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("get_element_index","(dict->elements)[999]","expected_element",(dict->elements)[999])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_get_element_index_5\n");
}

void test_get_element_index_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dict;
	int index;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={400};
	unsigned int listLength_0=1;
	int valueList_1[]={500};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_element_index_6,false,0\n");
	aunit_printf("#CASE_START_test_get_element_index_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dict_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_element_index(dict,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("get_element_index","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("get_element_index","(dict->elements)[400]","expected_element",(dict->elements)[400])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_get_element_index_6\n");
}

void test_get_element_index_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dict;
	int index;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	int valueList_0[]={600};
	unsigned int listLength_0=1;
	int valueList_1[]={500};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_element_index_7,false,0\n");
	aunit_printf("#CASE_START_test_get_element_index_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dict_PTRTO[0]).number_of_elements=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = get_element_index(dict,index);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("get_element_index","returnValue","NULL",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_get_element_index_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_element_index_up();

	switch(caseIndex){
	case 1:
		test_get_element_index_1();
		break;
	case 2:
		test_get_element_index_2();
		break;
	case 3:
		test_get_element_index_3();
		break;
	case 4:
		test_get_element_index_4();
		break;
	case 5:
		test_get_element_index_5();
		break;
	case 6:
		test_get_element_index_6();
		break;
	case 7:
		test_get_element_index_7();
		break;
	default:
		abnormal_get_element_index_case(caseIndex);
		break;
	}

	test_get_element_index_down();
}

