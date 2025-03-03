void test_xor_buf_up(void);
void test_xor_buf_down(void);


void test_xor_buf_up(void){

	aunit_printf("\n##FUNCTION_START_xor_buf\n");
 }

void test_xor_buf_down(void){
	aunit_printf("\n##FUNCTION_END_xor_buf\n");
 }



void abnormal_xor_buf_case(int index);

void abnormal_xor_buf_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_xor_buf_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"abc"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xor_buf_1,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xor_buf_1\n");
}

void test_xor_buf_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//ֵ�������
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"abc"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xor_buf_2,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\x00\x00\x00",out)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xor_buf_2\n");
}

void test_xor_buf_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//ֵ�������
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"def"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xor_buf_3,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\x05\x03\x05",out)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xor_buf_3\n");
}

void test_xor_buf_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//ֵ�������
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\x00\x00\x00"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\x00\x00\x00"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xor_buf_4,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\x00\x00\x00",out)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xor_buf_4\n");
}

void test_xor_buf_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//ֵ�������
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"\x00\x00\x00"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"\x01\x02\x03"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xor_buf_5,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\x01\x02\x03",out)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xor_buf_5\n");
}

void test_xor_buf_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//ֵ�������
	unsigned int valueList_0[]={8};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdefgh"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"hgfedcba"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xor_buf_6,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\x01\x01\x01\x01\x01\x01\x01\x01",out)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xor_buf_6\n");
}

void test_xor_buf_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *in;
	BYTE *out;
	unsigned int len;


	//ֵ�������
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"a"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"b"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_xor_buf_7,false,0\n");
	aunit_printf("#CASE_START_test_xor_buf_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		xor_buf(in,out,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("xor_buf","out","\x03",out)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_xor_buf_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_xor_buf_up();

	switch(caseIndex){
	case 1:
		test_xor_buf_1();
		break;
	case 2:
		test_xor_buf_2();
		break;
	case 3:
		test_xor_buf_3();
		break;
	case 4:
		test_xor_buf_4();
		break;
	case 5:
		test_xor_buf_5();
		break;
	case 6:
		test_xor_buf_6();
		break;
	case 7:
		test_xor_buf_7();
		break;
	default:
		abnormal_xor_buf_case(caseIndex);
		break;
	}

	test_xor_buf_down();
}

