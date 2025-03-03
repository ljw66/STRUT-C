void test_ke_eval_up(void);
void test_ke_eval_down(void);


void test_ke_eval_up(void){

	aunit_printf("\n##FUNCTION_START_ke_eval\n");
 }

void test_ke_eval_down(void){
	aunit_printf("\n##FUNCTION_END_ke_eval\n");
 }



void abnormal_ke_eval_case(int index);

void abnormal_ke_eval_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_eval_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kexpr_t *ke;
	int64_t *_i;
	double *_r;
	char **_p;
	int *ret_type;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	double *valueList_0[]={(double *)_r_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)ret_type_PTRTO};
	unsigned int listLength_1=1;
	kexpr_t *valueList_2[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_2=1;
	int64_t *valueList_3[]={(int64_t *)_i_PTRTO};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	double valueList_5[]={0};
	unsigned int listLength_5=1;
	ke1_t *valueList_6[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_6=1;
	long long int valueList_7[]={0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
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
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_eval_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_eval_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_r=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ret_type=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke=(kexpr_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			_i=(int64_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ke_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			_r_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			_i_PTRTO[0]=(long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			*_p=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ret_type_PTRTO[0]=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = ke_eval(ke,_i,_r,_p,ret_type);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ke_eval","returnValue",128,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_ke_eval_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_eval_up();

	switch(caseIndex){
	case 2:
		test_ke_eval_2();
		break;
	default:
		abnormal_ke_eval_case(caseIndex);
		break;
	}

	test_ke_eval_down();
}

