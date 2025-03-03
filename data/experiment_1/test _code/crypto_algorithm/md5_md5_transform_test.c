void test_md5_transform_up(void);
void test_md5_transform_down(void);


void test_md5_transform_up(void){

	aunit_printf("\n##FUNCTION_START_md5_transform\n");
 }

void test_md5_transform_down(void){
	aunit_printf("\n##FUNCTION_END_md5_transform\n");
 }



void abnormal_md5_transform_case(int index);

void abnormal_md5_transform_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md5_transform_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"6162636465666768696a6b6c6d6e6f707172737475767778797a30313233343536373839"};
	unsigned int listLength_0=1;
	MD5_CTX *valueList_1[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4023233417};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1732584193};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={271733878};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2562383102};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_1,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(MD5_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",543467756,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",829798908,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",3751499538,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",207964789,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_1\n");
}

void test_md5_transform_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	MD5_CTX *valueList_0[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4023233417};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1732584193};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={271733878};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={2562383102};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_2,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD5_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",271733878,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",2562383102,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",4023233417,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",1732584193,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_2\n");
}

void test_md5_transform_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"61"};
	unsigned int listLength_0=1;
	MD5_CTX *valueList_1[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4023233417};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1732584193};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={271733878};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2562383102};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_3,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(MD5_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",543467756,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",829798908,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",3751499538,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",3465168386,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_3\n");
}

void test_md5_transform_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"0000000000000000000000000000000000000000000000000000000000000000"};
	unsigned int listLength_0=1;
	MD5_CTX *valueList_1[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4023233417};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1732584193};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={271733878};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2562383102};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_4,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(MD5_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",543467756,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",829798908,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",3751499538,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",207964789,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_4\n");
}

void test_md5_transform_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"6162636465666768696a6b6c6d6e6f707172737475767778797a303132333435363738396162636465666768696a6b6c6d6e6f707172737475767778797a30313233343536373839"};
	unsigned int listLength_0=1;
	MD5_CTX *valueList_1[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4023233417};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1732584193};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={271733878};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2562383102};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_5,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(MD5_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",543467756,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",829798908,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",3751499538,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",207964789,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_5\n");
}

void test_md5_transform_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"};
	unsigned int listLength_0=1;
	MD5_CTX *valueList_1[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4023233417};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1732584193};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={271733878};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2562383102};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_6,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(MD5_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",543467756,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",829798908,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",3751499538,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",3465168386,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_md5_transform_up();

	switch(caseIndex){
	case 1:
		test_md5_transform_1();
		break;
	case 2:
		test_md5_transform_2();
		break;
	case 3:
		test_md5_transform_3();
		break;
	case 4:
		test_md5_transform_4();
		break;
	case 5:
		test_md5_transform_5();
		break;
	case 6:
		test_md5_transform_6();
		break;
	default:
		abnormal_md5_transform_case(caseIndex);
		break;
	}

	test_md5_transform_down();
}

