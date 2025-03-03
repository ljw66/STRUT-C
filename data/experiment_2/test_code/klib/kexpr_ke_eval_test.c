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

void test_ke_eval_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;
	int64_t *_i;
	double *_r;
	char **_p;
	int *ret_type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)ret_type_PTRTO};
	unsigned int listLength_0=1;
	int64_t *valueList_1[]={(int64_t *)_i_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)_r_PTRTO};
	unsigned int listLength_2=1;
	kexpr_t *valueList_3[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_3=1;
	long long int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	long long int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	double valueList_8[]={0};
	unsigned int listLength_8=1;
	double valueList_9[]={0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	int valueList_11[]={1};
	unsigned int listLength_11=1;
	ke1_t *valueList_12[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_12=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_eval_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_eval_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ret_type=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			_i=(int64_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			_r=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke=(kexpr_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			_i_PTRTO[0]=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ret_type_PTRTO[0]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			_i_PTRTO[1]=(long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ret_type_PTRTO[1]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			_r_PTRTO[0]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			_r_PTRTO[1]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			*_p=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ke_PTRTO[0]).n=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = ke_eval(ke,_i,_r,_p,ret_type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_eval","returnValue",128,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_ke_eval_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_eval_up();

	switch(caseIndex){
	case 3:
		test_ke_eval_3();
		break;
	default:
		abnormal_ke_eval_case(caseIndex);
		break;
	}

	test_ke_eval_down();
}

