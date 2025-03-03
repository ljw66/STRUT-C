void test_file_varint2uintmax_t_up(void);
void test_file_varint2uintmax_t_down(void);


void test_file_varint2uintmax_t_up(void){

	aunit_printf("\n##FUNCTION_START_file_varint2uintmax_t\n");
 }

void test_file_varint2uintmax_t_down(void){
	aunit_printf("\n##FUNCTION_END_file_varint2uintmax_t\n");
 }



void abnormal_file_varint2uintmax_t_case(int index);

void abnormal_file_varint2uintmax_t_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_varint2uintmax_t_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *us;
	int t;
	size_t *l;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uintmax_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={52};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={130};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={1};
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
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_1,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			l_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			us[2]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			l_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			us[1]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",130,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_varint2uintmax_t_up();

	switch(caseIndex){
	case 1:
		test_file_varint2uintmax_t_1();
		break;
	default:
		abnormal_file_varint2uintmax_t_case(caseIndex);
		break;
	}

	test_file_varint2uintmax_t_down();
}

