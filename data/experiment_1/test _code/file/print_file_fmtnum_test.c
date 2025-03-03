void test_file_fmtnum_up(void);
void test_file_fmtnum_down(void);


void test_file_fmtnum_up(void){

	aunit_printf("\n##FUNCTION_START_file_fmtnum\n");
 }

void test_file_fmtnum_down(void){
	aunit_printf("\n##FUNCTION_END_file_fmtnum\n");
 }



void abnormal_file_fmtnum_case(int index);

void abnormal_file_fmtnum_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_fmtnum_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *buf;
	unsigned int blen;
	char *us;
	int base;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={20};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"999999999999999999999999999999"};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	strtoull_call_counter = 0;
	strlcpy_call_counter = 0;
	snprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtnum_10,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtnum_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			base=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = file_fmtnum(buf,blen,us,base);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("file_fmtnum","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strtoull","strtoull_call_counter",strtoull_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)

	aunit_printf("#CASE_END_test_file_fmtnum_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_fmtnum_up();

	switch(caseIndex){
	case 10:
		test_file_fmtnum_10();
		break;
	default:
		abnormal_file_fmtnum_case(caseIndex);
		break;
	}

	test_file_fmtnum_down();
}

