void test_parseline_up(void);
void test_parseline_down(void);


void test_parseline_up(void){

	aunit_printf("\n##FUNCTION_START_parseline\n");
 }

void test_parseline_down(void){
	aunit_printf("\n##FUNCTION_END_parseline\n");
 }



void abnormal_parseline_case(int index);

void abnormal_parseline_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseline_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"echo hello",(char *)" ls"};
	unsigned int listLength_0=2;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=1;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	listcmd_call_counter = 0;
	gettoken_call_counter = 0;
	parsepipe_call_counter = 0;
	backcmd_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseline_3,false,0\n");
	aunit_printf("#CASE_START_test_parseline_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*ps=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = parseline(ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseline","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("listcmd","listcmd_call_counter",listcmd_call_counter)
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("parsepipe","parsepipe_call_counter",parsepipe_call_counter)
	OB_INT_EXPR("backcmd","backcmd_call_counter",backcmd_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseline_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseline_up();

	switch(caseIndex){
	case 3:
		test_parseline_3();
		break;
	default:
		abnormal_parseline_case(caseIndex);
		break;
	}

	test_parseline_down();
}

