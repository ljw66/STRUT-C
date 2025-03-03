void test_sha1_update_up(void);
void test_sha1_update_down(void);


void test_sha1_update_up(void){

	aunit_printf("\n##FUNCTION_START_sha1_update\n");
 }

void test_sha1_update_down(void){
	aunit_printf("\n##FUNCTION_END_sha1_update\n");
 }



void abnormal_sha1_update_case(int index);

void abnormal_sha1_update_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_sha1_update_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	SHA1_CTX *valueList_1[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
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
	sha1_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sha1_update_1,false,0\n");
	aunit_printf("#CASE_START_test_sha1_update_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(SHA1_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		sha1_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sha1_transform","sha1_transform_call_counter",sha1_transform_call_counter)

	aunit_printf("#CASE_END_test_sha1_update_1\n");
}

void test_sha1_update_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	SHA1_CTX *valueList_2[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
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
	case_id=2;
	//初始化各桩函数调用计数器
	sha1_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sha1_update_2,false,0\n");
	aunit_printf("#CASE_START_test_sha1_update_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(SHA1_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		sha1_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_update","ctx->datalen",3,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_update","ctx->bitlen",0,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sha1_transform","sha1_transform_call_counter",sha1_transform_call_counter)

	aunit_printf("#CASE_END_test_sha1_update_2\n");
}

void test_sha1_update_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={64};
	unsigned int listLength_1=1;
	SHA1_CTX *valueList_2[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
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
	case_id=3;
	//初始化各桩函数调用计数器
	sha1_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sha1_update_3,false,0\n");
	aunit_printf("#CASE_START_test_sha1_update_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(SHA1_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		sha1_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_update","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sha1_transform","sha1_transform_call_counter",sha1_transform_call_counter)

	aunit_printf("#CASE_END_test_sha1_update_3\n");
}

void test_sha1_update_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={70};
	unsigned int listLength_1=1;
	SHA1_CTX *valueList_2[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
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
	case_id=4;
	//初始化各桩函数调用计数器
	sha1_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sha1_update_4,false,0\n");
	aunit_printf("#CASE_START_test_sha1_update_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(SHA1_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		sha1_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_update","ctx->datalen",6,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sha1_transform","sha1_transform_call_counter",sha1_transform_call_counter)

	aunit_printf("#CASE_END_test_sha1_update_4\n");
}

void test_sha1_update_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abcd"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	SHA1_CTX *valueList_2[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={60};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	sha1_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sha1_update_5,false,0\n");
	aunit_printf("#CASE_START_test_sha1_update_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(SHA1_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		sha1_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_update","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sha1_transform","sha1_transform_call_counter",sha1_transform_call_counter)

	aunit_printf("#CASE_END_test_sha1_update_5\n");
}

void test_sha1_update_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	SHA1_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={104};
	unsigned int listLength_1=1;
	SHA1_CTX *valueList_2[]={(SHA1_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
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
	case_id=6;
	//初始化各桩函数调用计数器
	sha1_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_sha1_update_6,false,0\n");
	aunit_printf("#CASE_START_test_sha1_update_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(SHA1_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		sha1_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("sha1_update","ctx->datalen",40,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("sha1_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("sha1_transform","sha1_transform_call_counter",sha1_transform_call_counter)

	aunit_printf("#CASE_END_test_sha1_update_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_sha1_update_up();

	switch(caseIndex){
	case 1:
		test_sha1_update_1();
		break;
	case 2:
		test_sha1_update_2();
		break;
	case 3:
		test_sha1_update_3();
		break;
	case 4:
		test_sha1_update_4();
		break;
	case 5:
		test_sha1_update_5();
		break;
	case 6:
		test_sha1_update_6();
		break;
	default:
		abnormal_sha1_update_case(caseIndex);
		break;
	}

	test_sha1_update_down();
}

