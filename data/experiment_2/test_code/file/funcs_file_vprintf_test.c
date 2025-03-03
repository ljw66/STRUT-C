void test_file_vprintf_up(void);
void test_file_vprintf_down(void);


void test_file_vprintf_up(void){

	aunit_printf("\n##FUNCTION_START_file_vprintf\n");
 }

void test_file_vprintf_down(void){
	aunit_printf("\n##FUNCTION_END_file_vprintf\n");
 }



void abnormal_file_vprintf_case(int index);

void abnormal_file_vprintf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_vprintf_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	char *fmt;
	void *ap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"concat test"};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={10};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"existing"};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	vasprintf_call_counter = 0;
	free_call_counter = 0;
	asprintf_call_counter = 0;
	file_checkfmt_call_counter = 0;
	file_clearbuf_call_counter = 0;
	file_error_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_vprintf_7,false,0\n");
	aunit_printf("#CASE_START_test_file_vprintf_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fmt=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).event_flags=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).o.blen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).o.buf=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_vprintf(ms,fmt,ap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_vprintf","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("file_vprintf","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("vasprintf","vasprintf_call_counter",vasprintf_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("asprintf","asprintf_call_counter",asprintf_call_counter)
	OB_INT_EXPR("file_checkfmt","file_checkfmt_call_counter",file_checkfmt_call_counter)
	OB_INT_EXPR("file_clearbuf","file_clearbuf_call_counter",file_clearbuf_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)

	aunit_printf("#CASE_END_test_file_vprintf_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_vprintf_up();

	switch(caseIndex){
	case 7:
		test_file_vprintf_7();
		break;
	default:
		abnormal_file_vprintf_case(caseIndex);
		break;
	}

	test_file_vprintf_down();
}

