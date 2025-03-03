void test_strchr_up(void);
void test_strchr_down(void);


void test_strchr_up(void){

	aunit_printf("\n##FUNCTION_START_strchr\n");
 }

void test_strchr_down(void){
	aunit_printf("\n##FUNCTION_END_strchr\n");
 }



void abnormal_strchr_case(int index);

void abnormal_strchr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_strchr_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *s;
	char c;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char valueList_1[]={'d'};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strchr_4,false,0\n");
	aunit_printf("#CASE_START_test_strchr_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			c=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = strchr(s,c);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("strchr","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strchr_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_strchr_up();

	switch(caseIndex){
	case 4:
		test_strchr_4();
		break;
	default:
		abnormal_strchr_case(caseIndex);
		break;
	}

	test_strchr_down();
}

