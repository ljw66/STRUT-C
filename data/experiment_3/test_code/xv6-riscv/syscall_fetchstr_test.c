void test_fetchstr_up(void);
void test_fetchstr_down(void);


void test_fetchstr_up(void){

	aunit_printf("\n##FUNCTION_START_fetchstr\n");
 }

void test_fetchstr_down(void){
	aunit_printf("\n##FUNCTION_END_fetchstr\n");
 }



void abnormal_fetchstr_case(int index);

void abnormal_fetchstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fetchstr_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long int addr;
	char *buf;
	int max;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"test"};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={1000};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	copyinstr_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fetchstr_1,false,0\n");
	aunit_printf("#CASE_START_test_fetchstr_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			addr=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = fetchstr(addr,buf,max);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fetchstr","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("copyinstr","copyinstr_call_counter",copyinstr_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_fetchstr_1\n");
}

void test_fetchstr_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long int addr;
	char *buf;
	int max;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"hello"};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={2000};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	copyinstr_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fetchstr_2,false,0\n");
	aunit_printf("#CASE_START_test_fetchstr_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			addr=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = fetchstr(addr,buf,max);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fetchstr","returnValue",5,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("copyinstr","copyinstr_call_counter",copyinstr_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_fetchstr_2\n");
}

void test_fetchstr_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long int addr;
	char *buf;
	int max;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={15};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={3000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	copyinstr_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fetchstr_3,false,0\n");
	aunit_printf("#CASE_START_test_fetchstr_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			max=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = fetchstr(addr,buf,max);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fetchstr","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("copyinstr","copyinstr_call_counter",copyinstr_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_fetchstr_3\n");
}

void test_fetchstr_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned long int addr;
	char *buf;
	int max;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"longstring"};
	unsigned int listLength_0=1;
	int valueList_1[]={50};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={4000};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	copyinstr_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fetchstr_4,false,0\n");
	aunit_printf("#CASE_START_test_fetchstr_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			addr=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = fetchstr(addr,buf,max);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("fetchstr","returnValue",10,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("copyinstr","copyinstr_call_counter",copyinstr_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_fetchstr_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_fetchstr_up();

	switch(caseIndex){
	case 1:
		test_fetchstr_1();
		break;
	case 2:
		test_fetchstr_2();
		break;
	case 3:
		test_fetchstr_3();
		break;
	case 4:
		test_fetchstr_4();
		break;
	default:
		abnormal_fetchstr_case(caseIndex);
		break;
	}

	test_fetchstr_down();
}

