void test_cdf_file_catalog_up(void);
void test_cdf_file_catalog_down(void);


void test_cdf_file_catalog_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_file_catalog\n");
 }

void test_cdf_file_catalog_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_file_catalog\n");
 }



void abnormal_cdf_file_catalog_case(int index);

void abnormal_cdf_file_catalog_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_file_catalog_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	cdf_header_t *h;
	cdf_stream_t *sst;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_stream_t *valueList_0[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_header_t *valueList_2[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={16};
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
	file_printf_call_counter = 0;
	cdf_u16tos8_call_counter = 0;
	cdf_unpack_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sst=(cdf_stream_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			h=(cdf_header_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).flags=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_file_catalog(ms,h,sst);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("cdf_u16tos8","cdf_u16tos8_call_counter",cdf_u16tos8_call_counter)
	OB_INT_EXPR("cdf_unpack_catalog","cdf_unpack_catalog_call_counter",cdf_unpack_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_2\n");
}

void test_cdf_file_catalog_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	cdf_header_t *h;
	cdf_stream_t *sst;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_stream_t *valueList_0[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_header_t *valueList_2[]={(cdf_header_t *)h_PTRTO};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	file_printf_call_counter = 0;
	cdf_u16tos8_call_counter = 0;
	cdf_unpack_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sst=(cdf_stream_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			h=(cdf_header_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).flags=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_file_catalog(ms,h,sst);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("cdf_u16tos8","cdf_u16tos8_call_counter",cdf_u16tos8_call_counter)
	OB_INT_EXPR("cdf_unpack_catalog","cdf_unpack_catalog_call_counter",cdf_unpack_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_3\n");
}

void test_cdf_file_catalog_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	cdf_header_t *h;
	cdf_stream_t *sst;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_stream_t *valueList_0[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_header_t *valueList_2[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)1};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={12345};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	file_printf_call_counter = 0;
	cdf_u16tos8_call_counter = 0;
	cdf_unpack_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sst=(cdf_stream_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			h=(cdf_header_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sst_PTRTO[0]).sst_tab=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).flags=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = cdf_file_catalog(ms,h,sst);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("cdf_u16tos8","cdf_u16tos8_call_counter",cdf_u16tos8_call_counter)
	OB_INT_EXPR("cdf_unpack_catalog","cdf_unpack_catalog_call_counter",cdf_unpack_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_4\n");
}

void test_cdf_file_catalog_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	cdf_header_t *h;
	cdf_stream_t *sst;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_stream_t *valueList_0[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_header_t *valueList_2[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)1};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={12345};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	file_printf_call_counter = 0;
	cdf_u16tos8_call_counter = 0;
	cdf_unpack_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sst=(cdf_stream_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			h=(cdf_header_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sst_PTRTO[0]).sst_tab=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).flags=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = cdf_file_catalog(ms,h,sst);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("cdf_u16tos8","cdf_u16tos8_call_counter",cdf_u16tos8_call_counter)
	OB_INT_EXPR("cdf_unpack_catalog","cdf_unpack_catalog_call_counter",cdf_unpack_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_file_catalog_up();

	switch(caseIndex){
	case 2:
		test_cdf_file_catalog_2();
		break;
	case 3:
		test_cdf_file_catalog_3();
		break;
	case 4:
		test_cdf_file_catalog_4();
		break;
	case 5:
		test_cdf_file_catalog_5();
		break;
	default:
		abnormal_cdf_file_catalog_case(caseIndex);
		break;
	}

	test_cdf_file_catalog_down();
}

