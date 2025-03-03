void test_file_printedlen_up(void);
void test_file_printedlen_down(void);


void test_file_printedlen_up(void){

	aunit_printf("\n##FUNCTION_START_file_printedlen\n");
 }

void test_file_printedlen_down(void){
	aunit_printf("\n##FUNCTION_END_file_printedlen\n");
 }



void abnormal_file_printedlen_case(int index);

void abnormal_file_printedlen_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_printedlen_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={42};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_file_printedlen_1,false,0\n");
	aunit_printf("#CASE_START_test_file_printedlen_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ms_PTRTO[0]).o.blen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = file_printedlen(ms);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_printedlen","returnValue",42,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_file_printedlen_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_printedlen_up();

	switch(caseIndex){
	case 1:
		test_file_printedlen_1();
		break;
	default:
		abnormal_file_printedlen_case(caseIndex);
		break;
	}

	test_file_printedlen_down();
}

