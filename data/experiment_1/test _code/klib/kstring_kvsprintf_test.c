void test_kvsprintf_up(void);
void test_kvsprintf_down(void);


void test_kvsprintf_up(void){

	aunit_printf("\n##FUNCTION_START_kvsprintf\n");
 }

void test_kvsprintf_down(void){
	aunit_printf("\n##FUNCTION_END_kvsprintf\n");
 }



void abnormal_kvsprintf_case(int index);

void abnormal_kvsprintf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kvsprintf_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kstring_t *s;
	char *fmt;
	void *ap;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	kstring_t *valueList_0[]={(kstring_t *)s_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)" World!"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"Hello"};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	va_copy_call_counter = 0;
	realloc_call_counter = 0;
	vsnprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kvsprintf_6,false,0\n");
	aunit_printf("#CASE_START_test_kvsprintf_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(kstring_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fmt=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).m=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).l=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).s=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = kvsprintf(s,fmt,ap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("kvsprintf","returnValue",7,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("va_copy","va_copy_call_counter",va_copy_call_counter)
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)
	OB_INT_EXPR("vsnprintf","vsnprintf_call_counter",vsnprintf_call_counter)

	aunit_printf("#CASE_END_test_kvsprintf_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_kvsprintf_up();

	switch(caseIndex){
	case 6:
		test_kvsprintf_6();
		break;
	default:
		abnormal_kvsprintf_case(caseIndex);
		break;
	}

	test_kvsprintf_down();
}

