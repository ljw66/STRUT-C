void test_cdf_find_stream_up(void);
void test_cdf_find_stream_down(void);


void test_cdf_find_stream_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_find_stream\n");
 }

void test_cdf_find_stream_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_find_stream\n");
 }



void abnormal_cdf_find_stream_case(int index);

void abnormal_cdf_find_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_find_stream_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_dir_t *dir;
	char *name;
	int type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	cdf_dir_t *valueList_1[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"abc"};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={1};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned short int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned short int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned short int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned short int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned short int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned short int valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned short int valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned short int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned short int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned short int valueList_20[]={0};
	unsigned int listLength_20=1;
	unsigned short int valueList_21[]={0};
	unsigned int listLength_21=1;
	unsigned short int valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned short int valueList_23[]={0};
	unsigned int listLength_23=1;
	unsigned short int valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned short int valueList_25[]={0};
	unsigned int listLength_25=1;
	unsigned short int valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned short int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned short int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned short int valueList_29[]={0};
	unsigned int listLength_29=1;
	cdf_directory_t *valueList_30[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_30=1;
	unsigned int valueList_31[]={1};
	unsigned int listLength_31=1;
	unsigned short int valueList_32[]={0};
	unsigned int listLength_32=1;
	unsigned short int valueList_33[]={0};
	unsigned int listLength_33=1;
	unsigned short int valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned short int valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned short int valueList_36[]={"abc"};
	unsigned int listLength_36=1;
	unsigned short int valueList_37[]={0};
	unsigned int listLength_37=1;
	unsigned short int valueList_38[]={0};
	unsigned int listLength_38=1;
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
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	cdf_namecmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_find_stream_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_find_stream_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			type=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dir=(cdf_dir_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			errno=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[13]=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[23]=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[11]=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[21]=(unsigned short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[17]=(unsigned short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[27]=(unsigned short int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[15]=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[25]=(unsigned short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[19]=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[29]=(unsigned short int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[9]=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[7]=(unsigned short int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[5]=(unsigned short int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[3]=(unsigned short int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[1]=(unsigned short int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[31]=(unsigned short int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[24]=(unsigned short int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[12]=(unsigned short int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[22]=(unsigned short int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[10]=(unsigned short int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[28]=(unsigned short int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[16]=(unsigned short int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[26]=(unsigned short int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[14]=(unsigned short int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[18]=(unsigned short int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[8]=(unsigned short int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[6]=(unsigned short int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[4]=(unsigned short int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[2]=(unsigned short int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[0]=(unsigned short int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[20]=(unsigned short int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(struct__sue_Anonymous_struct_55986916_121.d_name)[30]=(unsigned short int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		returnValue = cdf_find_stream(dir,name,type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("cdf_namecmp","cdf_namecmp_call_counter",cdf_namecmp_call_counter)

	aunit_printf("#CASE_END_test_cdf_find_stream_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_find_stream_up();

	switch(caseIndex){
	case 2:
		test_cdf_find_stream_2();
		break;
	default:
		abnormal_cdf_find_stream_case(caseIndex);
		break;
	}

	test_cdf_find_stream_down();
}

