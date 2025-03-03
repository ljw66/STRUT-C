void test_sys_unlink_up(void);
void test_sys_unlink_down(void);


void test_sys_unlink_up(void){

	aunit_printf("\n##FUNCTION_START_sys_unlink\n");
 }

void test_sys_unlink_down(void){
	aunit_printf("\n##FUNCTION_END_sys_unlink\n");
 }



void abnormal_sys_unlink_case(int index);

void abnormal_sys_unlink_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_unlink_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	writei_call_counter = 0;
	nameiparent_call_counter = 0;
	isdirempty_call_counter = 0;
	argstr_call_counter = 0;
	ilock_call_counter = 0;
	memset_call_counter = 0;
	panic_call_counter = 0;
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	namecmp_call_counter = 0;
	iupdate_call_counter = 0;
	dirlookup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_unlink_3,false,0\n");
	aunit_printf("#CASE_START_test_sys_unlink_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(nameiparent_returnValue_PTRTO[0]).dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = sys_unlink();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_unlink","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("writei","writei_call_counter",writei_call_counter)
	OB_INT_EXPR("nameiparent","nameiparent_call_counter",nameiparent_call_counter)
	OB_INT_EXPR("isdirempty","isdirempty_call_counter",isdirempty_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("namecmp","namecmp_call_counter",namecmp_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("dirlookup","dirlookup_call_counter",dirlookup_call_counter)

	aunit_printf("#CASE_END_test_sys_unlink_3\n");
}

void test_sys_unlink_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	writei_call_counter = 0;
	nameiparent_call_counter = 0;
	isdirempty_call_counter = 0;
	argstr_call_counter = 0;
	ilock_call_counter = 0;
	memset_call_counter = 0;
	panic_call_counter = 0;
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	namecmp_call_counter = 0;
	iupdate_call_counter = 0;
	dirlookup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_unlink_4,false,0\n");
	aunit_printf("#CASE_START_test_sys_unlink_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(nameiparent_returnValue_PTRTO[0]).dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = sys_unlink();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_unlink","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("writei","writei_call_counter",writei_call_counter)
	OB_INT_EXPR("nameiparent","nameiparent_call_counter",nameiparent_call_counter)
	OB_INT_EXPR("isdirempty","isdirempty_call_counter",isdirempty_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("namecmp","namecmp_call_counter",namecmp_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("dirlookup","dirlookup_call_counter",dirlookup_call_counter)

	aunit_printf("#CASE_END_test_sys_unlink_4\n");
}

void test_sys_unlink_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	writei_call_counter = 0;
	nameiparent_call_counter = 0;
	isdirempty_call_counter = 0;
	argstr_call_counter = 0;
	ilock_call_counter = 0;
	memset_call_counter = 0;
	panic_call_counter = 0;
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	namecmp_call_counter = 0;
	iupdate_call_counter = 0;
	dirlookup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_unlink_5,false,0\n");
	aunit_printf("#CASE_START_test_sys_unlink_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(nameiparent_returnValue_PTRTO[0]).dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = sys_unlink();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_unlink","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("writei","writei_call_counter",writei_call_counter)
	OB_INT_EXPR("nameiparent","nameiparent_call_counter",nameiparent_call_counter)
	OB_INT_EXPR("isdirempty","isdirempty_call_counter",isdirempty_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("namecmp","namecmp_call_counter",namecmp_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("dirlookup","dirlookup_call_counter",dirlookup_call_counter)

	aunit_printf("#CASE_END_test_sys_unlink_5\n");
}

void test_sys_unlink_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	writei_call_counter = 0;
	nameiparent_call_counter = 0;
	isdirempty_call_counter = 0;
	argstr_call_counter = 0;
	ilock_call_counter = 0;
	memset_call_counter = 0;
	panic_call_counter = 0;
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	iunlockput_call_counter = 0;
	namecmp_call_counter = 0;
	iupdate_call_counter = 0;
	dirlookup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_unlink_6,false,0\n");
	aunit_printf("#CASE_START_test_sys_unlink_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(nameiparent_returnValue_PTRTO[0]).dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = sys_unlink();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_unlink","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("writei","writei_call_counter",writei_call_counter)
	OB_INT_EXPR("nameiparent","nameiparent_call_counter",nameiparent_call_counter)
	OB_INT_EXPR("isdirempty","isdirempty_call_counter",isdirempty_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("namecmp","namecmp_call_counter",namecmp_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("dirlookup","dirlookup_call_counter",dirlookup_call_counter)

	aunit_printf("#CASE_END_test_sys_unlink_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_unlink_up();

	switch(caseIndex){
	case 3:
		test_sys_unlink_3();
		break;
	case 4:
		test_sys_unlink_4();
		break;
	case 5:
		test_sys_unlink_5();
		break;
	case 6:
		test_sys_unlink_6();
		break;
	default:
		abnormal_sys_unlink_case(caseIndex);
		break;
	}

	test_sys_unlink_down();
}

