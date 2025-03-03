void test_sha1_transform_up(void);
void test_sha1_transform_down(void);


void test_sha1_transform_up(void){

	aunit_printf("\n##FUNCTION_START_sha1_transform\n");
 }

void test_sha1_transform_down(void){
	aunit_printf("\n##FUNCTION_END_sha1_transform\n");
 }



void abnormal_sha1_transform_case(int index);

void abnormal_sha1_transform_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sha1_transform_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000000000000000000000000000"};
	unsigned int listLength_0=1;
	SHA1_CTX *valueList_1[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x5A827999};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x6ED9EBA1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x8F1BBCDC};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0xCA62C1D6};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_1,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(SHA1_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[3]","expected_value_3",(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[2]","expected_value_2",(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[1]","expected_value_1",(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[0]","expected_value_0",(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[4]","expected_value_4",(ctx->state)[4])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_1\n");
}

void test_sha1_transform_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
	unsigned int listLength_0=1;
	SHA1_CTX *valueList_1[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0xAAAAAAAA};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x5A827999};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x6ED9EBA1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x55555555};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x8F1BBCDC};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0xAAAAAAAA};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0xCA62C1D6};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x55555555};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0xAAAAAAAA};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_2,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(SHA1_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[3]","expected_value_3",(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[2]","expected_value_2",(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[1]","expected_value_1",(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[0]","expected_value_0",(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[4]","expected_value_4",(ctx->state)[4])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_2\n");
}

void test_sha1_transform_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
	unsigned int listLength_0=1;
	SHA1_CTX *valueList_1[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0xFFFFFFFF};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x5A827999};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x6ED9EBA1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0xFFFFFFFF};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x8F1BBCDC};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0xFFFFFFFF};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0xCA62C1D6};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0xFFFFFFFF};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0xFFFFFFFF};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_3,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(SHA1_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[3]","expected_value_3",(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[2]","expected_value_2",(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[1]","expected_value_1",(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[0]","expected_value_0",(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[4]","expected_value_4",(ctx->state)[4])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_3\n");
}

void test_sha1_transform_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000000000000000000000000000"};
	unsigned int listLength_0=1;
	SHA1_CTX *valueList_1[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0x00000000};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x5A827999};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x6ED9EBA1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x00000000};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x8F1BBCDC};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0x00000000};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0xCA62C1D6};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x00000000};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0x00000000};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_4,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(SHA1_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[3]","expected_value_3",(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[2]","expected_value_2",(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[1]","expected_value_1",(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[0]","expected_value_0",(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[4]","expected_value_4",(ctx->state)[4])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_4\n");
}

void test_sha1_transform_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"00112233445566778899AABBCCDDEEFF"};
	unsigned int listLength_0=1;
	SHA1_CTX *valueList_1[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0x13579BDF};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x5A827999};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x6ED9EBA1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x9ABCDEF0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x8F1BBCDC};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0x12345678};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0xCA62C1D6};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0x87654321};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0x0FEDCBA9};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_sha1_transform_5,false,0\n");
	aunit_printf("#CASE_START_test_sha1_transform_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(SHA1_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[4]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).k[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).k[1]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ctx_PTRTO[0]).k[2]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ctx_PTRTO[0]).k[3]=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		sha1_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[3]","expected_value_3",(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[2]","expected_value_2",(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[1]","expected_value_1",(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[0]","expected_value_0",(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_transform","(ctx->state)[4]","expected_value_4",(ctx->state)[4])

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_sha1_transform_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_sha1_transform_up();

	switch(caseIndex){
	case 1:
		test_sha1_transform_1();
		break;
	case 2:
		test_sha1_transform_2();
		break;
	case 3:
		test_sha1_transform_3();
		break;
	case 4:
		test_sha1_transform_4();
		break;
	case 5:
		test_sha1_transform_5();
		break;
	default:
		abnormal_sha1_transform_case(caseIndex);
		break;
	}

	test_sha1_transform_down();
}

