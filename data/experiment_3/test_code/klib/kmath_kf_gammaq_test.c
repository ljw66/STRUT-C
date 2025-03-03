void test_kf_gammaq_up(void);
void test_kf_gammaq_down(void);


void test_kf_gammaq_up(void){

	aunit_printf("\n##FUNCTION_START_kf_gammaq\n");
 }

void test_kf_gammaq_down(void){
	aunit_printf("\n##FUNCTION_END_kf_gammaq\n");
 }



void abnormal_kf_gammaq_case(int index);

void abnormal_kf_gammaq_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kf_gammaq_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double s;
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={1.0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	_kf_gammap_call_counter = 0;
	_kf_gammaq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_gammaq_1,false,0\n");
	aunit_printf("#CASE_START_test_kf_gammaq_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kf_gammaq(s,z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_gammaq","returnValue",0.5,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_kf_gammap","_kf_gammap_call_counter",_kf_gammap_call_counter)
	OB_INT_EXPR("_kf_gammaq","_kf_gammaq_call_counter",_kf_gammaq_call_counter)

	aunit_printf("#CASE_END_test_kf_gammaq_1\n");
}

void test_kf_gammaq_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double s;
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={3.0};
	unsigned int listLength_0=1;
	double valueList_1[]={2.0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	_kf_gammap_call_counter = 0;
	_kf_gammaq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_gammaq_2,false,0\n");
	aunit_printf("#CASE_START_test_kf_gammaq_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kf_gammaq(s,z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_gammaq","returnValue",0.3,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_kf_gammap","_kf_gammap_call_counter",_kf_gammap_call_counter)
	OB_INT_EXPR("_kf_gammaq","_kf_gammaq_call_counter",_kf_gammaq_call_counter)

	aunit_printf("#CASE_END_test_kf_gammaq_2\n");
}

void test_kf_gammaq_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double s;
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={2.0};
	unsigned int listLength_0=1;
	double valueList_1[]={3.0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	_kf_gammap_call_counter = 0;
	_kf_gammaq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_gammaq_3,false,0\n");
	aunit_printf("#CASE_START_test_kf_gammaq_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kf_gammaq(s,z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_gammaq","returnValue",0.8,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_kf_gammap","_kf_gammap_call_counter",_kf_gammap_call_counter)
	OB_INT_EXPR("_kf_gammaq","_kf_gammaq_call_counter",_kf_gammaq_call_counter)

	aunit_printf("#CASE_END_test_kf_gammaq_3\n");
}

void test_kf_gammaq_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double s;
	double z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={4.0};
	unsigned int listLength_0=1;
	double valueList_1[]={4.0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	_kf_gammap_call_counter = 0;
	_kf_gammaq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kf_gammaq_4,false,0\n");
	aunit_printf("#CASE_START_test_kf_gammaq_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			z=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = kf_gammaq(s,z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kf_gammaq","returnValue",0.6,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("_kf_gammap","_kf_gammap_call_counter",_kf_gammap_call_counter)
	OB_INT_EXPR("_kf_gammaq","_kf_gammaq_call_counter",_kf_gammaq_call_counter)

	aunit_printf("#CASE_END_test_kf_gammaq_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_kf_gammaq_up();

	switch(caseIndex){
	case 1:
		test_kf_gammaq_1();
		break;
	case 2:
		test_kf_gammaq_2();
		break;
	case 3:
		test_kf_gammaq_3();
		break;
	case 4:
		test_kf_gammaq_4();
		break;
	default:
		abnormal_kf_gammaq_case(caseIndex);
		break;
	}

	test_kf_gammaq_down();
}

