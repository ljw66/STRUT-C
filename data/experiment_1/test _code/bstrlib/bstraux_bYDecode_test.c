void test_bYDecode_up(void);
void test_bYDecode_down(void);


void test_bYDecode_up(void){

	aunit_printf("\n##FUNCTION_START_bYDecode\n");
 }

void test_bYDecode_down(void){
	aunit_printf("\n##FUNCTION_END_bYDecode\n");
 }



void abnormal_bYDecode_case(int index);

void abnormal_bYDecode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bYDecode_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *src;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)src_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"abcd1234"};
	unsigned int listLength_3=1;
	int valueList_4[]={8};
	unsigned int listLength_4=1;
	unsigned char *valueList_5[]={(unsigned char *)"initialized"};
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
	case_id=4;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bfromcstr_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bYDecode_4,false,0\n");
	aunit_printf("#CASE_START_test_bYDecode_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(bfromcstr_returnValue_PTRTO[0]).slen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(bfromcstr_returnValue_PTRTO[0]).mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(src_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(src_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bfromcstr_returnValue_PTRTO[0]).data=(unsigned char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bYDecode(src);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bYDecode","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bYDecode_4\n");
}

void test_bYDecode_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *src;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)src_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"abc=de"};
	unsigned int listLength_3=1;
	int valueList_4[]={6};
	unsigned int listLength_4=1;
	unsigned char *valueList_5[]={(unsigned char *)"initialized"};
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
	case_id=5;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bfromcstr_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bYDecode_5,false,0\n");
	aunit_printf("#CASE_START_test_bYDecode_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(bfromcstr_returnValue_PTRTO[0]).slen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(bfromcstr_returnValue_PTRTO[0]).mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(src_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(src_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bfromcstr_returnValue_PTRTO[0]).data=(unsigned char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bYDecode(src);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bYDecode","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bYDecode_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bYDecode_up();

	switch(caseIndex){
	case 4:
		test_bYDecode_4();
		break;
	case 5:
		test_bYDecode_5();
		break;
	default:
		abnormal_bYDecode_case(caseIndex);
		break;
	}

	test_bYDecode_down();
}

