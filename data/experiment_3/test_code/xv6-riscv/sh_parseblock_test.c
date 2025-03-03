void test_parseblock_up(void);
void test_parseblock_down(void);


void test_parseblock_up(void){

	aunit_printf("\n##FUNCTION_START_parseblock\n");
 }

void test_parseblock_down(void){
	aunit_printf("\n##FUNCTION_END_parseblock\n");
 }



void abnormal_parseblock_case(int index);

void abnormal_parseblock_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseblock_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"d"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"(cmd)"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_1,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*ps=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = parseblock(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_1\n");
}

void test_parseblock_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"d"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"cmd)"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_2,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*ps=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = parseblock(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_2\n");
}

void test_parseblock_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"d"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"(cmd"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_3,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*ps=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = parseblock(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_3\n");
}

void test_parseblock_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"d"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"((cmd))"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_4,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*ps=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = parseblock(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_4\n");
}

void test_parseblock_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseline_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseblock_5,false,0\n");
	aunit_printf("#CASE_START_test_parseblock_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parseblock(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseblock","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseline","parseline_call_counter",parseline_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseblock_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseblock_up();

	switch(caseIndex){
	case 1:
		test_parseblock_1();
		break;
	case 2:
		test_parseblock_2();
		break;
	case 3:
		test_parseblock_3();
		break;
	case 4:
		test_parseblock_4();
		break;
	case 5:
		test_parseblock_5();
		break;
	default:
		abnormal_parseblock_case(caseIndex);
		break;
	}

	test_parseblock_down();
}

