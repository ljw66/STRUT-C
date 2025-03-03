void test_file_checkfmt_up(void);
void test_file_checkfmt_down(void);


void test_file_checkfmt_up(void){

	aunit_printf("\n##FUNCTION_START_file_checkfmt\n");
 }

void test_file_checkfmt_down(void){
	aunit_printf("\n##FUNCTION_END_file_checkfmt\n");
 }



void abnormal_file_checkfmt_case(int index);

void abnormal_file_checkfmt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_checkfmt_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *msg;
	unsigned int mlen;
	char *fmt;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"%d"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	isalpha_call_counter = 0;
	file_checkfield_call_counter = 0;
	strchr_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_checkfmt_10,false,0\n");
	aunit_printf("#CASE_START_test_file_checkfmt_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			mlen=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fmt=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = file_checkfmt(msg,mlen,fmt);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_checkfmt","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("file_checkfield","file_checkfield_call_counter",file_checkfield_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_file_checkfmt_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_checkfmt_up();

	switch(caseIndex){
	case 10:
		test_file_checkfmt_10();
		break;
	default:
		abnormal_file_checkfmt_case(caseIndex);
		break;
	}

	test_file_checkfmt_down();
}

