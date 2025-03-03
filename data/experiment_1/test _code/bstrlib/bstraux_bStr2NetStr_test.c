void test_bStr2NetStr_up(void);
void test_bStr2NetStr_down(void);


void test_bStr2NetStr_up(void){

	aunit_printf("\n##FUNCTION_START_bStr2NetStr\n");
 }

void test_bStr2NetStr_down(void){
	aunit_printf("\n##FUNCTION_END_bStr2NetStr\n");
 }



void abnormal_bStr2NetStr_case(int index);

void abnormal_bStr2NetStr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bStr2NetStr_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"valid_data"};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={20};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	bcstrfree_call_counter = 0;
	bfromcstr_call_counter = 0;
	bconcat_call_counter = 0;
	bconchar_call_counter = 0;
	bdestroy_call_counter = 0;
	sprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bStr2NetStr_6,false,0\n");
	aunit_printf("#CASE_START_test_bStr2NetStr_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).data=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).mlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bStr2NetStr(b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("bStr2NetStr","returnValue","intermediate_data",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bcstrfree","bcstrfree_call_counter",bcstrfree_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("sprintf","sprintf_call_counter",sprintf_call_counter)

	aunit_printf("#CASE_END_test_bStr2NetStr_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bStr2NetStr_up();

	switch(caseIndex){
	case 6:
		test_bStr2NetStr_6();
		break;
	default:
		abnormal_bStr2NetStr_case(caseIndex);
		break;
	}

	test_bStr2NetStr_down();
}

