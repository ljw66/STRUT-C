void test_file_mdump_up(void);
void test_file_mdump_down(void);


void test_file_mdump_up(void){

	aunit_printf("\n##FUNCTION_START_file_mdump\n");
 }

void test_file_mdump_down(void){
	aunit_printf("\n##FUNCTION_END_file_mdump\n");
 }



void abnormal_file_mdump_case(int index);

void abnormal_file_mdump_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_mdump_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;


	//值序列相关
	char *valueList_0[][]={file_name_PTRTO};
	unsigned int listLength_0=1;
	struct magic *valueList_1[]={(struct magic *)m_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"string"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"int"};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={3};
	unsigned int listLength_4=1;
	unsigned short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={42};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={5};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={64};
	unsigned int listLength_10=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	file_fmttime_call_counter = 0;
	file_fmtnum_call_counter = 0;
	file_fmtdate_call_counter = 0;
	fputc_call_counter = 0;
	file_showstr_call_counter = 0;
	file_fmtdatetime_call_counter = 0;
	file_fmtvarint_call_counter = 0;
	fprintf_call_counter = 0;
	file_print_guid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_mdump_1,false,0\n");
	aunit_printf("#CASE_START_test_file_mdump_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stdimpl_memcpy(&file_names, valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1], sizeof(char)*(-1431655766>(sizeof(file_names_FILEINIT_1_0)/sizeof(file_names_FILEINIT_1_0[0]))?(sizeof(file_names_FILEINIT_1_0)/sizeof(file_names_FILEINIT_1_0[0])):-1431655766));
		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			m=(struct magic *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			file_name_PTRTO[1]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			file_name_PTRTO[0]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).flag=(unsigned short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(m_PTRTO[0]).lineno=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(m_PTRTO[0]).type=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(m_PTRTO[0]).offset=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(m_PTRTO[0]).in_type=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(m_PTRTO[0]).in_op=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		file_mdump(m);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_fmttime","file_fmttime_call_counter",file_fmttime_call_counter)
	OB_INT_EXPR("file_fmtnum","file_fmtnum_call_counter",file_fmtnum_call_counter)
	OB_INT_EXPR("file_fmtdate","file_fmtdate_call_counter",file_fmtdate_call_counter)
	OB_INT_EXPR("fputc","fputc_call_counter",fputc_call_counter)
	OB_INT_EXPR("file_showstr","file_showstr_call_counter",file_showstr_call_counter)
	OB_INT_EXPR("file_fmtdatetime","file_fmtdatetime_call_counter",file_fmtdatetime_call_counter)
	OB_INT_EXPR("file_fmtvarint","file_fmtvarint_call_counter",file_fmtvarint_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("file_print_guid","file_print_guid_call_counter",file_print_guid_call_counter)

	aunit_printf("#CASE_END_test_file_mdump_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_mdump_up();

	switch(caseIndex){
	case 1:
		test_file_mdump_1();
		break;
	default:
		abnormal_file_mdump_case(caseIndex);
		break;
	}

	test_file_mdump_down();
}

