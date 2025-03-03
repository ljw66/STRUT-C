void test_getopt_up(void);
void test_getopt_down(void);


void test_getopt_up(void){

	aunit_printf("\n##FUNCTION_START_getopt\n");
 }

void test_getopt_down(void){
	aunit_printf("\n##FUNCTION_END_getopt\n");
 }



void abnormal_getopt_case(int index);

void abnormal_getopt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getopt_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int nargc;
	char **nargv;
	char *options;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//*nargv is an invalid expression 
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	getopt_internal_call_counter = 0;
	permute_args_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getopt_1,false,0\n");
	aunit_printf("#CASE_START_test_getopt_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nargc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			optind=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			options=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nonopt_start=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			nonopt_end=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getopt(nargc,nargv,options);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("getopt","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("getopt_internal","getopt_internal_call_counter",getopt_internal_call_counter)
	OB_INT_EXPR("permute_args","permute_args_call_counter",permute_args_call_counter)

	aunit_printf("#CASE_END_test_getopt_1\n");
}

void test_getopt_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int nargc;
	char **nargv;
	char *options;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//*nargv is an invalid expression 
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	getopt_internal_call_counter = 0;
	permute_args_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getopt_2,false,0\n");
	aunit_printf("#CASE_START_test_getopt_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nargc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			optind=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			options=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nonopt_start=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			nonopt_end=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getopt(nargc,nargv,options);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("getopt","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("getopt_internal","getopt_internal_call_counter",getopt_internal_call_counter)
	OB_INT_EXPR("permute_args","permute_args_call_counter",permute_args_call_counter)

	aunit_printf("#CASE_END_test_getopt_2\n");
}

void test_getopt_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int nargc;
	char **nargv;
	char *options;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//*nargv is an invalid expression 
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	getopt_internal_call_counter = 0;
	permute_args_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getopt_3,false,0\n");
	aunit_printf("#CASE_START_test_getopt_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nargc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			optind=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			options=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nonopt_start=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			nonopt_end=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getopt(nargc,nargv,options);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("getopt","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("getopt_internal","getopt_internal_call_counter",getopt_internal_call_counter)
	OB_INT_EXPR("permute_args","permute_args_call_counter",permute_args_call_counter)

	aunit_printf("#CASE_END_test_getopt_3\n");
}

void test_getopt_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int nargc;
	char **nargv;
	char *options;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	//*nargv is an invalid expression 
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	getopt_internal_call_counter = 0;
	permute_args_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getopt_4,false,0\n");
	aunit_printf("#CASE_START_test_getopt_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nargc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			optind=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			options=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nonopt_start=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			nonopt_end=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getopt(nargc,nargv,options);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("getopt","returnValue",-1,returnValue)
	TEST_ASSERT_EQUAL_INT("getopt","optind",1,optind)
	TEST_ASSERT_EQUAL_INT("getopt","nonopt_start",-1,nonopt_start)
	TEST_ASSERT_EQUAL_INT("getopt","nonopt_end",-1,nonopt_end)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("getopt_internal","getopt_internal_call_counter",getopt_internal_call_counter)
	OB_INT_EXPR("permute_args","permute_args_call_counter",permute_args_call_counter)

	aunit_printf("#CASE_END_test_getopt_4\n");
}

void test_getopt_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int nargc;
	char **nargv;
	char *options;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	//*nargv is an invalid expression 
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	getopt_internal_call_counter = 0;
	permute_args_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getopt_5,false,0\n");
	aunit_printf("#CASE_START_test_getopt_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nargc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			optind=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			options=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nonopt_start=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			nonopt_end=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getopt(nargc,nargv,options);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("getopt","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("getopt","optind",1,optind)
	TEST_ASSERT_EQUAL_INT("getopt","nonopt_start",1,nonopt_start)
	TEST_ASSERT_EQUAL_INT("getopt","nonopt_end",2,nonopt_end)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("getopt_internal","getopt_internal_call_counter",getopt_internal_call_counter)
	OB_INT_EXPR("permute_args","permute_args_call_counter",permute_args_call_counter)

	aunit_printf("#CASE_END_test_getopt_5\n");
}

void test_getopt_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int nargc;
	char **nargv;
	char *options;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	//*nargv is an invalid expression 
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	getopt_internal_call_counter = 0;
	permute_args_call_counter = 0;

	aunit_printf("###TEST_TREE_test_getopt_6,false,0\n");
	aunit_printf("#CASE_START_test_getopt_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nargc=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			optind=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			options=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nonopt_start=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			nonopt_end=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getopt(nargc,nargv,options);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("getopt","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_INT("getopt","optind",1,optind)
	TEST_ASSERT_EQUAL_INT("getopt","nonopt_start",1,nonopt_start)
	TEST_ASSERT_EQUAL_INT("getopt","nonopt_end",2,nonopt_end)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("getopt_internal","getopt_internal_call_counter",getopt_internal_call_counter)
	OB_INT_EXPR("permute_args","permute_args_call_counter",permute_args_call_counter)

	aunit_printf("#CASE_END_test_getopt_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_getopt_up();

	switch(caseIndex){
	case 1:
		test_getopt_1();
		break;
	case 2:
		test_getopt_2();
		break;
	case 3:
		test_getopt_3();
		break;
	case 4:
		test_getopt_4();
		break;
	case 5:
		test_getopt_5();
		break;
	case 6:
		test_getopt_6();
		break;
	default:
		abnormal_getopt_case(caseIndex);
		break;
	}

	test_getopt_down();
}

