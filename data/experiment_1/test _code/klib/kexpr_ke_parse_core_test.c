void test_ke_parse_core_up(void);
void test_ke_parse_core_down(void);


void test_ke_parse_core_up(void){

	aunit_printf("\n##FUNCTION_START_ke_parse_core\n");
 }

void test_ke_parse_core_down(void){
	aunit_printf("\n##FUNCTION_END_ke_parse_core\n");
 }



void abnormal_ke_parse_core_case(int index);

void abnormal_ke_parse_core_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_parse_core_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *_s;
	int *_n;
	int *err;

	//声明返回值局部变量，若为基本类型赋默认值
	ke1_t *returnValue = 0;

	//值序列相关
	int *valueList_0[]={(int *)err_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)_n_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"a+b+c"};
	unsigned int listLength_2=1;
	int valueList_3[]={ 4};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
	unsigned int listLength_13=1;
	int valueList_14[]={0};
	unsigned int listLength_14=1;
	int valueList_15[]={ 1};
	unsigned int listLength_15=1;
	int valueList_16[]={0};
	unsigned int listLength_16=1;
	int valueList_17[]={ 3};
	unsigned int listLength_17=1;
	int valueList_18[]={0};
	unsigned int listLength_18=1;
	int valueList_19[]={0};
	unsigned int listLength_19=1;
	int valueList_20[]={0};
	unsigned int listLength_20=1;
	int valueList_21[]={0};
	unsigned int listLength_21=1;
	int valueList_22[]={0};
	unsigned int listLength_22=1;
	int valueList_23[]={0};
	unsigned int listLength_23=1;
	int valueList_24[]={0};
	unsigned int listLength_24=1;
	int valueList_25[]={0};
	unsigned int listLength_25=1;
	int valueList_26[]={0};
	unsigned int listLength_26=1;
	int valueList_27[]={0};
	unsigned int listLength_27=1;
	int valueList_28[]={0};
	unsigned int listLength_28=1;
	int valueList_29[]={0};
	unsigned int listLength_29=1;
	int valueList_30[]={ 2};
	unsigned int listLength_30=1;
	int valueList_31[]={0};
	unsigned int listLength_31=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	ke_read_token_call_counter = 0;
	isspace_call_counter = 0;
	strdup_call_counter = 0;
	push_back_call_counter = 0;
	free_call_counter = 0;
	ke_func1_abs_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_parse_core_8,false,0\n");
	aunit_printf("#CASE_START_test_ke_parse_core_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			err=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			_n=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			_s=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke_op[4]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			_n_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ke_op[6]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ke_op[8]=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ke_op[20]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			ke_op[10]=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ke_op[22]=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ke_op[12]=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			ke_op[24]=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			err_PTRTO[0]=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			ke_op[14]=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			ke_op[16]=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			ke_op[1]=(int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			ke_op[18]=(int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			ke_op[3]=(int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			ke_op[5]=(int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			_n_PTRTO[1]=(int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			ke_op[7]=(int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			ke_op[9]=(int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			ke_op[21]=(int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			ke_op[11]=(int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			ke_op[23]=(int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			ke_op[13]=(int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			err_PTRTO[1]=(int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			ke_op[15]=(int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			ke_op[0]=(int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			ke_op[17]=(int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			ke_op[2]=(int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			ke_op[19]=(int)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		returnValue = ke_parse_core(_s,_n,err);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("ke_parse_core","returnValue",returnValue)
	TEST_ASSERT_EQUAL_INT("ke_parse_core","_n[0]",1,_n[0])
	TEST_ASSERT_EQUAL_INT("ke_parse_core","*err",32,*err)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("ke_read_token","ke_read_token_call_counter",ke_read_token_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)
	OB_INT_EXPR("strdup","strdup_call_counter",strdup_call_counter)
	OB_INT_EXPR("push_back","push_back_call_counter",push_back_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ke_func1_abs","ke_func1_abs_call_counter",ke_func1_abs_call_counter)

	aunit_printf("#CASE_END_test_ke_parse_core_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_parse_core_up();

	switch(caseIndex){
	case 8:
		test_ke_parse_core_8();
		break;
	default:
		abnormal_ke_parse_core_case(caseIndex);
		break;
	}

	test_ke_parse_core_down();
}

