void test_der_tag_up(void);
void test_der_tag_down(void);


void test_der_tag_up(void){

	aunit_printf("\n##FUNCTION_START_der_tag\n");
 }

void test_der_tag_down(void){
	aunit_printf("\n##FUNCTION_END_der_tag\n");
 }



void abnormal_der_tag_case(int index);

void abnormal_der_tag_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_der_tag_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *buf;
	unsigned int len;
	unsigned int tag;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"ghi"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={30};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4294967295};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	strlcpy_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_der_tag_5,false,0\n");
	aunit_printf("#CASE_START_test_der_tag_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			tag=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = der_tag(buf,len,tag);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("der_tag","returnValue","0xffffffff",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_der_tag_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_der_tag_up();

	switch(caseIndex){
	case 5:
		test_der_tag_5();
		break;
	default:
		abnormal_der_tag_case(caseIndex);
		break;
	}

	test_der_tag_down();
}

