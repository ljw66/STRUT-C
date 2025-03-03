void test_gettoken_up(void);
void test_gettoken_down(void);


void test_gettoken_up(void){

	aunit_printf("\n##FUNCTION_START_gettoken\n");
 }

void test_gettoken_down(void){
	aunit_printf("\n##FUNCTION_END_gettoken\n");
 }



void abnormal_gettoken_case(int index);

void abnormal_gettoken_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_gettoken_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char **ps;
	char *es;
	char **q;
	char **eq;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char valueList_0[]={'&'};
	unsigned int listLength_0=1;
	char valueList_1[]={'>'};
	unsigned int listLength_1=1;
	char valueList_2[]={'('};
	unsigned int listLength_2=1;
	char valueList_3[]={','};
	unsigned int listLength_3=2;
	char valueList_4[]={'|'};
	unsigned int listLength_4=1;
	char valueList_5[]={'<'};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)_q_PTRTO};
	unsigned int listLength_6=1;
	char valueList_7[]={')'};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)_ps_PTRTO};
	unsigned int listLength_8=1;
	char valueList_9[]={' '};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	char valueList_11[]={'\n'};
	unsigned int listLength_11=1;
	char valueList_12[]={'\v'};
	unsigned int listLength_12=1;
	char valueList_13[]={'\t'};
	unsigned int listLength_13=1;
	char valueList_14[]={'\r'};
	unsigned int listLength_14=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strchr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_gettoken_1,false,0\n");
	aunit_printf("#CASE_START_test_gettoken_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			symbols[3]=(char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			symbols[2]=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			symbols[5]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			symbols[4]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			symbols[1]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			symbols[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			*q=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			symbols[6]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			*ps=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			whitespace[4]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			*eq=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			whitespace[2]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			whitespace[3]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			whitespace[0]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			whitespace[1]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = gettoken(ps,es,q,eq);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("gettoken","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)

	aunit_printf("#CASE_END_test_gettoken_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_gettoken_up();

	switch(caseIndex){
	case 1:
		test_gettoken_1();
		break;
	default:
		abnormal_gettoken_case(caseIndex);
		break;
	}

	test_gettoken_down();
}

