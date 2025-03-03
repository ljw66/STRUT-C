void test_bassignmidstr_up(void);
void test_bassignmidstr_down(void);


void test_bassignmidstr_up(void){

	aunit_printf("\n##FUNCTION_START_bassignmidstr\n");
 }

void test_bassignmidstr_down(void){
	aunit_printf("\n##FUNCTION_END_bassignmidstr\n");
 }



void abnormal_bassignmidstr_case(int index);

void abnormal_bassignmidstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bassignmidstr_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *a;
	struct tagbstring *b;
	int left;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)a_PTRTO};
	unsigned int listLength_0=1;
	struct tagbstring *valueList_1[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={-5};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"non-null"};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	int valueList_7[]={5};
	unsigned int listLength_7=1;
	unsigned char *valueList_8[]={(unsigned char *)"non-null"};
	unsigned int listLength_8=1;
	int valueList_9[]={20};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	memmove_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bassignmidstr_7,false,0\n");
	aunit_printf("#CASE_START_test_bassignmidstr_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			a=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(struct tagbstring *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			left=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(a_PTRTO[0]).mlen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(a_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(a_PTRTO[0]).data=(unsigned char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(b_PTRTO[0]).mlen=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = bassignmidstr(a,b,left,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bassignmidstr","a->slen",0,a->slen)
	TEST_ASSERT_EQUAL_INT("bassignmidstr","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memmove","memmove_call_counter",memmove_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_bassignmidstr_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_bassignmidstr_up();

	switch(caseIndex){
	case 7:
		test_bassignmidstr_7();
		break;
	default:
		abnormal_bassignmidstr_case(caseIndex);
		break;
	}

	test_bassignmidstr_down();
}

