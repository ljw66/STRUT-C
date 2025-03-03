void test_get_next_format_from_width_up(void);
void test_get_next_format_from_width_down(void);


void test_get_next_format_from_width_up(void){

	aunit_printf("\n##FUNCTION_START_get_next_format_from_width\n");
 }

void test_get_next_format_from_width_down(void){
	aunit_printf("\n##FUNCTION_END_get_next_format_from_width\n");
 }



void abnormal_get_next_format_from_width_case(int index);

void abnormal_get_next_format_from_width_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_next_format_from_width_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **pf;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	EFT returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)".*"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	get_next_format_from_precision_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_next_format_from_width_1,false,0\n");
	aunit_printf("#CASE_START_test_get_next_format_from_width_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*pf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = get_next_format_from_width(pf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_ENUM_EXPR("get_next_format_from_width","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_next_format_from_precision","get_next_format_from_precision_call_counter",get_next_format_from_precision_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_next_format_from_width_1\n");
}

void test_get_next_format_from_width_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **pf;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	EFT returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)".123abc"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	get_next_format_from_precision_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_next_format_from_width_2,false,0\n");
	aunit_printf("#CASE_START_test_get_next_format_from_width_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*pf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = get_next_format_from_width(pf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_ENUM_EXPR("get_next_format_from_width","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_next_format_from_precision","get_next_format_from_precision_call_counter",get_next_format_from_precision_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_next_format_from_width_2\n");
}

void test_get_next_format_from_width_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **pf;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	EFT returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"."};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	get_next_format_from_precision_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_next_format_from_width_3,false,0\n");
	aunit_printf("#CASE_START_test_get_next_format_from_width_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*pf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = get_next_format_from_width(pf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_ENUM_EXPR("get_next_format_from_width","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_next_format_from_precision","get_next_format_from_precision_call_counter",get_next_format_from_precision_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_next_format_from_width_3\n");
}

void test_get_next_format_from_width_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **pf;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	EFT returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)""};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	get_next_format_from_precision_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_next_format_from_width_5,false,0\n");
	aunit_printf("#CASE_START_test_get_next_format_from_width_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*pf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = get_next_format_from_width(pf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_ENUM_EXPR("get_next_format_from_width","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_next_format_from_precision","get_next_format_from_precision_call_counter",get_next_format_from_precision_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_next_format_from_width_5\n");
}

void test_get_next_format_from_width_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **pf;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	EFT returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)".abc"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	get_next_format_from_precision_call_counter = 0;
	isdigit_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_next_format_from_width_6,false,0\n");
	aunit_printf("#CASE_START_test_get_next_format_from_width_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			*pf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = get_next_format_from_width(pf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_ENUM_EXPR("get_next_format_from_width","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("get_next_format_from_precision","get_next_format_from_precision_call_counter",get_next_format_from_precision_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)

	aunit_printf("#CASE_END_test_get_next_format_from_width_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_next_format_from_width_up();

	switch(caseIndex){
	case 1:
		test_get_next_format_from_width_1();
		break;
	case 2:
		test_get_next_format_from_width_2();
		break;
	case 3:
		test_get_next_format_from_width_3();
		break;
	case 5:
		test_get_next_format_from_width_5();
		break;
	case 6:
		test_get_next_format_from_width_6();
		break;
	default:
		abnormal_get_next_format_from_width_case(caseIndex);
		break;
	}

	test_get_next_format_from_width_down();
}

