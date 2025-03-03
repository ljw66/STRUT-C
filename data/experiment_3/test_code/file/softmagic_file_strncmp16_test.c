void test_file_strncmp16_up(void);
void test_file_strncmp16_down(void);


void test_file_strncmp16_up(void){

	aunit_printf("\n##FUNCTION_START_file_strncmp16\n");
 }

void test_file_strncmp16_down(void){
	aunit_printf("\n##FUNCTION_END_file_strncmp16\n");
 }



void abnormal_file_strncmp16_case(int index);

void abnormal_file_strncmp16_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_strncmp16_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *a;
	char *b;
	unsigned int len;
	unsigned int maxlen;
	unsigned int flags;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	file_strncmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_strncmp16_1,false,0\n");
	aunit_printf("#CASE_START_test_file_strncmp16_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			flags=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			maxlen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_strncmp16(a,b,len,maxlen,flags);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_strncmp16","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_strncmp","file_strncmp_call_counter",file_strncmp_call_counter)

	aunit_printf("#CASE_END_test_file_strncmp16_1\n");
}

void test_file_strncmp16_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *a;
	char *b;
	unsigned int len;
	unsigned int maxlen;
	unsigned int flags;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abd"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={2};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={5};
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
	file_strncmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_strncmp16_2,false,0\n");
	aunit_printf("#CASE_START_test_file_strncmp16_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			flags=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			maxlen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_strncmp16(a,b,len,maxlen,flags);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_strncmp16","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_strncmp","file_strncmp_call_counter",file_strncmp_call_counter)

	aunit_printf("#CASE_END_test_file_strncmp16_2\n");
}

void test_file_strncmp16_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *a;
	char *b;
	unsigned int len;
	unsigned int maxlen;
	unsigned int flags;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abcd"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcd"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={4};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	file_strncmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_strncmp16_3,false,0\n");
	aunit_printf("#CASE_START_test_file_strncmp16_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			flags=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			maxlen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_strncmp16(a,b,len,maxlen,flags);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_strncmp16","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_strncmp","file_strncmp_call_counter",file_strncmp_call_counter)

	aunit_printf("#CASE_END_test_file_strncmp16_3\n");
}

void test_file_strncmp16_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *a;
	char *b;
	unsigned int len;
	unsigned int maxlen;
	unsigned int flags;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"xabc"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"yabc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={4};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	file_strncmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_strncmp16_4,false,0\n");
	aunit_printf("#CASE_START_test_file_strncmp16_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			flags=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			maxlen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_strncmp16(a,b,len,maxlen,flags);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_strncmp16","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_strncmp","file_strncmp_call_counter",file_strncmp_call_counter)

	aunit_printf("#CASE_END_test_file_strncmp16_4\n");
}

void test_file_strncmp16_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *a;
	char *b;
	unsigned int len;
	unsigned int maxlen;
	unsigned int flags;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={3};
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
	file_strncmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_strncmp16_5,false,0\n");
	aunit_printf("#CASE_START_test_file_strncmp16_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			flags=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = file_strncmp16(a,b,len,maxlen,flags);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_strncmp16","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_strncmp","file_strncmp_call_counter",file_strncmp_call_counter)

	aunit_printf("#CASE_END_test_file_strncmp16_5\n");
}

void test_file_strncmp16_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *a;
	char *b;
	unsigned int len;
	unsigned int maxlen;
	unsigned int flags;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	file_strncmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_strncmp16_6,false,0\n");
	aunit_printf("#CASE_START_test_file_strncmp16_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			flags=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			maxlen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_strncmp16(a,b,len,maxlen,flags);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_strncmp16","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_strncmp","file_strncmp_call_counter",file_strncmp_call_counter)

	aunit_printf("#CASE_END_test_file_strncmp16_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_strncmp16_up();

	switch(caseIndex){
	case 1:
		test_file_strncmp16_1();
		break;
	case 2:
		test_file_strncmp16_2();
		break;
	case 3:
		test_file_strncmp16_3();
		break;
	case 4:
		test_file_strncmp16_4();
		break;
	case 5:
		test_file_strncmp16_5();
		break;
	case 6:
		test_file_strncmp16_6();
		break;
	default:
		abnormal_file_strncmp16_case(caseIndex);
		break;
	}

	test_file_strncmp16_down();
}

