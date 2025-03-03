void test_magic_buffer_up(void);
void test_magic_buffer_down(void);


void test_magic_buffer_up(void){

	aunit_printf("\n##FUNCTION_START_magic_buffer\n");
 }

void test_magic_buffer_down(void){
	aunit_printf("\n##FUNCTION_END_magic_buffer\n");
 }



void abnormal_magic_buffer_case(int index);

void abnormal_magic_buffer_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_buffer_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	void *buf;
	unsigned int nb;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	file_getbuffer_call_counter = 0;
	file_reset_call_counter = 0;
	file_buffer_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_buffer_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_buffer_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nb=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = magic_buffer(ms,buf,nb);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("magic_buffer","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("file_getbuffer","file_getbuffer_call_counter",file_getbuffer_call_counter)
	OB_INT_EXPR("file_reset","file_reset_call_counter",file_reset_call_counter)
	OB_INT_EXPR("file_buffer","file_buffer_call_counter",file_buffer_call_counter)

	aunit_printf("#CASE_END_test_magic_buffer_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_buffer_up();

	switch(caseIndex){
	case 1:
		test_magic_buffer_1();
		break;
	default:
		abnormal_magic_buffer_case(caseIndex);
		break;
	}

	test_magic_buffer_down();
}

