void test_getlen_up(void);
void test_getlen_down(void);


void test_getlen_up(void){

	aunit_printf("\n##FUNCTION_START_getlen\n");
 }

void test_getlen_down(void){
	aunit_printf("\n##FUNCTION_END_getlen\n");
 }



void abnormal_getlen_case(int index);

void abnormal_getlen_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getlen_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0x00000000};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"0x12345678"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getlen_7,false,0\n");
	aunit_printf("#CASE_START_test_getlen_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			simh_bo.u=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = getlen(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","simh_bo.u",0x00000000,simh_bo.u)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlen","returnValue",0xffffffff,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_getlen_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_getlen_up();

	switch(caseIndex){
	case 7:
		test_getlen_7();
		break;
	default:
		abnormal_getlen_case(caseIndex);
		break;
	}

	test_getlen_down();
}

