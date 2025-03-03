void test_strncpy_up(void);
void test_strncpy_down(void);


void test_strncpy_up(void){

	aunit_printf("\n##FUNCTION_START_strncpy\n");
 }

void test_strncpy_down(void){
	aunit_printf("\n##FUNCTION_END_strncpy\n");
 }



void abnormal_strncpy_case(int index);

void abnormal_strncpy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_strncpy_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *s;
	char *t;
	int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abcdef"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"xyz"};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strncpy_4,false,0\n");
	aunit_printf("#CASE_START_test_strncpy_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strncpy(s,t,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("strncpy","returnValue","xyz\u0000\u0000ef",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strncpy_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_strncpy_up();

	switch(caseIndex){
	case 4:
		test_strncpy_4();
		break;
	default:
		abnormal_strncpy_case(caseIndex);
		break;
	}

	test_strncpy_down();
}

