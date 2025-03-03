void test_varexpand_up(void);
void test_varexpand_down(void);


void test_varexpand_up(void){

	aunit_printf("\n##FUNCTION_START_varexpand\n");
 }

void test_varexpand_down(void){
	aunit_printf("\n##FUNCTION_END_varexpand\n");
 }



void abnormal_varexpand_case(int index);

void abnormal_varexpand_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_varexpand_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	char *buf;
	unsigned int len;
	char *str;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"execute ${x?yes:no} command"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"output"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={25};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={111};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	memcpy_call_counter = 0;
	strstr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_varexpand_7,false,0\n");
	aunit_printf("#CASE_START_test_varexpand_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = varexpand(ms,buf,len,str);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("varexpand","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("strstr","strstr_call_counter",strstr_call_counter)

	aunit_printf("#CASE_END_test_varexpand_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_varexpand_up();

	switch(caseIndex){
	case 7:
		test_varexpand_7();
		break;
	default:
		abnormal_varexpand_case(caseIndex);
		break;
	}

	test_varexpand_down();
}

