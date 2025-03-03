void test_md2_final_up(void);
void test_md2_final_down(void);


void test_md2_final_up(void){

	aunit_printf("\n##FUNCTION_START_md2_final\n");
 }

void test_md2_final_down(void){
	aunit_printf("\n##FUNCTION_END_md2_final\n");
 }



void abnormal_md2_final_case(int index);

void abnormal_md2_final_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md2_final_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD2_CTX *ctx;
	BYTE *hash;


	//值序列相关
	MD2_CTX *valueList_0[]={(MD2_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_1,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD2_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hash=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md2_final(ctx,hash);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_1\n");
}

void test_md2_final_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD2_CTX *ctx;
	BYTE *hash;


	//值序列相关
	MD2_CTX *valueList_0[]={(MD2_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	int valueList_2[]={16};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_2,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD2_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hash=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md2_final(ctx,hash);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[9]",0,(ctx->data)[9])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[8]",0,(ctx->data)[8])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[7]",0,(ctx->data)[7])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[6]",0,(ctx->data)[6])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[5]",0,(ctx->data)[5])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[4]",0,(ctx->data)[4])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[3]",0,(ctx->data)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[2]",0,(ctx->data)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[1]",0,(ctx->data)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[0]",ctx->data,(ctx->data)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[15]",0,(ctx->data)[15])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[13]",0,(ctx->data)[13])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[14]",0,(ctx->data)[14])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[11]",0,(ctx->data)[11])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[12]",0,(ctx->data)[12])
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md2_final","(ctx->data)[10]",0,(ctx->data)[10])
	TEST_ASSERT_EQUAL_INT("md2_final","ctx->len",16,ctx->len)
	TEST_ASSERT_EQUAL_LONG("md2_final","hash","ctx->state",hash)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_2\n");
}

void test_md2_final_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD2_CTX *ctx;
	BYTE *hash;


	//值序列相关
	MD2_CTX *valueList_0[]={(MD2_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	int valueList_2[]={15};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_3,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD2_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hash=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md2_final(ctx,hash);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_3\n");
}

void test_md2_final_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD2_CTX *ctx;
	BYTE *hash;


	//值序列相关
	MD2_CTX *valueList_0[]={(MD2_CTX *)ctx_PTRTO};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abc"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	md2_transform_call_counter = 0;
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md2_final_4,false,0\n");
	aunit_printf("#CASE_START_test_md2_final_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ctx=(MD2_CTX *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hash=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md2_final(ctx,hash);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md2_transform","md2_transform_call_counter",md2_transform_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_md2_final_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_md2_final_up();

	switch(caseIndex){
	case 1:
		test_md2_final_1();
		break;
	case 2:
		test_md2_final_2();
		break;
	case 3:
		test_md2_final_3();
		break;
	case 4:
		test_md2_final_4();
		break;
	default:
		abnormal_md2_final_case(caseIndex);
		break;
	}

	test_md2_final_down();
}

