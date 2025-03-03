void test_base64DecodeSymbol_up(void);
void test_base64DecodeSymbol_down(void);


void test_base64DecodeSymbol_up(void){

	aunit_printf("\n##FUNCTION_START_base64DecodeSymbol\n");
 }

void test_base64DecodeSymbol_down(void){
	aunit_printf("\n##FUNCTION_END_base64DecodeSymbol\n");
 }



void abnormal_base64DecodeSymbol_case(int index);

void abnormal_base64DecodeSymbol_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_base64DecodeSymbol_12(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char alpha;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'5'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=12;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_base64DecodeSymbol_12,false,0\n");
	aunit_printf("#CASE_START_test_base64DecodeSymbol_12\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			alpha=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = base64DecodeSymbol(alpha);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("base64DecodeSymbol","returnValue",57,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_base64DecodeSymbol_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_base64DecodeSymbol_up();

	switch(caseIndex){
	case 12:
		test_base64DecodeSymbol_12();
		break;
	default:
		abnormal_base64DecodeSymbol_case(caseIndex);
		break;
	}

	test_base64DecodeSymbol_down();
}

