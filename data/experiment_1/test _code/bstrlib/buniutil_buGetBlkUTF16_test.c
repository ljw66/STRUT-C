void test_buGetBlkUTF16_up(void);
void test_buGetBlkUTF16_down(void);


void test_buGetBlkUTF16_up(void){

	aunit_printf("\n##FUNCTION_START_buGetBlkUTF16\n");
 }

void test_buGetBlkUTF16_down(void){
	aunit_printf("\n##FUNCTION_END_buGetBlkUTF16\n");
 }



void abnormal_buGetBlkUTF16_case(int index);

void abnormal_buGetBlkUTF16_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_buGetBlkUTF16_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cpUcs2 *ucs2;
	int len;
	int errCh;
	struct tagbstring *bu;
	int pos;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0x20};
	unsigned int listLength_0=1;
	struct tagbstring *valueList_1[]={(struct tagbstring *)bu_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	cpUcs2 *valueList_4[]={(cpUcs2 *)ucs2_PTRTO};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xF0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x90};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x8D};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x88};
	unsigned int listLength_8=1;
	unsigned short int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned short int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={10};
	unsigned int listLength_11=1;
	int valueList_12[]={10};
	unsigned int listLength_12=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	utf8IteratorUninit_call_counter = 0;
	utf8IteratorGetNextCodePoint_call_counter = 0;
	utf8IteratorInit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_buGetBlkUTF16_5,false,0\n");
	aunit_printf("#CASE_START_test_buGetBlkUTF16_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errCh=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			bu=(struct tagbstring *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			pos=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ucs2=(cpUcs2 *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			bu_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			bu_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			bu_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			bu_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ucs2_PTRTO[1]=(unsigned short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ucs2_PTRTO[0]=(unsigned short int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(bu_PTRTO[0]).mlen=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(bu_PTRTO[0]).slen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = buGetBlkUTF16(ucs2,len,errCh,bu,pos);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("buGetBlkUTF16","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("utf8IteratorUninit","utf8IteratorUninit_call_counter",utf8IteratorUninit_call_counter)
	OB_INT_EXPR("utf8IteratorGetNextCodePoint","utf8IteratorGetNextCodePoint_call_counter",utf8IteratorGetNextCodePoint_call_counter)
	OB_INT_EXPR("utf8IteratorInit","utf8IteratorInit_call_counter",utf8IteratorInit_call_counter)

	aunit_printf("#CASE_END_test_buGetBlkUTF16_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_buGetBlkUTF16_up();

	switch(caseIndex){
	case 5:
		test_buGetBlkUTF16_5();
		break;
	default:
		abnormal_buGetBlkUTF16_case(caseIndex);
		break;
	}

	test_buGetBlkUTF16_down();
}

