void test_bYEncode_up(void);
void test_bYEncode_down(void);


void test_bYEncode_up(void){

	aunit_printf("\n##FUNCTION_START_bYEncode\n");
 }

void test_bYEncode_down(void){
	aunit_printf("\n##FUNCTION_END_bYEncode\n");
 }



void abnormal_bYEncode_case(int index);

void abnormal_bYEncode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bYEncode_10(void){
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
	unsigned char *valueList_2[]={(unsigned char *)"ab\ncd"};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器
	bfromcstr_call_counter = 0;
	bconchar_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bYEncode_10,false,0\n");
	aunit_printf("#CASE_START_test_bYEncode_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(src_PTRTO[0]).mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(src_PTRTO[0]).data=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(src_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bYEncode(src);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bYEncode","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("bYEncode","returnValue->slen",6,returnValue->slen)
	TEST_ASSERT_EQUAL_LONG("bYEncode","returnValue->data","KL=NO",returnValue->data)
	TEST_ASSERT_EQUAL_INT("bYEncode","returnValue->mlen",10,returnValue->mlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("bconchar","bconchar_call_counter",bconchar_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bYEncode_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_bYEncode_up();

	switch(caseIndex){
	case 10:
		test_bYEncode_10();
		break;
	default:
		abnormal_bYEncode_case(caseIndex);
		break;
	}

	test_bYEncode_down();
}

