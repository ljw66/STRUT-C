void test_bUuEncode_up(void);
void test_bUuEncode_down(void);


void test_bUuEncode_up(void){

	aunit_printf("\n##FUNCTION_START_bUuEncode\n");
 }

void test_bUuEncode_down(void){
	aunit_printf("\n##FUNCTION_END_bUuEncode\n");
 }



void abnormal_bUuEncode_case(int index);

void abnormal_bUuEncode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bUuEncode_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *src;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)src_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"123456"};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char *valueList_6[]={(unsigned char *)654321};
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
	case_id=3;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bUuEncode_3,false,0\n");
	aunit_printf("#CASE_START_test_bUuEncode_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(src_PTRTO[0]).mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(bfromcstr_returnValue_PTRTO[0]).slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(bfromcstr_returnValue_PTRTO[0]).mlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(src_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(src_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(bfromcstr_returnValue_PTRTO[0]).data=(unsigned char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = bUuEncode(src);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bUuEncode","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bUuEncode_3\n");
}

void test_bUuEncode_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *src;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)src_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={72};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={101};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={108};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	int valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned char *valueList_8[]={(unsigned char *)654321};
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
	case_id=4;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bUuEncode_4,false,0\n");
	aunit_printf("#CASE_START_test_bUuEncode_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			src_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			src_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(src_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bfromcstr_returnValue_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(bfromcstr_returnValue_PTRTO[0]).mlen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(src_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(bfromcstr_returnValue_PTRTO[0]).data=(unsigned char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bUuEncode(src);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bUuEncode","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bUuEncode_4\n");
}

void test_bUuEncode_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *src;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)src_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5000};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	int valueList_4[]={5000};
	unsigned int listLength_4=1;
	unsigned char *valueList_5[]={(unsigned char *)654321};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bUuEncode_6,false,0\n");
	aunit_printf("#CASE_START_test_bUuEncode_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(src_PTRTO[0]).mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(bfromcstr_returnValue_PTRTO[0]).slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(bfromcstr_returnValue_PTRTO[0]).mlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(src_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bfromcstr_returnValue_PTRTO[0]).data=(unsigned char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bUuEncode(src);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bUuEncode","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bUuEncode_6\n");
}

void test_bUuEncode_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *src;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)src_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={72};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={101};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={108};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	int valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned char *valueList_8[]={(unsigned char *)654321};
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
	case_id=7;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bUuEncode_7,false,0\n");
	aunit_printf("#CASE_START_test_bUuEncode_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			src_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			src_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			src_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(src_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bfromcstr_returnValue_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(bfromcstr_returnValue_PTRTO[0]).mlen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(src_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(bfromcstr_returnValue_PTRTO[0]).data=(unsigned char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bUuEncode(src);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bUuEncode","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bUuEncode_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_bUuEncode_up();

	switch(caseIndex){
	case 3:
		test_bUuEncode_3();
		break;
	case 4:
		test_bUuEncode_4();
		break;
	case 6:
		test_bUuEncode_6();
		break;
	case 7:
		test_bUuEncode_7();
		break;
	default:
		abnormal_bUuEncode_case(caseIndex);
		break;
	}

	test_bUuEncode_down();
}

