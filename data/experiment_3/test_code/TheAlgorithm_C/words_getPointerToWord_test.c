void test_getPointerToWord_up(void);
void test_getPointerToWord_down(void);


void test_getPointerToWord_up(void){

	aunit_printf("\n##FUNCTION_START_getPointerToWord\n");
 }

void test_getPointerToWord_down(void){
	aunit_printf("\n##FUNCTION_END_getPointerToWord\n");
 }



void abnormal_getPointerToWord_case(int index);

void abnormal_getPointerToWord_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getPointerToWord_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *word;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"test"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	strcpy_call_counter = 0;
	endProgramAbruptly_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getPointerToWord_2,false,0\n");
	aunit_printf("#CASE_START_test_getPointerToWord_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			word=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = getPointerToWord(word);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("getPointerToWord","returnValue","0",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("strcpy","strcpy_call_counter",strcpy_call_counter)
	OB_INT_EXPR("endProgramAbruptly","endProgramAbruptly_call_counter",endProgramAbruptly_call_counter)

	aunit_printf("#CASE_END_test_getPointerToWord_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_getPointerToWord_up();

	switch(caseIndex){
	case 2:
		test_getPointerToWord_2();
		break;
	default:
		abnormal_getPointerToWord_case(caseIndex);
		break;
	}

	test_getPointerToWord_down();
}

