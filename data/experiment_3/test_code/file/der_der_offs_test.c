void test_der_offs_up(void);
void test_der_offs_down(void);


void test_der_offs_up(void){

	aunit_printf("\n##FUNCTION_START_der_offs\n");
 }

void test_der_offs_down(void){
	aunit_printf("\n##FUNCTION_END_der_offs\n");
 }



void abnormal_der_offs_case(int index);

void abnormal_der_offs_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_der_offs_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	unsigned int nbytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int32_t returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={10};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)"test_data"};
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
	getlength_call_counter = 0;
	gettag_call_counter = 0;

	aunit_printf("###TEST_TREE_test_der_offs_1,false,0\n");
	aunit_printf("#CASE_START_test_der_offs_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nbytes=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).offset=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).search.s_len=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).search.s=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = der_offs(ms,m,nbytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("der_offs","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getlength","getlength_call_counter",getlength_call_counter)
	OB_INT_EXPR("gettag","gettag_call_counter",gettag_call_counter)

	aunit_printf("#CASE_END_test_der_offs_1\n");
}

void test_der_offs_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	unsigned int nbytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int32_t returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={10};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)"test_data"};
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
	case_id=2;
	//��ʼ����׮�������ü�����
	getlength_call_counter = 0;
	gettag_call_counter = 0;

	aunit_printf("###TEST_TREE_test_der_offs_2,false,0\n");
	aunit_printf("#CASE_START_test_der_offs_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nbytes=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).offset=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).search.s_len=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).search.s=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = der_offs(ms,m,nbytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("der_offs","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getlength","getlength_call_counter",getlength_call_counter)
	OB_INT_EXPR("gettag","gettag_call_counter",gettag_call_counter)

	aunit_printf("#CASE_END_test_der_offs_2\n");
}

void test_der_offs_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	unsigned int nbytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int32_t returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={15};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)"test_data"};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	getlength_call_counter = 0;
	gettag_call_counter = 0;

	aunit_printf("###TEST_TREE_test_der_offs_3,false,0\n");
	aunit_printf("#CASE_START_test_der_offs_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nbytes=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).offset=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).search.s_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).search.s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = der_offs(ms,m,nbytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("der_offs","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getlength","getlength_call_counter",getlength_call_counter)
	OB_INT_EXPR("gettag","gettag_call_counter",gettag_call_counter)

	aunit_printf("#CASE_END_test_der_offs_3\n");
}

void test_der_offs_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	unsigned int nbytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int32_t returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={50};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={15};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)"test_data"};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	getlength_call_counter = 0;
	gettag_call_counter = 0;

	aunit_printf("###TEST_TREE_test_der_offs_4,false,0\n");
	aunit_printf("#CASE_START_test_der_offs_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nbytes=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).offset=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).search.s_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).search.s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = der_offs(ms,m,nbytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("der_offs","returnValue",30,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getlength","getlength_call_counter",getlength_call_counter)
	OB_INT_EXPR("gettag","gettag_call_counter",gettag_call_counter)

	aunit_printf("#CASE_END_test_der_offs_4\n");
}

void test_der_offs_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	unsigned int nbytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int32_t returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={50};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={15};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)"test_data"};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	getlength_call_counter = 0;
	gettag_call_counter = 0;

	aunit_printf("###TEST_TREE_test_der_offs_5,false,0\n");
	aunit_printf("#CASE_START_test_der_offs_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nbytes=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).offset=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).search.s_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).search.s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = der_offs(ms,m,nbytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("der_offs","returnValue",30,returnValue)
	TEST_ASSERT_EQUAL_INT("der_offs","((ms->c.li)[0]).off",30,((ms->c.li)[0]).off)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getlength","getlength_call_counter",getlength_call_counter)
	OB_INT_EXPR("gettag","gettag_call_counter",gettag_call_counter)

	aunit_printf("#CASE_END_test_der_offs_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_der_offs_up();

	switch(caseIndex){
	case 1:
		test_der_offs_1();
		break;
	case 2:
		test_der_offs_2();
		break;
	case 3:
		test_der_offs_3();
		break;
	case 4:
		test_der_offs_4();
		break;
	case 5:
		test_der_offs_5();
		break;
	default:
		abnormal_der_offs_case(caseIndex);
		break;
	}

	test_der_offs_down();
}

