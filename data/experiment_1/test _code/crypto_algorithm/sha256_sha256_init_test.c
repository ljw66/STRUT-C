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
	SHA256_CTX *valueList_0[]={(SHA256_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha256_init_1,false,0\n");
	aunit_printf("#CASE_START_test_sha256_init_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(SHA256_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		sha256_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[3]",2773480762,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[2]",1013904242,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[1]",3144134277,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[0]",1779033703,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[7]",1541459225,(ctx->state)[7])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[6]",528734635,(ctx->state)[6])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[5]",2600822924,(ctx->state)[5])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha256_init","(ctx->state)[4]",1359893119,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha256_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha256_init_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_sha256_init_up();

	switch(caseIndex){
	case 1:
		test_sha256_init_1();
		break;
	default:
		abnormal_sha256_init_case(caseIndex);
		break;
	}

	test_sha256_init_down();
}

