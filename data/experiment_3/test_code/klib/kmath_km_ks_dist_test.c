void test_km_ks_dist_up(void);
void test_km_ks_dist_down(void);


void test_km_ks_dist_up(void){

	aunit_printf("\n##FUNCTION_START_km_ks_dist\n");
 }

void test_km_ks_dist_down(void){
	aunit_printf("\n##FUNCTION_END_km_ks_dist\n");
 }



void abnormal_km_ks_dist_case(int index);

void abnormal_km_ks_dist_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_ks_dist_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int na;
	double *a;
	int nb;
	double *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double *valueList_0[]={(double *)a_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_ks_dist_1,false,0\n");
	aunit_printf("#CASE_START_test_km_ks_dist_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			na=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nb=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = km_ks_dist(na,a,nb,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("km_ks_dist","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)

	aunit_printf("#CASE_END_test_km_ks_dist_1\n");
}

void test_km_ks_dist_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int na;
	double *a;
	int nb;
	double *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double *valueList_0[]={(double *)a_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	double valueList_4[]={1.0};
	unsigned int listLength_4=1;
	double valueList_5[]={2.0};
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
	case_id=2;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_ks_dist_2,false,0\n");
	aunit_printf("#CASE_START_test_km_ks_dist_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			na=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nb=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO[1]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = km_ks_dist(na,a,nb,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("km_ks_dist","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)

	aunit_printf("#CASE_END_test_km_ks_dist_2\n");
}

void test_km_ks_dist_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int na;
	double *a;
	int nb;
	double *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double *valueList_0[]={(double *)a_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	double valueList_4[]={2.0};
	unsigned int listLength_4=1;
	double valueList_5[]={1.0};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_ks_dist_3,false,0\n");
	aunit_printf("#CASE_START_test_km_ks_dist_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			na=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nb=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			a_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			a_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = km_ks_dist(na,a,nb,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("km_ks_dist","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)

	aunit_printf("#CASE_END_test_km_ks_dist_3\n");
}

void test_km_ks_dist_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int na;
	double *a;
	int nb;
	double *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double *valueList_0[]={(double *)a_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	double valueList_4[]={1.0};
	unsigned int listLength_4=1;
	double valueList_5[]={2.0};
	unsigned int listLength_5=1;
	double valueList_6[]={2.0};
	unsigned int listLength_6=1;
	double valueList_7[]={1.0};
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
	fabs_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_ks_dist_4,false,0\n");
	aunit_printf("#CASE_START_test_km_ks_dist_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			na=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nb=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO[1]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			a_PTRTO[1]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			a_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = km_ks_dist(na,a,nb,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("km_ks_dist","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)

	aunit_printf("#CASE_END_test_km_ks_dist_4\n");
}

void test_km_ks_dist_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int na;
	double *a;
	int nb;
	double *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double *valueList_0[]={(double *)a_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	double valueList_4[]={3.0};
	unsigned int listLength_4=1;
	double valueList_5[]={4.0};
	unsigned int listLength_5=1;
	double valueList_6[]={2.0};
	unsigned int listLength_6=1;
	double valueList_7[]={1.0};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_ks_dist_5,false,0\n");
	aunit_printf("#CASE_START_test_km_ks_dist_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			na=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nb=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO[1]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			a_PTRTO[1]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			a_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = km_ks_dist(na,a,nb,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("km_ks_dist","returnValue",1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)

	aunit_printf("#CASE_END_test_km_ks_dist_5\n");
}

void test_km_ks_dist_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int na;
	double *a;
	int nb;
	double *b;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double *valueList_0[]={(double *)a_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	double valueList_4[]={2.0};
	unsigned int listLength_4=1;
	double valueList_5[]={6.0};
	unsigned int listLength_5=1;
	double valueList_6[]={4.0};
	unsigned int listLength_6=1;
	double valueList_7[]={3.0};
	unsigned int listLength_7=1;
	double valueList_8[]={1.0};
	unsigned int listLength_8=1;
	double valueList_9[]={5.0};
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
	case_id=6;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_ks_dist_6,false,0\n");
	aunit_printf("#CASE_START_test_km_ks_dist_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			na=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nb=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO[2]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b_PTRTO[1]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			a_PTRTO[1]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			a_PTRTO[0]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			a_PTRTO[2]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = km_ks_dist(na,a,nb,b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("km_ks_dist","returnValue",0.3333333333333333,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)

	aunit_printf("#CASE_END_test_km_ks_dist_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_ks_dist_up();

	switch(caseIndex){
	case 1:
		test_km_ks_dist_1();
		break;
	case 2:
		test_km_ks_dist_2();
		break;
	case 3:
		test_km_ks_dist_3();
		break;
	case 4:
		test_km_ks_dist_4();
		break;
	case 5:
		test_km_ks_dist_5();
		break;
	case 6:
		test_km_ks_dist_6();
		break;
	default:
		abnormal_km_ks_dist_case(caseIndex);
		break;
	}

	test_km_ks_dist_down();
}

