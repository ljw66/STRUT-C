void test_cdf_file_dir_info_up(void);
void test_cdf_file_dir_info_down(void);


void test_cdf_file_dir_info_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_file_dir_info\n");
 }

void test_cdf_file_dir_info_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_file_dir_info\n");
 }



void abnormal_cdf_file_dir_info_case(int index);

void abnormal_cdf_file_dir_info_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_file_dir_info_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	cdf_dir_t *dir;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	cdf_dir_t *valueList_1[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *) 0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *) 3};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *) 2};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)1};
	unsigned int listLength_8=1;
	int valueList_9[]={ 1};
	unsigned int listLength_9=1;
	int valueList_10[]={ 0};
	unsigned int listLength_10=1;
	int valueList_11[]={1};
	unsigned int listLength_11=1;
	int valueList_12[]={ 1};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
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
	case_id=7;
	//初始化各桩函数调用计数器
	cdf_find_stream_call_counter = 0;
	file_printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_file_dir_info_7,false,0\n");
	aunit_printf("#CASE_START_test_cdf_file_dir_info_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			dir=(cdf_dir_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).flags=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(sectioninfo[0].sections)[4]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sectioninfo[0].sections)[3]=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sectioninfo[0].sections)[2]=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(sectioninfo[0].sections)[1]=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sectioninfo[0].sections)[0]=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(sectioninfo[0].types)[2]=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(sectioninfo[0].types)[3]=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(sectioninfo[0].types)[0]=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(sectioninfo[0].types)[1]=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(sectioninfo[0].types)[4]=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = cdf_file_dir_info(ms,dir);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_file_dir_info","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("cdf_find_stream","cdf_find_stream_call_counter",cdf_find_stream_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)

	aunit_printf("#CASE_END_test_cdf_file_dir_info_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_file_dir_info_up();

	switch(caseIndex){
	case 7:
		test_cdf_file_dir_info_7();
		break;
	default:
		abnormal_cdf_file_dir_info_case(caseIndex);
		break;
	}

	test_cdf_file_dir_info_down();
}

