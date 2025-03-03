void test_base64_decode_up(void);
void test_base64_decode_down(void);


void test_base64_decode_up(void){

	aunit_printf("\n##FUNCTION_START_base64_decode\n");
 }

void test_base64_decode_down(void){
	aunit_printf("\n##FUNCTION_END_base64_decode\n");
 }



void abnormal_base64_decode_case(int index);

void abnormal_base64_decode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_base64_decode_12(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={8};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"YWJj\nZGVm"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"abcdefgh"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=12;
	//��ʼ����׮�������ü�����
	revchar_call_counter = 0;

	aunit_printf("###TEST_TREE_test_base64_decode_12,false,0\n");
	aunit_printf("#CASE_START_test_base64_decode_12\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = base64_decode(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("base64_decode","returnValue",6,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("revchar","revchar_call_counter",revchar_call_counter)

	aunit_printf("#CASE_END_test_base64_decode_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_base64_decode_up();

	switch(caseIndex){
	case 12:
		test_base64_decode_12();
		break;
	default:
		abnormal_base64_decode_case(caseIndex);
		break;
	}

	test_base64_decode_down();
}

