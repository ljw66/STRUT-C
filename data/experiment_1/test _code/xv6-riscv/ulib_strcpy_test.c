void test_strcpy_up(void);
void test_strcpy_down(void);


void test_strcpy_up(void){

	aunit_printf("\n##FUNCTION_START_strcpy\n");
 }

void test_strcpy_down(void){
	aunit_printf("\n##FUNCTION_END_strcpy\n");
 }



void abnormal_strcpy_case(int index);

void abnormal_strcpy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_strcpy_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *s;
	char *t;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strcpy_2,false,0\n");
	aunit_printf("#CASE_START_test_strcpy_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = strcpy(s,t);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("strcpy","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strcpy_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_strcpy_up();

	switch(caseIndex){
	case 2:
		test_strcpy_2();
		break;
	default:
		abnormal_strcpy_case(caseIndex);
		break;
	}

	test_strcpy_down();
}

