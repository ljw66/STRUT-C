void test_bjoin_up(void);
void test_bjoin_down(void);


void test_bjoin_up(void){

	aunit_printf("\n##FUNCTION_START_bjoin\n");
 }

void test_bjoin_down(void){
	aunit_printf("\n##FUNCTION_END_bjoin\n");
 }



void abnormal_bjoin_case(int index);

void abnormal_bjoin_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bjoin_13(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bstrList *bl;
	struct tagbstring *sep;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	struct bstrList *valueList_0[]={(struct bstrList *)bl_PTRTO};
	unsigned int listLength_0=1;
	struct tagbstring *valueList_1[]={(struct tagbstring *)sep_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	struct tagbstring *valueList_4[]={(struct tagbstring *)2147483647};
	unsigned int listLength_4=1;
	struct tagbstring *valueList_5[]={(struct tagbstring *)large1};
	unsigned int listLength_5=1;
	struct tagbstring *valueList_6[]={(struct tagbstring *)large2};
	unsigned int listLength_6=1;
	struct tagbstring *valueList_7[]={(struct tagbstring *)2147483647};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=13;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bjoin_13,false,0\n");
	aunit_printf("#CASE_START_test_bjoin_13\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			bl=(struct bstrList *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sep=(struct tagbstring *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(bl_PTRTO[0]).qty=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sep_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(bl_PTRTO[0]).entry[0].slen=(struct tagbstring *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(bl_PTRTO[0]).entry[0].data=(struct tagbstring *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(bl_PTRTO[0]).entry[1].data=(struct tagbstring *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(bl_PTRTO[0]).entry[1].slen=(struct tagbstring *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bjoin(bl,sep);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bjoin","returnValue","NULL",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_bjoin_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_bjoin_up();

	switch(caseIndex){
	case 13:
		test_bjoin_13();
		break;
	default:
		abnormal_bjoin_case(caseIndex);
		break;
	}

	test_bjoin_down();
}

