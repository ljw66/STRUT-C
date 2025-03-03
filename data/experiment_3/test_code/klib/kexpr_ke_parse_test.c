void test_ke_parse_up(void);
void test_ke_parse_down(void);


void test_ke_parse_up(void){

	aunit_printf("\n##FUNCTION_START_ke_parse\n");
 }

void test_ke_parse_down(void){
	aunit_printf("\n##FUNCTION_END_ke_parse\n");
 }



void abnormal_ke_parse_case(int index);

void abnormal_ke_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_parse_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *_s;
	int *err;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"valid_expression"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	calloc_call_counter = 0;
	ke_parse_core_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_parse_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_parse_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			err_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ke_parse(_s,err);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("ke_parse","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("ke_parse_core","ke_parse_core_call_counter",ke_parse_core_call_counter)

	aunit_printf("#CASE_END_test_ke_parse_1\n");
}

void test_ke_parse_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *_s;
	int *err;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"invalid_expression"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	calloc_call_counter = 0;
	ke_parse_core_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_parse_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_parse_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			err_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ke_parse(_s,err);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("ke_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("ke_parse_core","ke_parse_core_call_counter",ke_parse_core_call_counter)

	aunit_printf("#CASE_END_test_ke_parse_2\n");
}

void test_ke_parse_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *_s;
	int *err;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"valid_expression"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	calloc_call_counter = 0;
	ke_parse_core_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_parse_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_parse_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			err_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ke_parse(_s,err);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("ke_parse","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("ke_parse_core","ke_parse_core_call_counter",ke_parse_core_call_counter)

	aunit_printf("#CASE_END_test_ke_parse_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_parse_up();

	switch(caseIndex){
	case 1:
		test_ke_parse_1();
		break;
	case 2:
		test_ke_parse_2();
		break;
	case 3:
		test_ke_parse_3();
		break;
	default:
		abnormal_ke_parse_case(caseIndex);
		break;
	}

	test_ke_parse_down();
}

