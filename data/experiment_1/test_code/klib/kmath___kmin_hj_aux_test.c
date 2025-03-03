void test___kmin_hj_aux_up(void);
void test___kmin_hj_aux_down(void);


void test___kmin_hj_aux_up(void){

	aunit_printf("\n##FUNCTION_START___kmin_hj_aux\n");
 }

void test___kmin_hj_aux_down(void){
	aunit_printf("\n##FUNCTION_END___kmin_hj_aux\n");
 }



void abnormal___kmin_hj_aux_case(int index);

void abnormal___kmin_hj_aux_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test___kmin_hj_aux_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double (*func)(int, double *, void *);
	int n;
	double *x1;
	void *data;
	double fx1;
	double *dx;
	int *n_calls;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double (*valueList_0[])(int, double *, void *)={(double (*)(int, double *, void *))func_STUB};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)dx_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)x1_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	double valueList_4[]={5.0};
	unsigned int listLength_4=1;
	int *valueList_5[]={(int *)n_calls_PTRTO};
	unsigned int listLength_5=1;
	double valueList_6[]={1.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.5};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test___kmin_hj_aux_1,false,0\n");
	aunit_printf("#CASE_START_test___kmin_hj_aux_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(int, double *, void *))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dx=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x1=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			fx1=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			n_calls=(int *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			x1_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			dx_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			n_calls_PTRTO[0]=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = __kmin_hj_aux(func,n,x1,data,fx1,dx,n_calls);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","returnValue",4.5,returnValue)
	TEST_ASSERT_EQUAL_INT("__kmin_hj_aux","n_calls[0]",1,n_calls[0])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","x1[0]",1.5,x1[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test___kmin_hj_aux_1\n");
}

void test___kmin_hj_aux_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double (*func)(int, double *, void *);
	int n;
	double *x1;
	void *data;
	double fx1;
	double *dx;
	int *n_calls;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double (*valueList_0[])(int, double *, void *)={(double (*)(int, double *, void *))func_STUB};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)dx_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)x1_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	double valueList_4[]={3.0};
	unsigned int listLength_4=1;
	int *valueList_5[]={(int *)n_calls_PTRTO};
	unsigned int listLength_5=1;
	double valueList_6[]={2.0};
	unsigned int listLength_6=1;
	double valueList_7[]={1.0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test___kmin_hj_aux_2,false,0\n");
	aunit_printf("#CASE_START_test___kmin_hj_aux_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(int, double *, void *))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dx=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x1=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			fx1=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			n_calls=(int *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			x1_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			dx_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			n_calls_PTRTO[0]=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = __kmin_hj_aux(func,n,x1,data,fx1,dx,n_calls);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","returnValue",2.5,returnValue)
	TEST_ASSERT_EQUAL_INT("__kmin_hj_aux","n_calls[0]",2,n_calls[0])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","x1[0]",1.0,x1[0])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","dx[0]",-1.0,dx[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test___kmin_hj_aux_2\n");
}

void test___kmin_hj_aux_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double (*func)(int, double *, void *);
	int n;
	double *x1;
	void *data;
	double fx1;
	double *dx;
	int *n_calls;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double (*valueList_0[])(int, double *, void *)={(double (*)(int, double *, void *))func_STUB};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)dx_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)x1_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	double valueList_4[]={10.0};
	unsigned int listLength_4=1;
	int *valueList_5[]={(int *)n_calls_PTRTO};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
	unsigned int listLength_6=1;
	double valueList_7[]={1.0};
	unsigned int listLength_7=1;
	double valueList_8[]={1.0};
	unsigned int listLength_8=1;
	double valueList_9[]={-0.5};
	unsigned int listLength_9=1;
	int valueList_10[]={0};
	unsigned int listLength_10=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
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
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test___kmin_hj_aux_3,false,0\n");
	aunit_printf("#CASE_START_test___kmin_hj_aux_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(int, double *, void *))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dx=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x1=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			fx1=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			n_calls=(int *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			x1_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			x1_PTRTO[1]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			dx_PTRTO[0]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			dx_PTRTO[1]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			n_calls_PTRTO[0]=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = __kmin_hj_aux(func,n,x1,data,fx1,dx,n_calls);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","returnValue",8.5,returnValue)
	TEST_ASSERT_EQUAL_INT("__kmin_hj_aux","n_calls[0]",3,n_calls[0])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","dx[1]",0.5,dx[1])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","x1[1]",0.0,x1[1])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","x1[0]",1.0,x1[0])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","dx[0]",1.0,dx[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test___kmin_hj_aux_3\n");
}

void test___kmin_hj_aux_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double (*func)(int, double *, void *);
	int n;
	double *x1;
	void *data;
	double fx1;
	double *dx;
	int *n_calls;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double (*valueList_0[])(int, double *, void *)={(double (*)(int, double *, void *))func_STUB};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)dx_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)x1_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	double valueList_4[]={10.0};
	unsigned int listLength_4=1;
	int *valueList_5[]={(int *)n_calls_PTRTO};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test___kmin_hj_aux_4,false,0\n");
	aunit_printf("#CASE_START_test___kmin_hj_aux_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(int, double *, void *))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dx=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x1=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			fx1=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			n_calls=(int *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			n_calls_PTRTO[0]=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = __kmin_hj_aux(func,n,x1,data,fx1,dx,n_calls);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","returnValue",10.0,returnValue)
	TEST_ASSERT_EQUAL_INT("__kmin_hj_aux","n_calls[0]",0,n_calls[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test___kmin_hj_aux_4\n");
}

void test___kmin_hj_aux_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	double (*func)(int, double *, void *);
	int n;
	double *x1;
	void *data;
	double fx1;
	double *dx;
	int *n_calls;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	double (*valueList_0[])(int, double *, void *)={(double (*)(int, double *, void *))func_STUB};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)dx_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)x1_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	double valueList_4[]={5.0};
	unsigned int listLength_4=1;
	int *valueList_5[]={(int *)n_calls_PTRTO};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
	unsigned int listLength_6=1;
	double valueList_7[]={1.0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	func_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test___kmin_hj_aux_5,false,0\n");
	aunit_printf("#CASE_START_test___kmin_hj_aux_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			func=(double (*)(int, double *, void *))valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dx=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			x1=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			fx1=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			n_calls=(int *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			x1_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			dx_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			n_calls_PTRTO[0]=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = __kmin_hj_aux(func,n,x1,data,fx1,dx,n_calls);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","returnValue",5.0,returnValue)
	TEST_ASSERT_EQUAL_INT("__kmin_hj_aux","n_calls[0]",2,n_calls[0])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","x1[0]",0.0,x1[0])
	TEST_ASSERT_EQUAL_DOUBLE("__kmin_hj_aux","dx[0]",-1.0,dx[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("func_STUB","func_STUB_call_counter",func_STUB_call_counter)

	aunit_printf("#CASE_END_test___kmin_hj_aux_5\n");
}

void aunit_test_func_run(int caseIndex){

	test___kmin_hj_aux_up();

	switch(caseIndex){
	case 1:
		test___kmin_hj_aux_1();
		break;
	case 2:
		test___kmin_hj_aux_2();
		break;
	case 3:
		test___kmin_hj_aux_3();
		break;
	case 4:
		test___kmin_hj_aux_4();
		break;
	case 5:
		test___kmin_hj_aux_5();
		break;
	default:
		abnormal___kmin_hj_aux_case(caseIndex);
		break;
	}

	test___kmin_hj_aux_down();
}

