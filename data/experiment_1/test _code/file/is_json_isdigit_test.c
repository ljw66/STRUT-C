void test_json_isdigit_up(void);
void test_json_isdigit_down(void);


void test_json_isdigit_up(void){

	aunit_printf("\n##FUNCTION_START_json_isdigit\n");
 }

void test_json_isdigit_down(void){
	aunit_printf("\n##FUNCTION_END_json_isdigit\n");
 }



void abnormal_json_isdigit_case(int index);

void abnormal_json_isdigit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_isdigit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'a'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_1,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_1\n");
}

void test_json_isdigit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'Z'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_2,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_2\n");
}

void test_json_isdigit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_3,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_3\n");
}

void test_json_isdigit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={5};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_4,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_4\n");
}

void test_json_isdigit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={9};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_5,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_5\n");
}

void test_json_isdigit_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'@'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_6,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_6\n");
}

void test_json_isdigit_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'!'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_7,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_7\n");
}

void test_json_isdigit_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_8,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_8\n");
}

void test_json_isdigit_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'\\n'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_9,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_9\n");
}

void test_json_isdigit_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'\\x7F'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_10,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_10\n");
}

void test_json_isdigit_11(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'\\xFF'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=11;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_11,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_11\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_11\n");
}

void test_json_isdigit_12(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={'\\x00'};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=12;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_12,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_12\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_12\n");
}

void test_json_isdigit_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={4};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=13;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_13,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_13\n");
}

void test_json_isdigit_14(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char uc;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char valueList_0[]={7};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=14;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_json_isdigit_14,false,0\n");
	aunit_printf("#CASE_START_test_json_isdigit_14\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = json_isdigit(uc);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("json_isdigit","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_json_isdigit_14\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_isdigit_up();

	switch(caseIndex){
	case 1:
		test_json_isdigit_1();
		break;
	case 2:
		test_json_isdigit_2();
		break;
	case 3:
		test_json_isdigit_3();
		break;
	case 4:
		test_json_isdigit_4();
		break;
	case 5:
		test_json_isdigit_5();
		break;
	case 6:
		test_json_isdigit_6();
		break;
	case 7:
		test_json_isdigit_7();
		break;
	case 8:
		test_json_isdigit_8();
		break;
	case 9:
		test_json_isdigit_9();
		break;
	case 10:
		test_json_isdigit_10();
		break;
	case 11:
		test_json_isdigit_11();
		break;
	case 12:
		test_json_isdigit_12();
		break;
	case 13:
		test_json_isdigit_13();
		break;
	case 14:
		test_json_isdigit_14();
		break;
	default:
		abnormal_json_isdigit_case(caseIndex);
		break;
	}

	test_json_isdigit_down();
}

