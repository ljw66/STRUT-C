void test_kmin_brent_up(void);
void test_kmin_brent_down(void);


void test_kmin_brent_up(void){

	aunit_printf("\n##FUNCTION_START_kmin_brent\n");
 }

void test_kmin_brent_down(void){
	aunit_printf("\n##FUNCTION_END_kmin_brent\n");
 }



void abnormal_kmin_brent_case(int index);

void abnormal_kmin_brent_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kmin_brent_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	double (*func)(double, void *);
	double a;
	double b;
	void *data;
	double tol;
	double *xmin;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	double returnValue = 0;

	//ֵ�������
	double valueList_0[]={1.0};
	unsigned int listLength_0=1;
	double valueList_1[]={2.0};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)xmin_PTRTO};
	unsigned int listLength_2=1;
	double (*valueList_3[])(double, void *)={(double (*)(double, void *))func_STUB};
	unsigned int listLength_3=1;
	double valueList_4[]={0.0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	fabs_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kmin_brent_10,false,0\n");
	aunit_printf("#CASE_START_test_kmin_brent_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			xmin=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			func=(double (*)(double, void *))valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			xmin_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = kmin_brent(func,a,b,data,tol,xmin);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_DOUBLE("kmin_brent","returnValue",1.0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("fabs","fabs_call_counter",fabs_call_counter)
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test_kmin_brent_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_kmin_brent_up();

	switch(caseIndex){
	case 10:
		test_kmin_brent_10();
		break;
	default:
		abnormal_kmin_brent_case(caseIndex);
		break;
	}

	test_kmin_brent_down();
}

