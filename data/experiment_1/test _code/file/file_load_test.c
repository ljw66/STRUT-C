void test_load_up(void);
void test_load_down(void);


void test_load_up(void){

	aunit_printf("\n##FUNCTION_START_load\n");
 }

void test_load_down(void){
	aunit_printf("\n##FUNCTION_END_load\n");
 }



void abnormal_load_case(int index);

void abnormal_load_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_load_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *magicfile;
	int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	struct magic_set *returnValue = 0;

	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"valid_magic_file"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	magic_error_call_counter = 0;
	magic_close_call_counter = 0;
	magic_open_call_counter = 0;
	file_warn_call_counter = 0;
	magic_load_call_counter = 0;

	aunit_printf("###TEST_TREE_test_load_3,false,0\n");
	aunit_printf("#CASE_START_test_load_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			flags=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			magicfile=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = load(magicfile,flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("load","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("magic_error","magic_error_call_counter",magic_error_call_counter)
	OB_INT_EXPR("magic_close","magic_close_call_counter",magic_close_call_counter)
	OB_INT_EXPR("magic_open","magic_open_call_counter",magic_open_call_counter)
	OB_INT_EXPR("file_warn","file_warn_call_counter",file_warn_call_counter)
	OB_INT_EXPR("magic_load","magic_load_call_counter",magic_load_call_counter)

	aunit_printf("#CASE_END_test_load_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_load_up();

	switch(caseIndex){
	case 3:
		test_load_3();
		break;
	default:
		abnormal_load_case(caseIndex);
		break;
	}

	test_load_down();
}

