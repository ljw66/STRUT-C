void test_bstricmp_up(void);
void test_bstricmp_down(void);


void test_bstricmp_up(void){

	aunit_printf("\n##FUNCTION_START_bstricmp\n");
 }

void test_bstricmp_down(void){
	aunit_printf("\n##FUNCTION_END_bstricmp\n");
 }



void abnormal_bstricmp_case(int index);

void abnormal_bstricmp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bstricmp_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b0;
	struct tagbstring *b1;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b0_PTRTO};
	unsigned int listLength_0=1;
	struct tagbstring *valueList_1[]={(struct tagbstring *)b1_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"helloo"};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	unsigned char *valueList_5[]={(unsigned char *)"hello"};
	unsigned int listLength_5=1;
	int valueList_6[]={6};
	unsigned int listLength_6=1;
	int valueList_7[]={5};
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
	case_id=13;
	//��ʼ����׮�������ü�����
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bstricmp_13,false,0\n");
	aunit_printf("#CASE_START_test_bstricmp_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b0=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b1=(struct tagbstring *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b1_PTRTO[0]).mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b1_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b0_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b0_PTRTO[0]).data=(unsigned char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b1_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b0_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bstricmp(b0,b1);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bstricmp","returnValue",-256,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test_bstricmp_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_bstricmp_up();

	switch(caseIndex){
	case 13:
		test_bstricmp_13();
		break;
	default:
		abnormal_bstricmp_case(caseIndex);
		break;
	}

	test_bstricmp_down();
}

