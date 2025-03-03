void test_kson_format_recur_up(void);
void test_kson_format_recur_down(void);


void test_kson_format_recur_up(void){

	aunit_printf("\n##FUNCTION_START_kson_format_recur\n");
 }

void test_kson_format_recur_down(void){
	aunit_printf("\n##FUNCTION_END_kson_format_recur\n");
 }



void abnormal_kson_format_recur_case(int index);

void abnormal_kson_format_recur_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kson_format_recur_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_node_t *p;
	int depth;


	//ֵ�������
	kson_node_t *valueList_0[]={(kson_node_t *)p_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	FILE *valueList_2[]={(FILE *)stdout_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)p_PTRTO_1_key_PTRTO};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)p_PTRTO_0_key_PTRTO};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={1};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)"12345"};
	unsigned int listLength_8=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	putchar_call_counter = 0;
	fputs_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_format_recur_4,false,0\n");
	aunit_printf("#CASE_START_test_kson_format_recur_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(kson_node_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			depth=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			stdout=(FILE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).type=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[1]).key=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(stdout_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(p_PTRTO[0]).key=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).n=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(p_PTRTO[0]).v.str=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		kson_format_recur(p,depth);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("fputs","fputs_call_counter",fputs_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_kson_format_recur_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_kson_format_recur_up();

	switch(caseIndex){
	case 4:
		test_kson_format_recur_4();
		break;
	default:
		abnormal_kson_format_recur_case(caseIndex);
		break;
	}

	test_kson_format_recur_down();
}

