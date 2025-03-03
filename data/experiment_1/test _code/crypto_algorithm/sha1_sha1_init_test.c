void test_sha1_init_up(void);
void test_sha1_init_down(void);


void test_sha1_init_up(void){

	aunit_printf("\n##FUNCTION_START_sha1_init\n");
 }

void test_sha1_init_down(void){
	aunit_printf("\n##FUNCTION_END_sha1_init\n");
 }



void abnormal_sha1_init_case(int index);

void abnormal_sha1_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sha1_init_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA1_CTX *ctx;


	//ֵ�������
	SHA1_CTX *valueList_0[]={(SHA1_CTX *)ctx_PTRTO};
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

	aunit_printf("###TEST_TREE_test_sha1_init_1,false,0\n");
	aunit_printf("#CASE_START_test_sha1_init_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(SHA1_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		sha1_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[3]",3395469782,(ctx->k)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[2]",2400959708,(ctx->k)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[1]",1859775393,(ctx->k)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[0]",1518500249,(ctx->k)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[4]",3285377520,(ctx->state)[4])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha1_init_1\n");
}

void test_sha1_init_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA1_CTX *ctx;


	//ֵ�������
	SHA1_CTX *valueList_0[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={64};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha1_init_2,false,0\n");
	aunit_printf("#CASE_START_test_sha1_init_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(SHA1_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		sha1_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[3]",3395469782,(ctx->k)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[2]",2400959708,(ctx->k)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[1]",1859775393,(ctx->k)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[0]",1518500249,(ctx->k)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[4]",3285377520,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha1_init_2\n");
}

void test_sha1_init_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA1_CTX *ctx;


	//ֵ�������
	SHA1_CTX *valueList_0[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={18446744073709551615};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4294967295};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha1_init_3,false,0\n");
	aunit_printf("#CASE_START_test_sha1_init_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(SHA1_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		sha1_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[3]",3395469782,(ctx->k)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[2]",2400959708,(ctx->k)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[1]",1859775393,(ctx->k)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[0]",1518500249,(ctx->k)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[4]",3285377520,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha1_init_3\n");
}

void test_sha1_init_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA1_CTX *ctx;


	//ֵ�������
	SHA1_CTX *valueList_0[]={(SHA1_CTX *)ctx_PTRTO};
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
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha1_init_4,false,0\n");
	aunit_printf("#CASE_START_test_sha1_init_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(SHA1_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		sha1_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[3]",3395469782,(ctx->k)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[2]",2400959708,(ctx->k)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[1]",1859775393,(ctx->k)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[0]",1518500249,(ctx->k)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[4]",3285377520,(ctx->state)[4])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha1_init_4\n");
}

void test_sha1_init_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	SHA1_CTX *ctx;


	//ֵ�������
	SHA1_CTX *valueList_0[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={18446744073709551615};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4294967295};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_sha1_init_5,false,0\n");
	aunit_printf("#CASE_START_test_sha1_init_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(SHA1_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		sha1_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[3]",3395469782,(ctx->k)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[2]",2400959708,(ctx->k)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[1]",1859775393,(ctx->k)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->k)[0]",1518500249,(ctx->k)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_init","(ctx->state)[4]",3285377520,(ctx->state)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_sha1_init_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_sha1_init_up();

	switch(caseIndex){
	case 1:
		test_sha1_init_1();
		break;
	case 2:
		test_sha1_init_2();
		break;
	case 3:
		test_sha1_init_3();
		break;
	case 4:
		test_sha1_init_4();
		break;
	case 5:
		test_sha1_init_5();
		break;
	default:
		abnormal_sha1_init_case(caseIndex);
		break;
	}

	test_sha1_init_down();
}

