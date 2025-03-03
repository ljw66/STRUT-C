void test_magic_close_up(void);
void test_magic_close_down(void);


void test_magic_close_up(void){

	aunit_printf("\n##FUNCTION_START_magic_close\n");
 }

void test_magic_close_down(void){
	aunit_printf("\n##FUNCTION_END_magic_close\n");
 }



void abnormal_magic_close_case(int index);

void abnormal_magic_close_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_close_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	file_ms_free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_close_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_close_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		magic_close(ms);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_ms_free","file_ms_free_call_counter",file_ms_free_call_counter)

	aunit_printf("#CASE_END_test_magic_close_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_close_up();

	switch(caseIndex){
	case 1:
		test_magic_close_1();
		break;
	default:
		abnormal_magic_close_case(caseIndex);
		break;
	}

	test_magic_close_down();
}

