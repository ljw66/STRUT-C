void test_cdf_offset_up(void);
void test_cdf_offset_down(void);


void test_cdf_offset_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_offset\n");
 }

void test_cdf_offset_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_offset\n");
 }



void abnormal_cdf_offset_case(int index);

void abnormal_cdf_offset_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_offset_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_1\n");
}

void test_cdf_offset_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_2\n");
}

void test_cdf_offset_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1024};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_3\n");
}

void test_cdf_offset_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)NULL};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_4\n");
}

void test_cdf_offset_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)NULL};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={8};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_5\n");
}

void test_cdf_offset_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4294967295};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_6\n");
}

void test_cdf_offset_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0xFFFFFFFF};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_7,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_7\n");
}

void test_cdf_offset_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	const void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0xFFFFFFF0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_offset_8,false,0\n");
	aunit_printf("#CASE_START_test_cdf_offset_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cdf_offset(p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("cdf_offset","returnValue",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_offset_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_offset_up();

	switch(caseIndex){
	case 1:
		test_cdf_offset_1();
		break;
	case 2:
		test_cdf_offset_2();
		break;
	case 3:
		test_cdf_offset_3();
		break;
	case 4:
		test_cdf_offset_4();
		break;
	case 5:
		test_cdf_offset_5();
		break;
	case 6:
		test_cdf_offset_6();
		break;
	case 7:
		test_cdf_offset_7();
		break;
	case 8:
		test_cdf_offset_8();
		break;
	default:
		abnormal_cdf_offset_case(caseIndex);
		break;
	}

	test_cdf_offset_down();
}

