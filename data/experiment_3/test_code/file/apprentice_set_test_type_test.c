void test_set_test_type_up(void);
void test_set_test_type_down(void);


void test_set_test_type_up(void){

	aunit_printf("\n##FUNCTION_START_set_test_type\n");
 }

void test_set_test_type_down(void){
	aunit_printf("\n##FUNCTION_END_set_test_type\n");
 }



void abnormal_set_test_type_case(int index);

void abnormal_set_test_type_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_set_test_type_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic *mstart;
	struct magic *m;


	//ֵ�������
	struct magic *valueList_0[]={(struct magic *)m_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)mstart_PTRTO};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={14};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	file_looks_utf8_call_counter = 0;

	aunit_printf("###TEST_TREE_test_set_test_type_10,false,0\n");
	aunit_printf("#CASE_START_test_set_test_type_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			m=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mstart=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(mstart_PTRTO[0]).flag=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).type=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		set_test_type(mstart,m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("set_test_type","mstart->flag",1,mstart->flag)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("file_looks_utf8","file_looks_utf8_call_counter",file_looks_utf8_call_counter)

	aunit_printf("#CASE_END_test_set_test_type_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_set_test_type_up();

	switch(caseIndex){
	case 10:
		test_set_test_type_10();
		break;
	default:
		abnormal_set_test_type_case(caseIndex);
		break;
	}

	test_set_test_type_down();
}

