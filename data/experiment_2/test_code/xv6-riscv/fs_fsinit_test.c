void test_fsinit_up(void);
void test_fsinit_down(void);


void test_fsinit_up(void){

	aunit_printf("\n##FUNCTION_START_fsinit\n");
 }

void test_fsinit_down(void){
	aunit_printf("\n##FUNCTION_END_fsinit\n");
 }



void abnormal_fsinit_case(int index);

void abnormal_fsinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fsinit_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_1,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x10203040,sb.magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_1\n");
}

void test_fsinit_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;


	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_2,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x12345678,sb.magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_2\n");
}

void test_fsinit_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;


	//值序列相关
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_3,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x10203040,sb.magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_3\n");
}

void test_fsinit_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;


	//值序列相关
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_4,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x87654321,sb.magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_4\n");
}

void test_fsinit_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;


	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	readsb_call_counter = 0;
	initlog_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fsinit_5,false,0\n");
	aunit_printf("#CASE_START_test_fsinit_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb.magic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		fsinit(dev);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("fsinit","sb.magic",0x10203040,sb.magic)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readsb","readsb_call_counter",readsb_call_counter)
	OB_INT_EXPR("initlog","initlog_call_counter",initlog_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fsinit_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_fsinit_up();

	switch(caseIndex){
	case 1:
		test_fsinit_1();
		break;
	case 2:
		test_fsinit_2();
		break;
	case 3:
		test_fsinit_3();
		break;
	case 4:
		test_fsinit_4();
		break;
	case 5:
		test_fsinit_5();
		break;
	default:
		abnormal_fsinit_case(caseIndex);
		break;
	}

	test_fsinit_down();
}

