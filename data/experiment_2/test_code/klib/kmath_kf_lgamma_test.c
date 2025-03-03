void test_kf_lgamma_up(void);
void test_kf_lgamma_down(void);


void test_kf_lgamma_up(void){

	aunit_printf("\n##FUNCTION_START_kf_lgamma\n");
 }

void test_kf_lgamma_down(void){
	aunit_printf("\n##FUNCTION_END_kf_lgamma\n");
 }



void abnormal_kf_lgamma_case(int index);

void abnormal_kf_lgamma_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kf_lgamma_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_1,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-4.390562087565899,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_1\n");
}

void test_kf_lgamma_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={2};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_2,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-3.502524222759134,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_2\n");
}

void test_kf_lgamma_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={3};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_3,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-3.1780538303479458,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_3\n");
}

void test_kf_lgamma_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.5};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_4,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-4.079441541679835,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_4\n");
}

void test_kf_lgamma_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_5,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",9.210340371976184,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_5\n");
}

void test_kf_lgamma_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.1};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_6,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-6.737946999085467,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_6\n");
}

void test_kf_lgamma_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={100};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_7,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",359.1342053695754,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_7\n");
}

void test_kf_lgamma_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.01};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_8,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-8.524083020347353,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_8\n");
}

void test_kf_lgamma_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.001};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_9,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_lgamma","returnValue",-10.309992155249153,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_9\n");
}

void test_kf_lgamma_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={50};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_lgamma_10,false,0\n");
	aunit_printf("#CASE_START_test_kf_lgamma_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_lgamma(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_DOUBLE_EXPR("kf_lgamma","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_kf_lgamma_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_kf_lgamma_up();

	switch(caseIndex){
	case 1:
		test_kf_lgamma_1();
		break;
	case 2:
		test_kf_lgamma_2();
		break;
	case 3:
		test_kf_lgamma_3();
		break;
	case 4:
		test_kf_lgamma_4();
		break;
	case 5:
		test_kf_lgamma_5();
		break;
	case 6:
		test_kf_lgamma_6();
		break;
	case 7:
		test_kf_lgamma_7();
		break;
	case 8:
		test_kf_lgamma_8();
		break;
	case 9:
		test_kf_lgamma_9();
		break;
	case 10:
		test_kf_lgamma_10();
		break;
	default:
		abnormal_kf_lgamma_case(caseIndex);
		break;
	}

	test_kf_lgamma_down();
}

