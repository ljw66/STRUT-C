void test_wsect_up(void);
void test_wsect_down(void);


void test_wsect_up(void){

	aunit_printf("\n##FUNCTION_START_wsect\n");
 }

void test_wsect_down(void){
	aunit_printf("\n##FUNCTION_END_wsect\n");
 }



void abnormal_wsect_case(int index);

void abnormal_wsect_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_wsect_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sec;
	void *buf;


	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_1,false,0\n");
	aunit_printf("#CASE_START_test_wsect_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",10,fsfd)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_1\n");
}

void test_wsect_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sec;
	void *buf;


	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	int valueList_1[]={15};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_2,false,0\n");
	aunit_printf("#CASE_START_test_wsect_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",15,fsfd)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_2\n");
}

void test_wsect_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sec;
	void *buf;


	//值序列相关
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_3,false,0\n");
	aunit_printf("#CASE_START_test_wsect_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",20,fsfd)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_3\n");
}

void test_wsect_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sec;
	void *buf;


	//值序列相关
	unsigned int valueList_0[]={4};
	unsigned int listLength_0=1;
	int valueList_1[]={25};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_4,false,0\n");
	aunit_printf("#CASE_START_test_wsect_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",25,fsfd)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_4\n");
}

void test_wsect_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int sec;
	void *buf;


	//值序列相关
	unsigned int valueList_0[]={6};
	unsigned int listLength_0=1;
	int valueList_1[]={30};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	die_call_counter = 0;
	lseek_call_counter = 0;
	write_call_counter = 0;

	aunit_printf("###TEST_TREE_test_wsect_5,false,0\n");
	aunit_printf("#CASE_START_test_wsect_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sec=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fsfd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		wsect(sec,buf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("wsect","fsfd",30,fsfd)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("die","die_call_counter",die_call_counter)
	OB_INT_EXPR("lseek","lseek_call_counter",lseek_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)

	aunit_printf("#CASE_END_test_wsect_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_wsect_up();

	switch(caseIndex){
	case 1:
		test_wsect_1();
		break;
	case 2:
		test_wsect_2();
		break;
	case 3:
		test_wsect_3();
		break;
	case 4:
		test_wsect_4();
		break;
	case 5:
		test_wsect_5();
		break;
	default:
		abnormal_wsect_case(caseIndex);
		break;
	}

	test_wsect_down();
}

