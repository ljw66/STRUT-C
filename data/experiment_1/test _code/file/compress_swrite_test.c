void test_swrite_up(void);
void test_swrite_down(void);


void test_swrite_up(void){

	aunit_printf("\n##FUNCTION_START_swrite\n");
 }

void test_swrite_down(void){
	aunit_printf("\n##FUNCTION_END_swrite\n");
 }



void abnormal_swrite_case(int index);

void abnormal_swrite_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_swrite_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int fd;
	void *buf;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ssize_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"test_data"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	lzmacmp_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swrite_1,false,0\n");
	aunit_printf("#CASE_START_test_swrite_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fd=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = swrite(fd,buf,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("swrite","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("swrite","returnValue",10,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("lzmacmp","lzmacmp_call_counter",lzmacmp_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_swrite_1\n");
}

void test_swrite_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int fd;
	void *buf;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ssize_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"test_data"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	lzmacmp_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swrite_2,false,0\n");
	aunit_printf("#CASE_START_test_swrite_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fd=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = swrite(fd,buf,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("swrite","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("swrite","returnValue",10,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("lzmacmp","lzmacmp_call_counter",lzmacmp_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_swrite_2\n");
}

void test_swrite_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int fd;
	void *buf;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ssize_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"test_data"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	lzmacmp_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swrite_3,false,0\n");
	aunit_printf("#CASE_START_test_swrite_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fd=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = swrite(fd,buf,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("swrite","errno",4,errno)
	TEST_ASSERT_EQUAL_INT("swrite","returnValue",10,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("lzmacmp","lzmacmp_call_counter",lzmacmp_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_swrite_3\n");
}

void test_swrite_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int fd;
	void *buf;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ssize_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"test_data"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={10};
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
	lzmacmp_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swrite_4,false,0\n");
	aunit_printf("#CASE_START_test_swrite_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fd=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = swrite(fd,buf,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("swrite","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("swrite","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("lzmacmp","lzmacmp_call_counter",lzmacmp_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_swrite_4\n");
}

void test_swrite_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int fd;
	void *buf;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ssize_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"test_data"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
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
	lzmacmp_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swrite_5,false,0\n");
	aunit_printf("#CASE_START_test_swrite_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fd=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = swrite(fd,buf,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("swrite","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("swrite","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("lzmacmp","lzmacmp_call_counter",lzmacmp_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_swrite_5\n");
}

void test_swrite_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int fd;
	void *buf;
	unsigned int n;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	ssize_t returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"test_data"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	lzmacmp_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_swrite_6,false,0\n");
	aunit_printf("#CASE_START_test_swrite_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fd=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = swrite(fd,buf,n);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("swrite","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("swrite","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("lzmacmp","lzmacmp_call_counter",lzmacmp_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_swrite_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_swrite_up();

	switch(caseIndex){
	case 1:
		test_swrite_1();
		break;
	case 2:
		test_swrite_2();
		break;
	case 3:
		test_swrite_3();
		break;
	case 4:
		test_swrite_4();
		break;
	case 5:
		test_swrite_5();
		break;
	case 6:
		test_swrite_6();
		break;
	default:
		abnormal_swrite_case(caseIndex);
		break;
	}

	test_swrite_down();
}

