void test_eatquote_up(void);
void test_eatquote_down(void);


void test_eatquote_up(void){

	aunit_printf("\n##FUNCTION_START_eatquote\n");
 }

void test_eatquote_down(void){
	aunit_printf("\n##FUNCTION_END_eatquote\n");
 }



void abnormal_eatquote_case(int index);

void abnormal_eatquote_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_eatquote_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"abc"};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_1,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uc=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_1\n");
}

void test_eatquote_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_2,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_2\n");
}

void test_eatquote_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_3,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_3\n");
}

void test_eatquote_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_4,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_4\n");
}

void test_eatquote_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_5,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_5\n");
}

void test_eatquote_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_6,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_6\n");
}

void test_eatquote_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_7,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_7\n");
}

void test_eatquote_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_8,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_8\n");
}

void test_eatquote_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_9,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_9\n");
}

void test_eatquote_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *uc;
	unsigned char *ue;

	//声明返回值局部变量，若为基本类型赋默认值
	const unsigned char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_eatquote_10,false,0\n");
	aunit_printf("#CASE_START_test_eatquote_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = eatquote(uc,ue);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_STRING_EXPR("eatquote","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_eatquote_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_eatquote_up();

	switch(caseIndex){
	case 1:
		test_eatquote_1();
		break;
	case 2:
		test_eatquote_2();
		break;
	case 3:
		test_eatquote_3();
		break;
	case 4:
		test_eatquote_4();
		break;
	case 5:
		test_eatquote_5();
		break;
	case 6:
		test_eatquote_6();
		break;
	case 7:
		test_eatquote_7();
		break;
	case 8:
		test_eatquote_8();
		break;
	case 9:
		test_eatquote_9();
		break;
	case 10:
		test_eatquote_10();
		break;
	default:
		abnormal_eatquote_case(caseIndex);
		break;
	}

	test_eatquote_down();
}

