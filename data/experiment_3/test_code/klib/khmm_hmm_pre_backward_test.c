void test_hmm_pre_backward_up(void);
void test_hmm_pre_backward_down(void);


void test_hmm_pre_backward_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_pre_backward\n");
 }

void test_hmm_pre_backward_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_pre_backward\n");
 }



void abnormal_hmm_pre_backward_case(int index);

void abnormal_hmm_pre_backward_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_pre_backward_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;


	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	double **valueList_1[]={(double * *)0};
	unsigned int listLength_1=1;
	double **valueList_2[]={(double * *)0};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	double *valueList_5[]={(double *)0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
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
	case_id=1;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_pre_backward_1,false,0\n");
	aunit_printf("#CASE_START_test_hmm_pre_backward_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(hp_PTRTO[0]).e=(double * *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(hp_PTRTO[0]).a=(double * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).ae=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hp_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hp_PTRTO[0]).a0=(double *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		hmm_pre_backward(hp);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_pre_backward_1\n");
}

void test_hmm_pre_backward_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;


	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.0};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_pre_backward_2,false,0\n");
	aunit_printf("#CASE_START_test_hmm_pre_backward_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hp_PTRTO_0_a0_PTRTO[0]=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hp_PTRTO_0_a0_PTRTO[1]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hp_PTRTO[0]).m=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		hmm_pre_backward(hp);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_pre_backward_2\n");
}

void test_hmm_pre_backward_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;


	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_pre_backward_3,false,0\n");
	aunit_printf("#CASE_START_test_hmm_pre_backward_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		hmm_pre_backward(hp);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_pre_backward_3\n");
}

void test_hmm_pre_backward_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;


	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.0};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_pre_backward_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_pre_backward_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hp_PTRTO_0_a0_PTRTO[0]=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hp_PTRTO_0_a0_PTRTO[1]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hp_PTRTO[0]).m=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		hmm_pre_backward(hp);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_pre_backward_4\n");
}

void test_hmm_pre_backward_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;


	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0.0};
	unsigned int listLength_1=1;
	double valueList_2[]={0.0};
	unsigned int listLength_2=1;
	double valueList_3[]={0.0};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_pre_backward_5,false,0\n");
	aunit_printf("#CASE_START_test_hmm_pre_backward_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hp_PTRTO_0_a0_PTRTO[0]=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hp_PTRTO_0_a0_PTRTO[1]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			hp_PTRTO_0_a0_PTRTO[2]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hp_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hp_PTRTO[0]).m=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		hmm_pre_backward(hp);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_pre_backward_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_pre_backward_up();

	switch(caseIndex){
	case 1:
		test_hmm_pre_backward_1();
		break;
	case 2:
		test_hmm_pre_backward_2();
		break;
	case 3:
		test_hmm_pre_backward_3();
		break;
	case 4:
		test_hmm_pre_backward_4();
		break;
	case 5:
		test_hmm_pre_backward_5();
		break;
	default:
		abnormal_hmm_pre_backward_case(caseIndex);
		break;
	}

	test_hmm_pre_backward_down();
}

