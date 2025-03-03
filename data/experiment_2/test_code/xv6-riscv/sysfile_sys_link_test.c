void test_sys_link_up(void);
void test_sys_link_down(void);


void test_sys_link_up(void){

	aunit_printf("\n##FUNCTION_START_sys_link\n");
 }

void test_sys_link_down(void){
	aunit_printf("\n##FUNCTION_END_sys_link\n");
 }



void abnormal_sys_link_case(int index);

void abnormal_sys_link_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sys_link_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	uint64 returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	begin_op_call_counter = 0;
	dirlink_call_counter = 0;
	end_op_call_counter = 0;
	nameiparent_call_counter = 0;
	namei_call_counter = 0;
	iunlockput_call_counter = 0;
	argstr_call_counter = 0;
	iput_call_counter = 0;
	iunlock_call_counter = 0;
	iupdate_call_counter = 0;
	ilock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sys_link_8,false,0\n");
	aunit_printf("#CASE_START_test_sys_link_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = sys_link();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("sys_link","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("dirlink","dirlink_call_counter",dirlink_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("nameiparent","nameiparent_call_counter",nameiparent_call_counter)
	OB_INT_EXPR("namei","namei_call_counter",namei_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("argstr","argstr_call_counter",argstr_call_counter)
	OB_INT_EXPR("iput","iput_call_counter",iput_call_counter)
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)

	aunit_printf("#CASE_END_test_sys_link_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_sys_link_up();

	switch(caseIndex){
	case 8:
		test_sys_link_8();
		break;
	default:
		abnormal_sys_link_case(caseIndex);
		break;
	}

	test_sys_link_down();
}

