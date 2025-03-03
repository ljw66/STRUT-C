void test_mconvert_up(void);
void test_mconvert_down(void);


void test_mconvert_up(void){

	aunit_printf("\n##FUNCTION_START_mconvert\n");
 }

void test_mconvert_down(void){
	aunit_printf("\n##FUNCTION_END_mconvert\n");
 }



void abnormal_mconvert_case(int index);

void abnormal_mconvert_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mconvert_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	int flip;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={59};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
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
	case_id=10;
	//��ʼ����׮�������ü�����
	cvt_8_call_counter = 0;
	file_pstring_length_size_call_counter = 0;
	file_pstring_get_length_call_counter = 0;
	cvt_16_call_counter = 0;
	cvt_64_call_counter = 0;
	file_magerror_call_counter = 0;
	cvt_32_call_counter = 0;
	cvt_flip_call_counter = 0;
	cvt_double_call_counter = 0;
	cvt_float_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mconvert_10,false,0\n");
	aunit_printf("#CASE_START_test_mconvert_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			flip=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = mconvert(ms,m,flip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("mconvert","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cvt_8","cvt_8_call_counter",cvt_8_call_counter)
	OB_INT_EXPR("file_pstring_length_size","file_pstring_length_size_call_counter",file_pstring_length_size_call_counter)
	OB_INT_EXPR("file_pstring_get_length","file_pstring_get_length_call_counter",file_pstring_get_length_call_counter)
	OB_INT_EXPR("cvt_16","cvt_16_call_counter",cvt_16_call_counter)
	OB_INT_EXPR("cvt_64","cvt_64_call_counter",cvt_64_call_counter)
	OB_INT_EXPR("file_magerror","file_magerror_call_counter",file_magerror_call_counter)
	OB_INT_EXPR("cvt_32","cvt_32_call_counter",cvt_32_call_counter)
	OB_INT_EXPR("cvt_flip","cvt_flip_call_counter",cvt_flip_call_counter)
	OB_INT_EXPR("cvt_double","cvt_double_call_counter",cvt_double_call_counter)
	OB_INT_EXPR("cvt_float","cvt_float_call_counter",cvt_float_call_counter)

	aunit_printf("#CASE_END_test_mconvert_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_mconvert_up();

	switch(caseIndex){
	case 10:
		test_mconvert_10();
		break;
	default:
		abnormal_mconvert_case(caseIndex);
		break;
	}

	test_mconvert_down();
}

