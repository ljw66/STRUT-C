void test_md5_init_up(void);
void test_md5_init_down(void);


void test_md5_init_up(void){

	aunit_printf("\n##FUNCTION_START_md5_init\n");
 }

void test_md5_init_down(void){
	aunit_printf("\n##FUNCTION_END_md5_init\n");
 }



void abnormal_md5_init_case(int index);

void abnormal_md5_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md5_init_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;


	//ֵ�������
	MD5_CTX *valueList_0[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
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
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_init_1,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD5_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		md5_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_init_1\n");
}

void test_md5_init_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;


	//ֵ�������
	MD5_CTX *valueList_0[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={512};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={64};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={987654321};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={123456789};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={222222222};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={111111111};
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

	aunit_printf("###TEST_TREE_test_md5_init_2,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD5_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		md5_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_init_2\n");
}

void test_md5_init_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;


	//ֵ�������
	MD5_CTX *valueList_0[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={18446744073709551615};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4294967295};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4294967295};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={4294967295};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={4294967295};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={4294967295};
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

	aunit_printf("###TEST_TREE_test_md5_init_3,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD5_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		md5_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_init_3\n");
}

void test_md5_init_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;


	//ֵ�������
	MD5_CTX *valueList_0[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={456789};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={123};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={456789};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={789123};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={654321};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={123456};
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
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_init_4,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD5_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		md5_init(ctx);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",1732584193,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_init_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_md5_init_up();

	switch(caseIndex){
	case 1:
		test_md5_init_1();
		break;
	case 2:
		test_md5_init_2();
		break;
	case 3:
		test_md5_init_3();
		break;
	case 4:
		test_md5_init_4();
		break;
	default:
		abnormal_md5_init_case(caseIndex);
		break;
	}

	test_md5_init_down();
}

