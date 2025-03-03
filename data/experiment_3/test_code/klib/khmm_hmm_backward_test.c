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

void test_hmm_backward_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_data_t *hd;


	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	FILE *valueList_1[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_1=1;
	hmm_data_t *valueList_2[]={(hmm_data_t *)hd_PTRTO};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)NULL};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"0, 1"};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)NULL};
	unsigned int listLength_6=1;
	int valueList_7[]={2};
	unsigned int listLength_7=1;
	double *valueList_8[]={(double *)0.6, 0.4};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x02};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)NULL};
	unsigned int listLength_10=1;
	double *valueList_11[]={(double *)1.0, 1.0, 1.0};
	unsigned int listLength_11=1;
	int *valueList_12[]={(int *)NULL};
	unsigned int listLength_12=1;
	int valueList_13[]={2};
	unsigned int listLength_13=1;
	int valueList_14[]={3};
	unsigned int listLength_14=1;
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
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	calloc2_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_backward_1,false,0\n");
	aunit_printf("#CASE_START_test_hmm_backward_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stderr=(FILE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			hd=(hmm_data_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hd_PTRTO[0]).b=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(stderr_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hd_PTRTO[0]).seq=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hd_PTRTO[0]).f=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hd_PTRTO[0]).L=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(hp_PTRTO[0]).a0=(double *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hd_PTRTO[0]).status=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hd_PTRTO[0]).p=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hd_PTRTO[0]).s=(double *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(hd_PTRTO[0]).v=(int *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(hp_PTRTO[0]).n=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(hp_PTRTO[0]).m=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		hmm_backward(hp,hd);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc2","calloc2_call_counter",calloc2_call_counter)

	aunit_printf("#CASE_END_test_hmm_backward_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_backward_up();

	switch(caseIndex){
	case 1:
		test_hmm_backward_1();
		break;
	default:
		abnormal_hmm_backward_case(caseIndex);
		break;
	}

	test_hmm_backward_down();
}

