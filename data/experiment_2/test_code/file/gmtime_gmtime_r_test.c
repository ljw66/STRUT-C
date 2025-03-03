void test_gmtime_r_up(void);
void test_gmtime_r_down(void);


void test_gmtime_r_up(void){

	aunit_printf("\n##FUNCTION_START_gmtime_r\n");
 }

void test_gmtime_r_down(void){
	aunit_printf("\n##FUNCTION_END_gmtime_r\n");
 }



void abnormal_gmtime_r_case(int index);

void abnormal_gmtime_r_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_gmtime_r_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	time_t *t;
	struct tm *tm;

	//声明返回值局部变量，若为基本类型赋默认值
	struct tm *returnValue = 0;

	//值序列相关
	time_t *valueList_0[]={(time_t *)t_PTRTO};
	unsigned int listLength_0=1;
	struct tm *valueList_1[]={(struct tm *)tm_PTRTO};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	long int valueList_3[]={1672531200};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={15};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={30};
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
	int valueList_14[]={123};
	unsigned int listLength_14=1;
	int valueList_15[]={10};
	unsigned int listLength_15=1;
	int valueList_16[]={0};
	unsigned int listLength_16=1;
	int valueList_17[]={0};
	unsigned int listLength_17=1;
	int valueList_18[]={0};
	unsigned int listLength_18=1;
	int valueList_19[]={0};
	unsigned int listLength_19=1;
	int valueList_20[]={1};
	unsigned int listLength_20=1;
	int valueList_21[]={0};
	unsigned int listLength_21=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	gmtime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_gmtime_r_1,false,0\n");
	aunit_printf("#CASE_START_test_gmtime_r_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(time_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tm=(struct tm *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			t_PTRTO[1]=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			t_PTRTO[0]=(long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tm_PTRTO[0]).tm_min=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(gmtime_returnValue_PTRTO[0]).tm_min=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(tm_PTRTO[0]).tm_year=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(tm_PTRTO[0]).tm_sec=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(gmtime_returnValue_PTRTO[0]).tm_sec=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(gmtime_returnValue_PTRTO[0]).tm_isdst=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(tm_PTRTO[0]).tm_mon=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(tm_PTRTO[0]).tm_yday=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(tm_PTRTO[0]).tm_mday=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(tm_PTRTO[0]).tm_wday=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(gmtime_returnValue_PTRTO[0]).tm_year=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(gmtime_returnValue_PTRTO[0]).tm_hour=(int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(tm_PTRTO[0]).tm_hour=(int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(gmtime_returnValue_PTRTO[0]).tm_wday=(int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(tm_PTRTO[0]).tm_isdst=(int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(gmtime_returnValue_PTRTO[0]).tm_yday=(int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(gmtime_returnValue_PTRTO[0]).tm_mday=(int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(gmtime_returnValue_PTRTO[0]).tm_mon=(int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		returnValue = gmtime_r(t,tm);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("gmtime_r","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("gmtime","gmtime_call_counter",gmtime_call_counter)

	aunit_printf("#CASE_END_test_gmtime_r_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_gmtime_r_up();

	switch(caseIndex){
	case 1:
		test_gmtime_r_1();
		break;
	default:
		abnormal_gmtime_r_case(caseIndex);
		break;
	}

	test_gmtime_r_down();
}

