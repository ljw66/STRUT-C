void test_json_parse_const_up(void);
void test_json_parse_const_down(void);


void test_json_parse_const_up(void){

	aunit_printf("\n##FUNCTION_START_json_parse_const\n");
 }

void test_json_parse_const_down(void){
	aunit_printf("\n##FUNCTION_END_json_parse_const\n");
 }



void abnormal_json_parse_const_case(int index);

void abnormal_json_parse_const_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_parse_const_12(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char **ucp;
	unsigned char *ue;
	char *str;
	unsigned int len;
	unsigned int lvl;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abd"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={3};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"abc"};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=12;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_parse_const_12,false,0\n");
	aunit_printf("#CASE_START_test_json_parse_const_12\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ue=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			str=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			lvl=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			*ucp=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = json_parse_const(ucp,ue,str,len,lvl);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_parse_const","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_parse_const_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_parse_const_up();

	switch(caseIndex){
	case 12:
		test_json_parse_const_12();
		break;
	default:
		abnormal_json_parse_const_case(caseIndex);
		break;
	}

	test_json_parse_const_down();
}

