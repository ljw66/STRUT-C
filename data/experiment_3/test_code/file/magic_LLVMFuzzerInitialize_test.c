void test_LLVMFuzzerInitialize_up(void);
void test_LLVMFuzzerInitialize_down(void);


void test_LLVMFuzzerInitialize_up(void){

	aunit_printf("\n##FUNCTION_START_LLVMFuzzerInitialize\n");
 }

void test_LLVMFuzzerInitialize_down(void){
	aunit_printf("\n##FUNCTION_END_LLVMFuzzerInitialize\n");
 }



void abnormal_LLVMFuzzerInitialize_case(int index);

void abnormal_LLVMFuzzerInitialize_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_LLVMFuzzerInitialize_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int *argc;
	char ***argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)magic_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)argc_PTRTO};
	unsigned int listLength_1=1;
	char **valueList_2[]={(char * *)12345};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
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
	case_id=2;
	//��ʼ����׮�������ü�����
	warn_call_counter = 0;
	magic_error_call_counter = 0;
	magic_open_call_counter = 0;
	warnx_call_counter = 0;
	dirname_call_counter = 0;
	snprintf_call_counter = 0;
	magic_load_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LLVMFuzzerInitialize_2,false,0\n");
	aunit_printf("#CASE_START_test_LLVMFuzzerInitialize_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magic=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argc=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*argv=(char * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			argc_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(magic_open_returnValue_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = LLVMFuzzerInitialize(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("LLVMFuzzerInitialize","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("warn","warn_call_counter",warn_call_counter)
	OB_INT_EXPR("magic_error","magic_error_call_counter",magic_error_call_counter)
	OB_INT_EXPR("magic_open","magic_open_call_counter",magic_open_call_counter)
	OB_INT_EXPR("warnx","warnx_call_counter",warnx_call_counter)
	OB_INT_EXPR("dirname","dirname_call_counter",dirname_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)
	OB_INT_EXPR("magic_load","magic_load_call_counter",magic_load_call_counter)

	aunit_printf("#CASE_END_test_LLVMFuzzerInitialize_2\n");
}

void test_LLVMFuzzerInitialize_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int *argc;
	char ***argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)magic_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)argc_PTRTO};
	unsigned int listLength_1=1;
	char **valueList_2[]={(char * *)12345};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	warn_call_counter = 0;
	magic_error_call_counter = 0;
	magic_open_call_counter = 0;
	warnx_call_counter = 0;
	dirname_call_counter = 0;
	snprintf_call_counter = 0;
	magic_load_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LLVMFuzzerInitialize_3,false,0\n");
	aunit_printf("#CASE_START_test_LLVMFuzzerInitialize_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magic=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argc=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*argv=(char * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			argc_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(magic_open_returnValue_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = LLVMFuzzerInitialize(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("LLVMFuzzerInitialize","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("warn","warn_call_counter",warn_call_counter)
	OB_INT_EXPR("magic_error","magic_error_call_counter",magic_error_call_counter)
	OB_INT_EXPR("magic_open","magic_open_call_counter",magic_open_call_counter)
	OB_INT_EXPR("warnx","warnx_call_counter",warnx_call_counter)
	OB_INT_EXPR("dirname","dirname_call_counter",dirname_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)
	OB_INT_EXPR("magic_load","magic_load_call_counter",magic_load_call_counter)

	aunit_printf("#CASE_END_test_LLVMFuzzerInitialize_3\n");
}

void test_LLVMFuzzerInitialize_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int *argc;
	char ***argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)magic_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)argc_PTRTO};
	unsigned int listLength_1=1;
	char **valueList_2[]={(char * *)12345};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
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
	case_id=4;
	//��ʼ����׮�������ü�����
	warn_call_counter = 0;
	magic_error_call_counter = 0;
	magic_open_call_counter = 0;
	warnx_call_counter = 0;
	dirname_call_counter = 0;
	snprintf_call_counter = 0;
	magic_load_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LLVMFuzzerInitialize_4,false,0\n");
	aunit_printf("#CASE_START_test_LLVMFuzzerInitialize_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magic=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argc=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*argv=(char * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			argc_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(magic_open_returnValue_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = LLVMFuzzerInitialize(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("LLVMFuzzerInitialize","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("warn","warn_call_counter",warn_call_counter)
	OB_INT_EXPR("magic_error","magic_error_call_counter",magic_error_call_counter)
	OB_INT_EXPR("magic_open","magic_open_call_counter",magic_open_call_counter)
	OB_INT_EXPR("warnx","warnx_call_counter",warnx_call_counter)
	OB_INT_EXPR("dirname","dirname_call_counter",dirname_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)
	OB_INT_EXPR("magic_load","magic_load_call_counter",magic_load_call_counter)

	aunit_printf("#CASE_END_test_LLVMFuzzerInitialize_4\n");
}

void test_LLVMFuzzerInitialize_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int *argc;
	char ***argv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)magic_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)argc_PTRTO};
	unsigned int listLength_1=1;
	char **valueList_2[]={(char * *)12345};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	warn_call_counter = 0;
	magic_error_call_counter = 0;
	magic_open_call_counter = 0;
	warnx_call_counter = 0;
	dirname_call_counter = 0;
	snprintf_call_counter = 0;
	magic_load_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LLVMFuzzerInitialize_5,false,0\n");
	aunit_printf("#CASE_START_test_LLVMFuzzerInitialize_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magic=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			argc=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*argv=(char * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			argc_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(magic_open_returnValue_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = LLVMFuzzerInitialize(argc,argv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("LLVMFuzzerInitialize","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("warn","warn_call_counter",warn_call_counter)
	OB_INT_EXPR("magic_error","magic_error_call_counter",magic_error_call_counter)
	OB_INT_EXPR("magic_open","magic_open_call_counter",magic_open_call_counter)
	OB_INT_EXPR("warnx","warnx_call_counter",warnx_call_counter)
	OB_INT_EXPR("dirname","dirname_call_counter",dirname_call_counter)
	OB_INT_EXPR("snprintf","snprintf_call_counter",snprintf_call_counter)
	OB_INT_EXPR("magic_load","magic_load_call_counter",magic_load_call_counter)

	aunit_printf("#CASE_END_test_LLVMFuzzerInitialize_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_LLVMFuzzerInitialize_up();

	switch(caseIndex){
	case 2:
		test_LLVMFuzzerInitialize_2();
		break;
	case 3:
		test_LLVMFuzzerInitialize_3();
		break;
	case 4:
		test_LLVMFuzzerInitialize_4();
		break;
	case 5:
		test_LLVMFuzzerInitialize_5();
		break;
	default:
		abnormal_LLVMFuzzerInitialize_case(caseIndex);
		break;
	}

	test_LLVMFuzzerInitialize_down();
}

