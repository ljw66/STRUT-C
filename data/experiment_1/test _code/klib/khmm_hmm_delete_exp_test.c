void test_hmm_delete_exp_up(void);
void test_hmm_delete_exp_down(void);


void test_hmm_delete_exp_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_delete_exp\n");
 }

void test_hmm_delete_exp_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_delete_exp\n");
 }



void abnormal_hmm_delete_exp_case(int index);

void abnormal_hmm_delete_exp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_delete_exp_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_exp_t *he;


	//ֵ�������
	hmm_exp_t *valueList_0[]={(hmm_exp_t *)he_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_delete_exp_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_delete_exp_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			he=(hmm_exp_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(he_PTRTO[0]).n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(he_PTRTO[0]).m=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		hmm_delete_exp(he);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_hmm_delete_exp_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_delete_exp_up();

	switch(caseIndex){
	case 4:
		test_hmm_delete_exp_4();
		break;
	default:
		abnormal_hmm_delete_exp_case(caseIndex);
		break;
	}

	test_hmm_delete_exp_down();
}

