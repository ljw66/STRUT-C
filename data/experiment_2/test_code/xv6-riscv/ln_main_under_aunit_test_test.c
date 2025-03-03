void test_main_under_aunit_test_up(void);
void test_main_under_aunit_test_down(void);


void test_main_under_aunit_test_up(void){

	aunit_printf("\n##FUNCTION_START_main_under_aunit_test\n");
 }

void test_main_under_aunit_test_down(void){
	aunit_printf("\n##FUNCTION_END_main_under_aunit_test\n");
 }



void abnormal_main_under_aunit_test_case(int index);

void abnormal_main_under_aunit_test_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_main_under_aunit_test_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int argc;
	char **argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"old"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"ln"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	link_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_1,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			argc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argv[1]=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			argv[0]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = main_under_aunit_test(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("link","link_call_counter",link_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_1\n");
}

void test_main_under_aunit_test_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int argc;
	char **argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"old"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"new"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"extra"};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"ln"};
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
	exit_call_counter = 0;
	link_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_2,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			argc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argv[1]=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			argv[2]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			argv[3]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			argv[0]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = main_under_aunit_test(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("link","link_call_counter",link_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_2\n");
}

void test_main_under_aunit_test_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int argc;
	char **argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"old"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"new"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"ln"};
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
	exit_call_counter = 0;
	link_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_3,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			argc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argv[1]=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			argv[2]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			argv[0]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = main_under_aunit_test(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("link","link_call_counter",link_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_3\n");
}

void test_main_under_aunit_test_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int argc;
	char **argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"old"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"new"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"ln"};
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
	exit_call_counter = 0;
	link_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_main_under_aunit_test_4,false,0\n");
	aunit_printf("#CASE_START_test_main_under_aunit_test_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			argc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argv[1]=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			argv[2]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			argv[0]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = main_under_aunit_test(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("main_under_aunit_test","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("link","link_call_counter",link_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_main_under_aunit_test_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_main_under_aunit_test_up();

	switch(caseIndex){
	case 1:
		test_main_under_aunit_test_1();
		break;
	case 2:
		test_main_under_aunit_test_2();
		break;
	case 3:
		test_main_under_aunit_test_3();
		break;
	case 4:
		test_main_under_aunit_test_4();
		break;
	default:
		abnormal_main_under_aunit_test_case(caseIndex);
		break;
	}

	test_main_under_aunit_test_down();
}

