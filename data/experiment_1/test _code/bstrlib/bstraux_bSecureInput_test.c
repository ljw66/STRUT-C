void test_bSecureInput_up(void);
void test_bSecureInput_down(void);


void test_bSecureInput_up(void){

	aunit_printf("\n##FUNCTION_START_bSecureInput\n");
 }

void test_bSecureInput_down(void){
	aunit_printf("\n##FUNCTION_END_bSecureInput\n");
 }



void abnormal_bSecureInput_case(int index);

void abnormal_bSecureInput_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bSecureInput_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int maxlen;
	int termchar;
	int (*vgetchar)(void *);
	void *vgcCtx;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))vgetchar_STUB};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={100};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	snapUpSize_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;
	memset_call_counter = 0;
	vgetchar_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bSecureInput_1,false,0\n");
	aunit_printf("#CASE_START_test_bSecureInput_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vgcCtx=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vgetchar=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			termchar=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bSecureInput(maxlen,termchar,vgetchar,vgcCtx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bSecureInput","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("vgetchar_STUB","vgetchar_STUB_call_counter",vgetchar_STUB_call_counter)

	aunit_printf("#CASE_END_test_bSecureInput_1\n");
}

void test_bSecureInput_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int maxlen;
	int termchar;
	int (*vgetchar)(void *);
	void *vgcCtx;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))vgetchar_STUB};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={100};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	snapUpSize_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;
	memset_call_counter = 0;
	vgetchar_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bSecureInput_2,false,0\n");
	aunit_printf("#CASE_START_test_bSecureInput_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vgcCtx=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vgetchar=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			termchar=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bSecureInput(maxlen,termchar,vgetchar,vgcCtx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("bSecureInput","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("vgetchar_STUB","vgetchar_STUB_call_counter",vgetchar_STUB_call_counter)

	aunit_printf("#CASE_END_test_bSecureInput_2\n");
}

void test_bSecureInput_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int maxlen;
	int termchar;
	int (*vgetchar)(void *);
	void *vgcCtx;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))vgetchar_STUB};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	snapUpSize_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;
	memset_call_counter = 0;
	vgetchar_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bSecureInput_3,false,0\n");
	aunit_printf("#CASE_START_test_bSecureInput_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vgcCtx=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vgetchar=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			termchar=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bSecureInput(maxlen,termchar,vgetchar,vgcCtx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bSecureInput","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("vgetchar_STUB","vgetchar_STUB_call_counter",vgetchar_STUB_call_counter)

	aunit_printf("#CASE_END_test_bSecureInput_3\n");
}

void test_bSecureInput_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int maxlen;
	int termchar;
	int (*vgetchar)(void *);
	void *vgcCtx;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))vgetchar_STUB};
	unsigned int listLength_1=1;
	int valueList_2[]={65};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	snapUpSize_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;
	memset_call_counter = 0;
	vgetchar_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bSecureInput_4,false,0\n");
	aunit_printf("#CASE_START_test_bSecureInput_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vgcCtx=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vgetchar=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			termchar=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bSecureInput(maxlen,termchar,vgetchar,vgcCtx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bSecureInput","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("vgetchar_STUB","vgetchar_STUB_call_counter",vgetchar_STUB_call_counter)

	aunit_printf("#CASE_END_test_bSecureInput_4\n");
}

void test_bSecureInput_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int maxlen;
	int termchar;
	int (*vgetchar)(void *);
	void *vgcCtx;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))vgetchar_STUB};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={100};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	snapUpSize_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;
	memset_call_counter = 0;
	vgetchar_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bSecureInput_5,false,0\n");
	aunit_printf("#CASE_START_test_bSecureInput_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vgcCtx=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vgetchar=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			termchar=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bSecureInput(maxlen,termchar,vgetchar,vgcCtx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bSecureInput","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("vgetchar_STUB","vgetchar_STUB_call_counter",vgetchar_STUB_call_counter)

	aunit_printf("#CASE_END_test_bSecureInput_5\n");
}

void test_bSecureInput_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int maxlen;
	int termchar;
	int (*vgetchar)(void *);
	void *vgcCtx;

	//声明返回值局部变量，若为基本类型赋默认值
	bstring returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int (*valueList_1[])(void *)={(int (*)(void *))vgetchar_STUB};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={100};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	malloc_call_counter = 0;
	memcpy_call_counter = 0;
	snapUpSize_call_counter = 0;
	free_call_counter = 0;
	bdestroy_call_counter = 0;
	memset_call_counter = 0;
	vgetchar_STUB_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bSecureInput_6,false,0\n");
	aunit_printf("#CASE_START_test_bSecureInput_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vgcCtx=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vgetchar=(int (*)(void *))valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			termchar=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = bSecureInput(maxlen,termchar,vgetchar,vgcCtx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bSecureInput","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("bSecureInput","returnValue->data","allocated",returnValue->data)
	TEST_ASSERT_EQUAL_INT("bSecureInput","returnValue->mlen",256,returnValue->mlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("snapUpSize","snapUpSize_call_counter",snapUpSize_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("vgetchar_STUB","vgetchar_STUB_call_counter",vgetchar_STUB_call_counter)

	aunit_printf("#CASE_END_test_bSecureInput_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bSecureInput_up();

	switch(caseIndex){
	case 1:
		test_bSecureInput_1();
		break;
	case 2:
		test_bSecureInput_2();
		break;
	case 3:
		test_bSecureInput_3();
		break;
	case 4:
		test_bSecureInput_4();
		break;
	case 5:
		test_bSecureInput_5();
		break;
	case 6:
		test_bSecureInput_6();
		break;
	default:
		abnormal_bSecureInput_case(caseIndex);
		break;
	}

	test_bSecureInput_down();
}

