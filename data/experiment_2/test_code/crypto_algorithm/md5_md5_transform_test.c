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

	aunit_printf("###TEST_TREE_test_md5_transform_1,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

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
	BYTE *valueList_0[]={(BYTE *)"a"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={8};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_2,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

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
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={512};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={64};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
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
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

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
	BYTE *valueList_0[]={(BYTE *)"!@#$%^&*()"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={80};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
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
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

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
	BYTE *valueList_0[]={(BYTE *)"1234567890"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={80};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
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
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

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
	BYTE *valueList_0[]={(BYTE *)"~!@#$%^&*()"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={80};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
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
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_6\n");
}

void test_md5_transform_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"abc123XYZ!@#"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={160};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_7,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_7\n");
}

void test_md5_transform_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD5_CTX *ctx;
	BYTE *data;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"};
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
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_md5_transform_8,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_md5_transform_8\n");
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
	case 7:
		test_md5_transform_7();
		break;
	case 8:
		test_md5_transform_8();
		break;
	default:
		abnormal_md5_transform_case(caseIndex);
		break;
	}

	test_md5_transform_down();
}

