void test_parsepipe_up(void);
void test_parsepipe_down(void);


void test_parsepipe_up(void){

	aunit_printf("\n##FUNCTION_START_parsepipe\n");
 }

void test_parsepipe_down(void){
	aunit_printf("\n##FUNCTION_END_parsepipe\n");
 }



void abnormal_parsepipe_case(int index);

void abnormal_parsepipe_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parsepipe_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	//*ps is an invalid expression 
	char *valueList_1[]={(char *)"command1_end"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	parseexec_call_counter = 0;
	gettoken_call_counter = 0;
	pipecmd_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parsepipe_1,false,0\n");
	aunit_printf("#CASE_START_test_parsepipe_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			es=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = parsepipe(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parsepipe","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseexec","parseexec_call_counter",parseexec_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("pipecmd","pipecmd_call_counter",pipecmd_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parsepipe_1\n");
}

void test_parsepipe_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	//*ps is an invalid expression 
	char *valueList_1[]={(char *)"command2_end"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	parseexec_call_counter = 0;
	gettoken_call_counter = 0;
	pipecmd_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parsepipe_2,false,0\n");
	aunit_printf("#CASE_START_test_parsepipe_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			es=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = parsepipe(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parsepipe","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseexec","parseexec_call_counter",parseexec_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("pipecmd","pipecmd_call_counter",pipecmd_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parsepipe_2\n");
}

void test_parsepipe_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	parseexec_call_counter = 0;
	gettoken_call_counter = 0;
	pipecmd_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parsepipe_3,false,0\n");
	aunit_printf("#CASE_START_test_parsepipe_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parsepipe(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parsepipe","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseexec","parseexec_call_counter",parseexec_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("pipecmd","pipecmd_call_counter",pipecmd_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parsepipe_3\n");
}

void test_parsepipe_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	//*ps is an invalid expression 
	char *valueList_1[]={(char *)"command3_end"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	parseexec_call_counter = 0;
	gettoken_call_counter = 0;
	pipecmd_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parsepipe_4,false,0\n");
	aunit_printf("#CASE_START_test_parsepipe_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			es=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = parsepipe(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parsepipe","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseexec","parseexec_call_counter",parseexec_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("pipecmd","pipecmd_call_counter",pipecmd_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parsepipe_4\n");
}

void test_parsepipe_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	//*ps is an invalid expression 
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	parseexec_call_counter = 0;
	gettoken_call_counter = 0;
	pipecmd_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parsepipe_5,false,0\n");
	aunit_printf("#CASE_START_test_parsepipe_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = parsepipe(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parsepipe","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parseexec","parseexec_call_counter",parseexec_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("pipecmd","pipecmd_call_counter",pipecmd_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parsepipe_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_parsepipe_up();

	switch(caseIndex){
	case 1:
		test_parsepipe_1();
		break;
	case 2:
		test_parsepipe_2();
		break;
	case 3:
		test_parsepipe_3();
		break;
	case 4:
		test_parsepipe_4();
		break;
	case 5:
		test_parsepipe_5();
		break;
	default:
		abnormal_parsepipe_case(caseIndex);
		break;
	}

	test_parsepipe_down();
}

