void test_mcopy_up(void);
void test_mcopy_down(void);


void test_mcopy_up(void){

	aunit_printf("\n##FUNCTION_START_mcopy\n");
 }

void test_mcopy_down(void){
	aunit_printf("\n##FUNCTION_END_mcopy\n");
 }



void abnormal_mcopy_case(int index);

void abnormal_mcopy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mcopy_15(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	union VALUETYPE *p;
	int type;
	int indir;
	unsigned char *s;
	unsigned int offset;
	unsigned int nbytes;
	struct magic *m;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	union VALUETYPE *valueList_0[]={(union VALUETYPE *)p_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"abc"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	struct magic_set *valueList_4[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_4=1;
	int valueList_5[]={49};
	unsigned int listLength_5=1;
	struct magic *valueList_6[]={(struct magic *)m_PTRTO};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned long long int valueList_9[]={0};
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
	case_id=15;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	memchr_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mcopy_15,false,0\n");
	aunit_printf("#CASE_START_test_mcopy_15\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(union VALUETYPE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			indir=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ms=(struct magic_set *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			type=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			m=(struct magic *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			nbytes=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(p_PTRTO[0]).q=(unsigned long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = mcopy(ms,p,type,indir,s,offset,nbytes,m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("mcopy","p->q",0,p->q)
	TEST_ASSERT_EQUAL_INT("mcopy","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memchr","memchr_call_counter",memchr_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_mcopy_15\n");
}

void aunit_test_func_run(int caseIndex){

	test_mcopy_up();

	switch(caseIndex){
	case 15:
		test_mcopy_15();
		break;
	default:
		abnormal_mcopy_case(caseIndex);
		break;
	}

	test_mcopy_down();
}

