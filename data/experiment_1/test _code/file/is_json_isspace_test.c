void test_json_isspace_up(void);
void test_json_isspace_down(void);


void test_json_isspace_up(void){

	aunit_printf("\n##FUNCTION_START_json_isspace\n");
 }

void test_json_isspace_down(void){
	aunit_printf("\n##FUNCTION_END_json_isspace\n");
 }



void abnormal_json_isspace_case(int index);

void abnormal_json_isspace_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_json_isspace_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char uc;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_json_isspace_2,false,0\n");
	aunit_printf("#CASE_START_test_json_isspace_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = json_isspace(uc);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("json_isspace","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_json_isspace_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_json_isspace_up();

	switch(caseIndex){
	case 2:
		test_json_isspace_2();
		break;
	default:
		abnormal_json_isspace_case(caseIndex);
		break;
	}

	test_json_isspace_down();
}

