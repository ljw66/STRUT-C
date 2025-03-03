void test_ke_op_KEO_LE_up(void);
void test_ke_op_KEO_LE_down(void);


void test_ke_op_KEO_LE_up(void){

	aunit_printf("\n##FUNCTION_START_ke_op_KEO_LE\n");
 }

void test_ke_op_KEO_LE_down(void){
	aunit_printf("\n##FUNCTION_END_ke_op_KEO_LE\n");
 }



void abnormal_ke_op_KEO_LE_case(int index);

void abnormal_ke_op_KEO_LE_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_op_KEO_LE_1(void){
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
	char *valueList_2[]={(char *)"abc"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
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
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_op_KEO_LE_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_LE_1\n");
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
			(q_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ke_op_KEO_LE(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_LE","p->r",1.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_LE","p->i",1,p->i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_op_KEO_LE_1\n");
}

void test_ke_op_KEO_LE_2(void){
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
	char *valueList_2[]={(char *)"abc"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"def"};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_op_KEO_LE_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_LE_2\n");
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
			(q_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ke_op_KEO_LE(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_LE","p->r",1.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_LE","p->i",1,p->i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_op_KEO_LE_2\n");
}

void test_ke_op_KEO_LE_3(void){
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
	double valueList_2[]={3.0};
	unsigned int listLength_2=1;
	double valueList_3[]={2.0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_op_KEO_LE_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_LE_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).r=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).r=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ke_op_KEO_LE(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_LE","p->r",1.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_LE","p->i",1,p->i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_op_KEO_LE_3\n");
}

void test_ke_op_KEO_LE_4(void){
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
	long long int valueList_2[]={5};
	unsigned int listLength_2=1;
	long long int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_op_KEO_LE_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_LE_4\n");
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
		ke_op_KEO_LE(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_LE","p->r",0.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_LE","p->i",0,p->i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_op_KEO_LE_4\n");
}

void test_ke_op_KEO_LE_5(void){
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
	long long int valueList_2[]={10};
	unsigned int listLength_2=1;
	double valueList_3[]={5.0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_op_KEO_LE_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_LE_5\n");
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
			(p_PTRTO[0]).r=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ke_op_KEO_LE(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_LE","p->r",1.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_LE","p->i",1,p->i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_op_KEO_LE_5\n");
}

void test_ke_op_KEO_LE_6(void){
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
	char *valueList_2[]={(char *)"def"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_op_KEO_LE_6,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_LE_6\n");
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
			(q_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ke_op_KEO_LE(p,q);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_LE","p->r",0.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_LE","p->i",0,p->i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_op_KEO_LE_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_op_KEO_LE_up();

	switch(caseIndex){
	case 1:
		test_ke_op_KEO_LE_1();
		break;
	case 2:
		test_ke_op_KEO_LE_2();
		break;
	case 3:
		test_ke_op_KEO_LE_3();
		break;
	case 4:
		test_ke_op_KEO_LE_4();
		break;
	case 5:
		test_ke_op_KEO_LE_5();
		break;
	case 6:
		test_ke_op_KEO_LE_6();
		break;
	default:
		abnormal_ke_op_KEO_LE_case(caseIndex);
		break;
	}

	test_ke_op_KEO_LE_down();
}

