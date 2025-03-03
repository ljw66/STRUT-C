void test_aes_decrypt_ctr_up(void);
void test_aes_decrypt_ctr_down(void);


void test_aes_decrypt_ctr_up(void){

	aunit_printf("\n##FUNCTION_START_aes_decrypt_ctr\n");
 }

void test_aes_decrypt_ctr_down(void){
	aunit_printf("\n##FUNCTION_END_aes_decrypt_ctr\n");
 }



void abnormal_aes_decrypt_ctr_case(int index);

void abnormal_aes_decrypt_ctr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_decrypt_ctr_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	WORD *valueList_2[]={(WORD *)key_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
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
	aes_encrypt_ctr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ctr_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ctr_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in_len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			key=(WORD *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			key_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		aes_decrypt_ctr(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("aes_encrypt_ctr","aes_encrypt_ctr_call_counter",aes_encrypt_ctr_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ctr_1\n");
}

void test_aes_decrypt_ctr_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;


	//ֵ�������
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"test input"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"initializ"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"output data"};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={654321};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={123456};
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
	case_id=2;
	//��ʼ����׮�������ü�����
	aes_encrypt_ctr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ctr_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ctr_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iv=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key=(WORD *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			out=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[1]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		aes_decrypt_ctr(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("aes_decrypt_ctr","out","decrypted",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("aes_encrypt_ctr","aes_encrypt_ctr_call_counter",aes_encrypt_ctr_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ctr_2\n");
}

void test_aes_decrypt_ctr_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;


	//ֵ�������
	int valueList_0[]={256};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"another test"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={12};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"initvector"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"output data"};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={222222};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={111111};
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
	aes_encrypt_ctr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ctr_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ctr_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iv=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key=(WORD *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			out=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[1]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		aes_decrypt_ctr(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("aes_decrypt_ctr","out","decrypted256",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("aes_encrypt_ctr","aes_encrypt_ctr_call_counter",aes_encrypt_ctr_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ctr_3\n");
}

void test_aes_decrypt_ctr_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;


	//ֵ�������
	int valueList_0[]={192};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"maxinputdata"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1024};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"maxivector"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"output data"};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={888888};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={999999};
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
	aes_encrypt_ctr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ctr_4,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ctr_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iv=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			key=(WORD *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			out=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[1]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			key_PTRTO[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		aes_decrypt_ctr(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("aes_decrypt_ctr","out","decryptedmax",out)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("aes_encrypt_ctr","aes_encrypt_ctr_call_counter",aes_encrypt_ctr_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ctr_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_decrypt_ctr_up();

	switch(caseIndex){
	case 1:
		test_aes_decrypt_ctr_1();
		break;
	case 2:
		test_aes_decrypt_ctr_2();
		break;
	case 3:
		test_aes_decrypt_ctr_3();
		break;
	case 4:
		test_aes_decrypt_ctr_4();
		break;
	default:
		abnormal_aes_decrypt_ctr_case(caseIndex);
		break;
	}

	test_aes_decrypt_ctr_down();
}

