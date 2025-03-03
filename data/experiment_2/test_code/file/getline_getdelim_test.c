void test_getdelim_up(void);
void test_getdelim_down(void);


void test_getdelim_up(void){

	aunit_printf("\n##FUNCTION_START_getdelim\n");
 }

void test_getdelim_down(void){
	aunit_printf("\n##FUNCTION_END_getdelim\n");
 }



void abnormal_getdelim_case(int index);

void abnormal_getdelim_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getdelim_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **buf;
	size_t *bufsiz;
	int delimiter;
	FILE *fp;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ssize_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)bufsiz_PTRTO};
	unsigned int listLength_1=1;
	FILE *valueList_2[]={(FILE *)fp_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1024};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"0x1000"};
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
	case_id=9;
	//��ʼ����׮�������ü�����
	feof_call_counter = 0;
	fgetc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getdelim_9,false,0\n");
	aunit_printf("#CASE_START_test_getdelim_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			delimiter=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			bufsiz=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fp=(FILE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(fp_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			bufsiz_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			*buf=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getdelim(buf,bufsiz,delimiter,fp);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("getdelim","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("feof","feof_call_counter",feof_call_counter)
	OB_INT_EXPR("fgetc","fgetc_call_counter",fgetc_call_counter)

	aunit_printf("#CASE_END_test_getdelim_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_getdelim_up();

	switch(caseIndex){
	case 9:
		test_getdelim_9();
		break;
	default:
		abnormal_getdelim_case(caseIndex);
		break;
	}

	test_getdelim_down();
}

