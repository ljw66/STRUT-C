void test_bwsOpen_up(void);
void test_bwsOpen_down(void);


void test_bwsOpen_up(void){

	aunit_printf("\n##FUNCTION_START_bwsOpen\n");
 }

void test_bwsOpen_down(void){
	aunit_printf("\n##FUNCTION_END_bwsOpen\n");
 }



void abnormal_bwsOpen_case(int index);

void abnormal_bwsOpen_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bwsOpen_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int (*writeFn)(const void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	struct bwriteStream *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)1};
	unsigned int listLength_0=1;
	int (*valueList_1[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))writeFn_STUB};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	bfromcstr_call_counter = 0;
	writeFn_STUB_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsOpen_5,false,0\n");
	aunit_printf("#CASE_START_test_bwsOpen_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			parm=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bwsOpen(writeFn,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bwsOpen","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("bwsOpen","returnValue->buff",1,returnValue->buff)
	TEST_ASSERT_EQUAL_INT("bwsOpen","returnValue->isEOF",0,returnValue->isEOF)
	TEST_ASSERT_EQUAL_INT("bwsOpen","returnValue->minBuffSz",1024,returnValue->minBuffSz)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("bfromcstr","bfromcstr_call_counter",bfromcstr_call_counter)
	OB_INT_EXPR("writeFn_STUB","writeFn_STUB_call_counter",writeFn_STUB_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_bwsOpen_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bwsOpen_up();

	switch(caseIndex){
	case 5:
		test_bwsOpen_5();
		break;
	default:
		abnormal_bwsOpen_case(caseIndex);
		break;
	}

	test_bwsOpen_down();
}

