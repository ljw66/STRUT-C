void test_hmm_add_expect_up(void);
void test_hmm_add_expect_down(void);


void test_hmm_add_expect_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_add_expect\n");
 }

void test_hmm_add_expect_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_add_expect\n");
 }



void abnormal_hmm_add_expect_case(int index);

void abnormal_hmm_add_expect_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_add_expect_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_exp_t *he0;
	hmm_exp_t *he1;


	//值序列相关
	hmm_exp_t *valueList_0[]={(hmm_exp_t *)he0_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he1_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	double valueList_3[]={0.6};
	unsigned int listLength_3=1;
	double valueList_4[]={0.2};
	unsigned int listLength_4=1;
	double valueList_5[]={0.1};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	int valueList_7[]={2};
	unsigned int listLength_7=1;
	int valueList_8[]={2};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	double valueList_10[]={0.5};
	unsigned int listLength_10=1;
	double valueList_11[]={0.5};
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
	case_id=1;
	//初始化各桩函数调用计数器
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_add_expect_1,false,0\n");
	aunit_printf("#CASE_START_test_hmm_add_expect_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			he0=(hmm_exp_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he1=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			he1_PTRTO_0_A0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			he1_PTRTO_0_A0_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			he0_PTRTO_0_A0_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			he0_PTRTO_0_A0_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(he1_PTRTO[0]).m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(he1_PTRTO[0]).n=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he0_PTRTO[0]).n=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(he0_PTRTO[0]).m=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(he0_PTRTO[0]).Q0=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(he1_PTRTO[0]).Q0=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		hmm_add_expect(he0,he1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_add_expect_1\n");
}

void test_hmm_add_expect_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_exp_t *he0;
	hmm_exp_t *he1;


	//值序列相关
	hmm_exp_t *valueList_0[]={(hmm_exp_t *)he0_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he1_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	double valueList_3[]={0.6};
	unsigned int listLength_3=1;
	double valueList_4[]={0.1};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
	unsigned int listLength_7=1;
	int valueList_8[]={2};
	unsigned int listLength_8=1;
	double valueList_9[]={0.5};
	unsigned int listLength_9=1;
	double valueList_10[]={0.5};
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
	case_id=2;
	//初始化各桩函数调用计数器
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_add_expect_2,false,0\n");
	aunit_printf("#CASE_START_test_hmm_add_expect_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			he0=(hmm_exp_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he1=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			he1_PTRTO_0_A0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			he1_PTRTO_0_A0_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			he0_PTRTO_0_A0_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(he1_PTRTO[0]).m=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(he1_PTRTO[0]).n=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(he0_PTRTO[0]).n=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he0_PTRTO[0]).m=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(he0_PTRTO[0]).Q0=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(he1_PTRTO[0]).Q0=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		hmm_add_expect(he0,he1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_add_expect_2\n");
}

