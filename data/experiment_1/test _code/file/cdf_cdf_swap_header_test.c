void test_cdf_swap_header_up(void);
void test_cdf_swap_header_down(void);


void test_cdf_swap_header_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_swap_header\n");
 }

void test_cdf_swap_header_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_swap_header\n");
 }



void abnormal_cdf_swap_header_case(int index);

void abnormal_cdf_swap_header_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_swap_header_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_header_t *h;


	//值序列相关
	cdf_header_t *valueList_0[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16909060};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={12};
	unsigned int listLength_3=1;
	int valueList_4[]={9};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={8};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={3};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={4};
	unsigned int listLength_7=1;
	unsigned long long int valueList_8[]={123456789};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={6};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={7};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={10};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={2};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={5};
	unsigned int listLength_13=1;
	int valueList_14[]={11};
	unsigned int listLength_14=1;
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
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_header_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_header_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			h=(cdf_header_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(h_PTRTO[0]).h_num_sectors_in_master_sat=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(h_PTRTO[0]).h_secid_first_sector_in_short_sat=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(h_PTRTO[0]).h_min_size_standard_stream=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(h_PTRTO[0]).h_num_sectors_in_sat=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(h_PTRTO[0]).h_secid_first_directory=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_num_sectors_in_short_sat=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(h_PTRTO[0]).h_secid_first_sector_in_master_sat=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		cdf_swap_header(h);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_byte_order",99,h->h_byte_order)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_num_sectors_in_short_sat",42,h->h_num_sectors_in_short_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_swap_header","h->h_magic",987654321,h->h_magic)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_num_sectors_in_master_sat",42,h->h_num_sectors_in_master_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_revision",99,h->h_revision)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_sec_size_p2",99,h->h_sec_size_p2)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_version",99,h->h_version)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_min_size_standard_stream",42,h->h_min_size_standard_stream)
	TEST_ASSERT_EQUAL_INT("cdf_swap_header","h->h_secid_first_sector_in_short_sat",42,h->h_secid_first_sector_in_short_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","cdf_bo.u",16909060,cdf_bo.u)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_num_sectors_in_sat",42,h->h_num_sectors_in_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_secid_first_directory",42,h->h_secid_first_directory)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_short_sec_size_p2",99,h->h_short_sec_size_p2)
	TEST_ASSERT_EQUAL_INT("cdf_swap_header","h->h_secid_first_sector_in_master_sat",42,h->h_secid_first_sector_in_master_sat)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_header_1\n");
}

void test_cdf_swap_header_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_header_t *h;


	//值序列相关
	cdf_header_t *valueList_0[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={12345};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={12};
	unsigned int listLength_3=1;
	int valueList_4[]={9};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={8};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={3};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={4};
	unsigned int listLength_7=1;
	unsigned long long int valueList_8[]={123456789};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={6};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={7};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={10};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={2};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={5};
	unsigned int listLength_13=1;
	int valueList_14[]={11};
	unsigned int listLength_14=1;
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
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	_cdf_tole8_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_header_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_header_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			h=(cdf_header_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(h_PTRTO[0]).h_num_sectors_in_master_sat=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(h_PTRTO[0]).h_secid_first_sector_in_short_sat=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(h_PTRTO[0]).h_min_size_standard_stream=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(h_PTRTO[0]).h_num_sectors_in_sat=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(h_PTRTO[0]).h_secid_first_directory=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_num_sectors_in_short_sat=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(h_PTRTO[0]).h_secid_first_sector_in_master_sat=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		cdf_swap_header(h);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_byte_order",3,h->h_byte_order)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_num_sectors_in_short_sat",10,h->h_num_sectors_in_short_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("cdf_swap_header","h->h_magic",123456789,h->h_magic)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_num_sectors_in_master_sat",12,h->h_num_sectors_in_master_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_revision",1,h->h_revision)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_sec_size_p2",4,h->h_sec_size_p2)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_version",2,h->h_version)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_min_size_standard_stream",8,h->h_min_size_standard_stream)
	TEST_ASSERT_EQUAL_INT("cdf_swap_header","h->h_secid_first_sector_in_short_sat",9,h->h_secid_first_sector_in_short_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","cdf_bo.u",12345,cdf_bo.u)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_num_sectors_in_sat",6,h->h_num_sectors_in_sat)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_header","h->h_secid_first_directory",7,h->h_secid_first_directory)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_header","h->h_short_sec_size_p2",5,h->h_short_sec_size_p2)
	TEST_ASSERT_EQUAL_INT("cdf_swap_header","h->h_secid_first_sector_in_master_sat",11,h->h_secid_first_sector_in_master_sat)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_header_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_swap_header_up();

	switch(caseIndex){
	case 1:
		test_cdf_swap_header_1();
		break;
	case 2:
		test_cdf_swap_header_2();
		break;
	default:
		abnormal_cdf_swap_header_case(caseIndex);
		break;
	}

	test_cdf_swap_header_down();
}

