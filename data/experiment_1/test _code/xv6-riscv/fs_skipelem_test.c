void test_skipelem_up(void);
void test_skipelem_down(void);


void test_skipelem_up(void){

	aunit_printf("\n##FUNCTION_START_skipelem\n");
 }

void test_skipelem_down(void){
	aunit_printf("\n##FUNCTION_END_skipelem\n");
 }



void abnormal_skipelem_case(int index);

void abnormal_skipelem_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_skipelem_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;
	char *name;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"///"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	memmove_call_counter = 0;

	aunit_printf("###TEST_TREE_test_skipelem_4,false,0\n");
	aunit_printf("#CASE_START_test_skipelem_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = skipelem(path,name);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("skipelem","returnValue","0",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)

	aunit_printf("#CASE_END_test_skipelem_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_skipelem_up();

	switch(caseIndex){
	case 4:
		test_skipelem_4();
		break;
	default:
		abnormal_skipelem_case(caseIndex);
		break;
	}

	test_skipelem_down();
}

