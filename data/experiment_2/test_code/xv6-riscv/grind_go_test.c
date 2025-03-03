void test_go_up(void);
void test_go_down(void);


void test_go_up(void){

	aunit_printf("\n##FUNCTION_START_go\n");
 }

void test_go_down(void){
	aunit_printf("\n##FUNCTION_END_go\n");
 }



void abnormal_go_case(int index);

void abnormal_go_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_go_24(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int which_child;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=24;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	wait_call_counter = 0;
	read_call_counter = 0;
	link_call_counter = 0;
	fstat_call_counter = 0;
	chdir_call_counter = 0;
	kill_call_counter = 0;
	fprintf_call_counter = 0;
	printf_call_counter = 0;
	rand_call_counter = 0;
	exit_call_counter = 0;
	fork_call_counter = 0;
	unlink_call_counter = 0;
	pipe_call_counter = 0;
	close_call_counter = 0;
	write_call_counter = 0;
	sbrk_call_counter = 0;
	getpid_call_counter = 0;
	mkdir_call_counter = 0;
	exec_call_counter = 0;
	dup_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_go_24,false,0\n");
	aunit_printf("#CASE_START_test_go_24\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			which_child=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		go(which_child);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("wait","wait_call_counter",wait_call_counter)
	OB_INT_EXPR("read","read_call_counter",read_call_counter)
	OB_INT_EXPR("link","link_call_counter",link_call_counter)
	OB_INT_EXPR("fstat","fstat_call_counter",fstat_call_counter)
	OB_INT_EXPR("chdir","chdir_call_counter",chdir_call_counter)
	OB_INT_EXPR("kill","kill_call_counter",kill_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("rand","rand_call_counter",rand_call_counter)
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("fork","fork_call_counter",fork_call_counter)
	OB_INT_EXPR("unlink","unlink_call_counter",unlink_call_counter)
	OB_INT_EXPR("pipe","pipe_call_counter",pipe_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("sbrk","sbrk_call_counter",sbrk_call_counter)
	OB_INT_EXPR("getpid","getpid_call_counter",getpid_call_counter)
	OB_INT_EXPR("mkdir","mkdir_call_counter",mkdir_call_counter)
	OB_INT_EXPR("exec","exec_call_counter",exec_call_counter)
	OB_INT_EXPR("dup","dup_call_counter",dup_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_go_24\n");
}

void aunit_test_func_run(int caseIndex){

	test_go_up();

	switch(caseIndex){
	case 24:
		test_go_24();
		break;
	default:
		abnormal_go_case(caseIndex);
		break;
	}

	test_go_down();
}

