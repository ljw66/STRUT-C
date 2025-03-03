void test_simh_parse_up(void);
void test_simh_parse_down(void);


void test_simh_parse_up(void){

	aunit_printf("\n##FUNCTION_START_simh_parse\n");
 }

void test_simh_parse_down(void){
	aunit_printf("\n##FUNCTION_END_simh_parse\n");
 }



void abnormal_simh_parse_case(int index);

void abnormal_simh_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_simh_parse_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *uc;
	unsigned char *ue;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abcdef"};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	getlen_call_counter = 0;

	aunit_printf("###TEST_TREE_test_simh_parse_8,false,0\n");
	aunit_printf("#CASE_START_test_simh_parse_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uc=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			simh_bo.u=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = simh_parse(uc,ue);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("simh_parse","simh_bo.u",67305985,simh_bo.u)
	TEST_ASSERT_EQUAL_INT("simh_parse","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("getlen","getlen_call_counter",getlen_call_counter)

	aunit_printf("#CASE_END_test_simh_parse_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_simh_parse_up();

	switch(caseIndex){
	case 8:
		test_simh_parse_8();
		break;
	default:
		abnormal_simh_parse_case(caseIndex);
		break;
	}

	test_simh_parse_down();
}

