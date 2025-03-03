void test_cdf_unpack_summary_info_up(void);
void test_cdf_unpack_summary_info_down(void);


void test_cdf_unpack_summary_info_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_unpack_summary_info\n");
 }

void test_cdf_unpack_summary_info_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_unpack_summary_info\n");
 }



void abnormal_cdf_unpack_summary_info_case(int index);

void abnormal_cdf_unpack_summary_info_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_unpack_summary_info_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_stream_t *sst;
	cdf_header_t *h;
	cdf_summary_info_header_t *ssi;
	cdf_property_info_t **info;
	size_t *count;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_header_t *valueList_0[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_0=1;
	cdf_summary_info_header_t *valueList_1[]={(cdf_summary_info_header_t *)ssi_PTRTO};
	unsigned int listLength_1=1;
	size_t *valueList_2[]={(size_t *)count_PTRTO};
	unsigned int listLength_2=1;
	cdf_stream_t *valueList_3[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_3=1;
	//*info is an invalid expression 
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)1024};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={512};
	unsigned int listLength_8=1;
	unsigned short int valueList_9[]={0xFFFE};
	unsigned int listLength_9=1;
	unsigned short int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned long long int valueList_11[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={128};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={4};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={2048};
	unsigned int listLength_14=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	cdf_read_property_info_call_counter = 0;
	cdf_swap_class_call_counter = 0;
	cdf_check_stream_offset_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_summary_info_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_summary_info_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			h=(cdf_header_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ssi=(cdf_summary_info_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			count=(size_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sst=(cdf_stream_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			count_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sst_PTRTO[0]).sst_tab=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sst_PTRTO[0]).sst_dirlen=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ssi_PTRTO[0]).si_byte_order=(unsigned short int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(sst_PTRTO[0]).sst_ss=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(sst_PTRTO[0]).sst_len=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = cdf_unpack_summary_info(sst,h,ssi,info,count);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_unpack_summary_info","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_property_info","cdf_read_property_info_call_counter",cdf_read_property_info_call_counter)
	OB_INT_EXPR("cdf_swap_class","cdf_swap_class_call_counter",cdf_swap_class_call_counter)
	OB_INT_EXPR("cdf_check_stream_offset","cdf_check_stream_offset_call_counter",cdf_check_stream_offset_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_summary_info_1\n");
}

void test_cdf_unpack_summary_info_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_stream_t *sst;
	cdf_header_t *h;
	cdf_summary_info_header_t *ssi;
	cdf_property_info_t **info;
	size_t *count;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_header_t *valueList_0[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_0=1;
	cdf_summary_info_header_t *valueList_1[]={(cdf_summary_info_header_t *)ssi_PTRTO};
	unsigned int listLength_1=1;
	size_t *valueList_2[]={(size_t *)count_PTRTO};
	unsigned int listLength_2=1;
	cdf_stream_t *valueList_3[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_3=1;
	//*info is an invalid expression 
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)1024};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={512};
	unsigned int listLength_8=1;
	unsigned short int valueList_9[]={0xFFFE};
	unsigned int listLength_9=1;
	unsigned short int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned long long int valueList_11[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={128};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={4};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={2048};
	unsigned int listLength_14=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	cdf_read_property_info_call_counter = 0;
	cdf_swap_class_call_counter = 0;
	cdf_check_stream_offset_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_summary_info_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_summary_info_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			h=(cdf_header_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ssi=(cdf_summary_info_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			count=(size_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sst=(cdf_stream_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			count_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sst_PTRTO[0]).sst_tab=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sst_PTRTO[0]).sst_dirlen=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ssi_PTRTO[0]).si_byte_order=(unsigned short int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(sst_PTRTO[0]).sst_ss=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(sst_PTRTO[0]).sst_len=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = cdf_unpack_summary_info(sst,h,ssi,info,count);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_unpack_summary_info","ssi->si_class.cl_dword",0x56789ABC,ssi->si_class.cl_dword)
	TEST_ASSERT_EQUAL_INT("cdf_unpack_summary_info","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_unpack_summary_info","ssi->si_byte_order",0x1234,ssi->si_byte_order)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_property_info","cdf_read_property_info_call_counter",cdf_read_property_info_call_counter)
	OB_INT_EXPR("cdf_swap_class","cdf_swap_class_call_counter",cdf_swap_class_call_counter)
	OB_INT_EXPR("cdf_check_stream_offset","cdf_check_stream_offset_call_counter",cdf_check_stream_offset_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_summary_info_2\n");
}

void test_cdf_unpack_summary_info_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_stream_t *sst;
	cdf_header_t *h;
	cdf_summary_info_header_t *ssi;
	cdf_property_info_t **info;
	size_t *count;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_header_t *valueList_0[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_0=1;
	cdf_summary_info_header_t *valueList_1[]={(cdf_summary_info_header_t *)ssi_PTRTO};
	unsigned int listLength_1=1;
	size_t *valueList_2[]={(size_t *)count_PTRTO};
	unsigned int listLength_2=1;
	cdf_stream_t *valueList_3[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_3=1;
	//*info is an invalid expression 
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)1024};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={3};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={512};
	unsigned int listLength_8=1;
	unsigned short int valueList_9[]={0xFFFE};
	unsigned int listLength_9=1;
	unsigned short int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned long long int valueList_11[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={128};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={4};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={2048};
	unsigned int listLength_14=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	cdf_read_property_info_call_counter = 0;
	cdf_swap_class_call_counter = 0;
	cdf_check_stream_offset_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_summary_info_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_summary_info_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			h=(cdf_header_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ssi=(cdf_summary_info_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			count=(size_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sst=(cdf_stream_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			count_PTRTO[0]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sst_PTRTO[0]).sst_tab=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sst_PTRTO[0]).sst_dirlen=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ssi_PTRTO[0]).si_byte_order=(unsigned short int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(sst_PTRTO[0]).sst_ss=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(sst_PTRTO[0]).sst_len=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = cdf_unpack_summary_info(sst,h,ssi,info,count);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_unpack_summary_info","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_property_info","cdf_read_property_info_call_counter",cdf_read_property_info_call_counter)
	OB_INT_EXPR("cdf_swap_class","cdf_swap_class_call_counter",cdf_swap_class_call_counter)
	OB_INT_EXPR("cdf_check_stream_offset","cdf_check_stream_offset_call_counter",cdf_check_stream_offset_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_summary_info_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_unpack_summary_info_up();

	switch(caseIndex){
	case 1:
		test_cdf_unpack_summary_info_1();
		break;
	case 2:
		test_cdf_unpack_summary_info_2();
		break;
	case 3:
		test_cdf_unpack_summary_info_3();
		break;
	default:
		abnormal_cdf_unpack_summary_info_case(caseIndex);
		break;
	}

	test_cdf_unpack_summary_info_down();
}

