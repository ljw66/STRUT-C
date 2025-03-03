void test_md2_final_up(void);
void test_md2_final_down(void);


void test_md2_final_up(void){

	aunit_printf("\n##FUNCTION_START_md2_final\n");
 }

void test_md2_final_down(void){
	aunit_printf("\n##FUNCTION_END_md2_final\n");
 }



void abnormal_md2_final_case(int index);

void abnormal_md2_final_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md2_final_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD2_CTX *ctx;
	BYTE *hash;


	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_1,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		md2_final(ctx,hash);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("md2_final","hash","ctx->state",hash)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_1\n");
}

void test_md2_final_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD2_CTX *ctx;
	BYTE *hash;


	//ֵ�������
	int valueList_0[]={8};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_2,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		md2_final(ctx,hash);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("md2_final","hash","ctx->state",hash)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_2\n");
}

void test_md2_final_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD2_CTX *ctx;
	BYTE *hash;


	//ֵ�������
	int valueList_0[]={16};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_3,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		md2_final(ctx,hash);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("md2_final","hash","ctx->state",hash)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_3\n");
}

void test_md2_final_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD2_CTX *ctx;
	BYTE *hash;


	//ֵ�������
	int valueList_0[]={15};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_4,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		md2_final(ctx,hash);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("md2_final","hash","ctx->state",hash)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_md2_final_up();

	switch(caseIndex){
	case 1:
		test_md2_final_1();
		break;
	case 2:
		test_md2_final_2();
		break;
	case 3:
		test_md2_final_3();
		break;
	case 4:
		test_md2_final_4();
		break;
	default:
		abnormal_md2_final_case(caseIndex);
		break;
	}

	test_md2_final_down();
}

