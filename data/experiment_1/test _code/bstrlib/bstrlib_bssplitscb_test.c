void test_bssplitscb_up(void);
void test_bssplitscb_down(void);


void test_bssplitscb_up(void){

	aunit_printf("\n##FUNCTION_START_bssplitscb\n");
 }

void test_bssplitscb_down(void){
	aunit_printf("\n##FUNCTION_END_bssplitscb\n");
 }



void abnormal_bssplitscb_case(int index);

void abnormal_bssplitscb_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bssplitscb_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *s;
	struct tagbstring *splitStr;
	int (*cb)(void *, int, const bstring);
	void *parm;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct bStream *valueList_0[]={(struct bStream *)s_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)splitStr_PTRTO};
	unsigned int listLength_2=1;
	int (*valueList_3[])(void *, int, const bstring)={(int (*)(void *, int, struct tagbstring * const))cb_STUB};
	unsigned int listLength_3=1;
	int valueList_4[]={256};
	unsigned int listLength_4=1;
	struct tagbstring *valueList_5[]={(struct tagbstring *)&buff1};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	int valueList_7[]={256};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={256};
	unsigned int listLength_9=1;
	unsigned char *valueList_10[]={(unsigned char *)"split_data"};
	unsigned int listLength_10=1;
	unsigned char *valueList_11[]={(unsigned char *)"buff_data"};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	void *valueList_13[]={(void *)0};
	unsigned int listLength_13=1;
	size_t  (*valueList_14[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))"readFn"};
	unsigned int listLength_14=1;
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
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	bfromcstr_call_counter = 0;
	buildCharField_call_counter = 0;
	bsunread_call_counter = 0;
	cb_STUB_call_counter = 0;
	bdestroy_call_counter = 0;
	bsreada_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bssplitscb_6,false,0\n");
	aunit_printf("#CASE_START_test_bssplitscb_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(struct bStream *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			splitStr=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			cb=(int (*)(void *, int, struct tagbstring * const))valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			buff1.slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			s1.buff=(struct tagbstring *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			splitStr1.slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			buff1.mlen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			s1.maxBuffSz=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			splitStr1.mlen=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			splitStr1.data=(unsigned char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			buff1.data=(unsigned char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			s1.isEOF=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			s1.parm=(void *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(s_PTRTO[0]).readFnPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = bssplitscb(s,splitStr,cb,parm);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bssplitscb","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("buildCharField","buildCharField_call_counter",buildCharField_call_counter)
	OB_INT_EXPR("bsunread","bsunread_call_counter",bsunread_call_counter)
	OB_INT_EXPR("cb_STUB","cb_STUB_call_counter",cb_STUB_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("bsreada","bsreada_call_counter",bsreada_call_counter)

	aunit_printf("#CASE_END_test_bssplitscb_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bssplitscb_up();

	switch(caseIndex){
	case 6:
		test_bssplitscb_6();
		break;
	default:
		abnormal_bssplitscb_case(caseIndex);
		break;
	}

	test_bssplitscb_down();
}

