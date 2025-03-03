void test_namei_up(void);
void test_namei_down(void);


void test_namei_up(void){

	aunit_printf("\n##FUNCTION_START_namei\n");
 }

void test_namei_down(void){
	aunit_printf("\n##FUNCTION_END_namei\n");
 }



void abnormal_namei_case(int index);

void abnormal_namei_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_namei_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_namei_1,false,0\n");
	aunit_printf("#CASE_START_test_namei_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = namei(path);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("namei","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_namei_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_namei_up();

	switch(caseIndex){
	case 1:
		test_namei_1();
		break;
	default:
		abnormal_namei_case(caseIndex);
		break;
	}

	test_namei_down();
}

