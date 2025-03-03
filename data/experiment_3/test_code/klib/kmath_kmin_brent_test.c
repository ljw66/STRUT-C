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
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double (*func)(double, void *);
	double a;
	double b;
	void *data;
	double tol;
	double *xmin;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
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
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器
	fabs_call_counter = 0;
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kmin_brent_10,false,0\n");
	aunit_printf("#CASE_START_test_kmin_brent_10\n");
	//循环计数器,为用户变量/返回值赋值
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
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("kmin_brent","returnValue",1.0,returnValue)

	//预期用例中各桩函数调用次数
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

