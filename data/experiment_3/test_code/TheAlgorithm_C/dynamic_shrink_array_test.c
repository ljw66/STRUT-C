void test_shrink_array_up(void);
void test_shrink_array_down(void);


void test_shrink_array_up(void){

	aunit_printf("\n##FUNCTION_START_shrink_array\n");
 }

void test_shrink_array_down(void){
	aunit_printf("\n##FUNCTION_END_shrink_array\n");
 }



void abnormal_shrink_array_case(int index);

void abnormal_shrink_array_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_shrink_array_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *ptr;
	int cap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *returnValue = 0;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	DArrayStack *valueList_1[]={(DArrayStack *)ptr_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={4};
	unsigned int listLength_3=1;
	int *valueList_4[]={(int *)0x1000};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_shrink_array_1,false,0\n");
	aunit_printf("#CASE_START_test_shrink_array_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cap=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ptr=(DArrayStack *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ptr_PTRTO[0]).capacity=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ptr_PTRTO[0]).top=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ptr_PTRTO[0]).arrPtr=(int *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = shrink_array(ptr,cap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("shrink_array","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_shrink_array_1\n");
}

void test_shrink_array_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *ptr;
	int cap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *returnValue = 0;

	//ֵ�������
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	DArrayStack *valueList_1[]={(DArrayStack *)ptr_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int *valueList_4[]={(int *)0x1000};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_shrink_array_2,false,0\n");
	aunit_printf("#CASE_START_test_shrink_array_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cap=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ptr=(DArrayStack *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ptr_PTRTO[0]).capacity=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ptr_PTRTO[0]).top=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ptr_PTRTO[0]).arrPtr=(int *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = shrink_array(ptr,cap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("shrink_array","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_shrink_array_2\n");
}

void test_shrink_array_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *ptr;
	int cap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *returnValue = 0;

	//ֵ�������
	int valueList_0[]={8};
	unsigned int listLength_0=1;
	DArrayStack *valueList_1[]={(DArrayStack *)ptr_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={8};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	int *valueList_4[]={(int *)0x1000};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_shrink_array_3,false,0\n");
	aunit_printf("#CASE_START_test_shrink_array_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cap=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ptr=(DArrayStack *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ptr_PTRTO[0]).capacity=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ptr_PTRTO[0]).top=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ptr_PTRTO[0]).arrPtr=(int *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = shrink_array(ptr,cap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("shrink_array","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_shrink_array_3\n");
}

void test_shrink_array_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *ptr;
	int cap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *returnValue = 0;

	//ֵ�������
	int valueList_0[]={6};
	unsigned int listLength_0=1;
	DArrayStack *valueList_1[]={(DArrayStack *)ptr_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={6};
	unsigned int listLength_2=1;
	int valueList_3[]={-1};
	unsigned int listLength_3=1;
	int *valueList_4[]={(int *)0x1000};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_shrink_array_4,false,0\n");
	aunit_printf("#CASE_START_test_shrink_array_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cap=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ptr=(DArrayStack *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ptr_PTRTO[0]).capacity=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ptr_PTRTO[0]).top=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ptr_PTRTO[0]).arrPtr=(int *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = shrink_array(ptr,cap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("shrink_array","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_shrink_array_4\n");
}

void test_shrink_array_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *ptr;
	int cap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	DArrayStack *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1000};
	unsigned int listLength_0=1;
	DArrayStack *valueList_1[]={(DArrayStack *)ptr_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1000};
	unsigned int listLength_2=1;
	int valueList_3[]={999};
	unsigned int listLength_3=1;
	int *valueList_4[]={(int *)0x1000};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_shrink_array_5,false,0\n");
	aunit_printf("#CASE_START_test_shrink_array_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cap=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ptr=(DArrayStack *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ptr_PTRTO[0]).capacity=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ptr_PTRTO[0]).top=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ptr_PTRTO[0]).arrPtr=(int *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = shrink_array(ptr,cap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("shrink_array","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_shrink_array_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_shrink_array_up();

	switch(caseIndex){
	case 1:
		test_shrink_array_1();
		break;
	case 2:
		test_shrink_array_2();
		break;
	case 3:
		test_shrink_array_3();
		break;
	case 4:
		test_shrink_array_4();
		break;
	case 5:
		test_shrink_array_5();
		break;
	default:
		abnormal_shrink_array_case(caseIndex);
		break;
	}

	test_shrink_array_down();
}

