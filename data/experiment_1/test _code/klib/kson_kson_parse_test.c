void test_kson_parse_up(void);
void test_kson_parse_down(void);


void test_kson_parse_up(void){

	aunit_printf("\n##FUNCTION_START_kson_parse\n");
 }

void test_kson_parse_down(void){
	aunit_printf("\n##FUNCTION_END_kson_parse\n");
 }



void abnormal_kson_parse_case(int index);

void abnormal_kson_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kson_parse_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *json;

	//声明返回值局部变量，若为基本类型赋默认值
	kson_t *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_1,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kson_parse(json);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("kson_parse","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_1\n");
}

void test_kson_parse_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *json;

	//声明返回值局部变量，若为基本类型赋默认值
	kson_t *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_2,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kson_parse(json);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("kson_parse","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_2\n");
}

void test_kson_parse_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *json;

	//声明返回值局部变量，若为基本类型赋默认值
	kson_t *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_3,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kson_parse(json);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("kson_parse","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_3\n");
}

void test_kson_parse_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *json;

	//声明返回值局部变量，若为基本类型赋默认值
	kson_t *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_4,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = kson_parse(json);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("kson_parse","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_4\n");
}

void test_kson_parse_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *json;

	//声明返回值局部变量，若为基本类型赋默认值
	kson_t *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	kson_parse_core_call_counter = 0;
	kson_destroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_parse_5,false,0\n");
	aunit_printf("#CASE_START_test_kson_parse_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			json=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = kson_parse(json);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("kson_parse","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("kson_parse_core","kson_parse_core_call_counter",kson_parse_core_call_counter)
	OB_INT_EXPR("kson_destroy","kson_destroy_call_counter",kson_destroy_call_counter)

	aunit_printf("#CASE_END_test_kson_parse_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_kson_parse_up();

	switch(caseIndex){
	case 1:
		test_kson_parse_1();
		break;
	case 2:
		test_kson_parse_2();
		break;
	case 3:
		test_kson_parse_3();
		break;
	case 4:
		test_kson_parse_4();
		break;
	case 5:
		test_kson_parse_5();
		break;
	default:
		abnormal_kson_parse_case(caseIndex);
		break;
	}

	test_kson_parse_down();
}

