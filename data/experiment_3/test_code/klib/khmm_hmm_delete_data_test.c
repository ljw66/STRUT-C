void test_hmm_delete_data_up(void);
void test_hmm_delete_data_down(void);


void test_hmm_delete_data_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_delete_data\n");
 }

void test_hmm_delete_data_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_delete_data\n");
 }



void abnormal_hmm_delete_data_case(int index);

void abnormal_hmm_delete_data_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_delete_data_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_data_t *hd;


	//ֵ�������
	hmm_data_t *valueList_0[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)"non-NULL"};
	unsigned int listLength_1=1;
	double **valueList_2[]={(double * *)0};
	unsigned int listLength_2=1;
	double *valueList_3[]={(double *)"non-NULL"};
	unsigned int listLength_3=1;
	double **valueList_4[]={(double * *)0};
	unsigned int listLength_4=1;
	int *valueList_5[]={(int *)"non-NULL"};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)"non-NULL"};
	unsigned int listLength_6=1;
	int valueList_7[]={2};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_delete_data_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_delete_data_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hd=(hmm_data_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(hd_PTRTO[0]).p=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(hd_PTRTO[0]).b=(double * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hd_PTRTO[0]).s=(double *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hd_PTRTO[0]).f=(double * *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hd_PTRTO[0]).v=(int *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hd_PTRTO[0]).seq=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hd_PTRTO[0]).L=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		hmm_delete_data(hd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_hmm_delete_data_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_delete_data_up();

	switch(caseIndex){
	case 4:
		test_hmm_delete_data_4();
		break;
	default:
		abnormal_hmm_delete_data_case(caseIndex);
		break;
	}

	test_hmm_delete_data_down();
}

