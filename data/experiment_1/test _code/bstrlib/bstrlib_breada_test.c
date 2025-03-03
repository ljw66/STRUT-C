void test_breada_up(void);
void test_breada_down(void);


void test_breada_up(void){

	aunit_printf("\n##FUNCTION_START_breada\n");
 }

void test_breada_down(void){
	aunit_printf("\n##FUNCTION_END_breada\n");
 }



void abnormal_breada_case(int index);

void abnormal_breada_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_breada_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_1,false,0\n");
	aunit_printf("#CASE_START_test_breada_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_1\n");
}

void test_breada_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"0x1000"};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_2,false,0\n");
	aunit_printf("#CASE_START_test_breada_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_2\n");
}

void test_breada_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"0x1000"};
	unsigned int listLength_3=1;
	int valueList_4[]={-1};
	unsigned int listLength_4=1;
	int valueList_5[]={100};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_3,false,0\n");
	aunit_printf("#CASE_START_test_breada_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_3\n");
}

void test_breada_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"0x1000"};
	unsigned int listLength_3=1;
	int valueList_4[]={20};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_4,false,0\n");
	aunit_printf("#CASE_START_test_breada_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_4\n");
}

void test_breada_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"0x1000"};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={100};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_5,false,0\n");
	aunit_printf("#CASE_START_test_breada_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_5\n");
}

void test_breada_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"0x1000"};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={100};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_6,false,0\n");
	aunit_printf("#CASE_START_test_breada_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_6\n");
}

void test_breada_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"0x1000"};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={100};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_7,false,0\n");
	aunit_printf("#CASE_START_test_breada_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_7\n");
}

void test_breada_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	size_t  (*readPtr)(void *, unsigned int, unsigned int, void *);
	void *parm;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)NULL};
	unsigned int listLength_1=1;
	size_t  (*valueList_2[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))readPtr_STUB};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"0x1000"};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={100};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	readPtr_STUB_call_counter = 0;
	balloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_breada_8,false,0\n");
	aunit_printf("#CASE_START_test_breada_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			parm=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			readPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = breada(b,readPtr,parm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("breada","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_INT("breada","b->slen",20,b->slen)
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("breada","(b->data)[20]",0,(b->data)[20])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readPtr_STUB","readPtr_STUB_call_counter",readPtr_STUB_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)

	aunit_printf("#CASE_END_test_breada_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_breada_up();

	switch(caseIndex){
	case 1:
		test_breada_1();
		break;
	case 2:
		test_breada_2();
		break;
	case 3:
		test_breada_3();
		break;
	case 4:
		test_breada_4();
		break;
	case 5:
		test_breada_5();
		break;
	case 6:
		test_breada_6();
		break;
	case 7:
		test_breada_7();
		break;
	case 8:
		test_breada_8();
		break;
	default:
		abnormal_breada_case(caseIndex);
		break;
	}

	test_breada_down();
}

