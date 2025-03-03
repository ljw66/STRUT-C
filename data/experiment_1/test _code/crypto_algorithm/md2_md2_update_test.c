void test_md2_update_up(void);
void test_md2_update_down(void);


void test_md2_update_up(void){

	aunit_printf("\n##FUNCTION_START_md2_update\n");
 }

void test_md2_update_down(void){
	aunit_printf("\n##FUNCTION_END_md2_update\n");
 }



void abnormal_md2_update_case(int index);

void abnormal_md2_update_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md2_update_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD2_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyz"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={26};
	unsigned int listLength_1=1;
	MD2_CTX *valueList_2[]={(MD2_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	md2_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_update_4,false,0\n");
	aunit_printf("#CASE_START_test_md2_update_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD2_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).len=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		md2_update(ctx,data,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("md2_update","ctx->len",10,ctx->len)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)

	aunit_printf("#CASE_END_test_md2_update_4\n");
}

void test_md2_update_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	MD2_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//ֵ�������
	BYTE *valueList_0[]={(BYTE *)"abcdef"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={6};
	unsigned int listLength_1=1;
	MD2_CTX *valueList_2[]={(MD2_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	md2_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_update_5,false,0\n");
	aunit_printf("#CASE_START_test_md2_update_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD2_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).len=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		md2_update(ctx,data,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("md2_update","ctx->len",0,ctx->len)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)

	aunit_printf("#CASE_END_test_md2_update_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_md2_update_up();

	switch(caseIndex){
	case 4:
		test_md2_update_4();
		break;
	case 5:
		test_md2_update_5();
		break;
	default:
		abnormal_md2_update_case(caseIndex);
		break;
	}

	test_md2_update_down();
}

