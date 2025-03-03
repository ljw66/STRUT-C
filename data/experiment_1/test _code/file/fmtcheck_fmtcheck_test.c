void test_fmtcheck_up(void);
void test_fmtcheck_down(void);


void test_fmtcheck_up(void){

	aunit_printf("\n##FUNCTION_START_fmtcheck\n");
 }

void test_fmtcheck_down(void){
	aunit_printf("\n##FUNCTION_END_fmtcheck\n");
 }



void abnormal_fmtcheck_case(int index);

void abnormal_fmtcheck_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fmtcheck_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *f1;
	char *f2;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"format1"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"format2"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	get_next_format_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fmtcheck_7,false,0\n");
	aunit_printf("#CASE_START_test_fmtcheck_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f1=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			f2=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fmtcheck(f1,f2);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("fmtcheck","returnValue","format1",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_next_format","get_next_format_call_counter",get_next_format_call_counter)

	aunit_printf("#CASE_END_test_fmtcheck_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_fmtcheck_up();

	switch(caseIndex){
	case 7:
		test_fmtcheck_7();
		break;
	default:
		abnormal_fmtcheck_case(caseIndex);
		break;
	}

	test_fmtcheck_down();
}

