void test_json_isspace_up(void);
void test_json_isspace_down(void);


void test_json_isspace_up(void){

	aunit_printf("\n##FUNCTION_START_json_isspace\n");
 }

void test_json_isspace_down(void){
	aunit_printf("\n##FUNCTION_END_json_isspace\n");
 }



void abnormal_json_isspace_case(int index);

void abnormal_json_isspace_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_isspace_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isspace_2,false,0\n");
	aunit_printf("#CASE_START_test_json_isspace_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = json_isspace(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isspace","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isspace_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_isspace_up();

	switch(caseIndex){
	case 2:
		test_json_isspace_2();
		break;
	default:
		abnormal_json_isspace_case(caseIndex);
		break;
	}

	test_json_isspace_down();
}

