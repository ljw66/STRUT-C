void test_ke_parse_up(void);
void test_ke_parse_down(void);


void test_ke_parse_up(void){

	aunit_printf("\n##FUNCTION_START_ke_parse\n");
 }

void test_ke_parse_down(void){
	aunit_printf("\n##FUNCTION_END_ke_parse\n");
 }



void abnormal_ke_parse_case(int index);

void abnormal_ke_parse_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_parse_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *_s;
	int *err;

	//声明返回值局部变量，若为基本类型赋默认值
	kexpr_t *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"valid_expression"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	ke_parse_core_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_parse_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_parse_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			err_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ke_parse(_s,err);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("ke_parse","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("ke_parse_core","ke_parse_core_call_counter",ke_parse_core_call_counter)

	aunit_printf("#CASE_END_test_ke_parse_1\n");
}

void test_ke_parse_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *_s;
	int *err;

	//声明返回值局部变量，若为基本类型赋默认值
	kexpr_t *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"invalid_expression"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	ke_parse_core_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_parse_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_parse_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			err_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ke_parse(_s,err);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("ke_parse","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("ke_parse_core","ke_parse_core_call_counter",ke_parse_core_call_counter)

	aunit_printf("#CASE_END_test_ke_parse_2\n");
}

void test_ke_parse_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *_s;
	int *err;

	//声明返回值局部变量，若为基本类型赋默认值
	kexpr_t *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"valid_expression"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	calloc_call_counter = 0;
	ke_parse_core_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_parse_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_parse_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_s=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			err_PTRTO[0]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = ke_parse(_s,err);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("ke_parse","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("ke_parse_core","ke_parse_core_call_counter",ke_parse_core_call_counter)

	aunit_printf("#CASE_END_test_ke_parse_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_parse_up();

	switch(caseIndex){
	case 1:
		test_ke_parse_1();
		break;
	case 2:
		test_ke_parse_2();
		break;
	case 3:
		test_ke_parse_3();
		break;
	default:
		abnormal_ke_parse_case(caseIndex);
		break;
	}

	test_ke_parse_down();
}

