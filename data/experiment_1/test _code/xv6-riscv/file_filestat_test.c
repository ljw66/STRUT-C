void test_filestat_up(void);
void test_filestat_down(void);


void test_filestat_up(void){

	aunit_printf("\n##FUNCTION_START_filestat\n");
 }

void test_filestat_down(void){
	aunit_printf("\n##FUNCTION_END_filestat\n");
 }



void abnormal_filestat_case(int index);

void abnormal_filestat_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_filestat_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_1,false,0\n");
	aunit_printf("#CASE_START_test_filestat_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_1\n");
}

void test_filestat_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_2,false,0\n");
	aunit_printf("#CASE_START_test_filestat_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_2\n");
}

void test_filestat_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0x1000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_3,false,0\n");
	aunit_printf("#CASE_START_test_filestat_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_3\n");
}

void test_filestat_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0x2000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_4,false,0\n");
	aunit_printf("#CASE_START_test_filestat_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_4\n");
}

void test_filestat_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0x3000};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_5,false,0\n");
	aunit_printf("#CASE_START_test_filestat_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_filestat_up();

	switch(caseIndex){
	case 1:
		test_filestat_1();
		break;
	case 2:
		test_filestat_2();
		break;
	case 3:
		test_filestat_3();
		break;
	case 4:
		test_filestat_4();
		break;
	case 5:
		test_filestat_5();
		break;
	default:
		abnormal_filestat_case(caseIndex);
		break;
	}

	test_filestat_down();
}

