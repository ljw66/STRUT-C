void test_List_push_up(void);
void test_List_push_down(void);


void test_List_push_up(void){

	aunit_printf("\n##FUNCTION_START_List_push\n");
 }

void test_List_push_down(void){
	aunit_printf("\n##FUNCTION_END_List_push\n");
 }



void abnormal_List_push_case(int index);

void abnormal_List_push_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_List_push_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;
	void *val;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	List_T returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x5678};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1234};
	unsigned int listLength_1=1;
	struct List_T *valueList_2[]={(struct List_T *)&struct_List_T1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_push_1,false,0\n");
	aunit_printf("#CASE_START_test_List_push_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(list_PTRTO[0]).val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).next=(struct List_T *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = List_push(list,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_push","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_List_push_1\n");
}

void test_List_push_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;
	void *val;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	List_T returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x5678};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_push_2,false,0\n");
	aunit_printf("#CASE_START_test_List_push_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			list=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = List_push(list,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_push","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_List_push_2\n");
}

void test_List_push_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;
	void *val;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	List_T returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x5678};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1234};
	unsigned int listLength_1=1;
	struct List_T *valueList_2[]={(struct List_T *)&struct_List_T1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_push_3,false,0\n");
	aunit_printf("#CASE_START_test_List_push_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(list_PTRTO[0]).val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).next=(struct List_T *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = List_push(list,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_push","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_List_push_3\n");
}

void test_List_push_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;
	void *val;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	List_T returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1234};
	unsigned int listLength_1=1;
	struct List_T *valueList_2[]={(struct List_T *)&struct_List_T1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_push_4,false,0\n");
	aunit_printf("#CASE_START_test_List_push_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(list_PTRTO[0]).val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).next=(struct List_T *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = List_push(list,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_push","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_List_push_4\n");
}

void test_List_push_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct List_T *list;
	void *val;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	List_T returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)0x5678};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1234};
	unsigned int listLength_1=1;
	struct List_T *valueList_2[]={(struct List_T *)0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_push_5,false,0\n");
	aunit_printf("#CASE_START_test_List_push_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(list_PTRTO[0]).val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).next=(struct List_T *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = List_push(list,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("List_push","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_List_push_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_List_push_up();

	switch(caseIndex){
	case 1:
		test_List_push_1();
		break;
	case 2:
		test_List_push_2();
		break;
	case 3:
		test_List_push_3();
		break;
	case 4:
		test_List_push_4();
		break;
	case 5:
		test_List_push_5();
		break;
	default:
		abnormal_List_push_case(caseIndex);
		break;
	}

	test_List_push_down();
}

