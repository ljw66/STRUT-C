void test_parseredirs_up(void);
void test_parseredirs_down(void);


void test_parseredirs_up(void){

	aunit_printf("\n##FUNCTION_START_parseredirs\n");
 }

void test_parseredirs_down(void){
	aunit_printf("\n##FUNCTION_END_parseredirs\n");
 }



void abnormal_parseredirs_case(int index);

void abnormal_parseredirs_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_parseredirs_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *cmd;
	char **ps;
	char *es;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cmd *returnValue = 0;

	//ֵ�������
	struct cmd *valueList_0[]={(struct cmd *)cmd_PTRTO};
	unsigned int listLength_0=1;
	char valueList_1[]={"file"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"+ file"};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
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
	gettoken_call_counter = 0;
	redircmd_call_counter = 0;
	panic_call_counter = 0;
	peek_call_counter = 0;

	aunit_printf("###TEST_TREE_test_parseredirs_5,false,0\n");
	aunit_printf("#CASE_START_test_parseredirs_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cmd=(struct cmd *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*es=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*ps=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(cmd_PTRTO[0]).type=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = parseredirs(cmd,ps,es);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("parseredirs","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("gettoken","gettoken_call_counter",gettoken_call_counter)
	OB_INT_EXPR("redircmd","redircmd_call_counter",redircmd_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("peek","peek_call_counter",peek_call_counter)

	aunit_printf("#CASE_END_test_parseredirs_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_parseredirs_up();

	switch(caseIndex){
	case 5:
		test_parseredirs_5();
		break;
	default:
		abnormal_parseredirs_case(caseIndex);
		break;
	}

	test_parseredirs_down();
}

