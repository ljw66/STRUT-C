void test_add_up(void);
void test_add_down(void);


void test_add_up(void){

	aunit_printf("\n##FUNCTION_START_add\n");
 }

void test_add_down(void){
	aunit_printf("\n##FUNCTION_END_add\n");
 }



void abnormal_add_case(int index);

void abnormal_add_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_add_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	dynamic_array_t *da;
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	dynamic_array_t *valueList_0[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	void **valueList_2[]={(void * *)0x1000};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={2};
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
	retrive_copy_of_value_call_counter = 0;
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_1,false,0\n");
	aunit_printf("#CASE_START_test_add_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			da=(dynamic_array_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).items=(void * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add(da,value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("add","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->size",3,da->size)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("retrive_copy_of_value","retrive_copy_of_value_call_counter",retrive_copy_of_value_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_add_1\n");
}

void test_add_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	dynamic_array_t *da;
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	dynamic_array_t *valueList_0[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	void **valueList_2[]={(void * *)0x1000};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
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
	retrive_copy_of_value_call_counter = 0;
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_2,false,0\n");
	aunit_printf("#CASE_START_test_add_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			da=(dynamic_array_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).items=(void * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add(da,value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("add","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("add","da->items",0x4000,da->items)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->size",5,da->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->capacity",8,da->capacity)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("retrive_copy_of_value","retrive_copy_of_value_call_counter",retrive_copy_of_value_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_add_2\n");
}

void test_add_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	dynamic_array_t *da;
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	dynamic_array_t *valueList_0[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	void **valueList_2[]={(void * *)0x1000};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
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
	retrive_copy_of_value_call_counter = 0;
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_3,false,0\n");
	aunit_printf("#CASE_START_test_add_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			da=(dynamic_array_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).items=(void * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add(da,value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("add","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("add","da->items",0x1000,da->items)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->size",4,da->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->capacity",4,da->capacity)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("retrive_copy_of_value","retrive_copy_of_value_call_counter",retrive_copy_of_value_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_add_3\n");
}

void test_add_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	dynamic_array_t *da;
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	dynamic_array_t *valueList_0[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	void **valueList_2[]={(void * *)0x1000};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={2};
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
	retrive_copy_of_value_call_counter = 0;
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_4,false,0\n");
	aunit_printf("#CASE_START_test_add_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			da=(dynamic_array_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).items=(void * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add(da,value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("add","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->size",2,da->size)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("retrive_copy_of_value","retrive_copy_of_value_call_counter",retrive_copy_of_value_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_add_4\n");
}

void test_add_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	dynamic_array_t *da;
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	dynamic_array_t *valueList_0[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	void **valueList_2[]={(void * *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
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
	retrive_copy_of_value_call_counter = 0;
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_add_5,false,0\n");
	aunit_printf("#CASE_START_test_add_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			da=(dynamic_array_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).items=(void * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = add(da,value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("add","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("add","da->items",0x4000,da->items)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->size",1,da->size)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("add","da->capacity",1,da->capacity)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("retrive_copy_of_value","retrive_copy_of_value_call_counter",retrive_copy_of_value_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_add_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_add_up();

	switch(caseIndex){
	case 1:
		test_add_1();
		break;
	case 2:
		test_add_2();
		break;
	case 3:
		test_add_3();
		break;
	case 4:
		test_add_4();
		break;
	case 5:
		test_add_5();
		break;
	default:
		abnormal_add_case(caseIndex);
		break;
	}

	test_add_down();
}

