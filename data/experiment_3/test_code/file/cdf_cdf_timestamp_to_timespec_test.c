void test_cdf_timestamp_to_timespec_up(void);
void test_cdf_timestamp_to_timespec_down(void);


void test_cdf_timestamp_to_timespec_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_timestamp_to_timespec\n");
 }

void test_cdf_timestamp_to_timespec_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_timestamp_to_timespec\n");
 }



void abnormal_cdf_timestamp_to_timespec_case(int index);

void abnormal_cdf_timestamp_to_timespec_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_timestamp_to_timespec_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct timespec *ts;
	long long int t;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={132537600000000000};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	mktime_call_counter = 0;
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_1\n");
}

void test_cdf_timestamp_to_timespec_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct timespec *ts;
	long long int t;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={132537600000000000};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	mktime_call_counter = 0;
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",22,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_2\n");
}

void test_cdf_timestamp_to_timespec_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct timespec *ts;
	long long int t;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={132537600000000000};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	mktime_call_counter = 0;
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_3\n");
}

void test_cdf_timestamp_to_timespec_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct timespec *ts;
	long long int t;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct timespec *valueList_2[]={(struct timespec *)ts_PTRTO};
	unsigned int listLength_2=1;
	long int valueList_3[]={0};
	unsigned int listLength_3=1;
	long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	mktime_call_counter = 0;
	cdf_getdays_call_counter = 0;
	cdf_getmonth_call_counter = 0;
	cdf_getday_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_timestamp_to_timespec_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_timestamp_to_timespec_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			t=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ts=(struct timespec *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ts_PTRTO[0]).tv_nsec=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ts_PTRTO[0]).tv_sec=(long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_timestamp_to_timespec(ts,t);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_timestamp_to_timespec","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("mktime","mktime_call_counter",mktime_call_counter)
	OB_INT_EXPR("cdf_getdays","cdf_getdays_call_counter",cdf_getdays_call_counter)
	OB_INT_EXPR("cdf_getmonth","cdf_getmonth_call_counter",cdf_getmonth_call_counter)
	OB_INT_EXPR("cdf_getday","cdf_getday_call_counter",cdf_getday_call_counter)

	aunit_printf("#CASE_END_test_cdf_timestamp_to_timespec_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_timestamp_to_timespec_up();

	switch(caseIndex){
	case 1:
		test_cdf_timestamp_to_timespec_1();
		break;
	case 2:
		test_cdf_timestamp_to_timespec_2();
		break;
	case 3:
		test_cdf_timestamp_to_timespec_3();
		break;
	case 4:
		test_cdf_timestamp_to_timespec_4();
		break;
	default:
		abnormal_cdf_timestamp_to_timespec_case(caseIndex);
		break;
	}

	test_cdf_timestamp_to_timespec_down();
}

