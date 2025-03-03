void test_cdf_read_short_stream_up(void);
void test_cdf_read_short_stream_down(void);


void test_cdf_read_short_stream_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_read_short_stream\n");
 }

void test_cdf_read_short_stream_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_read_short_stream\n");
 }



void abnormal_cdf_read_short_stream_case(int index);

void abnormal_cdf_read_short_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_read_short_stream_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_dir_t *dir;
	cdf_stream_t *scn;
	cdf_directory_t **root;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	cdf_dir_t *valueList_2[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_2=1;
	cdf_info_t *valueList_3[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_3=1;
	cdf_stream_t *valueList_4[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	cdf_directory_t *valueList_8[]={(cdf_directory_t *)0};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
	unsigned int listLength_9=1;
	cdf_directory_t *valueList_10[]={(cdf_directory_t *)&dir_entries};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={5};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={1024};
	unsigned int listLength_13=1;
	unsigned short int valueList_14[]={0xFFFE};
	unsigned int listLength_14=1;
	unsigned char *valueList_15[]={(unsigned char *)0};
	unsigned int listLength_15=1;
	unsigned short int valueList_16[]={9};
	unsigned int listLength_16=1;
	unsigned long long int valueList_17[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_17=1;
	unsigned short int valueList_18[]={0};
	unsigned int listLength_18=1;
	int valueList_19[]={1};
	unsigned int listLength_19=1;
	unsigned short int valueList_20[]={6};
	unsigned int listLength_20=1;
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
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	cdf_read_long_sector_chain_call_counter = 0;
	cdf_zero_stream_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_short_stream_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_short_stream_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			dir=(cdf_dir_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			info=(cdf_info_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			scn=(cdf_stream_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(scn_PTRTO[0]).sst_len=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			*root=(cdf_directory_t *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(scn_PTRTO[0]).sst_dirlen=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(scn_PTRTO[0]).sst_ss=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(info_PTRTO[0]).i_fd=(int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		returnValue = cdf_read_short_stream(info,h,sat,dir,scn,root);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_short_stream","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_long_sector_chain","cdf_read_long_sector_chain_call_counter",cdf_read_long_sector_chain_call_counter)
	OB_INT_EXPR("cdf_zero_stream","cdf_zero_stream_call_counter",cdf_zero_stream_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_short_stream_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_read_short_stream_up();

	switch(caseIndex){
	case 5:
		test_cdf_read_short_stream_5();
		break;
	default:
		abnormal_cdf_read_short_stream_case(caseIndex);
		break;
	}

	test_cdf_read_short_stream_down();
}

