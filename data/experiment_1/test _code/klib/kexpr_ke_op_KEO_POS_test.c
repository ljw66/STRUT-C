void test_ke_op_KEO_POS_up(void);
void test_ke_op_KEO_POS_down(void);


void test_ke_op_KEO_POS_up(void){

	aunit_printf("\n##FUNCTION_START_ke_op_KEO_POS\n");
 }

void test_ke_op_KEO_POS_down(void){
	aunit_printf("\n##FUNCTION_END_ke_op_KEO_POS\n");
 }



void abnormal_ke_op_KEO_POS_case(int index);

void abnormal_ke_op_KEO_POS_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_op_KEO_POS_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	ke1_t *p;
	ke1_t *q;


	//ֵ�������
	ke1_t *valueList_0[]={(ke1_t *)p_PTRTO};
	unsigned int listLength_0=1;
	ke1_t *valueList_1[]={(ke1_t *)q_PTRTO};
	unsigned int listLength_1=1;
	long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	double valueList_4[]={0.0};
	unsigned int listLength_4=1;
	double valueList_5[]={0.0};
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
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_ke_op_KEO_POS_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_POS_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).i=(long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(q_PTRTO[0]).r=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).r=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		ke_op_KEO_POS(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_ke_op_KEO_POS_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_op_KEO_POS_up();

	switch(caseIndex){
	case 1:
		test_ke_op_KEO_POS_1();
		break;
	default:
		abnormal_ke_op_KEO_POS_case(caseIndex);
		break;
	}

	test_ke_op_KEO_POS_down();
}

