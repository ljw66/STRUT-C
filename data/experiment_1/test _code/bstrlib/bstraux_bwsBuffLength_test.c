void test_bwsBuffLength_up(void);
void test_bwsBuffLength_down(void);


void test_bwsBuffLength_up(void){

	aunit_printf("\n##FUNCTION_START_bwsBuffLength\n");
 }

void test_bwsBuffLength_down(void){
	aunit_printf("\n##FUNCTION_END_bwsBuffLength\n");
 }



void abnormal_bwsBuffLength_case(int index);

void abnormal_bwsBuffLength_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bwsBuffLength_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	int sz;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_bwsBuffLength_1,false,0\n");
	aunit_printf("#CASE_START_test_bwsBuffLength_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sz=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bwsBuffLength(ws,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsBuffLength","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_bwsBuffLength_1\n");
}

void test_bwsBuffLength_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	int sz;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={-1};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int (*valueList_4[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={5};
	unsigned int listLength_6=1;
	struct tagbstring *valueList_7[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_7=1;
	void *valueList_8[]={(void *)0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_bwsBuffLength_2,false,0\n");
	aunit_printf("#CASE_START_test_bwsBuffLength_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sz=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).parm=(void *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bwsBuffLength(ws,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsBuffLength","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_bwsBuffLength_2\n");
}

void test_bwsBuffLength_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	int sz;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int (*valueList_4[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={5};
	unsigned int listLength_6=1;
	struct tagbstring *valueList_7[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_7=1;
	void *valueList_8[]={(void *)0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_bwsBuffLength_3,false,0\n");
	aunit_printf("#CASE_START_test_bwsBuffLength_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sz=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).parm=(void *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bwsBuffLength(ws,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsBuffLength","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_bwsBuffLength_3\n");
}

void test_bwsBuffLength_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	int sz;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={15};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	int (*valueList_4[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={5};
	unsigned int listLength_6=1;
	struct tagbstring *valueList_7[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_7=1;
	void *valueList_8[]={(void *)0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_bwsBuffLength_4,false,0\n");
	aunit_printf("#CASE_START_test_bwsBuffLength_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sz=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).parm=(void *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bwsBuffLength(ws,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsBuffLength","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_bwsBuffLength_4\n");
}

void test_bwsBuffLength_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	int sz;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={30};
	unsigned int listLength_2=1;
	int valueList_3[]={15};
	unsigned int listLength_3=1;
	int (*valueList_4[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct tagbstring *valueList_7[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_7=1;
	void *valueList_8[]={(void *)0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_bwsBuffLength_5,false,0\n");
	aunit_printf("#CASE_START_test_bwsBuffLength_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sz=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).parm=(void *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bwsBuffLength(ws,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsBuffLength","returnValue",10,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_bwsBuffLength_5\n");
}

void test_bwsBuffLength_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	int sz;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={25};
	unsigned int listLength_2=1;
	int valueList_3[]={12};
	unsigned int listLength_3=1;
	int (*valueList_4[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={20};
	unsigned int listLength_6=1;
	struct tagbstring *valueList_7[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_7=1;
	void *valueList_8[]={(void *)0};
	unsigned int listLength_8=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_bwsBuffLength_6,false,0\n");
	aunit_printf("#CASE_START_test_bwsBuffLength_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sz=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).parm=(void *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bwsBuffLength(ws,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsBuffLength","returnValue",20,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_bwsBuffLength_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bwsBuffLength_up();

	switch(caseIndex){
	case 1:
		test_bwsBuffLength_1();
		break;
	case 2:
		test_bwsBuffLength_2();
		break;
	case 3:
		test_bwsBuffLength_3();
		break;
	case 4:
		test_bwsBuffLength_4();
		break;
	case 5:
		test_bwsBuffLength_5();
		break;
	case 6:
		test_bwsBuffLength_6();
		break;
	default:
		abnormal_bwsBuffLength_case(caseIndex);
		break;
	}

	test_bwsBuffLength_down();
}

