void test_aes_decrypt_cbc_up(void);
void test_aes_decrypt_cbc_down(void);


void test_aes_decrypt_cbc_up(void){

	aunit_printf("\n##FUNCTION_START_aes_decrypt_cbc\n");
 }

void test_aes_decrypt_cbc_down(void){
	aunit_printf("\n##FUNCTION_END_aes_decrypt_cbc\n");
 }



void abnormal_aes_decrypt_cbc_case(int index);

void abnormal_aes_decrypt_cbc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_decrypt_cbc_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={16};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcd"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={15};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"abcd"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"abcd"};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
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
	case_id=1;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_decrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_cbc_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_cbc_1\n");
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
		returnValue = aes_decrypt_cbc(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("aes_decrypt_cbc","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_decrypt","aes_decrypt_call_counter",aes_decrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_cbc_1\n");
}

void test_aes_decrypt_cbc_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={16};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdefghijklmnop"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={16};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"1234567890abcdef"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x9abcdef0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x12345678};
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
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_decrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_cbc_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_cbc_2\n");
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
			key_PTRTO[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = aes_decrypt_cbc(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("aes_decrypt_cbc","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_decrypt","aes_decrypt_call_counter",aes_decrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_cbc_2\n");
}

void test_aes_decrypt_cbc_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={16};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdefghijklmnopqrstuvwx"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={24};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"abcdefabcdefabcdef"};
	unsigned int listLength_3=1;
	WORD *valueList_4[]={(WORD *)key_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x22222222};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x11111111};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_decrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_cbc_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_cbc_3\n");
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
			key_PTRTO[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			key_PTRTO[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = aes_decrypt_cbc(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("aes_decrypt_cbc","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_decrypt","aes_decrypt_call_counter",aes_decrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_cbc_3\n");
}

void test_aes_decrypt_cbc_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	unsigned int in_len;
	BYTE *out;
	WORD *key;
	int keysize;
	BYTE *iv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={16};
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
	case_id=4;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;
	xor_buf_call_counter = 0;
	aes_decrypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_cbc_4,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_cbc_4\n");
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
		returnValue = aes_decrypt_cbc(in,in_len,out,key,keysize,iv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("aes_decrypt_cbc","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("xor_buf","xor_buf_call_counter",xor_buf_call_counter)
	OB_INT_EXPR("aes_decrypt","aes_decrypt_call_counter",aes_decrypt_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_cbc_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_decrypt_cbc_up();

	switch(caseIndex){
	case 1:
		test_aes_decrypt_cbc_1();
		break;
	case 2:
		test_aes_decrypt_cbc_2();
		break;
	case 3:
		test_aes_decrypt_cbc_3();
		break;
	case 4:
		test_aes_decrypt_cbc_4();
		break;
	default:
		abnormal_aes_decrypt_cbc_case(caseIndex);
		break;
	}

	test_aes_decrypt_cbc_down();
}

