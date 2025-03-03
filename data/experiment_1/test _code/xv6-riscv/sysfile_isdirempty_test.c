void test_isdirempty_up(void);
void test_isdirempty_down(void);


void test_isdirempty_up(void){

	aunit_printf("\n##FUNCTION_START_isdirempty\n");
 }

void test_isdirempty_down(void){
	aunit_printf("\n##FUNCTION_END_isdirempty\n");
 }



void abnormal_isdirempty_case(int index);

void abnormal_isdirempty_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_isdirempty_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct inode *dp;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct inode *valueList_0[]={(struct inode *)dp_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={256};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={6};
	unsigned int listLength_2=1;
	int valueList_3[]={6};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={6};
	unsigned int listLength_4=1;
	short int valueList_5[]={6};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={6};
	unsigned int listLength_7=1;
	short int valueList_8[]={6};
	unsigned int listLength_8=1;
	short int valueList_9[]={6};
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
	case_id=6;
	//初始化各桩函数调用计数器
	readi_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_isdirempty_6,false,0\n");
	aunit_printf("#CASE_START_test_isdirempty_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dp=(struct inode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(dp_PTRTO[0]).size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(dp_PTRTO[0]).dev=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(dp_PTRTO[0]).ref=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(dp_PTRTO[0]).inum=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(dp_PTRTO[0]).type=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(dp_PTRTO[0]).valid=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(dp_PTRTO[0]).major=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(dp_PTRTO[0]).minor=(short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(dp_PTRTO[0]).nlink=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = isdirempty(dp);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("isdirempty","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readi","readi_call_counter",readi_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_isdirempty_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_isdirempty_up();

	switch(caseIndex){
	case 6:
		test_isdirempty_6();
		break;
	default:
		abnormal_isdirempty_case(caseIndex);
		break;
	}

	test_isdirempty_down();
}

