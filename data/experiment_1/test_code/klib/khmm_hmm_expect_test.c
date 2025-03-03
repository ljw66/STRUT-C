void test_hmm_expect_up(void);
void test_hmm_expect_down(void);


void test_hmm_expect_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_expect\n");
 }

void test_hmm_expect_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_expect\n");
 }



void abnormal_hmm_expect_case(int index);

void abnormal_hmm_expect_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_expect_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;
	hmm_data_t *hd;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_exp_t *returnValue = 0;

	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_data_t *valueList_1[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	double valueList_3[]={1.0};
	unsigned int listLength_3=1;
	double valueList_4[]={0.25};
	unsigned int listLength_4=1;
	char valueList_5[]={2};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={1};
	unsigned int listLength_7=1;
	double **valueList_8[]={(double * *)0};
	unsigned int listLength_8=1;
	int valueList_9[]={3};
	unsigned int listLength_9=1;
	double *valueList_10[]={(double *)0};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={4};
	unsigned int listLength_11=1;
	int *valueList_12[]={(int *)0};
	unsigned int listLength_12=1;
	int *valueList_13[]={(int *)0};
	unsigned int listLength_13=1;
	double **valueList_14[]={(double * *)0};
	unsigned int listLength_14=1;
	double **valueList_15[]={(double * *)0};
	unsigned int listLength_15=1;
	int valueList_16[]={2};
	unsigned int listLength_16=1;
	int valueList_17[]={2};
	unsigned int listLength_17=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	hmm_new_exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_expect_2,false,0\n");
	aunit_printf("#CASE_START_test_hmm_expect_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hd=(hmm_data_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hd_PTRTO_0_s_PTRTO[1]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			hd_PTRTO_0_s_PTRTO[0]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			hd_PTRTO_0_s_PTRTO[2]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			hd_PTRTO_0_seq_PTRTO[2]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			hd_PTRTO_0_seq_PTRTO[0]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			hd_PTRTO_0_seq_PTRTO[1]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(hp_PTRTO[0]).a=(double * *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hd_PTRTO[0]).L=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hp_PTRTO[0]).a0=(double *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hd_PTRTO[0]).status=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(hd_PTRTO[0]).p=(int *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(hd_PTRTO[0]).v=(int *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(hp_PTRTO[0]).e=(double * *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(hp_PTRTO[0]).ae=(double * *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(hp_PTRTO[0]).n=(int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(hp_PTRTO[0]).m=(int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		returnValue = hmm_expect(hp,hd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("hmm_expect","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("hmm_new_exp","hmm_new_exp_call_counter",hmm_new_exp_call_counter)

	aunit_printf("#CASE_END_test_hmm_expect_2\n");
}

void test_hmm_expect_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;
	hmm_data_t *hd;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_exp_t *returnValue = 0;

	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_data_t *valueList_1[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	double valueList_3[]={0.5};
	unsigned int listLength_3=1;
	double valueList_4[]={1.0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)0};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={4};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)0};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)0};
	unsigned int listLength_10=1;
	double **valueList_11[]={(double * *)0};
	unsigned int listLength_11=1;
	double **valueList_12[]={(double * *)0};
	unsigned int listLength_12=1;
	int valueList_13[]={2};
	unsigned int listLength_13=1;
	int valueList_14[]={3};
	unsigned int listLength_14=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	hmm_new_exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_expect_3,false,0\n");
	aunit_printf("#CASE_START_test_hmm_expect_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hd=(hmm_data_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hp_PTRTO_0_a0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			hp_PTRTO_0_a0_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			hd_PTRTO_0_s_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			hd_PTRTO_0_seq_PTRTO[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).a=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hd_PTRTO[0]).L=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(hd_PTRTO[0]).status=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hd_PTRTO[0]).p=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hd_PTRTO[0]).v=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).e=(double * *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(hp_PTRTO[0]).ae=(double * *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(hp_PTRTO[0]).n=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(hp_PTRTO[0]).m=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = hmm_expect(hp,hd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("hmm_expect","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("hmm_new_exp","hmm_new_exp_call_counter",hmm_new_exp_call_counter)

	aunit_printf("#CASE_END_test_hmm_expect_3\n");
}

void test_hmm_expect_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;
	hmm_data_t *hd;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_exp_t *returnValue = 0;

	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_data_t *valueList_1[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={0.3};
	unsigned int listLength_2=1;
	double valueList_3[]={0.7};
	unsigned int listLength_3=1;
	double valueList_4[]={0.4};
	unsigned int listLength_4=1;
	double valueList_5[]={0.8};
	unsigned int listLength_5=1;
	double valueList_6[]={0.3};
	unsigned int listLength_6=1;
	double valueList_7[]={0.6};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={2};
	unsigned int listLength_9=1;
	char valueList_10[]={1};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={1};
	unsigned int listLength_12=1;
	double **valueList_13[]={(double * *)0};
	unsigned int listLength_13=1;
	int valueList_14[]={100};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={4};
	unsigned int listLength_15=1;
	int *valueList_16[]={(int *)0};
	unsigned int listLength_16=1;
	int *valueList_17[]={(int *)0};
	unsigned int listLength_17=1;
	double **valueList_18[]={(double * *)0};
	unsigned int listLength_18=1;
	double **valueList_19[]={(double * *)0};
	unsigned int listLength_19=1;
	int valueList_20[]={3};
	unsigned int listLength_20=1;
	int valueList_21[]={4};
	unsigned int listLength_21=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;
	hmm_new_exp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_expect_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_expect_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hd=(hmm_data_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hp_PTRTO_0_a0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			hd_PTRTO_0_s_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			hp_PTRTO_0_a0_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			hd_PTRTO_0_s_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			hp_PTRTO_0_a0_PTRTO[2]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			hd_PTRTO_0_s_PTRTO[2]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			hd_PTRTO_0_seq_PTRTO[4]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			hd_PTRTO_0_seq_PTRTO[2]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			hd_PTRTO_0_seq_PTRTO[3]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			hd_PTRTO_0_seq_PTRTO[0]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			hd_PTRTO_0_seq_PTRTO[1]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(hp_PTRTO[0]).a=(double * *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(hd_PTRTO[0]).L=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(hd_PTRTO[0]).status=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(hd_PTRTO[0]).p=(int *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(hd_PTRTO[0]).v=(int *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(hp_PTRTO[0]).e=(double * *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(hp_PTRTO[0]).ae=(double * *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(hp_PTRTO[0]).n=(int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(hp_PTRTO[0]).m=(int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		returnValue = hmm_expect(hp,hd);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("hmm_expect","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("hmm_new_exp","hmm_new_exp_call_counter",hmm_new_exp_call_counter)

	aunit_printf("#CASE_END_test_hmm_expect_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_expect_up();

	switch(caseIndex){
	case 2:
		test_hmm_expect_2();
		break;
	case 3:
		test_hmm_expect_3();
		break;
	case 4:
		test_hmm_expect_4();
		break;
	default:
		abnormal_hmm_expect_case(caseIndex);
		break;
	}

	test_hmm_expect_down();
}

