void test_ke_set_int_up(void);
void test_ke_set_int_down(void);


void test_ke_set_int_up(void){

	aunit_printf("\n##FUNCTION_START_ke_set_int\n");
 }

void test_ke_set_int_down(void){
	aunit_printf("\n##FUNCTION_END_ke_set_int\n");
 }



void abnormal_ke_set_int_case(int index);

void abnormal_ke_set_int_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_set_int_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;
	char *var;
	long long int y;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	long long int valueList_1[]={0};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	double valueList_3[]={0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	ke1_t *valueList_6[]={(ke1_t *)&struct_ke1_s1};
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
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_int_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_int_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			var=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.r=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_ke1_s1.i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).n=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = ke_set_int(ke,var,y);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_int","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_set_int_1\n");
}

void test_ke_set_int_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;
	char *var;
	long long int y;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	long long int valueList_1[]={123};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	double valueList_3[]={0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"abc"};
	unsigned int listLength_4=1;
	long long int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	ke1_t *valueList_7[]={(ke1_t *)&struct_ke1_s1};
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
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_int_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_int_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			var=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.r=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_ke1_s1.name=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_ke1_s1.i=(long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ke_PTRTO[0]).n=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = ke_set_int(ke,var,y);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_int","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_DOUBLE("ke_set_int","struct_ke1_s1.r",123.0,struct_ke1_s1.r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_set_int","struct_ke1_s1.i",123,struct_ke1_s1.i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_set_int_2\n");
}

void test_ke_set_int_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;
	char *var;
	long long int y;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	long long int valueList_1[]={123};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	double valueList_3[]={0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"xyz"};
	unsigned int listLength_4=1;
	long long int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	ke1_t *valueList_7[]={(ke1_t *)&struct_ke1_s1};
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
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_int_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_int_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			var=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.r=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_ke1_s1.name=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_ke1_s1.i=(long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ke_PTRTO[0]).n=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = ke_set_int(ke,var,y);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_int","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_set_int_3\n");
}

void test_ke_set_int_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;
	char *var;
	long long int y;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	long long int valueList_1[]={456};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={2};
	unsigned int listLength_4=1;
	ke1_t *valueList_5[]={(ke1_t *)&struct_ke1_s1};
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
	strcmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_int_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_int_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			var=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_ke1_s1.name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_set_int(ke,var,y);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_int","returnValue",2,returnValue)
	TEST_ASSERT_EQUAL_DOUBLE("ke_set_int","struct_ke1_s1.r",456.0,struct_ke1_s1.r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_set_int","struct_ke1_s1.i",456,struct_ke1_s1.i)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)

	aunit_printf("#CASE_END_test_ke_set_int_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_set_int_up();

	switch(caseIndex){
	case 1:
		test_ke_set_int_1();
		break;
	case 2:
		test_ke_set_int_2();
		break;
	case 3:
		test_ke_set_int_3();
		break;
	case 4:
		test_ke_set_int_4();
		break;
	default:
		abnormal_ke_set_int_case(caseIndex);
		break;
	}

	test_ke_set_int_down();
}

