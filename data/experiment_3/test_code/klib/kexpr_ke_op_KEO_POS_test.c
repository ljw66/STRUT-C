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

void test_ke_op_KEO_POS_2(void){
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
	char *valueList_2[]={(char *)"string"};
	unsigned int listLength_2=1;
	long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"test"};
	unsigned int listLength_4=1;
	long long int valueList_5[]={42};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
	unsigned int listLength_6=1;
	double valueList_7[]={3.14};
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
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_ke_op_KEO_POS_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_POS_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(p_PTRTO[0]).s=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(q_PTRTO[0]).i=(long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).name=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).i=(long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(q_PTRTO[0]).r=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).r=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		ke_op_KEO_POS(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_ke_op_KEO_POS_2\n");
}

void test_ke_op_KEO_POS_3(void){
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
	char *valueList_2[]={(char *)"example"};
	unsigned int listLength_2=1;
	long long int valueList_3[]={84};
	unsigned int listLength_3=1;
	long long int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"sample"};
	unsigned int listLength_5=1;
	double valueList_6[]={2.71};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
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
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_ke_op_KEO_POS_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_POS_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(q_PTRTO[0]).i=(long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(q_PTRTO[0]).s=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(q_PTRTO[0]).r=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).r=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		ke_op_KEO_POS(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_ke_op_KEO_POS_3\n");
}

void test_ke_op_KEO_POS_4(void){
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
	char *valueList_2[]={(char *)"gamma"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"beta"};
	unsigned int listLength_3=1;
	long long int valueList_4[]={200};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"alpha"};
	unsigned int listLength_5=1;
	long long int valueList_6[]={-100};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)"delta"};
	unsigned int listLength_7=1;
	double valueList_8[]={-4.56};
	unsigned int listLength_8=1;
	double valueList_9[]={1.23};
	unsigned int listLength_9=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_ke_op_KEO_POS_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_POS_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(q_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).name=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(p_PTRTO[0]).i=(long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(q_PTRTO[0]).s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(q_PTRTO[0]).r=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(p_PTRTO[0]).r=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		ke_op_KEO_POS(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_ke_op_KEO_POS_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_op_KEO_POS_up();

	switch(caseIndex){
	case 1:
		test_ke_op_KEO_POS_1();
		break;
	case 2:
		test_ke_op_KEO_POS_2();
		break;
	case 3:
		test_ke_op_KEO_POS_3();
		break;
	case 4:
		test_ke_op_KEO_POS_4();
		break;
	default:
		abnormal_ke_op_KEO_POS_case(caseIndex);
		break;
	}

	test_ke_op_KEO_POS_down();
}

