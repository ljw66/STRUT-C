void test_cdf_grow_info_up(void);
void test_cdf_grow_info_down(void);


void test_cdf_grow_info_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_grow_info\n");
 }

void test_cdf_grow_info_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_grow_info\n");
 }



void abnormal_cdf_grow_info_case(int index);

void abnormal_cdf_grow_info_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_grow_info_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_property_info_t *returnValue = 0;

	//ֵ�������
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={10};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxcount_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			maxcount_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",123456,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_3\n");
}

void test_cdf_grow_info_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_property_info_t *returnValue = 0;

	//ֵ�������
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxcount_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			maxcount_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_4\n");
}

void test_cdf_grow_info_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_property_info_t **info;
	size_t *maxcount;
	unsigned int incr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_property_info_t *returnValue = 0;

	//ֵ�������
	size_t *valueList_0[]={(size_t *)maxcount_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//*info is an invalid expression 
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={10};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	cdf_realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_grow_info_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_grow_info_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			maxcount=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			incr=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxcount_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			maxcount_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_grow_info(info,maxcount,incr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("cdf_grow_info","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_realloc","cdf_realloc_call_counter",cdf_realloc_call_counter)

	aunit_printf("#CASE_END_test_cdf_grow_info_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_grow_info_up();

	switch(caseIndex){
	case 3:
		test_cdf_grow_info_3();
		break;
	case 4:
		test_cdf_grow_info_4();
		break;
	case 5:
		test_cdf_grow_info_5();
		break;
	default:
		abnormal_cdf_grow_info_case(caseIndex);
		break;
	}

	test_cdf_grow_info_down();
}

