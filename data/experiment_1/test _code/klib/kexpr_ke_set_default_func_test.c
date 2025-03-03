void test_ke_set_default_func_up(void);
void test_ke_set_default_func_down(void);


void test_ke_set_default_func_up(void){

	aunit_printf("\n##FUNCTION_START_ke_set_default_func\n");
 }

void test_ke_set_default_func_down(void){
	aunit_printf("\n##FUNCTION_END_ke_set_default_func\n");
 }



void abnormal_ke_set_default_func_case(int index);

void abnormal_ke_set_default_func_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_set_default_func_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	ke1_t *valueList_4[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	tan_call_counter = 0;
	log_call_counter = 0;
	sqrt_call_counter = 0;
	log10_call_counter = 0;
	cos_call_counter = 0;
	pow_call_counter = 0;
	sin_call_counter = 0;
	exp_call_counter = 0;
	ke_set_real_func1_call_counter = 0;
	ke_set_real_func2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_default_func_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_default_func_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.r=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_ke1_s1.i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ke_PTRTO[0]).n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ke_set_default_func(ke);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_default_func","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("tan","tan_call_counter",tan_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)
	OB_INT_EXPR("log10","log10_call_counter",log10_call_counter)
	OB_INT_EXPR("cos","cos_call_counter",cos_call_counter)
	OB_INT_EXPR("pow","pow_call_counter",pow_call_counter)
	OB_INT_EXPR("sin","sin_call_counter",sin_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)
	OB_INT_EXPR("ke_set_real_func1","ke_set_real_func1_call_counter",ke_set_real_func1_call_counter)
	OB_INT_EXPR("ke_set_real_func2","ke_set_real_func2_call_counter",ke_set_real_func2_call_counter)

	aunit_printf("#CASE_END_test_ke_set_default_func_1\n");
}

void test_ke_set_default_func_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	ke1_t *valueList_4[]={(ke1_t *)&struct_ke1_s1};
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
	tan_call_counter = 0;
	log_call_counter = 0;
	sqrt_call_counter = 0;
	log10_call_counter = 0;
	cos_call_counter = 0;
	pow_call_counter = 0;
	sin_call_counter = 0;
	exp_call_counter = 0;
	ke_set_real_func1_call_counter = 0;
	ke_set_real_func2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_default_func_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_default_func_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.r=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_ke1_s1.i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ke_PTRTO[0]).n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ke_set_default_func(ke);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_default_func","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("tan","tan_call_counter",tan_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)
	OB_INT_EXPR("log10","log10_call_counter",log10_call_counter)
	OB_INT_EXPR("cos","cos_call_counter",cos_call_counter)
	OB_INT_EXPR("pow","pow_call_counter",pow_call_counter)
	OB_INT_EXPR("sin","sin_call_counter",sin_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)
	OB_INT_EXPR("ke_set_real_func1","ke_set_real_func1_call_counter",ke_set_real_func1_call_counter)
	OB_INT_EXPR("ke_set_real_func2","ke_set_real_func2_call_counter",ke_set_real_func2_call_counter)

	aunit_printf("#CASE_END_test_ke_set_default_func_2\n");
}

void test_ke_set_default_func_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	ke1_t *valueList_4[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	tan_call_counter = 0;
	log_call_counter = 0;
	sqrt_call_counter = 0;
	log10_call_counter = 0;
	cos_call_counter = 0;
	pow_call_counter = 0;
	sin_call_counter = 0;
	exp_call_counter = 0;
	ke_set_real_func1_call_counter = 0;
	ke_set_real_func2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_default_func_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_default_func_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.r=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_ke1_s1.i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ke_PTRTO[0]).n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ke_set_default_func(ke);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_default_func","returnValue",-7,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("tan","tan_call_counter",tan_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)
	OB_INT_EXPR("log10","log10_call_counter",log10_call_counter)
	OB_INT_EXPR("cos","cos_call_counter",cos_call_counter)
	OB_INT_EXPR("pow","pow_call_counter",pow_call_counter)
	OB_INT_EXPR("sin","sin_call_counter",sin_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)
	OB_INT_EXPR("ke_set_real_func1","ke_set_real_func1_call_counter",ke_set_real_func1_call_counter)
	OB_INT_EXPR("ke_set_real_func2","ke_set_real_func2_call_counter",ke_set_real_func2_call_counter)

	aunit_printf("#CASE_END_test_ke_set_default_func_3\n");
}

void test_ke_set_default_func_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	ke1_t *valueList_4[]={(ke1_t *)&struct_ke1_s1};
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
	tan_call_counter = 0;
	log_call_counter = 0;
	sqrt_call_counter = 0;
	log10_call_counter = 0;
	cos_call_counter = 0;
	pow_call_counter = 0;
	sin_call_counter = 0;
	exp_call_counter = 0;
	ke_set_real_func1_call_counter = 0;
	ke_set_real_func2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_default_func_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_default_func_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.r=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_ke1_s1.i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ke_PTRTO[0]).n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ke_set_default_func(ke);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_default_func","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("tan","tan_call_counter",tan_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)
	OB_INT_EXPR("log10","log10_call_counter",log10_call_counter)
	OB_INT_EXPR("cos","cos_call_counter",cos_call_counter)
	OB_INT_EXPR("pow","pow_call_counter",pow_call_counter)
	OB_INT_EXPR("sin","sin_call_counter",sin_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)
	OB_INT_EXPR("ke_set_real_func1","ke_set_real_func1_call_counter",ke_set_real_func1_call_counter)
	OB_INT_EXPR("ke_set_real_func2","ke_set_real_func2_call_counter",ke_set_real_func2_call_counter)

	aunit_printf("#CASE_END_test_ke_set_default_func_4\n");
}

void test_ke_set_default_func_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	ke1_t *valueList_4[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	tan_call_counter = 0;
	log_call_counter = 0;
	sqrt_call_counter = 0;
	log10_call_counter = 0;
	cos_call_counter = 0;
	pow_call_counter = 0;
	sin_call_counter = 0;
	exp_call_counter = 0;
	ke_set_real_func1_call_counter = 0;
	ke_set_real_func2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_set_default_func_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_set_default_func_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.r=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_ke1_s1.i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ke_PTRTO[0]).n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ke_set_default_func(ke);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_set_default_func","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("tan","tan_call_counter",tan_call_counter)
	OB_INT_EXPR("log","log_call_counter",log_call_counter)
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)
	OB_INT_EXPR("log10","log10_call_counter",log10_call_counter)
	OB_INT_EXPR("cos","cos_call_counter",cos_call_counter)
	OB_INT_EXPR("pow","pow_call_counter",pow_call_counter)
	OB_INT_EXPR("sin","sin_call_counter",sin_call_counter)
	OB_INT_EXPR("exp","exp_call_counter",exp_call_counter)
	OB_INT_EXPR("ke_set_real_func1","ke_set_real_func1_call_counter",ke_set_real_func1_call_counter)
	OB_INT_EXPR("ke_set_real_func2","ke_set_real_func2_call_counter",ke_set_real_func2_call_counter)

	aunit_printf("#CASE_END_test_ke_set_default_func_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_set_default_func_up();

	switch(caseIndex){
	case 1:
		test_ke_set_default_func_1();
		break;
	case 2:
		test_ke_set_default_func_2();
		break;
	case 3:
		test_ke_set_default_func_3();
		break;
	case 4:
		test_ke_set_default_func_4();
		break;
	case 5:
		test_ke_set_default_func_5();
		break;
	default:
		abnormal_ke_set_default_func_case(caseIndex);
		break;
	}

	test_ke_set_default_func_down();
}

