void test_file_is_csv_up(void);
void test_file_is_csv_down(void);


void test_file_is_csv_up(void){

	aunit_printf("\n##FUNCTION_START_file_is_csv\n");
 }

void test_file_is_csv_down(void){
	aunit_printf("\n##FUNCTION_END_file_is_csv\n");
 }



void abnormal_file_is_csv_case(int index);

void abnormal_file_is_csv_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_is_csv_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct buffer *b;
	int looks_text;
	char *code;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)123,456,789};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={10};
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
	case_id=8;
	//��ʼ����׮�������ü�����
	file_printf_call_counter = 0;
	csv_parse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_is_csv_8,false,0\n");
	aunit_printf("#CASE_START_test_file_is_csv_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			looks_text=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).fbuf=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).flags=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).flen=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_is_csv(ms,b,looks_text,code);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_is_csv","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("csv_parse","csv_parse_call_counter",csv_parse_call_counter)

	aunit_printf("#CASE_END_test_file_is_csv_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_is_csv_up();

	switch(caseIndex){
	case 8:
		test_file_is_csv_8();
		break;
	default:
		abnormal_file_is_csv_case(caseIndex);
		break;
	}

	test_file_is_csv_down();
}

