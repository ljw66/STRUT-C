void test_utf8IteratorGetNextCodePoint_up(void);
void test_utf8IteratorGetNextCodePoint_down(void);


void test_utf8IteratorGetNextCodePoint_up(void){

	aunit_printf("\n##FUNCTION_START_utf8IteratorGetNextCodePoint\n");
 }

void test_utf8IteratorGetNextCodePoint_down(void){
	aunit_printf("\n##FUNCTION_END_utf8IteratorGetNextCodePoint\n");
 }



void abnormal_utf8IteratorGetNextCodePoint_case(int index);

void abnormal_utf8IteratorGetNextCodePoint_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_utf8IteratorGetNextCodePoint_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct utf8Iterator *iter;
	int errCh;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	cpUcs4 returnValue = 0;

	//ֵ�������
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={12345};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x62};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x63};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x61};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=13;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_utf8IteratorGetNextCodePoint_13,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetNextCodePoint_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(iter_PTRTO[0]).next=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iter_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			iter_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).error=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).start=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(iter_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = utf8IteratorGetNextCodePoint(iter,errCh);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetNextCodePoint","returnValue",0x61,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_utf8IteratorGetNextCodePoint_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_utf8IteratorGetNextCodePoint_up();

	switch(caseIndex){
	case 13:
		test_utf8IteratorGetNextCodePoint_13();
		break;
	default:
		abnormal_utf8IteratorGetNextCodePoint_case(caseIndex);
		break;
	}

	test_utf8IteratorGetNextCodePoint_down();
}

