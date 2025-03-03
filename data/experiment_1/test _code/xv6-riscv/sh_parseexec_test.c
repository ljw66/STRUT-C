void test_parseexec_up(void);
void test_parseexec_down(void);


void test_parseexec_up(void){

	aunit_printf("\n##FUNCTION_START_parseexec\n");
 }

void test_parseexec_down(void){
	aunit_printf("\n##FUNCTION_END_parseexec\n");
 }



void abnormal_parseexec_case(int index);

void abnormal_parseexec_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseexec_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 arg11"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	execcmd_call_counter = 0;
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseblock_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseexec_4,false,0\n");
	aunit_printf("#CASE_START_test_parseexec_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*ps=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = parseexec(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseexec","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("execcmd","execcmd_call_counter",execcmd_call_counter)
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseblock","parseblock_call_counter",parseblock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseexec_4\n");
}

void test_parseexec_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"cmd > output.txt"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	execcmd_call_counter = 0;
	parseredirs_call_counter = 0;
	gettoken_call_counter = 0;
	parseblock_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseexec_5,false,0\n");
	aunit_printf("#CASE_START_test_parseexec_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*ps=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = parseexec(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseexec","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("parseexec","returnValue->type",2,returnValue->type)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("execcmd","execcmd_call_counter",execcmd_call_counter)
	OB_INT_EXPR("parseredirs","parseredirs_call_counter",parseredirs_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parseblock","parseblock_call_counter",parseblock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseexec_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseexec_up();

	switch(caseIndex){
	case 4:
		test_parseexec_4();
		break;
	case 5:
		test_parseexec_5();
		break;
	default:
		abnormal_parseexec_case(caseIndex);
		break;
	}

	test_parseexec_down();
}

