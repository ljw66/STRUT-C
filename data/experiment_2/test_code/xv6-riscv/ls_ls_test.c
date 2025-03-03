void test_ls_up(void);
void test_ls_down(void);


void test_ls_up(void){

	aunit_printf("\n##FUNCTION_START_ls\n");
 }

void test_ls_down(void){
	aunit_printf("\n##FUNCTION_END_ls\n");
 }



void abnormal_ls_case(int index);

void abnormal_ls_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ls_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;


	//ֵ�������
	char *valueList_0[]={(char *)"/valid/non-empty-directory"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;
	stat_call_counter = 0;
	read_call_counter = 0;
	memmove_call_counter = 0;
	fstat_call_counter = 0;
	fmtname_call_counter = 0;
	close_call_counter = 0;
	fprintf_call_counter = 0;
	strcpy_call_counter = 0;
	open_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ls_9,false,0\n");
	aunit_printf("#CASE_START_test_ls_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		ls(path);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("stat","stat_call_counter",stat_call_counter)
	OB_INT_EXPR("read","read_call_counter",read_call_counter)
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("fstat","fstat_call_counter",fstat_call_counter)
	OB_INT_EXPR("fmtname","fmtname_call_counter",fmtname_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("strcpy","strcpy_call_counter",strcpy_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ls_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_ls_up();

	switch(caseIndex){
	case 9:
		test_ls_9();
		break;
	default:
		abnormal_ls_case(caseIndex);
		break;
	}

	test_ls_down();
}

