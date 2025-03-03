void test_file_vmagwarn_up(void);
void test_file_vmagwarn_down(void);


void test_file_vmagwarn_up(void){

	aunit_printf("\n##FUNCTION_START_file_vmagwarn\n");
 }

void test_file_vmagwarn_down(void){
	aunit_printf("\n##FUNCTION_END_file_vmagwarn\n");
 }



void abnormal_file_vmagwarn_case(int index);

void abnormal_file_vmagwarn_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_vmagwarn_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *f;
	void *va;


	//ֵ�������
	FILE *valueList_0[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	fflush_call_counter = 0;
	vfprintf_call_counter = 0;
	fputc_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_vmagwarn_5,false,0\n");
	aunit_printf("#CASE_START_test_file_vmagwarn_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdout=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stderr=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		file_vmagwarn(f,va);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fflush","fflush_call_counter",fflush_call_counter)
	OB_INT_EXPR("vfprintf","vfprintf_call_counter",vfprintf_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_file_vmagwarn_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_vmagwarn_up();

	switch(caseIndex){
	case 5:
		test_file_vmagwarn_5();
		break;
	default:
		abnormal_file_vmagwarn_case(caseIndex);
		break;
	}

	test_file_vmagwarn_down();
}

