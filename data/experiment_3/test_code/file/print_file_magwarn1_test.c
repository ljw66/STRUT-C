void test_file_magwarn1_up(void);
void test_file_magwarn1_down(void);


void test_file_magwarn1_up(void){

	aunit_printf("\n##FUNCTION_START_file_magwarn1\n");
 }

void test_file_magwarn1_down(void){
	aunit_printf("\n##FUNCTION_END_file_magwarn1\n");
 }



void abnormal_file_magwarn1_case(int index);

void abnormal_file_magwarn1_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_magwarn1_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *f;


	//ֵ�������
	char *valueList_0[]={(char *)"test_string"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	file_vmagwarn_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magwarn1_1,false,0\n");
	aunit_printf("#CASE_START_test_file_magwarn1_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		file_magwarn1(f);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_vmagwarn","file_vmagwarn_call_counter",file_vmagwarn_call_counter)

	aunit_printf("#CASE_END_test_file_magwarn1_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_magwarn1_up();

	switch(caseIndex){
	case 1:
		test_file_magwarn1_1();
		break;
	default:
		abnormal_file_magwarn1_case(caseIndex);
		break;
	}

	test_file_magwarn1_down();
}

