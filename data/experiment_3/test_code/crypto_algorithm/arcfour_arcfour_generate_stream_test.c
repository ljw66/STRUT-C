void test_arcfour_generate_stream_up(void);
void test_arcfour_generate_stream_down(void);


void test_arcfour_generate_stream_up(void){

	aunit_printf("\n##FUNCTION_START_arcfour_generate_stream\n");
 }

void test_arcfour_generate_stream_down(void){
	aunit_printf("\n##FUNCTION_END_arcfour_generate_stream\n");
 }



void abnormal_arcfour_generate_stream_case(int index);

void abnormal_arcfour_generate_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_arcfour_generate_stream_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *state;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={4};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={7};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={6};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={2};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={9};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={8};
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
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_arcfour_generate_stream_1,false,0\n");
	aunit_printf("#CASE_START_test_arcfour_generate_stream_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state[5]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state[4]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state[7]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			state[6]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			state[1]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			state[0]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			state[3]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			state[2]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			state[9]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			state[8]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		arcfour_generate_stream(state,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_arcfour_generate_stream_1\n");
}

void test_arcfour_generate_stream_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *state;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={4};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={7};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={6};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={2};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={9};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={8};
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

	aunit_printf("###TEST_TREE_test_arcfour_generate_stream_2,false,0\n");
	aunit_printf("#CASE_START_test_arcfour_generate_stream_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state[5]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state[4]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state[7]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			state[6]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			state[1]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			state[0]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			state[3]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			state[2]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			out[0]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			state[9]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			state[8]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		arcfour_generate_stream(state,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[0]",'"expected_value"',out[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_arcfour_generate_stream_2\n");
}

void test_arcfour_generate_stream_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *state;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={4};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={7};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={6};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={1};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={3};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={2};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={9};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={8};
	unsigned int listLength_20=1;
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
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_arcfour_generate_stream_3,false,0\n");
	aunit_printf("#CASE_START_test_arcfour_generate_stream_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state[5]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state[4]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out[9]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			state[7]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			out[8]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			state[6]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			out[7]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			state[1]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			out[6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			state[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			out[5]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			state[3]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			out[4]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			state[2]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			out[3]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			out[2]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			out[1]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			out[0]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			state[9]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			state[8]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		arcfour_generate_stream(state,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[9]",'"expected_value_9"',out[9])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[8]",'"expected_value_8"',out[8])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[7]",'"expected_value_7"',out[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[6]",'"expected_value_6"',out[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[5]",'"expected_value_5"',out[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[4]",'"expected_value_4"',out[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[3]",'"expected_value_3"',out[3])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[2]",'"expected_value_2"',out[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[1]",'"expected_value_1"',out[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[0]",'"expected_value_0"',out[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_arcfour_generate_stream_3\n");
}

void test_arcfour_generate_stream_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *state;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={256};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_arcfour_generate_stream_4,false,0\n");
	aunit_printf("#CASE_START_test_arcfour_generate_stream_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		arcfour_generate_stream(state,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_arcfour_generate_stream_4\n");
}

void test_arcfour_generate_stream_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *state;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={32};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={64};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={8};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={16};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={255};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={42};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={128};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={1};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={2};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={4};
	unsigned int listLength_20=1;
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
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_arcfour_generate_stream_5,false,0\n");
	aunit_printf("#CASE_START_test_arcfour_generate_stream_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state[5]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state[4]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out[9]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			state[7]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			out[8]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			state[6]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			out[7]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			state[1]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			out[6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			state[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			out[5]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			state[3]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			out[4]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			state[2]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			out[3]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			out[2]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			out[1]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			out[0]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			state[9]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			state[8]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		arcfour_generate_stream(state,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[9]",'"expected_value_9"',out[9])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[8]",'"expected_value_8"',out[8])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[7]",'"expected_value_7"',out[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[6]",'"expected_value_6"',out[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[5]",'"expected_value_5"',out[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[4]",'"expected_value_4"',out[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[3]",'"expected_value_3"',out[3])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[2]",'"expected_value_2"',out[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[1]",'"expected_value_1"',out[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[0]",'"expected_value_0"',out[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_arcfour_generate_stream_5\n");
}

void test_arcfour_generate_stream_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *state;
	BYTE *out;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={10};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={1};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={1};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={1};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={1};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={1};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={1};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={1};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={1};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={1};
	unsigned int listLength_20=1;
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
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_arcfour_generate_stream_6,false,0\n");
	aunit_printf("#CASE_START_test_arcfour_generate_stream_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state[5]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state[4]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out[9]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			state[7]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			out[8]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			state[6]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			out[7]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			state[1]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			out[6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			state[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			out[5]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			state[3]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			out[4]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			state[2]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			out[3]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			out[2]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			out[1]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			out[0]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			state[9]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			state[8]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		arcfour_generate_stream(state,out,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[9]",'"expected_value_9"',out[9])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[8]",'"expected_value_8"',out[8])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[7]",'"expected_value_7"',out[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[6]",'"expected_value_6"',out[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[5]",'"expected_value_5"',out[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[4]",'"expected_value_4"',out[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[3]",'"expected_value_3"',out[3])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[2]",'"expected_value_2"',out[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[1]",'"expected_value_1"',out[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("arcfour_generate_stream","out[0]",'"expected_value_0"',out[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_arcfour_generate_stream_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_arcfour_generate_stream_up();

	switch(caseIndex){
	case 1:
		test_arcfour_generate_stream_1();
		break;
	case 2:
		test_arcfour_generate_stream_2();
		break;
	case 3:
		test_arcfour_generate_stream_3();
		break;
	case 4:
		test_arcfour_generate_stream_4();
		break;
	case 5:
		test_arcfour_generate_stream_5();
		break;
	case 6:
		test_arcfour_generate_stream_6();
		break;
	default:
		abnormal_arcfour_generate_stream_case(caseIndex);
		break;
	}

	test_arcfour_generate_stream_down();
}

