void test_ke_print_up(void);
void test_ke_print_down(void);


void test_ke_print_up(void){

	aunit_printf("\n##FUNCTION_START_ke_print\n");
 }

void test_ke_print_down(void){
	aunit_printf("\n##FUNCTION_END_ke_print\n");
 }



void abnormal_ke_print_case(int index);

void abnormal_ke_print_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_print_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;


	//ֵ�������
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	ke1_t *valueList_2[]={(ke1_t *)&struct_ke1_s9};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_7,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ke_PTRTO[0]).n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		ke_print(ke);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_print_up();

	switch(caseIndex){
	case 7:
		test_ke_print_7();
		break;
	default:
		abnormal_ke_print_case(caseIndex);
		break;
	}

	test_ke_print_down();
}

