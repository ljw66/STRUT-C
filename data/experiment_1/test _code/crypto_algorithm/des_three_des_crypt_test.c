void test_three_des_crypt_up(void);
void test_three_des_crypt_down(void);


void test_three_des_crypt_up(void){

	aunit_printf("\n##FUNCTION_START_three_des_crypt\n");
 }

void test_three_des_crypt_down(void){
	aunit_printf("\n##FUNCTION_END_three_des_crypt\n");
 }



void abnormal_three_des_crypt_case(int index);

void abnormal_three_des_crypt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_three_des_crypt_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	BYTE (*key)[16][6];


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	des_crypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_three_des_crypt_1,false,0\n");
	aunit_printf("#CASE_START_test_three_des_crypt_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			out=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		three_des_crypt(in,out,key);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("three_des_crypt","out","0000000000000000",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("des_crypt","des_crypt_call_counter",des_crypt_call_counter)

	aunit_printf("#CASE_END_test_three_des_crypt_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_three_des_crypt_up();

	switch(caseIndex){
	case 1:
		test_three_des_crypt_1();
		break;
	default:
		abnormal_three_des_crypt_case(caseIndex);
		break;
	}

	test_three_des_crypt_down();
}

