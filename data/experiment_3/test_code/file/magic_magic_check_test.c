void test_magic_check_up(void);
void test_magic_check_down(void);


void test_magic_check_up(void){

	aunit_printf("\n##FUNCTION_START_magic_check\n");
 }

void test_magic_check_down(void){
	aunit_printf("\n##FUNCTION_END_magic_check\n");
 }



void abnormal_magic_check_case(int index);

void abnormal_magic_check_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_check_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	char *magicfile;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	file_apprentice_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_check_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_check_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magicfile=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_check(ms,magicfile);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("magic_check","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_apprentice","file_apprentice_call_counter",file_apprentice_call_counter)

	aunit_printf("#CASE_END_test_magic_check_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_check_up();

	switch(caseIndex){
	case 1:
		test_magic_check_1();
		break;
	default:
		abnormal_magic_check_case(caseIndex);
		break;
	}

	test_magic_check_down();
}

