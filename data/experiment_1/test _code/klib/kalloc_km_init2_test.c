void test_km_init2_up(void);
void test_km_init2_down(void);


void test_km_init2_up(void){

	aunit_printf("\n##FUNCTION_START_km_init2\n");
 }

void test_km_init2_down(void){
	aunit_printf("\n##FUNCTION_END_km_init2\n");
 }



void abnormal_km_init2_case(int index);

void abnormal_km_init2_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_init2_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km_par;
	unsigned int min_core_size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	kcalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init2_1,false,0\n");
	aunit_printf("#CASE_START_test_km_init2_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			min_core_size=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = km_init2(km_par,min_core_size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("km_init2","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kcalloc","kcalloc_call_counter",kcalloc_call_counter)

	aunit_printf("#CASE_END_test_km_init2_1\n");
}

void test_km_init2_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km_par;
	unsigned int min_core_size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x2000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	kcalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init2_2,false,0\n");
	aunit_printf("#CASE_START_test_km_init2_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			min_core_size=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			km_par=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = km_init2(km_par,min_core_size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("km_init2","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kcalloc","kcalloc_call_counter",kcalloc_call_counter)

	aunit_printf("#CASE_END_test_km_init2_2\n");
}

void test_km_init2_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km_par;
	unsigned int min_core_size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={1024};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	kcalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init2_3,false,0\n");
	aunit_printf("#CASE_START_test_km_init2_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			min_core_size=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = km_init2(km_par,min_core_size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("km_init2","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kcalloc","kcalloc_call_counter",kcalloc_call_counter)

	aunit_printf("#CASE_END_test_km_init2_3\n");
}

void test_km_init2_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km_par;
	unsigned int min_core_size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={2048};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x5000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	kcalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init2_4,false,0\n");
	aunit_printf("#CASE_START_test_km_init2_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			min_core_size=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			km_par=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = km_init2(km_par,min_core_size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("km_init2","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kcalloc","kcalloc_call_counter",kcalloc_call_counter)

	aunit_printf("#CASE_END_test_km_init2_4\n");
}

void test_km_init2_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km_par;
	unsigned int min_core_size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	kcalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init2_5,false,0\n");
	aunit_printf("#CASE_START_test_km_init2_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			min_core_size=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = km_init2(km_par,min_core_size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("km_init2","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kcalloc","kcalloc_call_counter",kcalloc_call_counter)

	aunit_printf("#CASE_END_test_km_init2_5\n");
}

void test_km_init2_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *km_par;
	unsigned int min_core_size;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x7000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	kcalloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_init2_6,false,0\n");
	aunit_printf("#CASE_START_test_km_init2_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			min_core_size=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			km_par=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = km_init2(km_par,min_core_size);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("km_init2","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kcalloc","kcalloc_call_counter",kcalloc_call_counter)

	aunit_printf("#CASE_END_test_km_init2_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_init2_up();

	switch(caseIndex){
	case 1:
		test_km_init2_1();
		break;
	case 2:
		test_km_init2_2();
		break;
	case 3:
		test_km_init2_3();
		break;
	case 4:
		test_km_init2_4();
		break;
	case 5:
		test_km_init2_5();
		break;
	case 6:
		test_km_init2_6();
		break;
	default:
		abnormal_km_init2_case(caseIndex);
		break;
	}

	test_km_init2_down();
}

