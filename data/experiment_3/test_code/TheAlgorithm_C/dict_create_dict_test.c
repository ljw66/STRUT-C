void test_create_dict_up(void);
void test_create_dict_down(void);


void test_create_dict_up(void){

	aunit_printf("\n##FUNCTION_START_create_dict\n");
 }

void test_create_dict_down(void){
	aunit_printf("\n##FUNCTION_END_create_dict\n");
 }



void abnormal_create_dict_case(int index);

void abnormal_create_dict_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_create_dict_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	Dictionary *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_dict_3,false,0\n");
	aunit_printf("#CASE_START_test_create_dict_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = create_dict();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("create_dict","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_create_dict_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_create_dict_up();

	switch(caseIndex){
	case 3:
		test_create_dict_3();
		break;
	default:
		abnormal_create_dict_case(caseIndex);
		break;
	}

	test_create_dict_down();
}

