void test_SubWord_up(void);
void test_SubWord_down(void);


void test_SubWord_up(void){

	aunit_printf("\n##FUNCTION_START_SubWord\n");
 }

void test_SubWord_down(void){
	aunit_printf("\n##FUNCTION_END_SubWord\n");
 }



void abnormal_SubWord_case(int index);

void abnormal_SubWord_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_SubWord_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int word;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	WORD returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_SubWord_1,false,0\n");
	aunit_printf("#CASE_START_test_SubWord_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			word=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = SubWord(word);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("SubWord","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_SubWord_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_SubWord_up();

	switch(caseIndex){
	case 1:
		test_SubWord_1();
		break;
	default:
		abnormal_SubWord_case(caseIndex);
		break;
	}

	test_SubWord_down();
}

