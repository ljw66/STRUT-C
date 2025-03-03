void test_sys_sleep_up(void);
void test_sys_sleep_down(void);


void test_sys_sleep_up(void){

	aunit_printf("\n##FUNCTION_START_sys_sleep\n");
 }

void test_sys_sleep_down(void){
	aunit_printf("\n##FUNCTION_END_sys_sleep\n");
 }



void abnormal_sys_sleep_case(int index);

void abnormal_sys_sleep_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_sleep_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={10};
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
	sleep_call_counter = 0;
	argint_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	killed_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_sleep_1,false,0\n");
	aunit_printf("#CASE_START_test_sys_sleep_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = sys_sleep();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_sleep","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","ticks",10,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("killed","killed_call_counter",killed_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_sleep_1\n");
}

void test_sys_sleep_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={10};
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
	sleep_call_counter = 0;
	argint_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	killed_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_sleep_2,false,0\n");
	aunit_printf("#CASE_START_test_sys_sleep_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = sys_sleep();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_sleep","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","ticks",15,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("killed","killed_call_counter",killed_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_sleep_2\n");
}

void test_sys_sleep_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={10};
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
	sleep_call_counter = 0;
	argint_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	killed_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_sleep_3,false,0\n");
	aunit_printf("#CASE_START_test_sys_sleep_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = sys_sleep();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_sleep","returnValue",-1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","ticks",10,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("killed","killed_call_counter",killed_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_sleep_3\n");
}

void test_sys_sleep_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={10};
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
	sleep_call_counter = 0;
	argint_call_counter = 0;
	release_call_counter = 0;
	acquire_call_counter = 0;
	killed_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_sleep_4,false,0\n");
	aunit_printf("#CASE_START_test_sys_sleep_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ticks=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tickslock.locked=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = sys_sleep();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_sleep","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","ticks",10,ticks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sys_sleep","tickslock.locked",0,tickslock.locked)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sleep","sleep_call_counter",sleep_call_counter)
	OB_INT_EXPR("argint","argint_call_counter",argint_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("killed","killed_call_counter",killed_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_sys_sleep_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_sleep_up();

	switch(caseIndex){
	case 1:
		test_sys_sleep_1();
		break;
	case 2:
		test_sys_sleep_2();
		break;
	case 3:
		test_sys_sleep_3();
		break;
	case 4:
		test_sys_sleep_4();
		break;
	default:
		abnormal_sys_sleep_case(caseIndex);
		break;
	}

	test_sys_sleep_down();
}

