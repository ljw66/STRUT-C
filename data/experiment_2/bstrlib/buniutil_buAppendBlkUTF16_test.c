void test_buAppendBlkUTF16_up(void);
void test_buAppendBlkUTF16_down(void);


void test_buAppendBlkUTF16_up(void){

	aunit_printf("\n##FUNCTION_START_buAppendBlkUTF16\n");
 }

void test_buAppendBlkUTF16_down(void){
	aunit_printf("\n##FUNCTION_END_buAppendBlkUTF16\n");
 }



void abnormal_buAppendBlkUTF16_case(int index);

void abnormal_buAppendBlkUTF16_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_buAppendBlkUTF16_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *bu;
	cpUcs2 *utf16;
	int len;
	cpUcs2 *bom;
	int errCh;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cpUcs2 *valueList_0[]={(cpUcs2 *)bom_PTRTO};
	unsigned int listLength_0=1;
	struct tagbstring *valueList_1[]={(struct tagbstring *)bu_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	cpUcs2 *valueList_3[]={(cpUcs2 *)utf16_PTRTO};
	unsigned int listLength_3=1;
	int valueList_4[]={0xD800};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned short int valueList_8[]={0};
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
	buAppendBlkUcs4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_buAppendBlkUTF16_13,false,0\n");
	aunit_printf("#CASE_START_test_buAppendBlkUTF16_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bom=(cpUcs2 *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			bu=(struct tagbstring *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			utf16=(cpUcs2 *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			errCh=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			utf16_PTRTO[1]=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			utf16_PTRTO[0]=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			bom_PTRTO[1]=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			bom_PTRTO[0]=(unsigned short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = buAppendBlkUTF16(bu,utf16,len,bom,errCh);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("buAppendBlkUTF16","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("buAppendBlkUcs4","buAppendBlkUcs4_call_counter",buAppendBlkUcs4_call_counter)

	aunit_printf("#CASE_END_test_buAppendBlkUTF16_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_buAppendBlkUTF16_up();

	switch(caseIndex){
	case 13:
		test_buAppendBlkUTF16_13();
		break;
	default:
		abnormal_buAppendBlkUTF16_case(caseIndex);
		break;
	}

	test_buAppendBlkUTF16_down();
}

