void test_des_crypt_up(void);
void test_des_crypt_down(void);


void test_des_crypt_up(void){

	aunit_printf("\n##FUNCTION_START_des_crypt\n");
 }

void test_des_crypt_down(void){
	aunit_printf("\n##FUNCTION_END_des_crypt\n");
 }



void abnormal_des_crypt_case(int index);

void abnormal_des_crypt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_des_crypt_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	BYTE (*key)[6];


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"abcdefgh"};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"00000000"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	InvIP_call_counter = 0;
	f_call_counter = 0;
	IP_call_counter = 0;

	aunit_printf("###TEST_TREE_test_des_crypt_1,false,0\n");
	aunit_printf("#CASE_START_test_des_crypt_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			out=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		des_crypt(in,out,key);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("des_crypt","out","result1",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("InvIP","InvIP_call_counter",InvIP_call_counter)
	OB_INT_EXPR("f","f_call_counter",f_call_counter)
	OB_INT_EXPR("IP","IP_call_counter",IP_call_counter)

	aunit_printf("#CASE_END_test_des_crypt_1\n");
}

void test_des_crypt_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	BYTE (*key)[6];


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"00000000"};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"00000000"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	InvIP_call_counter = 0;
	f_call_counter = 0;
	IP_call_counter = 0;

	aunit_printf("###TEST_TREE_test_des_crypt_2,false,0\n");
	aunit_printf("#CASE_START_test_des_crypt_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			out=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		des_crypt(in,out,key);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("des_crypt","out","00000000",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("InvIP","InvIP_call_counter",InvIP_call_counter)
	OB_INT_EXPR("f","f_call_counter",f_call_counter)
	OB_INT_EXPR("IP","IP_call_counter",IP_call_counter)

	aunit_printf("#CASE_END_test_des_crypt_2\n");
}

void test_des_crypt_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	BYTE (*key)[6];


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"11111111"};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"00000000"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	InvIP_call_counter = 0;
	f_call_counter = 0;
	IP_call_counter = 0;

	aunit_printf("###TEST_TREE_test_des_crypt_3,false,0\n");
	aunit_printf("#CASE_START_test_des_crypt_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			out=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		des_crypt(in,out,key);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("des_crypt","out","result2",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("InvIP","InvIP_call_counter",InvIP_call_counter)
	OB_INT_EXPR("f","f_call_counter",f_call_counter)
	OB_INT_EXPR("IP","IP_call_counter",IP_call_counter)

	aunit_printf("#CASE_END_test_des_crypt_3\n");
}

void test_des_crypt_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	BYTE (*key)[6];


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"a1b2c3d4"};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"00000000"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	InvIP_call_counter = 0;
	f_call_counter = 0;
	IP_call_counter = 0;

	aunit_printf("###TEST_TREE_test_des_crypt_4,false,0\n");
	aunit_printf("#CASE_START_test_des_crypt_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			out=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		des_crypt(in,out,key);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("des_crypt","out","result3",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("InvIP","InvIP_call_counter",InvIP_call_counter)
	OB_INT_EXPR("f","f_call_counter",f_call_counter)
	OB_INT_EXPR("IP","IP_call_counter",IP_call_counter)

	aunit_printf("#CASE_END_test_des_crypt_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_des_crypt_up();

	switch(caseIndex){
	case 1:
		test_des_crypt_1();
		break;
	case 2:
		test_des_crypt_2();
		break;
	case 3:
		test_des_crypt_3();
		break;
	case 4:
		test_des_crypt_4();
		break;
	default:
		abnormal_des_crypt_case(caseIndex);
		break;
	}

	test_des_crypt_down();
}

