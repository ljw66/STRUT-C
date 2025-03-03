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

void test_hmm_pre_backward_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	hmm_par_t *hp;


	//ֵ�������
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
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
			(hp_PTRTO[0]).n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(hp_PTRTO[0]).m=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		hmm_pre_backward(hp);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("hmm_pre_backward","(hp->ae)[0][0]",3.0,(hp->ae)[0][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_pre_backward","(hp->ae)[0][1]",8.0,(hp->ae)[0][1])

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_pre_backward_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_pre_backward_up();

	switch(caseIndex){
	case 5:
		test_hmm_pre_backward_5();
		break;
	default:
		abnormal_hmm_pre_backward_case(caseIndex);
		break;
	}

	test_hmm_pre_backward_down();
}

