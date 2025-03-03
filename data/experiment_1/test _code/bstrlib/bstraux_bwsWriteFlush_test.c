void test_bwsWriteFlush_up(void);
void test_bwsWriteFlush_down(void);


void test_bwsWriteFlush_up(void){

	aunit_printf("\n##FUNCTION_START_bwsWriteFlush\n");
 }

void test_bwsWriteFlush_down(void){
	aunit_printf("\n##FUNCTION_END_bwsWriteFlush\n");
 }



void abnormal_bwsWriteFlush_case(int index);

void abnormal_bwsWriteFlush_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bwsWriteFlush_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bwriteStream *ws;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct bwriteStream *valueList_0[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int (*valueList_3[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFunctionPointer"};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	struct tagbstring *valueList_6[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_6=1;
	void *valueList_7[]={(void *)0x1234};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_bwsWriteFlush_3,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteFlush_3\n");
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
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).isEOF=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).parm=(void *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bwsWriteFlush(ws);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bwsWriteFlush","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_bwsWriteFlush_3\n");
}

void test_bwsWriteFlush_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bwriteStream *ws;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct bwriteStream *valueList_0[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_0=1;
	int (*valueList_1[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFunctionPointer"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	struct tagbstring *valueList_4[]={(struct tagbstring *)NULL};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0x1234};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_bwsWriteFlush_5,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteFlush_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ws=(struct bwriteStream *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ws_PTRTO[0]).isEOF=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).parm=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bwsWriteFlush(ws);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bwsWriteFlush","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_bwsWriteFlush_5\n");
}

void test_bwsWriteFlush_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bwriteStream *ws;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct bwriteStream *valueList_0[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int (*valueList_3[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFunctionPointer"};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	struct tagbstring *valueList_6[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_6=1;
	void *valueList_7[]={(void *)0x1234};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_bwsWriteFlush_6,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteFlush_6\n");
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
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).isEOF=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).parm=(void *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bwsWriteFlush(ws);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bwsWriteFlush","ws->buff->slen",0,ws->buff->slen)
	TEST_ASSERT_EQUAL_INT("bwsWriteFlush","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_bwsWriteFlush_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bwsWriteFlush_up();

	switch(caseIndex){
	case 3:
		test_bwsWriteFlush_3();
		break;
	case 5:
		test_bwsWriteFlush_5();
		break;
	case 6:
		test_bwsWriteFlush_6();
		break;
	default:
		abnormal_bwsWriteFlush_case(caseIndex);
		break;
	}

	test_bwsWriteFlush_down();
}

