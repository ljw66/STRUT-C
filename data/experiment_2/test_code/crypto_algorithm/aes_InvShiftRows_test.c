void test_InvShiftRows_up(void);
void test_InvShiftRows_down(void);


void test_InvShiftRows_up(void){

	aunit_printf("\n##FUNCTION_START_InvShiftRows\n");
 }

void test_InvShiftRows_down(void){
	aunit_printf("\n##FUNCTION_END_InvShiftRows\n");
 }



void abnormal_InvShiftRows_case(int index);

void abnormal_InvShiftRows_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_InvShiftRows_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE (*state)[4];


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvShiftRows_1,false,0\n");
	aunit_printf("#CASE_START_test_InvShiftRows_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		InvShiftRows(state);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvShiftRows_1\n");
}

void test_InvShiftRows_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE (*state)[4];


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvShiftRows_2,false,0\n");
	aunit_printf("#CASE_START_test_InvShiftRows_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		InvShiftRows(state);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvShiftRows_2\n");
}

void test_InvShiftRows_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE (*state)[4];


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvShiftRows_3,false,0\n");
	aunit_printf("#CASE_START_test_InvShiftRows_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		InvShiftRows(state);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvShiftRows_3\n");
}

void test_InvShiftRows_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE (*state)[4];


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvShiftRows_4,false,0\n");
	aunit_printf("#CASE_START_test_InvShiftRows_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		InvShiftRows(state);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvShiftRows_4\n");
}

void test_InvShiftRows_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE (*state)[4];


	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_InvShiftRows_5,false,0\n");
	aunit_printf("#CASE_START_test_InvShiftRows_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		InvShiftRows(state);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_InvShiftRows_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_InvShiftRows_up();

	switch(caseIndex){
	case 1:
		test_InvShiftRows_1();
		break;
	case 2:
		test_InvShiftRows_2();
		break;
	case 3:
		test_InvShiftRows_3();
		break;
	case 4:
		test_InvShiftRows_4();
		break;
	case 5:
		test_InvShiftRows_5();
		break;
	default:
		abnormal_InvShiftRows_case(caseIndex);
		break;
	}

	test_InvShiftRows_down();
}

