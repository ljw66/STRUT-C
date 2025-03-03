void test_md5_update_up(void);
void test_md5_update_down(void);


void test_md5_update_up(void){

	aunit_printf("\n##FUNCTION_START_md5_update\n");
 }

void test_md5_update_down(void){
	aunit_printf("\n##FUNCTION_END_md5_update\n");
 }



void abnormal_md5_update_case(int index);

void abnormal_md5_update_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md5_update_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	MD5_CTX *valueList_2[]={(MD5_CTX *)ctx_PTRTO};
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
	case_id=1;
	//初始化各桩函数调用计数器
	md5_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md5_update_1,false,0\n");
	aunit_printf("#CASE_START_test_md5_update_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD5_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md5_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md5_transform","md5_transform_call_counter",md5_transform_call_counter)

	aunit_printf("#CASE_END_test_md5_update_1\n");
}

void test_md5_update_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"a"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	MD5_CTX *valueList_2[]={(MD5_CTX *)ctx_PTRTO};
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
	md5_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md5_update_2,false,0\n");
	aunit_printf("#CASE_START_test_md5_update_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD5_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md5_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md5_update","(ctx->data)[0]",97,(ctx->data)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_update","ctx->datalen",1,ctx->datalen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md5_transform","md5_transform_call_counter",md5_transform_call_counter)

	aunit_printf("#CASE_END_test_md5_update_2\n");
}

void test_md5_update_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={64};
	unsigned int listLength_1=1;
	MD5_CTX *valueList_2[]={(MD5_CTX *)ctx_PTRTO};
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
	md5_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md5_update_3,false,0\n");
	aunit_printf("#CASE_START_test_md5_update_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD5_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md5_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_update","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md5_transform","md5_transform_call_counter",md5_transform_call_counter)

	aunit_printf("#CASE_END_test_md5_update_3\n");
}

void test_md5_update_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnz"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={65};
	unsigned int listLength_1=1;
	MD5_CTX *valueList_2[]={(MD5_CTX *)ctx_PTRTO};
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
	md5_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md5_update_4,false,0\n");
	aunit_printf("#CASE_START_test_md5_update_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD5_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md5_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md5_update","(ctx->data)[0]",122,(ctx->data)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_update","ctx->datalen",1,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md5_transform","md5_transform_call_counter",md5_transform_call_counter)

	aunit_printf("#CASE_END_test_md5_update_4\n");
}

void test_md5_update_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"a"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	MD5_CTX *valueList_2[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={63};
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
	md5_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md5_update_5,false,0\n");
	aunit_printf("#CASE_START_test_md5_update_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD5_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md5_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_update","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md5_transform","md5_transform_call_counter",md5_transform_call_counter)

	aunit_printf("#CASE_END_test_md5_update_5\n");
}

void test_md5_update_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;
	BYTE *data;
	unsigned int len;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"ab"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	MD5_CTX *valueList_2[]={(MD5_CTX *)ctx_PTRTO};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={63};
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
	md5_transform_call_counter = 0;

	aunit_printf("###TEST_TREE_test_md5_update_6,false,0\n");
	aunit_printf("#CASE_START_test_md5_update_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ctx=(MD5_CTX *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md5_update(ctx,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_CHAR("md5_update","(ctx->data)[0]",98,(ctx->data)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_update","ctx->datalen",1,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_update","ctx->bitlen",512,ctx->bitlen)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("md5_transform","md5_transform_call_counter",md5_transform_call_counter)

	aunit_printf("#CASE_END_test_md5_update_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_md5_update_up();

	switch(caseIndex){
	case 1:
		test_md5_update_1();
		break;
	case 2:
		test_md5_update_2();
		break;
	case 3:
		test_md5_update_3();
		break;
	case 4:
		test_md5_update_4();
		break;
	case 5:
		test_md5_update_5();
		break;
	case 6:
		test_md5_update_6();
		break;
	default:
		abnormal_md5_update_case(caseIndex);
		break;
	}

	test_md5_update_down();
}

