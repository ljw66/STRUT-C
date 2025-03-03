void test_ke_core_strq_up(void);
void test_ke_core_strq_down(void);


void test_ke_core_strq_up(void){

	aunit_printf("\n##FUNCTION_START_ke_core_strq\n");
 }

void test_ke_core_strq_down(void){
	aunit_printf("\n##FUNCTION_END_ke_core_strq\n");
 }



void abnormal_ke_core_strq_case(int index);

void abnormal_ke_core_strq_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_core_strq_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *q;
	double *b;
	double *c;


	//值序列相关
	double *valueList_0[]={(double *)q_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)c_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	double valueList_4[]={0.0};
	unsigned int listLength_4=1;
	double valueList_5[]={1.0};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
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
	case_id=1;
	//初始化各桩函数调用计数器
	sqrt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_core_strq_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_core_strq_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO[0]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			q_PTRTO[0]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			c_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		ke_core_strq(n,q,b,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[0]",1.0,q[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[0]",1.0,b[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[0]",0.0,c[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)

	aunit_printf("#CASE_END_test_ke_core_strq_1\n");
}

void test_ke_core_strq_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *q;
	double *b;
	double *c;


	//值序列相关
	double *valueList_0[]={(double *)q_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)c_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	double valueList_4[]={3.0};
	unsigned int listLength_4=1;
	double valueList_5[]={4.0};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
	unsigned int listLength_7=1;
	double valueList_8[]={1.0};
	unsigned int listLength_8=1;
	double valueList_9[]={2.0};
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
	case_id=2;
	//初始化各桩函数调用计数器
	sqrt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_core_strq_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_core_strq_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			q_PTRTO[2]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			q_PTRTO[3]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO[1]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			q_PTRTO[0]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			q_PTRTO[1]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			c_PTRTO[0]=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			c_PTRTO[1]=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		ke_core_strq(n,q,b,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[3]",1.0,q[3])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[2]",0.0,q[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[1]",0.0,q[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[0]",1.0,q[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[1]",2.23606797749979,b[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[1]",0.0,c[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[0]",0.0,b[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[0]",0.0,c[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)

	aunit_printf("#CASE_END_test_ke_core_strq_2\n");
}

void test_ke_core_strq_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *q;
	double *b;
	double *c;


	//值序列相关
	double *valueList_0[]={(double *)b_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)c_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	double *valueList_3[]={(double *)q_PTRTO};
	unsigned int listLength_3=1;
	double valueList_4[]={3.0};
	unsigned int listLength_4=1;
	double valueList_5[]={4.0};
	unsigned int listLength_5=1;
	double valueList_6[]={5.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
	unsigned int listLength_7=1;
	double valueList_8[]={6.0};
	unsigned int listLength_8=1;
	double valueList_9[]={0.0};
	unsigned int listLength_9=1;
	double valueList_10[]={0.0};
	unsigned int listLength_10=1;
	double valueList_11[]={1.0};
	unsigned int listLength_11=1;
	double valueList_12[]={2.0};
	unsigned int listLength_12=1;
	double valueList_13[]={7.0};
	unsigned int listLength_13=1;
	double valueList_14[]={8.0};
	unsigned int listLength_14=1;
	double valueList_15[]={9.0};
	unsigned int listLength_15=1;
	double valueList_16[]={0.0};
	unsigned int listLength_16=1;
	double valueList_17[]={0.0};
	unsigned int listLength_17=1;
	double valueList_18[]={0.0};
	unsigned int listLength_18=1;
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
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	sqrt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_core_strq_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_core_strq_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			c=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			q=(double *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			q_PTRTO[2]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			q_PTRTO[3]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			q_PTRTO[4]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			q_PTRTO[5]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			b_PTRTO[2]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			b_PTRTO[1]=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			q_PTRTO[0]=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			q_PTRTO[1]=(double)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			q_PTRTO[6]=(double)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			q_PTRTO[7]=(double)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			q_PTRTO[8]=(double)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			c_PTRTO[0]=(double)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			c_PTRTO[1]=(double)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			c_PTRTO[2]=(double)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		ke_core_strq(n,q,b,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[3]",0.0,q[3])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[2]",0.0,q[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[1]",2.0,q[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[0]",1.0,q[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[7]",0.0,q[7])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[6]",0.0,q[6])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[5]",0.0,q[5])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[4]",1.0,q[4])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[1]",0.0,b[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[2]",5.916079783099616,b[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[1]",0.0,c[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[0]",0.0,b[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[0]",0.0,c[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[2]",0.0,c[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[8]",1.0,q[8])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)

	aunit_printf("#CASE_END_test_ke_core_strq_3\n");
}

void test_ke_core_strq_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *q;
	double *b;
	double *c;


	//值序列相关
	double *valueList_0[]={(double *)q_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)b_PTRTO};
	unsigned int listLength_1=1;
	double *valueList_2[]={(double *)c_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	double valueList_4[]={0.0};
	unsigned int listLength_4=1;
	double valueList_5[]={0.0};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
	unsigned int listLength_7=1;
	double valueList_8[]={0.0};
	unsigned int listLength_8=1;
	double valueList_9[]={0.0};
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
	case_id=4;
	//初始化各桩函数调用计数器
	sqrt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_core_strq_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_core_strq_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			q=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c=(double *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			q_PTRTO[2]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			q_PTRTO[3]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b_PTRTO[0]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO[1]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			q_PTRTO[0]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			q_PTRTO[1]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			c_PTRTO[0]=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			c_PTRTO[1]=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		ke_core_strq(n,q,b,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[3]",1.0,q[3])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[2]",0.0,q[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[1]",0.0,q[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[0]",0.0,q[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[1]",0.0,b[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[1]",0.0,c[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[0]",0.0,b[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[0]",0.0,c[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)

	aunit_printf("#CASE_END_test_ke_core_strq_4\n");
}

void test_ke_core_strq_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int n;
	double *q;
	double *b;
	double *c;


	//值序列相关
	double *valueList_0[]={(double *)b_PTRTO};
	unsigned int listLength_0=1;
	double *valueList_1[]={(double *)c_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	double *valueList_3[]={(double *)q_PTRTO};
	unsigned int listLength_3=1;
	double valueList_4[]={3.0};
	unsigned int listLength_4=1;
	double valueList_5[]={4.0};
	unsigned int listLength_5=1;
	double valueList_6[]={5.0};
	unsigned int listLength_6=1;
	double valueList_7[]={0.0};
	unsigned int listLength_7=1;
	double valueList_8[]={6.0};
	unsigned int listLength_8=1;
	double valueList_9[]={0.0};
	unsigned int listLength_9=1;
	double valueList_10[]={0.0};
	unsigned int listLength_10=1;
	double valueList_11[]={1.0};
	unsigned int listLength_11=1;
	double valueList_12[]={2.0};
	unsigned int listLength_12=1;
	double valueList_13[]={7.0};
	unsigned int listLength_13=1;
	double valueList_14[]={8.0};
	unsigned int listLength_14=1;
	double valueList_15[]={9.0};
	unsigned int listLength_15=1;
	double valueList_16[]={0.0};
	unsigned int listLength_16=1;
	double valueList_17[]={0.0};
	unsigned int listLength_17=1;
	double valueList_18[]={0.0};
	unsigned int listLength_18=1;
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
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	sqrt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_core_strq_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_core_strq_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(double *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			c=(double *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			q=(double *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			q_PTRTO[2]=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			q_PTRTO[3]=(double)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			q_PTRTO[4]=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO[0]=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			q_PTRTO[5]=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			b_PTRTO[2]=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			b_PTRTO[1]=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			q_PTRTO[0]=(double)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			q_PTRTO[1]=(double)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			q_PTRTO[6]=(double)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			q_PTRTO[7]=(double)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			q_PTRTO[8]=(double)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			c_PTRTO[0]=(double)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			c_PTRTO[1]=(double)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			c_PTRTO[2]=(double)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		ke_core_strq(n,q,b,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[3]",0.0,q[3])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[2]",0.0,q[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[1]",2.0,q[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[0]",1.0,q[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[7]",0.0,q[7])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[6]",0.0,q[6])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[5]",0.0,q[5])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[4]",1.0,q[4])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[1]",0.0,b[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[2]",5.916079783099616,b[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[1]",0.0,c[1])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","b[0]",0.0,b[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[0]",0.0,c[0])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","c[2]",0.0,c[2])
	TEST_ASSERT_EQUAL_DOUBLE("ke_core_strq","q[8]",1.0,q[8])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sqrt","sqrt_call_counter",sqrt_call_counter)

	aunit_printf("#CASE_END_test_ke_core_strq_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_core_strq_up();

	switch(caseIndex){
	case 1:
		test_ke_core_strq_1();
		break;
	case 2:
		test_ke_core_strq_2();
		break;
	case 3:
		test_ke_core_strq_3();
		break;
	case 4:
		test_ke_core_strq_4();
		break;
	case 5:
		test_ke_core_strq_5();
		break;
	default:
		abnormal_ke_core_strq_case(caseIndex);
		break;
	}

	test_ke_core_strq_down();
}

