void test_hmm_simulate_up(void);
void test_hmm_simulate_down(void);


void test_hmm_simulate_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_simulate\n");
 }

void test_hmm_simulate_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_simulate\n");
 }



void abnormal_hmm_simulate_case(int index);

void abnormal_hmm_simulate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_simulate_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;
	int L;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	double valueList_2[]={0.7};
	unsigned int listLength_2=1;
	double valueList_3[]={0.3};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	calloc2_call_counter = 0;
	calloc_call_counter = 0;
	free_call_counter = 0;
	drand48_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_simulate_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_simulate_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			L=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hp_PTRTO_0_a0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			hp_PTRTO_0_a0_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hp_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hp_PTRTO[0]).m=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = hmm_simulate(hp,L);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("hmm_simulate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc2","calloc2_call_counter",calloc2_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("drand48","drand48_call_counter",drand48_call_counter)

	aunit_printf("#CASE_END_test_hmm_simulate_4\n");
}

void test_hmm_simulate_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;
	int L;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	char *returnValue = 0;

	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={4};
	unsigned int listLength_1=1;
	double valueList_2[]={0.3};
	unsigned int listLength_2=1;
	double valueList_3[]={0.4};
	unsigned int listLength_3=1;
	double valueList_4[]={0.3};
	unsigned int listLength_4=1;
	int valueList_5[]={3};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	calloc2_call_counter = 0;
	calloc_call_counter = 0;
	free_call_counter = 0;
	drand48_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_simulate_5,false,0\n");
	aunit_printf("#CASE_START_test_hmm_simulate_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			L=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hp_PTRTO_0_a0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			hp_PTRTO_0_a0_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			hp_PTRTO_0_a0_PTRTO[2]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hp_PTRTO[0]).n=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = hmm_simulate(hp,L);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("hmm_simulate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("calloc2","calloc2_call_counter",calloc2_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("drand48","drand48_call_counter",drand48_call_counter)

	aunit_printf("#CASE_END_test_hmm_simulate_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_simulate_up();

	switch(caseIndex){
	case 4:
		test_hmm_simulate_4();
		break;
	case 5:
		test_hmm_simulate_5();
		break;
	default:
		abnormal_hmm_simulate_case(caseIndex);
		break;
	}

	test_hmm_simulate_down();
}

