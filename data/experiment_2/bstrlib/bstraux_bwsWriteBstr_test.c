void test_bwsWriteBstr_up(void);
void test_bwsWriteBstr_down(void);


void test_bwsWriteBstr_up(void){

	aunit_printf("\n##FUNCTION_START_bwsWriteBstr\n");
 }

void test_bwsWriteBstr_down(void){
	aunit_printf("\n##FUNCTION_END_bwsWriteBstr\n");
 }



void abnormal_bwsWriteBstr_case(int index);

void abnormal_bwsWriteBstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bwsWriteBstr_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bwriteStream *ws;
	struct tagbstring *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct bwriteStream *valueList_0[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"data"};
	unsigned int listLength_3=1;
	int valueList_4[]={5};
	unsigned int listLength_4=1;
	int (*valueList_5[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFn"};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
	unsigned int listLength_8=1;
	struct tagbstring *valueList_9[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_9=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	bassign_call_counter = 0;
	bcatblk_call_counter = 0;
	bconcat_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsWriteBstr_3,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteBstr_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ws=(struct bwriteStream *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_tagbstring1.mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).isEOF=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).mlen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = bwsWriteBstr(ws,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bwsWriteBstr","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("bassign","bassign_call_counter",bassign_call_counter)
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)

	aunit_printf("#CASE_END_test_bwsWriteBstr_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_bwsWriteBstr_up();

	switch(caseIndex){
	case 3:
		test_bwsWriteBstr_3();
		break;
	default:
		abnormal_bwsWriteBstr_case(caseIndex);
		break;
	}

	test_bwsWriteBstr_down();
}

