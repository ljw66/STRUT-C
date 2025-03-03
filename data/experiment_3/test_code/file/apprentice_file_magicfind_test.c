void test_file_magicfind_up(void);
void test_file_magicfind_down(void);


void test_file_magicfind_up(void){

	aunit_printf("\n##FUNCTION_START_file_magicfind\n");
 }

void test_file_magicfind_down(void){
	aunit_printf("\n##FUNCTION_END_file_magicfind\n");
 }



void abnormal_file_magicfind_case(int index);

void abnormal_file_magicfind_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_magicfind_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	char *name;
	struct mlist *v;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct mlist *valueList_1[]={(struct mlist *)v_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"abc"};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={2};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)&magic_array};
	unsigned int listLength_5=1;
	struct mlist *valueList_6[]={(struct mlist *)&mlist2};
	unsigned int listLength_6=1;
	struct mlist *valueList_7[]={(struct mlist *)&mlist1};
	unsigned int listLength_7=1;
	struct mlist *valueList_8[]={(struct mlist *)&mlist1};
	unsigned int listLength_8=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magicfind_5,false,0\n");
	aunit_printf("#CASE_START_test_file_magicfind_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(struct mlist *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			mlist1.nmagic=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			mlist1.magic=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			mlist1.next=(struct mlist *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			mlist2.next=(struct mlist *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).mlist[1]=(struct mlist *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = file_magicfind(ms,name,v);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("file_magicfind","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_magicfind_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_magicfind_up();

	switch(caseIndex){
	case 5:
		test_file_magicfind_5();
		break;
	default:
		abnormal_file_magicfind_case(caseIndex);
		break;
	}

	test_file_magicfind_down();
}

