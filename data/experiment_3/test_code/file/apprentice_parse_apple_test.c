void test_parse_apple_up(void);
void test_parse_apple_down(void);


void test_parse_apple_up(void){

	aunit_printf("\n##FUNCTION_START_parse_apple\n");
 }

void test_parse_apple_down(void){
	aunit_printf("\n##FUNCTION_END_parse_apple\n");
 }



void abnormal_parse_apple_case(int index);

void abnormal_parse_apple_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parse_apple_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic_entry *me;
	char *line;
	unsigned int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"apple test"};
	unsigned int listLength_2=1;
	struct magic_entry *valueList_3[]={(struct magic_entry *)me_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)ms_PTRTO_1_fnamebuf_PTRTO};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)ms_PTRTO_0_fnamebuf_PTRTO};
	unsigned int listLength_5=1;
	struct magic *valueList_6[]={(struct magic *)me_PTRTO_1_mp_PTRTO};
	unsigned int listLength_6=1;
	struct magic *valueList_7[]={(struct magic *)&struct_magic1};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)ms_PTRTO_0_file_PTRTO};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={1};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={10};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)ms_PTRTO_1_file_PTRTO};
	unsigned int listLength_11=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	parse_extra_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parse_apple_3,false,0\n");
	aunit_printf("#CASE_START_test_parse_apple_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			line=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			me=(struct magic_entry *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[1]).fnamebuf=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(me_PTRTO[1]).mp=(struct magic *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(me_PTRTO[0]).mp=(struct magic *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).file=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(me_PTRTO[0]).cont_count=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(me_PTRTO[0]).max_count=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[1]).file=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = parse_apple(ms,me,line,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parse_apple","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("parse_extra","parse_extra_call_counter",parse_extra_call_counter)

	aunit_printf("#CASE_END_test_parse_apple_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_parse_apple_up();

	switch(caseIndex){
	case 3:
		test_parse_apple_3();
		break;
	default:
		abnormal_parse_apple_case(caseIndex);
		break;
	}

	test_parse_apple_down();
}

