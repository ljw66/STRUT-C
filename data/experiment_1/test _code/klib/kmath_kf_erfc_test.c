void test_kf_erfc_up(void);
void test_kf_erfc_down(void);


void test_kf_erfc_up(void){

	aunit_printf("\n##FUNCTION_START_kf_erfc\n");
 }

void test_kf_erfc_down(void){
	aunit_printf("\n##FUNCTION_END_kf_erfc\n");
 }



void abnormal_kf_erfc_case(int index);

void abnormal_kf_erfc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kf_erfc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={40.0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_1,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_erfc","returnValue",0.0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_1\n");
}

void test_kf_erfc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={-40.0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_2,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_erfc","returnValue",2.0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_2\n");
}

void test_kf_erfc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.5};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_3,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_erfc","returnValue",1.5204998778130465,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_3\n");
}

void test_kf_erfc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={-0.5};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_4,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_erfc","returnValue",0.4795001221869535,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_4\n");
}

void test_kf_erfc_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={5.0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_5,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_DOUBLE_EXPR("kf_erfc","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_5\n");
}

void test_kf_erfc_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={-5.0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_6,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_erfc","returnValue",2.0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_6\n");
}

void test_kf_erfc_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_erfc_7,false,0\n");
	aunit_printf("#CASE_START_test_kf_erfc_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kf_erfc(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_erfc","returnValue",1.0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)

	aunit_printf("#CASE_END_test_kf_erfc_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_kf_erfc_up();

	switch(caseIndex){
	case 1:
		test_kf_erfc_1();
		break;
	case 2:
		test_kf_erfc_2();
		break;
	case 3:
		test_kf_erfc_3();
		break;
	case 4:
		test_kf_erfc_4();
		break;
	case 5:
		test_kf_erfc_5();
		break;
	case 6:
		test_kf_erfc_6();
		break;
	case 7:
		test_kf_erfc_7();
		break;
	default:
		abnormal_kf_erfc_case(caseIndex);
		break;
	}

	test_kf_erfc_down();
}

