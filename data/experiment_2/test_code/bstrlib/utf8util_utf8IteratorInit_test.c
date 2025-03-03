void test_utf8IteratorInit_up(void);
void test_utf8IteratorInit_down(void);


void test_utf8IteratorInit_up(void){

	aunit_printf("\n##FUNCTION_START_utf8IteratorInit\n");
 }

void test_utf8IteratorInit_down(void){
	aunit_printf("\n##FUNCTION_END_utf8IteratorInit\n");
 }



void abnormal_utf8IteratorInit_case(int index);

void abnormal_utf8IteratorInit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_utf8IteratorInit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct utf8Iterator *iter;
	unsigned char *data;
	int slen;


	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_utf8IteratorInit_1,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorInit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			slen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(iter_PTRTO[0]).next=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(iter_PTRTO[0]).error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).start=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		utf8IteratorInit(iter,data,slen);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("utf8IteratorInit","iter->start",-1,iter->start)
	TEST_ASSERT_EQUAL_LONG("utf8IteratorInit","iter->data","abc",iter->data)
	TEST_ASSERT_EQUAL_INT("utf8IteratorInit","iter->slen",3,iter->slen)
	TEST_ASSERT_EQUAL_INT("utf8IteratorInit","iter->next",0,iter->next)
	TEST_ASSERT_EQUAL_INT("utf8IteratorInit","iter->error",0,iter->error)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_utf8IteratorInit_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_utf8IteratorInit_up();

	switch(caseIndex){
	case 1:
		test_utf8IteratorInit_1();
		break;
	default:
		abnormal_utf8IteratorInit_case(caseIndex);
		break;
	}

	test_utf8IteratorInit_down();
}

