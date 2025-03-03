void test_magic_getpath_up(void);
void test_magic_getpath_down(void);


void test_magic_getpath_up(void){

	aunit_printf("\n##FUNCTION_START_magic_getpath\n");
 }

void test_magic_getpath_down(void){
	aunit_printf("\n##FUNCTION_END_magic_getpath\n");
 }



void abnormal_magic_getpath_case(int index);

void abnormal_magic_getpath_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_getpath_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *magicfile;
	int action;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;
	get_default_magic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_getpath_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_getpath_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			action=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			magicfile=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = magic_getpath(magicfile,action);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("magic_getpath","returnValue","abc",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)
	OB_INT_EXPR("get_default_magic","get_default_magic_call_counter",get_default_magic_call_counter)

	aunit_printf("#CASE_END_test_magic_getpath_1\n");
}

void test_magic_getpath_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *magicfile;
	int action;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;
	get_default_magic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_getpath_2,false,0\n");
	aunit_printf("#CASE_START_test_magic_getpath_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			action=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			magicfile=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = magic_getpath(magicfile,action);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("magic_getpath","returnValue","env_magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)
	OB_INT_EXPR("get_default_magic","get_default_magic_call_counter",get_default_magic_call_counter)

	aunit_printf("#CASE_END_test_magic_getpath_2\n");
}

void test_magic_getpath_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *magicfile;
	int action;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;
	get_default_magic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_getpath_3,false,0\n");
	aunit_printf("#CASE_START_test_magic_getpath_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			action=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			magicfile=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = magic_getpath(magicfile,action);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("magic_getpath","returnValue","default_magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)
	OB_INT_EXPR("get_default_magic","get_default_magic_call_counter",get_default_magic_call_counter)

	aunit_printf("#CASE_END_test_magic_getpath_3\n");
}

void test_magic_getpath_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *magicfile;
	int action;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;
	get_default_magic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_getpath_4,false,0\n");
	aunit_printf("#CASE_START_test_magic_getpath_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			action=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			magicfile=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = magic_getpath(magicfile,action);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("magic_getpath","returnValue","/etc/magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)
	OB_INT_EXPR("get_default_magic","get_default_magic_call_counter",get_default_magic_call_counter)

	aunit_printf("#CASE_END_test_magic_getpath_4\n");
}

void test_magic_getpath_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *magicfile;
	int action;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	getenv_call_counter = 0;
	get_default_magic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_getpath_5,false,0\n");
	aunit_printf("#CASE_START_test_magic_getpath_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			action=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			magicfile=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = magic_getpath(magicfile,action);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("magic_getpath","returnValue","default_magic",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)
	OB_INT_EXPR("get_default_magic","get_default_magic_call_counter",get_default_magic_call_counter)

	aunit_printf("#CASE_END_test_magic_getpath_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_getpath_up();

	switch(caseIndex){
	case 1:
		test_magic_getpath_1();
		break;
	case 2:
		test_magic_getpath_2();
		break;
	case 3:
		test_magic_getpath_3();
		break;
	case 4:
		test_magic_getpath_4();
		break;
	case 5:
		test_magic_getpath_5();
		break;
	default:
		abnormal_magic_getpath_case(caseIndex);
		break;
	}

	test_magic_getpath_down();
}

