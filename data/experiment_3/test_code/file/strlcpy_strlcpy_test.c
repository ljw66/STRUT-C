void test_strlcpy_up(void);
void test_strlcpy_down(void);


void test_strlcpy_up(void){

	aunit_printf("\n##FUNCTION_START_strlcpy\n");
 }

void test_strlcpy_down(void){
	aunit_printf("\n##FUNCTION_END_strlcpy\n");
 }



void abnormal_strlcpy_case(int index);

void abnormal_strlcpy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_strlcpy_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
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

	aunit_printf("###TEST_TREE_test_strlcpy_1,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			siz=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",3,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_1\n");
}

void test_strlcpy_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"xxxx"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
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

	aunit_printf("###TEST_TREE_test_strlcpy_2,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			siz=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",3,returnValue)
	TEST_ASSERT_EQUAL_STRING("strlcpy","dst","\0xxx",dst)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_2\n");
}

void test_strlcpy_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"xxxxxxxx"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strlcpy_3,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			siz=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",3,returnValue)
	TEST_ASSERT_EQUAL_STRING("strlcpy","dst","abc\0xxxx",dst)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_3\n");
}

void test_strlcpy_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"xxxxxxxx"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcd"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strlcpy_4,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			siz=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",4,returnValue)
	TEST_ASSERT_EQUAL_STRING("strlcpy","dst","abcd\0xxx",dst)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_4\n");
}

void test_strlcpy_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"xxxxxxxx"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcdefgh"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strlcpy_5,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			siz=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",8,returnValue)
	TEST_ASSERT_EQUAL_STRING("strlcpy","dst","abcd\0xxx",dst)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_5\n");
}

void test_strlcpy_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"xxxxxxxx"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strlcpy_6,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			siz=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_STRING("strlcpy","dst","\0xxxxxxx",dst)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_6\n");
}

void test_strlcpy_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abcdefgh"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcdefgh"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strlcpy_7,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			siz=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",8,returnValue)
	TEST_ASSERT_EQUAL_STRING("strlcpy","dst","abcd\0efgh",dst)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_7\n");
}

void test_strlcpy_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strlcpy_8,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			siz=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",3,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_8\n");
}

void test_strlcpy_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"xxxxxxxx"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_strlcpy_9,false,0\n");
	aunit_printf("#CASE_START_test_strlcpy_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			siz=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = strlcpy(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("strlcpy","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_strlcpy_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_strlcpy_up();

	switch(caseIndex){
	case 1:
		test_strlcpy_1();
		break;
	case 2:
		test_strlcpy_2();
		break;
	case 3:
		test_strlcpy_3();
		break;
	case 4:
		test_strlcpy_4();
		break;
	case 5:
		test_strlcpy_5();
		break;
	case 6:
		test_strlcpy_6();
		break;
	case 7:
		test_strlcpy_7();
		break;
	case 8:
		test_strlcpy_8();
		break;
	case 9:
		test_strlcpy_9();
		break;
	default:
		abnormal_strlcpy_case(caseIndex);
		break;
	}

	test_strlcpy_down();
}

