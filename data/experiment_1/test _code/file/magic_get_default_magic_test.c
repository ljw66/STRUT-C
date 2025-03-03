void test_get_default_magic_up(void);
void test_get_default_magic_down(void);


void test_get_default_magic_up(void){

	aunit_printf("\n##FUNCTION_START_get_default_magic\n");
 }

void test_get_default_magic_down(void){
	aunit_printf("\n##FUNCTION_END_get_default_magic\n");
 }



void abnormal_get_default_magic_case(int index);

void abnormal_get_default_magic_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_default_magic_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	stat_call_counter = 0;
	access_call_counter = 0;
	asprintf_call_counter = 0;
	getenv_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_default_magic_7,false,0\n");
	aunit_printf("#CASE_START_test_get_default_magic_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = get_default_magic();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("get_default_magic","returnValue","/home/user/.magic.mgc:/etc/magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("stat","stat_call_counter",stat_call_counter)
	OB_INT_EXPR("access","access_call_counter",access_call_counter)
	OB_INT_EXPR("asprintf","asprintf_call_counter",asprintf_call_counter)
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)

	aunit_printf("#CASE_END_test_get_default_magic_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_default_magic_up();

	switch(caseIndex){
	case 7:
		test_get_default_magic_7();
		break;
	default:
		abnormal_get_default_magic_case(caseIndex);
		break;
	}

	test_get_default_magic_down();
}

