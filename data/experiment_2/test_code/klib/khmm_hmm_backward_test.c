void test_hmm_backward_up(void);
void test_hmm_backward_down(void);


void test_hmm_backward_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_backward\n");
 }

void test_hmm_backward_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_backward\n");
 }



void abnormal_hmm_backward_case(int index);

void abnormal_hmm_backward_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_backward_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_data_t *hd;


	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_data_t *valueList_1[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_1=1;
	double **valueList_2[]={(double * *)1};
	unsigned int listLength_2=1;
	int valueList_3[]={4};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x02};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
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
	calloc2_call_counter = 0;
	abort_call_counter = 0;
	free_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_backward_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_backward_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hd=(hmm_data_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(hd_PTRTO[0]).b=(double * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hd_PTRTO[0]).L=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hp_PTRTO[0]).n=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hd_PTRTO[0]).status=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		hmm_backward(hp,hd);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc2","calloc2_call_counter",calloc2_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_hmm_backward_4\n");
}

void test_hmm_backward_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_data_t *hd;


	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_data_t *valueList_1[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_1=1;
	double **valueList_2[]={(double * *)1};
	unsigned int listLength_2=1;
	double *valueList_3[]={(double *)1};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"1"};
	unsigned int listLength_4=1;
	double **valueList_5[]={(double * *)1};
	unsigned int listLength_5=1;
	int valueList_6[]={4};
	unsigned int listLength_6=1;
	int valueList_7[]={3};
	unsigned int listLength_7=1;
	double *valueList_8[]={(double *)1};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x02};
	unsigned int listLength_9=1;
	int valueList_10[]={2};
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
	case_id=5;
	//初始化各桩函数调用计数器
	calloc2_call_counter = 0;
	abort_call_counter = 0;
	free_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_backward_5,false,0\n");
	aunit_printf("#CASE_START_test_hmm_backward_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hd=(hmm_data_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(hd_PTRTO[0]).b=(double * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hd_PTRTO[0]).s=(double *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hd_PTRTO[0]).seq=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hp_PTRTO[0]).e=(double * *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hd_PTRTO[0]).L=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hp_PTRTO[0]).n=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(hp_PTRTO[0]).a0=(double *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hd_PTRTO[0]).status=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hp_PTRTO[0]).m=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		hmm_backward(hp,hd);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc2","calloc2_call_counter",calloc2_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_hmm_backward_5\n");
}

void test_hmm_backward_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_data_t *hd;


	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_data_t *valueList_1[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_1=1;
	double **valueList_2[]={(double * *)0};
	unsigned int listLength_2=1;
	double *valueList_3[]={(double *)1};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"1"};
	unsigned int listLength_4=1;
	double **valueList_5[]={(double * *)1};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)1};
	unsigned int listLength_6=1;
	int valueList_7[]={4};
	unsigned int listLength_7=1;
	int valueList_8[]={3};
	unsigned int listLength_8=1;
	double *valueList_9[]={(double *)1};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0x02};
	unsigned int listLength_10=1;
	int valueList_11[]={2};
	unsigned int listLength_11=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	calloc2_call_counter = 0;
	abort_call_counter = 0;
	free_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_backward_6,false,0\n");
	aunit_printf("#CASE_START_test_hmm_backward_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hd=(hmm_data_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(hd_PTRTO[0]).b=(double * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hd_PTRTO[0]).s=(double *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(hd_PTRTO[0]).seq=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hp_PTRTO[0]).e=(double * *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).ae=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hd_PTRTO[0]).L=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(hp_PTRTO[0]).n=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hp_PTRTO[0]).a0=(double *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hd_PTRTO[0]).status=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).m=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		hmm_backward(hp,hd);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc2","calloc2_call_counter",calloc2_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_hmm_backward_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_backward_up();

	switch(caseIndex){
	case 4:
		test_hmm_backward_4();
		break;
	case 5:
		test_hmm_backward_5();
		break;
	case 6:
		test_hmm_backward_6();
		break;
	default:
		abnormal_hmm_backward_case(caseIndex);
		break;
	}

	test_hmm_backward_down();
}

