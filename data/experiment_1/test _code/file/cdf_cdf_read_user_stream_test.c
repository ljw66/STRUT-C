void test_cdf_read_user_stream_up(void);
void test_cdf_read_user_stream_down(void);


void test_cdf_read_user_stream_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_read_user_stream\n");
 }

void test_cdf_read_user_stream_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_read_user_stream\n");
 }



void abnormal_cdf_read_user_stream_case(int index);

void abnormal_cdf_read_user_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_read_user_stream_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_sat_t *ssat;
	cdf_stream_t *sst;
	cdf_dir_t *dir;
	char *name;
	cdf_stream_t *scn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	cdf_dir_t *valueList_0[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_0=1;
	cdf_stream_t *valueList_1[]={(cdf_stream_t *)sst_PTRTO};
	unsigned int listLength_1=1;
	cdf_info_t *valueList_2[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_2=1;
	cdf_stream_t *valueList_3[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_3=1;
	cdf_sat_t *valueList_4[]={(cdf_sat_t *)ssat_PTRTO};
	unsigned int listLength_4=1;
	cdf_sat_t *valueList_5[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_5=1;
	cdf_header_t *valueList_6[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)"stream1"};
	unsigned int listLength_7=1;
	unsigned short int valueList_8[]={1};
	unsigned int listLength_8=1;
	void *valueList_9[]={(void *)0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={3};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={128};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={1};
	unsigned int listLength_15=1;
	unsigned char *valueList_16[]={(unsigned char *)"1"};
	unsigned int listLength_16=1;
	unsigned long long int valueList_17[]={12345};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={10};
	unsigned int listLength_18=1;
	unsigned int valueList_19[]={2};
	unsigned int listLength_19=1;
	unsigned int valueList_20[]={2};
	unsigned int listLength_20=1;
	int valueList_21[]={1};
	unsigned int listLength_21=1;
	unsigned int valueList_22[]={128};
	unsigned int listLength_22=1;
	unsigned int valueList_23[]={1};
	unsigned int listLength_23=1;
	cdf_directory_t *valueList_24[]={(cdf_directory_t *)&dir_data};
	unsigned int listLength_24=1;
	unsigned int valueList_25[]={10};
	unsigned int listLength_25=1;
	unsigned int valueList_26[]={4096};
	unsigned int listLength_26=1;
	unsigned int valueList_27[]={1024};
	unsigned int listLength_27=1;
	unsigned int valueList_28[]={64};
	unsigned int listLength_28=1;
	unsigned short int valueList_29[]={9};
	unsigned int listLength_29=1;
	unsigned int valueList_30[]={64};
	unsigned int listLength_30=1;
	unsigned short int valueList_31[]={1};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={256};
	unsigned int listLength_32=1;
	unsigned short int valueList_33[]={6};
	unsigned int listLength_33=1;
	int valueList_34[]={4};
	unsigned int listLength_34=1;
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
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	cdf_read_sector_chain_call_counter = 0;
	cdf_find_stream_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_user_stream_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_user_stream_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dir=(cdf_dir_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sst=(cdf_stream_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			info=(cdf_info_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			scn=(cdf_stream_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ssat=(cdf_sat_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			sat=(cdf_sat_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			h=(cdf_header_t *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			name=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_len=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(h_PTRTO[0]).h_secid_first_sector_in_short_sat=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(scn_PTRTO[0]).sst_dirlen=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(sst_PTRTO[0]).sst_dirlen=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(scn_PTRTO[0]).sst_ss=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(h_PTRTO[0]).h_num_sectors_in_sat=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(h_PTRTO[0]).h_secid_first_directory=(unsigned int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(h_PTRTO[0]).h_num_sectors_in_short_sat=(unsigned int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(info_PTRTO[0]).i_fd=(int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(sat_PTRTO[0]).sat_len=(unsigned int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(h_PTRTO[0]).h_num_sectors_in_master_sat=(unsigned int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(h_PTRTO[0]).h_min_size_standard_stream=(unsigned int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ssat_PTRTO[0]).sat_len=(unsigned int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(sst_PTRTO[0]).sst_ss=(unsigned int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(sst_PTRTO[0]).sst_len=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(h_PTRTO[0]).h_secid_first_sector_in_master_sat=(int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		returnValue = cdf_read_user_stream(info,h,sat,ssat,sst,dir,name,scn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_read_user_stream","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_read_sector_chain","cdf_read_sector_chain_call_counter",cdf_read_sector_chain_call_counter)
	OB_INT_EXPR("cdf_find_stream","cdf_find_stream_call_counter",cdf_find_stream_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_user_stream_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_read_user_stream_up();

	switch(caseIndex){
	case 2:
		test_cdf_read_user_stream_2();
		break;
	default:
		abnormal_cdf_read_user_stream_case(caseIndex);
		break;
	}

	test_cdf_read_user_stream_down();
}

