void test_load_up(void);
void test_load_down(void);


void test_load_up(void){

	aunit_printf("\n##FUNCTION_START_load\n");
 }

void test_load_down(void){
	aunit_printf("\n##FUNCTION_END_load\n");
 }



void abnormal_load_case(int index);

void abnormal_load_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_load_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *magicfile;
	int flags;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *returnValue = 0;

	//ֵ�������
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"valid_magic_file"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	magic_error_call_counter = 0;
	magic_close_call_counter = 0;
	magic_open_call_counter = 0;
	file_warn_call_counter = 0;
	magic_load_call_counter = 0;

	aunit_printf("###TEST_TREE_test_load_3,false,0\n");
	aunit_printf("#CASE_START_test_load_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			magicfile=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = load(magicfile,flags);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("load","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("magic_error","magic_error_call_counter",magic_error_call_counter)
	OB_INT_EXPR("magic_close","magic_close_call_counter",magic_close_call_counter)
	OB_INT_EXPR("magic_open","magic_open_call_counter",magic_open_call_counter)
	OB_INT_EXPR("file_warn","file_warn_call_counter",file_warn_call_counter)
	OB_INT_EXPR("magic_load","magic_load_call_counter",magic_load_call_counter)

	aunit_printf("#CASE_END_test_load_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_load_up();

	switch(caseIndex){
	case 3:
		test_load_3();
		break;
	default:
		abnormal_load_case(caseIndex);
		break;
	}

	test_load_down();
}

