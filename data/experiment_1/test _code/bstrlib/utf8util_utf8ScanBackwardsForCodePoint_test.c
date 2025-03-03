void test_utf8ScanBackwardsForCodePoint_up(void);
void test_utf8ScanBackwardsForCodePoint_down(void);


void test_utf8ScanBackwardsForCodePoint_up(void){

	aunit_printf("\n##FUNCTION_START_utf8ScanBackwardsForCodePoint\n");
 }

void test_utf8ScanBackwardsForCodePoint_down(void){
	aunit_printf("\n##FUNCTION_END_utf8ScanBackwardsForCodePoint\n");
 }



void abnormal_utf8ScanBackwardsForCodePoint_case(int index);

void abnormal_utf8ScanBackwardsForCodePoint_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_utf8ScanBackwardsForCodePoint_18(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *msg;
	int len;
	int pos;
	cpUcs4 *out;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"\xF0\x90\x80"};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	cpUcs4 *valueList_3[]={(cpUcs4 *)out_PTRTO};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=18;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_utf8ScanBackwardsForCodePoint_18,false,0\n");
	aunit_printf("#CASE_START_test_utf8ScanBackwardsForCodePoint_18\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			msg=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			pos=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out=(cpUcs4 *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			out_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = utf8ScanBackwardsForCodePoint(msg,len,pos,out);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("utf8ScanBackwardsForCodePoint","returnValue",-102,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_utf8ScanBackwardsForCodePoint_18\n");
}

void aunit_test_func_run(int caseIndex){

	test_utf8ScanBackwardsForCodePoint_up();

	switch(caseIndex){
	case 18:
		test_utf8ScanBackwardsForCodePoint_18();
		break;
	default:
		abnormal_utf8ScanBackwardsForCodePoint_case(caseIndex);
		break;
	}

	test_utf8ScanBackwardsForCodePoint_down();
}

