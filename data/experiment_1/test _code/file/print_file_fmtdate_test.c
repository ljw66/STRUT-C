void test_file_fmtdate_up(void);
void test_file_fmtdate_down(void);


void test_file_fmtdate_up(void){

	aunit_printf("\n##FUNCTION_START_file_fmtdate\n");
 }

void test_file_fmtdate_down(void){
	aunit_printf("\n##FUNCTION_END_file_fmtdate\n");
 }



void abnormal_file_fmtdate_case(int index);

void abnormal_file_fmtdate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_fmtdate_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bsize;
	unsigned short int v;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0x1F3F};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={100};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strftime_call_counter = 0;
	strlcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtdate_1,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtdate_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			bsize=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_fmtdate(buf,bsize,v);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtdate","returnValue","abc",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strftime","strftime_call_counter",strftime_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_file_fmtdate_1\n");
}

void test_file_fmtdate_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bsize;
	unsigned short int v;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0x1FFF};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={100};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strftime_call_counter = 0;
	strlcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtdate_2,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtdate_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			bsize=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_fmtdate(buf,bsize,v);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtdate","returnValue","*Invalid date*",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strftime","strftime_call_counter",strftime_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_file_fmtdate_2\n");
}

void test_file_fmtdate_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bsize;
	unsigned short int v;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0x0000};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={100};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	strftime_call_counter = 0;
	strlcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtdate_3,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtdate_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			bsize=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_fmtdate(buf,bsize,v);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtdate","returnValue","abc",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strftime","strftime_call_counter",strftime_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_file_fmtdate_3\n");
}

void test_file_fmtdate_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bsize;
	unsigned short int v;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0x7FFF};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={100};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	strftime_call_counter = 0;
	strlcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtdate_4,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtdate_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			bsize=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_fmtdate(buf,bsize,v);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtdate","returnValue","abc",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strftime","strftime_call_counter",strftime_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_file_fmtdate_4\n");
}

void test_file_fmtdate_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *buf;
	unsigned int bsize;
	unsigned short int v;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned short int valueList_1[]={0x1F3F};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strftime_call_counter = 0;
	strlcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_fmtdate_5,false,0\n");
	aunit_printf("#CASE_START_test_file_fmtdate_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v=(unsigned short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			bsize=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_fmtdate(buf,bsize,v);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_fmtdate","returnValue","*Invalid date*",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strftime","strftime_call_counter",strftime_call_counter)
	OB_INT_EXPR("strlcpy","strlcpy_call_counter",strlcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_file_fmtdate_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_fmtdate_up();

	switch(caseIndex){
	case 1:
		test_file_fmtdate_1();
		break;
	case 2:
		test_file_fmtdate_2();
		break;
	case 3:
		test_file_fmtdate_3();
		break;
	case 4:
		test_file_fmtdate_4();
		break;
	case 5:
		test_file_fmtdate_5();
		break;
	default:
		abnormal_file_fmtdate_case(caseIndex);
		break;
	}

	test_file_fmtdate_down();
}

