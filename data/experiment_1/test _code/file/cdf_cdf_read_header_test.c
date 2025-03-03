void test_cdf_read_header_up(void);
void test_cdf_read_header_down(void);


void test_cdf_read_header_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_read_header\n");
 }

void test_cdf_read_header_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_read_header\n");
 }



void abnormal_cdf_read_header_case(int index);

void abnormal_cdf_read_header_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_read_header_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	cdf_info_t *valueList_2[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={512};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char *valueList_7[]={(unsigned char *)0};
	unsigned int listLength_7=1;
	unsigned short int valueList_8[]={10};
	unsigned int listLength_8=1;
	unsigned long long int valueList_9[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_9=1;
	unsigned short int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={1};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={10};
	unsigned int listLength_12=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	cdf_read_call_counter = 0;
	memcpy_call_counter = 0;
	cdf_unpack_header_call_counter = 0;
	cdf_swap_header_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_header_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_header_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			info=(cdf_info_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			cdf_bo.u=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(info_PTRTO[0]).i_fd=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = cdf_read_header(info,h);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_header","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_header","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_read_header","cdf_bo.u",0x04030201,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read","cdf_read_call_counter",cdf_read_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("cdf_unpack_header","cdf_unpack_header_call_counter",cdf_unpack_header_call_counter)
	OB_INT_EXPR("cdf_swap_header","cdf_swap_header_call_counter",cdf_swap_header_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_header_1\n");
}

void test_cdf_read_header_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	cdf_info_t *valueList_2[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={512};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
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
	cdf_read_call_counter = 0;
	memcpy_call_counter = 0;
	cdf_unpack_header_call_counter = 0;
	cdf_swap_header_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_header_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_header_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			info=(cdf_info_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(info_PTRTO[0]).i_fd=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = cdf_read_header(info,h);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_header","errno",5,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_header","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read","cdf_read_call_counter",cdf_read_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("cdf_unpack_header","cdf_unpack_header_call_counter",cdf_unpack_header_call_counter)
	OB_INT_EXPR("cdf_swap_header","cdf_swap_header_call_counter",cdf_swap_header_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_header_2\n");
}

void test_cdf_read_header_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	cdf_info_t *valueList_2[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={512};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={0x1234567890ABCDEF};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
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
	case_id=3;
	//初始化各桩函数调用计数器
	cdf_read_call_counter = 0;
	memcpy_call_counter = 0;
	cdf_unpack_header_call_counter = 0;
	cdf_swap_header_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_header_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_header_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			info=(cdf_info_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(info_PTRTO[0]).i_fd=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_read_header(info,h);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_header","errno",79,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_header","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read","cdf_read_call_counter",cdf_read_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("cdf_unpack_header","cdf_unpack_header_call_counter",cdf_unpack_header_call_counter)
	OB_INT_EXPR("cdf_swap_header","cdf_swap_header_call_counter",cdf_swap_header_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_header_3\n");
}

void test_cdf_read_header_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	cdf_info_t *valueList_2[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={512};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={21};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
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
	case_id=4;
	//初始化各桩函数调用计数器
	cdf_read_call_counter = 0;
	memcpy_call_counter = 0;
	cdf_unpack_header_call_counter = 0;
	cdf_swap_header_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_header_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_header_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			info=(cdf_info_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(info_PTRTO[0]).i_fd=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = cdf_read_header(info,h);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_header","errno",79,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_header","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read","cdf_read_call_counter",cdf_read_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("cdf_unpack_header","cdf_unpack_header_call_counter",cdf_unpack_header_call_counter)
	OB_INT_EXPR("cdf_swap_header","cdf_swap_header_call_counter",cdf_swap_header_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_header_4\n");
}

void test_cdf_read_header_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	cdf_info_t *valueList_2[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={512};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={25};
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
	cdf_read_call_counter = 0;
	memcpy_call_counter = 0;
	cdf_unpack_header_call_counter = 0;
	cdf_swap_header_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_header_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_header_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			info=(cdf_info_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(info_PTRTO[0]).i_fd=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = cdf_read_header(info,h);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_header","errno",79,errno)
	TEST_ASSERT_EQUAL_INT("cdf_read_header","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read","cdf_read_call_counter",cdf_read_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("cdf_unpack_header","cdf_unpack_header_call_counter",cdf_unpack_header_call_counter)
	OB_INT_EXPR("cdf_swap_header","cdf_swap_header_call_counter",cdf_swap_header_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_header_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_read_header_up();

	switch(caseIndex){
	case 1:
		test_cdf_read_header_1();
		break;
	case 2:
		test_cdf_read_header_2();
		break;
	case 3:
		test_cdf_read_header_3();
		break;
	case 4:
		test_cdf_read_header_4();
		break;
	case 5:
		test_cdf_read_header_5();
		break;
	default:
		abnormal_cdf_read_header_case(caseIndex);
		break;
	}

	test_cdf_read_header_down();
}

