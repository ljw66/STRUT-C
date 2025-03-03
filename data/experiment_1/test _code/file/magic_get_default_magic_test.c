void test_get_default_magic_up(void);
void test_get_default_magic_down(void);


void test_get_default_magic_up(void){

	aunit_printf("\n##FUNCTION_START_get_default_magic\n");
 }

void test_get_default_magic_down(void){
	aunit_printf("\n##FUNCTION_END_get_default_magic\n");
 }



void abnormal_get_default_magic_case(int index);

void abnormal_get_default_magic_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_get_default_magic_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	stat_call_counter = 0;
	access_call_counter = 0;
	asprintf_call_counter = 0;
	getenv_call_counter = 0;

	aunit_printf("###TEST_TREE_test_get_default_magic_7,false,0\n");
	aunit_printf("#CASE_START_test_get_default_magic_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = get_default_magic();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("get_default_magic","returnValue","/home/user/.magic.mgc:/etc/magic",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("stat","stat_call_counter",stat_call_counter)
	OB_INT_EXPR("access","access_call_counter",access_call_counter)
	OB_INT_EXPR("asprintf","asprintf_call_counter",asprintf_call_counter)
	OB_INT_EXPR("getenv","getenv_call_counter",getenv_call_counter)

	aunit_printf("#CASE_END_test_get_default_magic_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_get_default_magic_up();

	switch(caseIndex){
	case 7:
		test_get_default_magic_7();
		break;
	default:
		abnormal_get_default_magic_case(caseIndex);
		break;
	}

	test_get_default_magic_down();
}

