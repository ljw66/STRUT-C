void test_InvIP_up(void);
void test_InvIP_down(void);


void test_InvIP_up(void){

	aunit_printf("\n##FUNCTION_START_InvIP\n");
 }

void test_InvIP_down(void){
	aunit_printf("\n##FUNCTION_END_InvIP\n");
 }



void abnormal_InvIP_case(int index);

void abnormal_InvIP_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_InvIP_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	WORD *state;
	BYTE *in;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)state_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvIP_1,false,0\n");
	aunit_printf("#CASE_START_test_InvIP_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		InvIP(state,in);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[4]",0,in[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[5]",0,in[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[6]",0,in[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[7]",0,in[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[0]",0,in[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[1]",0,in[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[2]",0,in[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[3]",0,in[3])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvIP_1\n");
}

void test_InvIP_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	WORD *state;
	BYTE *in;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)state_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4294967295};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4294967295};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvIP_2,false,0\n");
	aunit_printf("#CASE_START_test_InvIP_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		InvIP(state,in);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[4]",255,in[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[5]",255,in[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[6]",255,in[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[7]",255,in[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[0]",255,in[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[1]",255,in[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[2]",255,in[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[3]",255,in[3])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvIP_2\n");
}

void test_InvIP_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	WORD *state;
	BYTE *in;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)state_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={2863311530};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1431655765};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvIP_3,false,0\n");
	aunit_printf("#CASE_START_test_InvIP_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		InvIP(state,in);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[4]",170,in[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[5]",85,in[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[6]",170,in[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[7]",85,in[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[0]",170,in[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[1]",85,in[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[2]",170,in[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[3]",85,in[3])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvIP_3\n");
}

void test_InvIP_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	WORD *state;
	BYTE *in;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)state_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={2147483648};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={2147483648};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvIP_4,false,0\n");
	aunit_printf("#CASE_START_test_InvIP_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		InvIP(state,in);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[4]",128,in[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[5]",128,in[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[6]",128,in[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[7]",128,in[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[0]",128,in[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[1]",128,in[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[2]",128,in[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[3]",128,in[3])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvIP_4\n");
}

void test_InvIP_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	WORD *state;
	BYTE *in;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)state_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvIP_5,false,0\n");
	aunit_printf("#CASE_START_test_InvIP_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		InvIP(state,in);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[4]",1,in[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[5]",1,in[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[6]",1,in[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[7]",1,in[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[0]",1,in[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[1]",1,in[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[2]",1,in[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[3]",1,in[3])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvIP_5\n");
}

void test_InvIP_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	WORD *state;
	BYTE *in;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)state_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={305419896};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={2596069104};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvIP_6,false,0\n");
	aunit_printf("#CASE_START_test_InvIP_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			state=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			state_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			state_PTRTO[1]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		InvIP(state,in);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[4]",170,in[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[5]",68,in[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[6]",187,in[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[7]",85,in[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[0]",136,in[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[1]",34,in[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[2]",153,in[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("InvIP","in[3]",51,in[3])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvIP_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_InvIP_up();

	switch(caseIndex){
	case 1:
		test_InvIP_1();
		break;
	case 2:
		test_InvIP_2();
		break;
	case 3:
		test_InvIP_3();
		break;
	case 4:
		test_InvIP_4();
		break;
	case 5:
		test_InvIP_5();
		break;
	case 6:
		test_InvIP_6();
		break;
	default:
		abnormal_InvIP_case(caseIndex);
		break;
	}

	test_InvIP_down();
}

