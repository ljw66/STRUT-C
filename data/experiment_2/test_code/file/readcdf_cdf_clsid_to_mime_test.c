void test_cdf_clsid_to_mime_up(void);
void test_cdf_clsid_to_mime_down(void);


void test_cdf_clsid_to_mime_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_clsid_to_mime\n");
 }

void test_cdf_clsid_to_mime_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_clsid_to_mime\n");
 }



void abnormal_cdf_clsid_to_mime_case(int index);

void abnormal_cdf_clsid_to_mime_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_clsid_to_mime_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64_t *clsid;
	struct cv *cv;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={12345};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={67890};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"application/test"};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={12345};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={67890};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[1].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].mime=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue","application/test",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_1\n");
}

void test_cdf_clsid_to_mime_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64_t *clsid;
	struct cv *cv;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={11111};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={22222};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"application/other"};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={33333};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={44444};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[1].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].mime=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_2\n");
}

void test_cdf_clsid_to_mime_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64_t *clsid;
	struct cv *cv;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={12345};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={67890};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
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

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[0].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_3\n");
}

void test_cdf_clsid_to_mime_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64_t *clsid;
	struct cv *cv;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={55555};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={66666};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"application/test2"};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"application/test1"};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)0};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={66666};
	unsigned int listLength_7=1;
	unsigned long long int valueList_8[]={55555};
	unsigned int listLength_8=1;
	unsigned long long int valueList_9[]={12345};
	unsigned int listLength_9=1;
	unsigned long long int valueList_10[]={67890};
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

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[1].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].mime=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[2].mime=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			cv_PTRTO[1].clsid[1]=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			cv_PTRTO[1].clsid[0]=(unsigned long long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue","application/test2",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_4\n");
}

void test_cdf_clsid_to_mime_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64_t *clsid;
	struct cv *cv;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={18446744073709551615};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={9223372036854775807};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"application/large"};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={18446744073709551615};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={9223372036854775807};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[1].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].mime=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue","application/large",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_5\n");
}

void test_cdf_clsid_to_mime_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64_t *clsid;
	struct cv *cv;

	//声明返回值局部变量，若为基本类型赋默认值
	const char *returnValue = 0;

	//值序列相关
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={98765};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={43210};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={98765};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={43210};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[1].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].mime=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_clsid_to_mime_up();

	switch(caseIndex){
	case 1:
		test_cdf_clsid_to_mime_1();
		break;
	case 2:
		test_cdf_clsid_to_mime_2();
		break;
	case 3:
		test_cdf_clsid_to_mime_3();
		break;
	case 4:
		test_cdf_clsid_to_mime_4();
		break;
	case 5:
		test_cdf_clsid_to_mime_5();
		break;
	case 6:
		test_cdf_clsid_to_mime_6();
		break;
	default:
		abnormal_cdf_clsid_to_mime_case(caseIndex);
		break;
	}

	test_cdf_clsid_to_mime_down();
}

