void test_krf_brent_up(void);
void test_krf_brent_down(void);


void test_krf_brent_up(void){

	aunit_printf("\n##FUNCTION_START_krf_brent\n");
 }

void test_krf_brent_down(void){
	aunit_printf("\n##FUNCTION_END_krf_brent\n");
 }



void abnormal_krf_brent_case(int index);

void abnormal_krf_brent_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_krf_brent_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double x1;
	double x2;
	double tol;
	double (*func)(double, void *);
	void *data;
	int *err;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={0.0001};
	unsigned int listLength_0=1;
	double (*valueList_1[])(double, void *)={(double (*)(double, void *))func_STUB};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)err_PTRTO};
	unsigned int listLength_2=1;
	double valueList_3[]={-1.0};
	unsigned int listLength_3=1;
	double valueList_4[]={1.0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
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
	case_id=9;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	func_STUB_call_counter = 0;
	SIGN_call_counter = 0;

	aunit_printf("###TEST_TREE_test_krf_brent_9,false,0\n");
	aunit_printf("#CASE_START_test_krf_brent_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tol=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			func=(double (*)(double, void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			err=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			x1=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			x2=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			err_PTRTO[0]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			err_PTRTO[1]=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = krf_brent(x1,x2,tol,func,data,err);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("krf_brent","returnValue",1.0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)
	OB_INT_EXPR("SIGN","SIGN_call_counter",SIGN_call_counter)

	aunit_printf("#CASE_END_test_krf_brent_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_krf_brent_up();

	switch(caseIndex){
	case 9:
		test_krf_brent_9();
		break;
	default:
		abnormal_krf_brent_case(caseIndex);
		break;
	}

	test_krf_brent_down();
}

