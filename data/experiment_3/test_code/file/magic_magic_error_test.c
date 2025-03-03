void test_magic_error_up(void);
void test_magic_error_down(void);


void test_magic_error_up(void){

	aunit_printf("\n##FUNCTION_START_magic_error\n");
 }

void test_magic_error_down(void){
	aunit_printf("\n##FUNCTION_END_magic_error\n");
 }



void abnormal_magic_error_case(int index);

void abnormal_magic_error_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_error_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_magic_error_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_error_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = magic_error(ms);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("magic_error","returnValue","Magic database is not open",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_magic_error_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_error_up();

	switch(caseIndex){
	case 1:
		test_magic_error_1();
		break;
	default:
		abnormal_magic_error_case(caseIndex);
		break;
	}

	test_magic_error_down();
}

