void test_btrimws_up(void);
void test_btrimws_down(void);


void test_btrimws_up(void){

	aunit_printf("\n##FUNCTION_START_btrimws\n");
 }

void test_btrimws_down(void){
	aunit_printf("\n##FUNCTION_END_btrimws\n");
 }



void abnormal_btrimws_case(int index);

void abnormal_btrimws_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_btrimws_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={32};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={32};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={32};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={32};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={32};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={99};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={98};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={97};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={32};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={32};
	unsigned int listLength_10=1;
	unsigned char *valueList_11[]={(unsigned char *)b_PTRTO_0_data_PTRTO};
	unsigned int listLength_11=1;
	int valueList_12[]={10};
	unsigned int listLength_12=1;
	int valueList_13[]={-1};
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
	bdelete_call_counter = 0;
	isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_btrimws_4,false,0\n");
	aunit_printf("#CASE_START_test_btrimws_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b_PTRTO_0_data_PTRTO[9]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b_PTRTO_0_data_PTRTO[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			b_PTRTO_0_data_PTRTO[7]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO_0_data_PTRTO[6]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO_0_data_PTRTO[5]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b_PTRTO_0_data_PTRTO[4]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			b_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			b_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			b_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(b_PTRTO[0]).data=(unsigned char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(b_PTRTO[0]).mlen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(b_PTRTO[0]).slen=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = btrimws(b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("btrimws","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)

	aunit_printf("#CASE_END_test_btrimws_4\n");
}

void test_btrimws_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={32};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={32};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={32};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={32};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={32};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={99};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={98};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={97};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={32};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={32};
	unsigned int listLength_10=1;
	unsigned char *valueList_11[]={(unsigned char *)b_PTRTO_0_data_PTRTO};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={5};
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
	bdelete_call_counter = 0;
	isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_btrimws_5,false,0\n");
	aunit_printf("#CASE_START_test_btrimws_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b_PTRTO_0_data_PTRTO[9]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b_PTRTO_0_data_PTRTO[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			b_PTRTO_0_data_PTRTO[7]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO_0_data_PTRTO[6]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO_0_data_PTRTO[5]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b_PTRTO_0_data_PTRTO[4]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			b_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			b_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			b_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(b_PTRTO[0]).data=(unsigned char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(b_PTRTO[0]).mlen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(b_PTRTO[0]).slen=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = btrimws(b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("btrimws","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)

	aunit_printf("#CASE_END_test_btrimws_5\n");
}

void test_btrimws_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={32};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={32};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={32};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={32};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={32};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={99};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={98};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={97};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={32};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={32};
	unsigned int listLength_10=1;
	unsigned char *valueList_11[]={(unsigned char *)b_PTRTO_0_data_PTRTO};
	unsigned int listLength_11=1;
	int valueList_12[]={10};
	unsigned int listLength_12=1;
	int valueList_13[]={10};
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
	case_id=6;
	//初始化各桩函数调用计数器
	bdelete_call_counter = 0;
	isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_btrimws_6,false,0\n");
	aunit_printf("#CASE_START_test_btrimws_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b_PTRTO_0_data_PTRTO[9]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b_PTRTO_0_data_PTRTO[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			b_PTRTO_0_data_PTRTO[7]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO_0_data_PTRTO[6]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO_0_data_PTRTO[5]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b_PTRTO_0_data_PTRTO[4]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			b_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			b_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			b_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(b_PTRTO[0]).data=(unsigned char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(b_PTRTO[0]).mlen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(b_PTRTO[0]).slen=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = btrimws(b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("btrimws","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("btrimws","(b->data)[0]",97,(b->data)[0])
	TEST_ASSERT_EQUAL_INT("btrimws","b->slen",3,b->slen)
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("btrimws","(b->data)[1]",98,(b->data)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("btrimws","(b->data)[2]",99,(b->data)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("btrimws","(b->data)[3]",0,(b->data)[3])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)

	aunit_printf("#CASE_END_test_btrimws_6\n");
}

void test_btrimws_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={32};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={32};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={32};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={32};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={32};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={32};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={32};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={32};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={32};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={32};
	unsigned int listLength_10=1;
	unsigned char *valueList_11[]={(unsigned char *)b_PTRTO_0_data_PTRTO};
	unsigned int listLength_11=1;
	int valueList_12[]={10};
	unsigned int listLength_12=1;
	int valueList_13[]={10};
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
	case_id=7;
	//初始化各桩函数调用计数器
	bdelete_call_counter = 0;
	isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_btrimws_7,false,0\n");
	aunit_printf("#CASE_START_test_btrimws_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b_PTRTO_0_data_PTRTO[9]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b_PTRTO_0_data_PTRTO[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			b_PTRTO_0_data_PTRTO[7]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO_0_data_PTRTO[6]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO_0_data_PTRTO[5]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b_PTRTO_0_data_PTRTO[4]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			b_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			b_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			b_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(b_PTRTO[0]).data=(unsigned char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(b_PTRTO[0]).mlen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(b_PTRTO[0]).slen=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = btrimws(b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("btrimws","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("btrimws","(b->data)[0]",0,(b->data)[0])
	TEST_ASSERT_EQUAL_INT("btrimws","b->slen",0,b->slen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)

	aunit_printf("#CASE_END_test_btrimws_7\n");
}

void test_btrimws_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={101};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={100};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={99};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={98};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={97};
	unsigned int listLength_5=1;
	unsigned char *valueList_6[]={(unsigned char *)b_PTRTO_0_data_PTRTO};
	unsigned int listLength_6=1;
	int valueList_7[]={5};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
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
	case_id=8;
	//初始化各桩函数调用计数器
	bdelete_call_counter = 0;
	isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_btrimws_8,false,0\n");
	aunit_printf("#CASE_START_test_btrimws_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b_PTRTO_0_data_PTRTO[4]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			b_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).data=(unsigned char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).mlen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = btrimws(b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("btrimws","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("btrimws","(b->data)[5]",0,(b->data)[5])
	TEST_ASSERT_EQUAL_INT("btrimws","b->slen",5,b->slen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)

	aunit_printf("#CASE_END_test_btrimws_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_btrimws_up();

	switch(caseIndex){
	case 4:
		test_btrimws_4();
		break;
	case 5:
		test_btrimws_5();
		break;
	case 6:
		test_btrimws_6();
		break;
	case 7:
		test_btrimws_7();
		break;
	case 8:
		test_btrimws_8();
		break;
	default:
		abnormal_btrimws_case(caseIndex);
		break;
	}

	test_btrimws_down();
}

