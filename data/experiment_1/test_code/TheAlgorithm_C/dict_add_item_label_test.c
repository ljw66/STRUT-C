void test_add_item_label_up(void);
void test_add_item_label_down(void);


void test_add_item_label_up(void){

	aunit_printf("\n##FUNCTION_START_add_item_label\n");
 }

void test_add_item_label_down(void){
	aunit_printf("\n##FUNCTION_END_add_item_label\n");
 }



void abnormal_add_item_label_case(int index);

void abnormal_add_item_label_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_add_item_label_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dic;
	char *label;
	void *item;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x12345678};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"testLabel"};
	unsigned int listLength_1=1;
	Dictionary *valueList_2[]={(Dictionary *)dic_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_1,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			item=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			label=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			dic=(Dictionary *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("add_item_label","(dic->elements)[500]","0x12345678",(dic->elements)[500])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_1\n");
}

void test_add_item_label_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dic;
	char *label;
	void *item;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x98765432};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"outOfBoundsLabel"};
	unsigned int listLength_1=1;
	Dictionary *valueList_2[]={(Dictionary *)dic_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_2,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			item=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			label=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			dic=(Dictionary *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_2\n");
}

void test_add_item_label_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dic;
	char *label;
	void *item;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x55555555};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"boundaryLabel"};
	unsigned int listLength_1=1;
	Dictionary *valueList_2[]={(Dictionary *)dic_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_3,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			item=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			label=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			dic=(Dictionary *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("add_item_label","(dic->elements)[999]","0x55555555",(dic->elements)[999])
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_3\n");
}

void test_add_item_label_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dic;
	char *label;
	void *item;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x11111111};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"minIndexLabel"};
	unsigned int listLength_1=1;
	Dictionary *valueList_2[]={(Dictionary *)dic_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_4,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			item=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			label=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			dic=(Dictionary *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("add_item_label","(dic->elements)[0]","0x11111111",(dic->elements)[0])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_4\n");
}

void test_add_item_label_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *dic;
	char *label;
	void *item;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x22222222};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"negativeIndexLabel"};
	unsigned int listLength_1=1;
	Dictionary *valueList_2[]={(Dictionary *)dic_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	get_hash_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_item_label_5,false,0\n");
	aunit_printf("#CASE_START_test_add_item_label_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			item=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			label=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			dic=(Dictionary *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(dic_PTRTO[0]).number_of_elements=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add_item_label(dic,label,item);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("add_item_label","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_hash","get_hash_call_counter",get_hash_call_counter)

	aunit_printf("#CASE_END_test_add_item_label_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_add_item_label_up();

	switch(caseIndex){
	case 1:
		test_add_item_label_1();
		break;
	case 2:
		test_add_item_label_2();
		break;
	case 3:
		test_add_item_label_3();
		break;
	case 4:
		test_add_item_label_4();
		break;
	case 5:
		test_add_item_label_5();
		break;
	default:
		abnormal_add_item_label_case(caseIndex);
		break;
	}

	test_add_item_label_down();
}

