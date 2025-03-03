void test_ke_eigen_sd_up(void);
void test_ke_eigen_sd_down(void);


void test_ke_eigen_sd_up(void){

	aunit_printf("\n##FUNCTION_START_ke_eigen_sd\n");
 }

void test_ke_eigen_sd_down(void){
	aunit_printf("\n##FUNCTION_END_ke_eigen_sd\n");
 }



void abnormal_ke_eigen_sd_case(int index);

void abnormal_ke_eigen_sd_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_eigen_sd_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *a;
	double *v;
	int cal_ev;
	double eps;
	int max_iter;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	double valueList_3[]={0.0};
	unsigned int listLength_3=1;
	double valueList_4[]={1.0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;
	ke_core_sstq_call_counter = 0;
	ke_core_strq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_eigen_sd_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_eigen_sd_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cal_ev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max_iter=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			v_PTRTO[0]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			a_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ke_eigen_sd(n,a,v,cal_ev,eps,max_iter);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_eigen_sd","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ke_core_sstq","ke_core_sstq_call_counter",ke_core_sstq_call_counter)
	OB_INT_EXPR("ke_core_strq","ke_core_strq_call_counter",ke_core_strq_call_counter)

	aunit_printf("#CASE_END_test_ke_eigen_sd_1\n");
}

void test_ke_eigen_sd_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *a;
	double *v;
	int cal_ev;
	double eps;
	int max_iter;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={-1};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	double valueList_4[]={0.0};
	unsigned int listLength_4=1;
	double valueList_5[]={2.0};
	unsigned int listLength_5=1;
	double valueList_6[]={1.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;
	ke_core_sstq_call_counter = 0;
	ke_core_strq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_eigen_sd_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_eigen_sd_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			eps=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cal_ev=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			max_iter=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			v_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			a_PTRTO[1]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			a_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			v_PTRTO[1]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = ke_eigen_sd(n,a,v,cal_ev,eps,max_iter);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_eigen_sd","returnValue",2,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ke_core_sstq","ke_core_sstq_call_counter",ke_core_sstq_call_counter)
	OB_INT_EXPR("ke_core_strq","ke_core_strq_call_counter",ke_core_strq_call_counter)

	aunit_printf("#CASE_END_test_ke_eigen_sd_2\n");
}

void test_ke_eigen_sd_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *a;
	double *v;
	int cal_ev;
	double eps;
	int max_iter;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double valueList_0[]={1.0};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int valueList_2[]={100};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	double valueList_4[]={0.0};
	unsigned int listLength_4=1;
	double valueList_5[]={2.0};
	unsigned int listLength_5=1;
	double valueList_6[]={1.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
	unsigned int listLength_7=1;
	double valueList_8[]={0.0};
	unsigned int listLength_8=1;
	double valueList_9[]={3.0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;
	ke_core_sstq_call_counter = 0;
	ke_core_strq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_eigen_sd_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_eigen_sd_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			eps=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cal_ev=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			max_iter=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			v_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			a_PTRTO[1]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			a_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			v_PTRTO[1]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			v_PTRTO[2]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			a_PTRTO[2]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = ke_eigen_sd(n,a,v,cal_ev,eps,max_iter);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_eigen_sd","returnValue",3,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ke_core_sstq","ke_core_sstq_call_counter",ke_core_sstq_call_counter)
	OB_INT_EXPR("ke_core_strq","ke_core_strq_call_counter",ke_core_strq_call_counter)

	aunit_printf("#CASE_END_test_ke_eigen_sd_3\n");
}

void test_ke_eigen_sd_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *a;
	double *v;
	int cal_ev;
	double eps;
	int max_iter;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={50};
	unsigned int listLength_1=1;
	int valueList_2[]={4};
	unsigned int listLength_2=1;
	double valueList_3[]={0.0};
	unsigned int listLength_3=1;
	double valueList_4[]={2.0};
	unsigned int listLength_4=1;
	double valueList_5[]={1.0};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
	unsigned int listLength_7=1;
	double valueList_8[]={4.0};
	unsigned int listLength_8=1;
	double valueList_9[]={0.0};
	unsigned int listLength_9=1;
	double valueList_10[]={3.0};
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
	case_id=4;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;
	ke_core_sstq_call_counter = 0;
	ke_core_strq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_eigen_sd_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_eigen_sd_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cal_ev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			max_iter=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			v_PTRTO[0]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			a_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			a_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			v_PTRTO[1]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			v_PTRTO[2]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			a_PTRTO[3]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			v_PTRTO[3]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			a_PTRTO[2]=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = ke_eigen_sd(n,a,v,cal_ev,eps,max_iter);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_eigen_sd","returnValue",4,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ke_core_sstq","ke_core_sstq_call_counter",ke_core_sstq_call_counter)
	OB_INT_EXPR("ke_core_strq","ke_core_strq_call_counter",ke_core_strq_call_counter)

	aunit_printf("#CASE_END_test_ke_eigen_sd_4\n");
}

void test_ke_eigen_sd_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *a;
	double *v;
	int cal_ev;
	double eps;
	int max_iter;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	double valueList_0[]={1.0};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={50};
	unsigned int listLength_3=1;
	double valueList_4[]={2.0};
	unsigned int listLength_4=1;
	double valueList_5[]={1.0};
	unsigned int listLength_5=1;
	double valueList_6[]={5.0};
	unsigned int listLength_6=1;
	double valueList_7[]={4.0};
	unsigned int listLength_7=1;
	double valueList_8[]={3.0};
	unsigned int listLength_8=1;
	double valueList_9[]={0.0};
	unsigned int listLength_9=1;
	double valueList_10[]={0.0};
	unsigned int listLength_10=1;
	double valueList_11[]={0.0};
	unsigned int listLength_11=1;
	double valueList_12[]={0.0};
	unsigned int listLength_12=1;
	double valueList_13[]={0.0};
	unsigned int listLength_13=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;
	ke_core_sstq_call_counter = 0;
	ke_core_strq_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_eigen_sd_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_eigen_sd_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			eps=(double)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			cal_ev=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			max_iter=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			a_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			a_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			a_PTRTO[4]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			a_PTRTO[3]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			a_PTRTO[2]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			v_PTRTO[0]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			v_PTRTO[1]=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			v_PTRTO[2]=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			v_PTRTO[3]=(double)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			v_PTRTO[4]=(double)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = ke_eigen_sd(n,a,v,cal_ev,eps,max_iter);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_eigen_sd","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ke_core_sstq","ke_core_sstq_call_counter",ke_core_sstq_call_counter)
	OB_INT_EXPR("ke_core_strq","ke_core_strq_call_counter",ke_core_strq_call_counter)

	aunit_printf("#CASE_END_test_ke_eigen_sd_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_eigen_sd_up();

	switch(caseIndex){
	case 1:
		test_ke_eigen_sd_1();
		break;
	case 2:
		test_ke_eigen_sd_2();
		break;
	case 3:
		test_ke_eigen_sd_3();
		break;
	case 4:
		test_ke_eigen_sd_4();
		break;
	case 5:
		test_ke_eigen_sd_5();
		break;
	default:
		abnormal_ke_eigen_sd_case(caseIndex);
		break;
	}

	test_ke_eigen_sd_down();
}

