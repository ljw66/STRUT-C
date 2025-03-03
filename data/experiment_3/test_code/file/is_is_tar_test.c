void test_is_tar_up(void);
void test_is_tar_down(void);


void test_is_tar_up(void){

	aunit_printf("\n##FUNCTION_START_is_tar\n");
 }

void test_is_tar_down(void){
	aunit_printf("\n##FUNCTION_END_is_tar\n");
 }



void abnormal_is_tar_case(int index);

void abnormal_is_tar_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_is_tar_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"valid_header_data"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={512};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	strncmp_call_counter = 0;
	memcmp_call_counter = 0;
	memchr_call_counter = 0;
	from_oct_call_counter = 0;

	aunit_printf("###TEST_TREE_test_is_tar_9,false,0\n");
	aunit_printf("#CASE_START_test_is_tar_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nbytes=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = is_tar(buf,nbytes);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("is_tar","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strncmp","strncmp_call_counter",strncmp_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memchr","memchr_call_counter",memchr_call_counter)
	OB_INT_EXPR("from_oct","from_oct_call_counter",from_oct_call_counter)

	aunit_printf("#CASE_END_test_is_tar_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_is_tar_up();

	switch(caseIndex){
	case 9:
		test_is_tar_9();
		break;
	default:
		abnormal_is_tar_case(caseIndex);
		break;
	}

	test_is_tar_down();
}

