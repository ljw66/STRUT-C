void test_kson_format_up(void);
void test_kson_format_down(void);


void test_kson_format_up(void){

	aunit_printf("\n##FUNCTION_START_kson_format\n");
 }

void test_kson_format_down(void){
	aunit_printf("\n##FUNCTION_END_kson_format\n");
 }



void abnormal_kson_format_case(int index);

void abnormal_kson_format_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kson_format_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_node_t *root;


	//ֵ�������
	kson_node_t *valueList_0[]={(kson_node_t *)0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	putchar_call_counter = 0;
	kson_format_recur_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_format_1,false,0\n");
	aunit_printf("#CASE_START_test_kson_format_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			root=(kson_node_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		kson_format(root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("kson_format_recur","kson_format_recur_call_counter",kson_format_recur_call_counter)

	aunit_printf("#CASE_END_test_kson_format_1\n");
}

void test_kson_format_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_node_t *root;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	putchar_call_counter = 0;
	kson_format_recur_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_format_2,false,0\n");
	aunit_printf("#CASE_START_test_kson_format_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		kson_format(root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("kson_format_recur","kson_format_recur_call_counter",kson_format_recur_call_counter)

	aunit_printf("#CASE_END_test_kson_format_2\n");
}

void test_kson_format_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_node_t *root;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	putchar_call_counter = 0;
	kson_format_recur_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_format_3,false,0\n");
	aunit_printf("#CASE_START_test_kson_format_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		kson_format(root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("kson_format_recur","kson_format_recur_call_counter",kson_format_recur_call_counter)

	aunit_printf("#CASE_END_test_kson_format_3\n");
}

void test_kson_format_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_node_t *root;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	putchar_call_counter = 0;
	kson_format_recur_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_format_4,false,0\n");
	aunit_printf("#CASE_START_test_kson_format_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		kson_format(root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("kson_format_recur","kson_format_recur_call_counter",kson_format_recur_call_counter)

	aunit_printf("#CASE_END_test_kson_format_4\n");
}

void test_kson_format_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_node_t *root;


	//ֵ�������
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	putchar_call_counter = 0;
	kson_format_recur_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_format_5,false,0\n");
	aunit_printf("#CASE_START_test_kson_format_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(root_PTRTO[0]).key=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		kson_format(root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("kson_format_recur","kson_format_recur_call_counter",kson_format_recur_call_counter)

	aunit_printf("#CASE_END_test_kson_format_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_kson_format_up();

	switch(caseIndex){
	case 1:
		test_kson_format_1();
		break;
	case 2:
		test_kson_format_2();
		break;
	case 3:
		test_kson_format_3();
		break;
	case 4:
		test_kson_format_4();
		break;
	case 5:
		test_kson_format_5();
		break;
	default:
		abnormal_kson_format_case(caseIndex);
		break;
	}

	test_kson_format_down();
}

