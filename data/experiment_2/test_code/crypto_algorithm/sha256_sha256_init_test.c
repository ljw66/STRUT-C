void test_sha256_init_up(void);
void test_sha256_init_down(void);


void test_sha256_init_up(void){

	aunit_printf("\n##FUNCTION_START_sha256_init\n");
 }

void test_sha256_init_down(void){
	aunit_printf("\n##FUNCTION_END_sha256_init\n");
 }



void abnormal_sha256_init_case(int index);

void abnormal_sha256_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sha256_init_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA256_CTX *ctx;


	//ֵ�������
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha256_init_1,false,0\n");
	aunit_printf("#CASE_START_test_sha256_init_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sha256_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[3]",0xa54ff53a,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[2]",0x3c6ef372,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[1]",0xbb67ae85,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[0]",0x6a09e667,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[7]",0x5be0cd19,(ctx->state)[7])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[6]",0x1f83d9ab,(ctx->state)[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[5]",0x9b05688c,(ctx->state)[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[4]",0x510e527f,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha256_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha256_init_1\n");
}

void test_sha256_init_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA256_CTX *ctx;


	//ֵ�������
	unsigned long long int valueList_0[]={200};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={100};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha256_init_2,false,0\n");
	aunit_printf("#CASE_START_test_sha256_init_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sha256_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[3]",0xa54ff53a,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[2]",0x3c6ef372,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[1]",0xbb67ae85,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[0]",0x6a09e667,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[7]",0x5be0cd19,(ctx->state)[7])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[6]",0x1f83d9ab,(ctx->state)[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[5]",0x9b05688c,(ctx->state)[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[4]",0x510e527f,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha256_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha256_init_2\n");
}

void test_sha256_init_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA256_CTX *ctx;


	//ֵ�������
	unsigned long long int valueList_0[]={18446744073709551615};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4294967295};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha256_init_3,false,0\n");
	aunit_printf("#CASE_START_test_sha256_init_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sha256_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[3]",0xa54ff53a,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[2]",0x3c6ef372,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[1]",0xbb67ae85,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[0]",0x6a09e667,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[7]",0x5be0cd19,(ctx->state)[7])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[6]",0x1f83d9ab,(ctx->state)[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[5]",0x9b05688c,(ctx->state)[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[4]",0x510e527f,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha256_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha256_init_3\n");
}

void test_sha256_init_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA256_CTX *ctx;


	//ֵ�������
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha256_init_4,false,0\n");
	aunit_printf("#CASE_START_test_sha256_init_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		sha256_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[3]",0xa54ff53a,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[2]",0x3c6ef372,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[1]",0xbb67ae85,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[0]",0x6a09e667,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[7]",0x5be0cd19,(ctx->state)[7])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[6]",0x1f83d9ab,(ctx->state)[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[5]",0x9b05688c,(ctx->state)[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[4]",0x510e527f,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha256_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha256_init_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_sha256_init_up();

	switch(caseIndex){
	case 1:
		test_sha256_init_1();
		break;
	case 2:
		test_sha256_init_2();
		break;
	case 3:
		test_sha256_init_3();
		break;
	case 4:
		test_sha256_init_4();
		break;
	default:
		abnormal_sha256_init_case(caseIndex);
		break;
	}

	test_sha256_init_down();
}