void test_hmm_add_expect_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_exp_t *he0;
	hmm_exp_t *he1;


	//值序列相关
	hmm_exp_t *valueList_0[]={(hmm_exp_t *)he0_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he1_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={0.5};
	unsigned int listLength_2=1;
	double valueList_3[]={0.6};
	unsigned int listLength_3=1;
	double valueList_4[]={0.2};
	unsigned int listLength_4=1;
	double valueList_5[]={0.1};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	int valueList_7[]={2};
	unsigned int listLength_7=1;
	int valueList_8[]={2};
	unsigned int listLength_8=1;
	int valueList_9[]={2};
	unsigned int listLength_9=1;
	double valueList_10[]={0.5};
	unsigned int listLength_10=1;
	double valueList_11[]={0.5};
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
	case_id=3;
	//初始化各桩函数调用计数器
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_add_expect_3,false,0\n");
	aunit_printf("#CASE_START_test_hmm_add_expect_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			he0=(hmm_exp_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he1=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			he1_PTRTO_0_A0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			he1_PTRTO_0_A0_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			he0_PTRTO_0_A0_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			he0_PTRTO_0_A0_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(he1_PTRTO[0]).m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(he1_PTRTO[0]).n=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he0_PTRTO[0]).n=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(he0_PTRTO[0]).m=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(he0_PTRTO[0]).Q0=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(he1_PTRTO[0]).Q0=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		hmm_add_expect(he0,he1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[0][1]",0.8,(he1->E)[0][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[1][0]",1.0,(he1->E)[1][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[0][1]",0.8,(he1->A)[0][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[1][1]",1.2,(he1->E)[1][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A0)[0]",0.6,(he1->A0)[0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[0][0]",0.6,(he1->E)[0][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A0)[1]",0.8,(he1->A0)[1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[1][1]",1.2,(he1->A)[1][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[1][0]",1.0,(he1->A)[1][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[0][0]",0.6,(he1->A)[0][0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_add_expect_3\n");
}

void test_hmm_add_expect_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_exp_t *he0;
	hmm_exp_t *he1;


	//值序列相关
	hmm_exp_t *valueList_0[]={(hmm_exp_t *)he0_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he1_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={1.3};
	unsigned int listLength_2=1;
	double valueList_3[]={1.1};
	unsigned int listLength_3=1;
	double valueList_4[]={1.2};
	unsigned int listLength_4=1;
	double valueList_5[]={0.3};
	unsigned int listLength_5=1;
	double valueList_6[]={0.2};
	unsigned int listLength_6=1;
	double valueList_7[]={0.1};
	unsigned int listLength_7=1;
	int valueList_8[]={3};
	unsigned int listLength_8=1;
	int valueList_9[]={3};
	unsigned int listLength_9=1;
	int valueList_10[]={3};
	unsigned int listLength_10=1;
	int valueList_11[]={3};
	unsigned int listLength_11=1;
	double valueList_12[]={0.5};
	unsigned int listLength_12=1;
	double valueList_13[]={0.5};
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
	case_id=4;
	//初始化各桩函数调用计数器
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_add_expect_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_add_expect_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			he0=(hmm_exp_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he1=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			he1_PTRTO_0_A0_PTRTO[2]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			he1_PTRTO_0_A0_PTRTO[0]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			he1_PTRTO_0_A0_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			he0_PTRTO_0_A0_PTRTO[2]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			he0_PTRTO_0_A0_PTRTO[1]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			he0_PTRTO_0_A0_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he1_PTRTO[0]).m=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(he1_PTRTO[0]).n=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(he0_PTRTO[0]).n=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(he0_PTRTO[0]).m=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(he0_PTRTO[0]).Q0=(double)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(he1_PTRTO[0]).Q0=(double)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		hmm_add_expect(he0,he1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[2][0]",2.4,(he1->E)[2][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[1][2]",2.2,(he1->E)[1][2])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[2][1]",2.6,(he1->E)[2][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[2][2]",2.8,(he1->E)[2][2])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[0][2]",1.6,(he1->A)[0][2])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[0][1]",1.4,(he1->A)[0][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A0)[0]",1.2,(he1->A0)[0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[0][0]",1.2,(he1->E)[0][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A0)[1]",1.4,(he1->A0)[1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A0)[2]",1.6,(he1->A0)[2])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[0][0]",1.2,(he1->A)[0][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[2][0]",2.4,(he1->A)[2][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[2][1]",2.6,(he1->A)[2][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[2][2]",2.8,(he1->A)[2][2])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[0][1]",1.4,(he1->E)[0][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[0][2]",1.6,(he1->E)[0][2])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[1][0]",1.8,(he1->E)[1][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[1][1]",2.0,(he1->E)[1][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[1][2]",2.2,(he1->A)[1][2])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[1][1]",2.0,(he1->A)[1][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[1][0]",1.8,(he1->A)[1][0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_add_expect_4\n");
}

void test_hmm_add_expect_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_exp_t *he0;
	hmm_exp_t *he1;


	//值序列相关
	hmm_exp_t *valueList_0[]={(hmm_exp_t *)he0_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he1_PTRTO};
	unsigned int listLength_1=1;
	double valueList_2[]={0.0};
	unsigned int listLength_2=1;
	double valueList_3[]={0.0};
	unsigned int listLength_3=1;
	double valueList_4[]={0.0};
	unsigned int listLength_4=1;
	double valueList_5[]={0.0};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	int valueList_7[]={2};
	unsigned int listLength_7=1;
	int valueList_8[]={2};
	unsigned int listLength_8=1;
	int valueList_9[]={2};
	unsigned int listLength_9=1;
	double valueList_10[]={0.0};
	unsigned int listLength_10=1;
	double valueList_11[]={0.0};
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
	case_id=5;
	//初始化各桩函数调用计数器
	abort_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_add_expect_5,false,0\n");
	aunit_printf("#CASE_START_test_hmm_add_expect_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			he0=(hmm_exp_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he1=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			he1_PTRTO_0_A0_PTRTO[0]=(double)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			he1_PTRTO_0_A0_PTRTO[1]=(double)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			he0_PTRTO_0_A0_PTRTO[1]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			he0_PTRTO_0_A0_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(he1_PTRTO[0]).m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(he1_PTRTO[0]).n=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he0_PTRTO[0]).n=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(he0_PTRTO[0]).m=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(he0_PTRTO[0]).Q0=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(he1_PTRTO[0]).Q0=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		hmm_add_expect(he0,he1);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[0][1]",0.0,(he1->E)[0][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[1][0]",0.0,(he1->E)[1][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[0][1]",0.0,(he1->A)[0][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[1][1]",0.0,(he1->E)[1][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A0)[0]",0.0,(he1->A0)[0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->E)[0][0]",0.0,(he1->E)[0][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A0)[1]",0.0,(he1->A0)[1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[1][1]",0.0,(he1->A)[1][1])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[1][0]",0.0,(he1->A)[1][0])
	TEST_ASSERT_EQUAL_DOUBLE("hmm_add_expect","(he1->A)[0][0]",0.0,(he1->A)[0][0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)

	aunit_printf("#CASE_END_test_hmm_add_expect_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_add_expect_up();

	switch(caseIndex){
	case 1:
		test_hmm_add_expect_1();
		break;
	case 2:
		test_hmm_add_expect_2();
		break;
	case 3:
		test_hmm_add_expect_3();
		break;
	case 4:
		test_hmm_add_expect_4();
		break;
	case 5:
		test_hmm_add_expect_5();
		break;
	default:
		abnormal_hmm_add_expect_case(caseIndex);
		break;
	}

	test_hmm_add_expect_down();
}

