void test_cdf_count_chain_up(void);
void test_cdf_count_chain_down(void);


void test_cdf_count_chain_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_count_chain\n");
 }

void test_cdf_count_chain_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_count_chain\n");
 }



void abnormal_cdf_count_chain_case(int index);

void abnormal_cdf_count_chain_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_count_chain_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_sat_t *sat;
	int sid;
	unsigned int size;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={512};
	unsigned int listLength_1=1;
	cdf_sat_t *valueList_2[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={3};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x01020304};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	int valueList_7[]={-1};
	unsigned int listLength_7=1;
	int valueList_8[]={1};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_count_chain_7,false,0\n");
	aunit_printf("#CASE_START_test_cdf_count_chain_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			size=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sat=(cdf_sat_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sid=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(sat_PTRTO[0]).sat_len=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cdf_bo.u=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			sat_PTRTO_0_sat_tab_PTRTO[2]=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			sat_PTRTO_0_sat_tab_PTRTO[1]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			sat_PTRTO_0_sat_tab_PTRTO[0]=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = cdf_count_chain(sat,sid,size);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_count_chain","errno",0,errno)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_count_chain","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_count_chain","cdf_bo.u",0x01020304,cdf_bo.u)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_count_chain_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_count_chain_up();

	switch(caseIndex){
	case 7:
		test_cdf_count_chain_7();
		break;
	default:
		abnormal_cdf_count_chain_case(caseIndex);
		break;
	}

	test_cdf_count_chain_down();
}

