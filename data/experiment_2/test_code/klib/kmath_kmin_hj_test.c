void test_kmin_hj_up(void);
void test_kmin_hj_down(void);


void test_kmin_hj_up(void){

	aunit_printf("\n##FUNCTION_START_kmin_hj\n");
 }

void test_kmin_hj_down(void){
	aunit_printf("\n##FUNCTION_END_kmin_hj\n");
 }



void abnormal_kmin_hj_case(int index);

void abnormal_kmin_hj_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kmin_hj_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double (*func)(int, double *, void *);
	int n;
	double *x;
	void *data;
	double r;
	double eps;
	int max_calls;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.5};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	double (*valueList_2[])(int, double *, void *)={(double (*)(int, double *, void *))func_STUB};
	unsigned int listLength_2=1;
	double *valueList_3[]={(double *)x_PTRTO};
	unsigned int listLength_3=1;
	double valueList_4[]={0.01};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	double valueList_6[]={1.0};
	unsigned int listLength_6=1;
	double valueList_7[]={2.0};
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
	case_id=8;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	memcpy_call_counter = 0;
	func_STUB_call_counter = 0;
	calloc_call_counter = 0;
	__kmin_hj_aux_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kmin_hj_8,false,0\n");
	aunit_printf("#CASE_START_test_kmin_hj_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			r=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max_calls=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			func=(double (*)(int, double *, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			x=(double *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			eps=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			n=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			x_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			x_PTRTO[1]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = kmin_hj(func,n,x,data,r,eps,max_calls);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kmin_hj","returnValue",1.0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("__kmin_hj_aux","__kmin_hj_aux_call_counter",__kmin_hj_aux_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_kmin_hj_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_kmin_hj_up();

	switch(caseIndex){
	case 8:
		test_kmin_hj_8();
		break;
	default:
		abnormal_kmin_hj_case(caseIndex);
		break;
	}

	test_kmin_hj_down();
}

