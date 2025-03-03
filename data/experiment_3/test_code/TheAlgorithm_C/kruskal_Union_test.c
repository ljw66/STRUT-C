void test_Union_up(void);
void test_Union_down(void);


void test_Union_up(void){

	aunit_printf("\n##FUNCTION_START_Union\n");
 }

void test_Union_down(void){
	aunit_printf("\n##FUNCTION_END_Union\n");
 }



void abnormal_Union_case(int index);

void abnormal_Union_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_Union_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct subset *subsets;
	int x;
	int y;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	struct subset *valueList_2[]={(struct subset *)subsets_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	find_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Union_1,false,0\n");
	aunit_printf("#CASE_START_test_Union_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			subsets=(struct subset *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(subsets_PTRTO[0]).parent=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(subsets_PTRTO[0]).rank=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		Union(subsets,x,y);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("Union","(subsets[1]).parent",2,(subsets[1]).parent)
	TEST_ASSERT_EQUAL_INT("Union","(subsets[1]).rank",0,(subsets[1]).rank)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("find","find_call_counter",find_call_counter)

	aunit_printf("#CASE_END_test_Union_1\n");
}

void test_Union_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct subset *subsets;
	int x;
	int y;


	//值序列相关
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	int valueList_1[]={4};
	unsigned int listLength_1=1;
	struct subset *valueList_2[]={(struct subset *)subsets_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	find_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Union_2,false,0\n");
	aunit_printf("#CASE_START_test_Union_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			subsets=(struct subset *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(subsets_PTRTO[0]).parent=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(subsets_PTRTO[0]).rank=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		Union(subsets,x,y);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("Union","(subsets[3]).rank",0,(subsets[3]).rank)
	TEST_ASSERT_EQUAL_INT("Union","(subsets[4]).parent",3,(subsets[4]).parent)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("find","find_call_counter",find_call_counter)

	aunit_printf("#CASE_END_test_Union_2\n");
}

void test_Union_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct subset *subsets;
	int x;
	int y;


	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	int valueList_1[]={6};
	unsigned int listLength_1=1;
	struct subset *valueList_2[]={(struct subset *)subsets_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	find_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Union_3,false,0\n");
	aunit_printf("#CASE_START_test_Union_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			subsets=(struct subset *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(subsets_PTRTO[0]).parent=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(subsets_PTRTO[0]).rank=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		Union(subsets,x,y);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("Union","(subsets[6]).parent",5,(subsets[6]).parent)
	TEST_ASSERT_EQUAL_INT("Union","(subsets[5]).rank",1,(subsets[5]).rank)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("find","find_call_counter",find_call_counter)

	aunit_printf("#CASE_END_test_Union_3\n");
}

void test_Union_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct subset *subsets;
	int x;
	int y;


	//值序列相关
	int valueList_0[]={7};
	unsigned int listLength_0=1;
	int valueList_1[]={8};
	unsigned int listLength_1=1;
	struct subset *valueList_2[]={(struct subset *)subsets_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	find_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Union_4,false,0\n");
	aunit_printf("#CASE_START_test_Union_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			subsets=(struct subset *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(subsets_PTRTO[0]).parent=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(subsets_PTRTO[0]).rank=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		Union(subsets,x,y);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("Union","(subsets[7]).parent",7,(subsets[7]).parent)
	TEST_ASSERT_EQUAL_INT("Union","(subsets[8]).parent",7,(subsets[8]).parent)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("find","find_call_counter",find_call_counter)

	aunit_printf("#CASE_END_test_Union_4\n");
}

void test_Union_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct subset *subsets;
	int x;
	int y;


	//值序列相关
	int valueList_0[]={9};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	struct subset *valueList_2[]={(struct subset *)subsets_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	find_call_counter = 0;

	aunit_printf("###TEST_TREE_test_Union_5,false,0\n");
	aunit_printf("#CASE_START_test_Union_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			x=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			y=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			subsets=(struct subset *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(subsets_PTRTO[0]).parent=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(subsets_PTRTO[0]).rank=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		Union(subsets,x,y);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("Union","(subsets[12]).rank",0,(subsets[12]).rank)
	TEST_ASSERT_EQUAL_INT("Union","(subsets[11]).parent",12,(subsets[11]).parent)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("find","find_call_counter",find_call_counter)

	aunit_printf("#CASE_END_test_Union_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_Union_up();

	switch(caseIndex){
	case 1:
		test_Union_1();
		break;
	case 2:
		test_Union_2();
		break;
	case 3:
		test_Union_3();
		break;
	case 4:
		test_Union_4();
		break;
	case 5:
		test_Union_5();
		break;
	default:
		abnormal_Union_case(caseIndex);
		break;
	}

	test_Union_down();
}

