void test_cdf_file_catalog_info_up(void);
void test_cdf_file_catalog_info_down(void);


void test_cdf_file_catalog_info_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_file_catalog_info\n");
 }

void test_cdf_file_catalog_info_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_file_catalog_info\n");
 }



void abnormal_cdf_file_catalog_info_case(int index);

void abnormal_cdf_file_catalog_info_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_file_catalog_info_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_sat_t *ssat;
	cdf_stream_t *sst;
	cdf_dir_t *dir;
	cdf_stream_t *scn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)ssat_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_sat_t *valueList_2[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_2=1;
	cdf_header_t *valueList_3[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_3=1;
	cdf_dir_t *valueList_4[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_5=1;
	cdf_info_t *valueList_6[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_6=1;
	cdf_stream_t *valueList_7[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	void *valueList_10[]={(void *)0};
	unsigned int listLength_10=1;
	unsigned long long int valueList_11[]={12345};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
	unsigned int listLength_13=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	cdf_read_user_stream_call_counter = 0;
	cdf_file_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_info_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_info_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ssat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sat=(cdf_sat_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			h=(cdf_header_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			dir=(cdf_dir_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			sst=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			info=(cdf_info_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			scn=(cdf_stream_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).error=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(info_PTRTO[0]).i_fd=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = cdf_file_catalog_info(ms,info,h,sat,ssat,sst,dir,scn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog_info","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_user_stream","cdf_read_user_stream_call_counter",cdf_read_user_stream_call_counter)
	OB_INT_EXPR("cdf_file_catalog","cdf_file_catalog_call_counter",cdf_file_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_info_1\n");
}

void test_cdf_file_catalog_info_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_sat_t *ssat;
	cdf_stream_t *sst;
	cdf_dir_t *dir;
	cdf_stream_t *scn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)ssat_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_sat_t *valueList_2[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_2=1;
	cdf_header_t *valueList_3[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_3=1;
	cdf_dir_t *valueList_4[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_5=1;
	cdf_info_t *valueList_6[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_6=1;
	cdf_stream_t *valueList_7[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	void *valueList_10[]={(void *)0};
	unsigned int listLength_10=1;
	unsigned long long int valueList_11[]={12345};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
	unsigned int listLength_13=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	cdf_read_user_stream_call_counter = 0;
	cdf_file_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_info_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_info_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ssat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sat=(cdf_sat_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			h=(cdf_header_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			dir=(cdf_dir_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			sst=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			info=(cdf_info_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			scn=(cdf_stream_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).error=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(info_PTRTO[0]).i_fd=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = cdf_file_catalog_info(ms,info,h,sat,ssat,sst,dir,scn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog_info","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_user_stream","cdf_read_user_stream_call_counter",cdf_read_user_stream_call_counter)
	OB_INT_EXPR("cdf_file_catalog","cdf_file_catalog_call_counter",cdf_file_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_info_2\n");
}

void test_cdf_file_catalog_info_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_sat_t *ssat;
	cdf_stream_t *sst;
	cdf_dir_t *dir;
	cdf_stream_t *scn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)ssat_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_sat_t *valueList_2[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_2=1;
	cdf_header_t *valueList_3[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_3=1;
	cdf_dir_t *valueList_4[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_5=1;
	cdf_info_t *valueList_6[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_6=1;
	cdf_stream_t *valueList_7[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	void *valueList_10[]={(void *)0};
	unsigned int listLength_10=1;
	unsigned long long int valueList_11[]={12345};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
	unsigned int listLength_13=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	cdf_read_user_stream_call_counter = 0;
	cdf_file_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_info_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_info_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ssat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sat=(cdf_sat_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			h=(cdf_header_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			dir=(cdf_dir_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			sst=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			info=(cdf_info_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			scn=(cdf_stream_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).error=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(info_PTRTO[0]).i_fd=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = cdf_file_catalog_info(ms,info,h,sat,ssat,sst,dir,scn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog_info","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_user_stream","cdf_read_user_stream_call_counter",cdf_read_user_stream_call_counter)
	OB_INT_EXPR("cdf_file_catalog","cdf_file_catalog_call_counter",cdf_file_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_info_3\n");
}

void test_cdf_file_catalog_info_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_sat_t *ssat;
	cdf_stream_t *sst;
	cdf_dir_t *dir;
	cdf_stream_t *scn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)ssat_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	cdf_sat_t *valueList_2[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_2=1;
	cdf_header_t *valueList_3[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_3=1;
	cdf_dir_t *valueList_4[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_5=1;
	cdf_info_t *valueList_6[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_6=1;
	cdf_stream_t *valueList_7[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	void *valueList_10[]={(void *)0};
	unsigned int listLength_10=1;
	unsigned long long int valueList_11[]={12345};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
	unsigned int listLength_13=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	cdf_read_user_stream_call_counter = 0;
	cdf_file_catalog_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_catalog_info_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_catalog_info_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ssat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sat=(cdf_sat_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			h=(cdf_header_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			dir=(cdf_dir_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			sst=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			info=(cdf_info_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			scn=(cdf_stream_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ms_PTRTO[0]).error=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(info_PTRTO[0]).i_fd=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = cdf_file_catalog_info(ms,info,h,sat,ssat,sst,dir,scn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_file_catalog_info","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_user_stream","cdf_read_user_stream_call_counter",cdf_read_user_stream_call_counter)
	OB_INT_EXPR("cdf_file_catalog","cdf_file_catalog_call_counter",cdf_file_catalog_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_catalog_info_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_file_catalog_info_up();

	switch(caseIndex){
	case 1:
		test_cdf_file_catalog_info_1();
		break;
	case 2:
		test_cdf_file_catalog_info_2();
		break;
	case 3:
		test_cdf_file_catalog_info_3();
		break;
	case 4:
		test_cdf_file_catalog_info_4();
		break;
	default:
		abnormal_cdf_file_catalog_info_case(caseIndex);
		break;
	}

	test_cdf_file_catalog_info_down();
}

