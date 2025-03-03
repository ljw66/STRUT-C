void test_cdf_copy_info_up(void);
void test_cdf_copy_info_down(void);


void test_cdf_copy_info_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_copy_info\n");
 }

void test_cdf_copy_info_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_copy_info\n");
 }



void abnormal_cdf_copy_info_case(int index);

void abnormal_cdf_copy_info_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_copy_info_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_property_info_t *inp;
	void *p;
	void *e;
	unsigned int len;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0x1000};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0x1004};
	unsigned int listLength_2=1;
	cdf_property_info_t *valueList_3[]={(cdf_property_info_t *)inp_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x01020304};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0x12345678};
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
	case_id=7;
	//初始化各桩函数调用计数器
	abort_call_counter = 0;
	memcpy_call_counter = 0;
	_cdf_tole8_call_counter = 0;
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_copy_info_7,false,0\n");
	aunit_printf("#CASE_START_test_cdf_copy_info_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			e=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			inp=(cdf_property_info_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(inp_PTRTO[0]).pi_type=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cdf_bo.u=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(inp_PTRTO[0]).pi_val._pi_u32=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_copy_info(inp,p,e,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_copy_info","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_copy_info","inp->pi_val._pi_u32",0x78563412,inp->pi_val._pi_u32)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("_cdf_tole8","_cdf_tole8_call_counter",_cdf_tole8_call_counter)
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_copy_info_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_copy_info_up();

	switch(caseIndex){
	case 7:
		test_cdf_copy_info_7();
		break;
	default:
		abnormal_cdf_copy_info_case(caseIndex);
		break;
	}

	test_cdf_copy_info_down();
}

