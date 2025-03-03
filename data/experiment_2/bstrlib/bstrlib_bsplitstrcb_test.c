void test_bsplitstrcb_up(void);
void test_bsplitstrcb_down(void);


void test_bsplitstrcb_up(void){

	aunit_printf("\n##FUNCTION_START_bsplitstrcb\n");
 }

void test_bsplitstrcb_down(void){
	aunit_printf("\n##FUNCTION_END_bsplitstrcb\n");
 }



void abnormal_bsplitstrcb_case(int index);

void abnormal_bsplitstrcb_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsplitstrcb_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *str;
	struct tagbstring *splitStr;
	int pos;
	int (*cb)(void *, int, int);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)str_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
	unsigned int listLength_2=1;
	struct tagbstring *valueList_3[]={(struct tagbstring *)splitStr_PTRTO};
	unsigned int listLength_3=1;
	int (*valueList_4[])(void *, int, int)={(int (*)(void *, int, int))cb_STUB};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	int valueList_6[]={5};
	unsigned int listLength_6=1;
	unsigned char *valueList_7[]={(unsigned char *)"hello"};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
	unsigned int listLength_8=1;
	int valueList_9[]={10};
	unsigned int listLength_9=1;
	unsigned char *valueList_10[]={(unsigned char *)"ll"};
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
	case_id=10;
	//初始化各桩函数调用计数器
	memcmp_call_counter = 0;
	bsplitcb_call_counter = 0;
	cb_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsplitstrcb_10,false,0\n");
	aunit_printf("#CASE_START_test_bsplitstrcb_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pos=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			parm=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			splitStr=(struct tagbstring *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cb=(int (*)(void *, int, int))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(splitStr_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(str_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(str_PTRTO[0]).data=(unsigned char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(splitStr_PTRTO[0]).mlen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(str_PTRTO[0]).mlen=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(splitStr_PTRTO[0]).data=(unsigned char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = bsplitstrcb(str,splitStr,pos,cb,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bsplitstrcb","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("bsplitcb","bsplitcb_call_counter",bsplitcb_call_counter)
	OB_INT_EXPR("cb_STUB","cb_STUB_call_counter",cb_STUB_call_counter)

	aunit_printf("#CASE_END_test_bsplitstrcb_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsplitstrcb_up();

	switch(caseIndex){
	case 10:
		test_bsplitstrcb_10();
		break;
	default:
		abnormal_bsplitstrcb_case(caseIndex);
		break;
	}

	test_bsplitstrcb_down();
}

