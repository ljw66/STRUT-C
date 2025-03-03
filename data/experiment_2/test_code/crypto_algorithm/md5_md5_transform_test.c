void test_md5_transform_up(void);
void test_md5_transform_down(void);


void test_md5_transform_up(void){

	aunit_printf("\n##FUNCTION_START_md5_transform\n");
 }

void test_md5_transform_down(void){
	aunit_printf("\n##FUNCTION_END_md5_transform\n");
 }



void abnormal_md5_transform_case(int index);

void abnormal_md5_transform_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md5_transform_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	unsigned long long int valueList_0[]={0};
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

	aunit_printf("###TEST_TREE_test_md5_transform_1,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_1\n");
}

void test_md5_transform_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"a"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={8};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_transform_2,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_2\n");
}

void test_md5_transform_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={512};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={64};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_transform_3,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_3\n");
}

void test_md5_transform_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"!@#$%^&*()"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={80};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_transform_4,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_4\n");
}

void test_md5_transform_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"1234567890"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={80};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_transform_5,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_5\n");
}

void test_md5_transform_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"~!@#$%^&*()"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={80};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_transform_6,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_6\n");
}

void test_md5_transform_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abc123XYZ!@#"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={160};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={20};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_transform_7,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_7\n");
}

void test_md5_transform_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"};
	unsigned int listLength_0=1;
	unsigned long long int valueList_1[]={18446744073709551615};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4294967295};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_transform_8,false,0\n");
	aunit_printf("#CASE_START_test_md5_transform_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		md5_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[3]",0,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[2]",0,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[1]",0,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_transform","(ctx->state)[0]",0,(ctx->state)[0])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_transform_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_md5_transform_up();

	switch(caseIndex){
	case 1:
		test_md5_transform_1();
		break;
	case 2:
		test_md5_transform_2();
		break;
	case 3:
		test_md5_transform_3();
		break;
	case 4:
		test_md5_transform_4();
		break;
	case 5:
		test_md5_transform_5();
		break;
	case 6:
		test_md5_transform_6();
		break;
	case 7:
		test_md5_transform_7();
		break;
	case 8:
		test_md5_transform_8();
		break;
	default:
		abnormal_md5_transform_case(caseIndex);
		break;
	}

	test_md5_transform_down();
}

