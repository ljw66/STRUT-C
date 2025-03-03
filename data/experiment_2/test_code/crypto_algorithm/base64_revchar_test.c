void test_revchar_up(void);
void test_revchar_down(void);


void test_revchar_up(void){

	aunit_printf("\n##FUNCTION_START_revchar\n");
 }

void test_revchar_down(void){
	aunit_printf("\n##FUNCTION_END_revchar\n");
 }



void abnormal_revchar_case(int index);

void abnormal_revchar_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_revchar_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char ch;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE returnValue = 0;

	//ֵ�������
	char valueList_0[]={'5'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_revchar_10,false,0\n");
	aunit_printf("#CASE_START_test_revchar_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ch=(char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = revchar(ch);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("revchar","returnValue",57,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_revchar_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_revchar_up();

	switch(caseIndex){
	case 10:
		test_revchar_10();
		break;
	default:
		abnormal_revchar_case(caseIndex);
		break;
	}

	test_revchar_down();
}

