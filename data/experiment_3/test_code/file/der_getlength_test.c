void test_getlength_up(void);
void test_getlength_down(void);


void test_getlength_up(void){

	aunit_printf("\n##FUNCTION_START_getlength\n");
 }

void test_getlength_down(void){
	aunit_printf("\n##FUNCTION_END_getlength\n");
 }



void abnormal_getlength_case(int index);

void abnormal_getlength_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_getlength_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	uint8_t *valueList_1[]={(uint8_t *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
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

	aunit_printf("###TEST_TREE_test_getlength_1,false,0\n");
	aunit_printf("#CASE_START_test_getlength_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			c=(uint8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			p_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_1\n");
}

void test_getlength_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x01};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x03};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x02};
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

	aunit_printf("###TEST_TREE_test_getlength_2,false,0\n");
	aunit_printf("#CASE_START_test_getlength_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			c[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			p_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			c[2]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",3,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_2\n");
}

void test_getlength_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x01};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x83};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x02};
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

	aunit_printf("###TEST_TREE_test_getlength_3,false,0\n");
	aunit_printf("#CASE_START_test_getlength_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			c[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			p_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			c[2]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_3\n");
}

void test_getlength_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x01};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x82};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x03};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x02};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_getlength_4,false,0\n");
	aunit_printf("#CASE_START_test_getlength_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			c[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			c[3]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			p_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			c[2]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",258,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_4\n");
}

void test_getlength_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xFF};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x82};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0xFF};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0xFF};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_getlength_5,false,0\n");
	aunit_printf("#CASE_START_test_getlength_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			c[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			c[3]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			p_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			c[2]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_5\n");
}

void test_getlength_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x01};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x82};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x02};
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

	aunit_printf("###TEST_TREE_test_getlength_6,false,0\n");
	aunit_printf("#CASE_START_test_getlength_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			c[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			p_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			c[2]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_6\n");
}

void test_getlength_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xFF};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x81};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_getlength_7,false,0\n");
	aunit_printf("#CASE_START_test_getlength_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			c[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			c[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			p_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",255,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_7\n");
}

void test_getlength_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_getlength_8,false,0\n");
	aunit_printf("#CASE_START_test_getlength_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			p_PTRTO[0]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = getlength(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("getlength","returnValue",4294967295,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_getlength_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_getlength_up();

	switch(caseIndex){
	case 1:
		test_getlength_1();
		break;
	case 2:
		test_getlength_2();
		break;
	case 3:
		test_getlength_3();
		break;
	case 4:
		test_getlength_4();
		break;
	case 5:
		test_getlength_5();
		break;
	case 6:
		test_getlength_6();
		break;
	case 7:
		test_getlength_7();
		break;
	case 8:
		test_getlength_8();
		break;
	default:
		abnormal_getlength_case(caseIndex);
		break;
	}

	test_getlength_down();
}

