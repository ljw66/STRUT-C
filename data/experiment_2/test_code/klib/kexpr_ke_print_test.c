void test_ke_print_up(void);
void test_ke_print_down(void);


void test_ke_print_up(void){

	aunit_printf("\n##FUNCTION_START_ke_print\n");
 }

void test_ke_print_down(void){
	aunit_printf("\n##FUNCTION_END_ke_print\n");
 }



void abnormal_ke_print_case(int index);

void abnormal_ke_print_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_print_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;


	//值序列相关
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	long long int valueList_13[]={0};
	unsigned int listLength_13=1;
	char *valueList_14[]={(char *)0};
	unsigned int listLength_14=1;
	char *valueList_15[]={(char *)0};
	unsigned int listLength_15=1;
	char *valueList_16[]={(char *)0};
	unsigned int listLength_16=1;
	char *valueList_17[]={(char *)0};
	unsigned int listLength_17=1;
	char *valueList_18[]={(char *)0};
	unsigned int listLength_18=1;
	char *valueList_19[]={(char *)0};
	unsigned int listLength_19=1;
	char *valueList_20[]={(char *)0};
	unsigned int listLength_20=1;
	char *valueList_21[]={(char *)0};
	unsigned int listLength_21=1;
	char *valueList_22[]={(char *)0};
	unsigned int listLength_22=1;
	char *valueList_23[]={(char *)0};
	unsigned int listLength_23=1;
	char *valueList_24[]={(char *)0};
	unsigned int listLength_24=1;
	char *valueList_25[]={(char *)0};
	unsigned int listLength_25=1;
	char *valueList_26[]={(char *)0};
	unsigned int listLength_26=1;
	char *valueList_27[]={(char *)0};
	unsigned int listLength_27=1;
	int valueList_28[]={0};
	unsigned int listLength_28=1;
	ke1_t *valueList_29[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_29=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.r=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke_opstr[14]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke_opstr[7]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ke_opstr[24]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ke_opstr[16]=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ke_opstr[9]=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ke_opstr[10]=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			ke_opstr[20]=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ke_opstr[12]=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ke_opstr[22]=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			ke_opstr[1]=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			ke_opstr[18]=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			struct_ke1_s1.i=(long long int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			ke_opstr[3]=(char *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			ke_opstr[5]=(char *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			ke_opstr[6]=(char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			ke_opstr[13]=(char *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			ke_opstr[8]=(char *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			ke_opstr[15]=(char *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			ke_opstr[21]=(char *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			ke_opstr[23]=(char *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			ke_opstr[11]=(char *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			ke_opstr[0]=(char *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			ke_opstr[2]=(char *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			ke_opstr[17]=(char *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			ke_opstr[4]=(char *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			ke_opstr[19]=(char *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ke_PTRTO[0]).n=(int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		ke_print(ke);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_2\n");
}

void test_ke_print_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;


	//值序列相关
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	char *valueList_13[]={(char *)0};
	unsigned int listLength_13=1;
	char *valueList_14[]={(char *)0};
	unsigned int listLength_14=1;
	char *valueList_15[]={(char *)0};
	unsigned int listLength_15=1;
	char *valueList_16[]={(char *)0};
	unsigned int listLength_16=1;
	char *valueList_17[]={(char *)0};
	unsigned int listLength_17=1;
	char *valueList_18[]={(char *)0};
	unsigned int listLength_18=1;
	char *valueList_19[]={(char *)0};
	unsigned int listLength_19=1;
	char *valueList_20[]={(char *)0};
	unsigned int listLength_20=1;
	char *valueList_21[]={(char *)0};
	unsigned int listLength_21=1;
	char *valueList_22[]={(char *)0};
	unsigned int listLength_22=1;
	char *valueList_23[]={(char *)0};
	unsigned int listLength_23=1;
	char *valueList_24[]={(char *)0};
	unsigned int listLength_24=1;
	char *valueList_25[]={(char *)0};
	unsigned int listLength_25=1;
	int valueList_26[]={1};
	unsigned int listLength_26=1;
	ke1_t *valueList_27[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_27=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ke_opstr[14]=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke_opstr[7]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke_opstr[24]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ke_opstr[16]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ke_opstr[9]=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ke_opstr[10]=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ke_opstr[20]=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			ke_opstr[12]=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ke_opstr[22]=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ke_opstr[1]=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			ke_opstr[18]=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			ke_opstr[3]=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			ke_opstr[5]=(char *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			ke_opstr[6]=(char *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			ke_opstr[13]=(char *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			ke_opstr[8]=(char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			ke_opstr[15]=(char *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			ke_opstr[21]=(char *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			ke_opstr[23]=(char *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			ke_opstr[11]=(char *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			ke_opstr[0]=(char *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			ke_opstr[2]=(char *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			ke_opstr[17]=(char *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			ke_opstr[4]=(char *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			ke_opstr[19]=(char *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(ke_PTRTO[0]).n=(int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		ke_print(ke);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_3\n");
}

void test_ke_print_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;


	//值序列相关
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	double valueList_1[]={3.14};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	char *valueList_13[]={(char *)0};
	unsigned int listLength_13=1;
	char *valueList_14[]={(char *)0};
	unsigned int listLength_14=1;
	char *valueList_15[]={(char *)0};
	unsigned int listLength_15=1;
	char *valueList_16[]={(char *)0};
	unsigned int listLength_16=1;
	char *valueList_17[]={(char *)0};
	unsigned int listLength_17=1;
	char *valueList_18[]={(char *)0};
	unsigned int listLength_18=1;
	char *valueList_19[]={(char *)0};
	unsigned int listLength_19=1;
	char *valueList_20[]={(char *)0};
	unsigned int listLength_20=1;
	char *valueList_21[]={(char *)0};
	unsigned int listLength_21=1;
	char *valueList_22[]={(char *)0};
	unsigned int listLength_22=1;
	char *valueList_23[]={(char *)0};
	unsigned int listLength_23=1;
	char *valueList_24[]={(char *)0};
	unsigned int listLength_24=1;
	char *valueList_25[]={(char *)0};
	unsigned int listLength_25=1;
	char *valueList_26[]={(char *)0};
	unsigned int listLength_26=1;
	char *valueList_27[]={(char *)0};
	unsigned int listLength_27=1;
	int valueList_28[]={1};
	unsigned int listLength_28=1;
	ke1_t *valueList_29[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_29=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.r=(double)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_ke1_s1.name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke_opstr[14]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ke_opstr[7]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ke_opstr[24]=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ke_opstr[16]=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ke_opstr[9]=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			ke_opstr[10]=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ke_opstr[20]=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ke_opstr[12]=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			ke_opstr[22]=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			ke_opstr[1]=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			ke_opstr[18]=(char *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			ke_opstr[3]=(char *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			ke_opstr[5]=(char *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			ke_opstr[6]=(char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			ke_opstr[13]=(char *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			ke_opstr[8]=(char *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			ke_opstr[15]=(char *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			ke_opstr[21]=(char *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			ke_opstr[23]=(char *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			ke_opstr[11]=(char *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			ke_opstr[0]=(char *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			ke_opstr[2]=(char *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			ke_opstr[17]=(char *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			ke_opstr[4]=(char *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			ke_opstr[19]=(char *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ke_PTRTO[0]).n=(int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		ke_print(ke);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_4\n");
}

void test_ke_print_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;


	//值序列相关
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	long long int valueList_13[]={42};
	unsigned int listLength_13=1;
	char *valueList_14[]={(char *)0};
	unsigned int listLength_14=1;
	char *valueList_15[]={(char *)0};
	unsigned int listLength_15=1;
	char *valueList_16[]={(char *)0};
	unsigned int listLength_16=1;
	char *valueList_17[]={(char *)0};
	unsigned int listLength_17=1;
	char *valueList_18[]={(char *)0};
	unsigned int listLength_18=1;
	char *valueList_19[]={(char *)0};
	unsigned int listLength_19=1;
	char *valueList_20[]={(char *)0};
	unsigned int listLength_20=1;
	char *valueList_21[]={(char *)0};
	unsigned int listLength_21=1;
	char *valueList_22[]={(char *)0};
	unsigned int listLength_22=1;
	char *valueList_23[]={(char *)0};
	unsigned int listLength_23=1;
	char *valueList_24[]={(char *)0};
	unsigned int listLength_24=1;
	char *valueList_25[]={(char *)0};
	unsigned int listLength_25=1;
	char *valueList_26[]={(char *)0};
	unsigned int listLength_26=1;
	char *valueList_27[]={(char *)0};
	unsigned int listLength_27=1;
	int valueList_28[]={1};
	unsigned int listLength_28=1;
	ke1_t *valueList_29[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_29=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke_opstr[14]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke_opstr[7]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ke_opstr[24]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ke_opstr[16]=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ke_opstr[9]=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ke_opstr[10]=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			ke_opstr[20]=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ke_opstr[12]=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ke_opstr[22]=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			ke_opstr[1]=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			ke_opstr[18]=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			struct_ke1_s1.i=(long long int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			ke_opstr[3]=(char *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			ke_opstr[5]=(char *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			ke_opstr[6]=(char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			ke_opstr[13]=(char *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			ke_opstr[8]=(char *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			ke_opstr[15]=(char *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			ke_opstr[21]=(char *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			ke_opstr[23]=(char *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			ke_opstr[11]=(char *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			ke_opstr[0]=(char *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			ke_opstr[2]=(char *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			ke_opstr[17]=(char *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			ke_opstr[4]=(char *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			ke_opstr[19]=(char *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ke_PTRTO[0]).n=(int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		ke_print(ke);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_5\n");
}

void test_ke_print_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;


	//值序列相关
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	char *valueList_13[]={(char *)0};
	unsigned int listLength_13=1;
	char *valueList_14[]={(char *)0};
	unsigned int listLength_14=1;
	char *valueList_15[]={(char *)0};
	unsigned int listLength_15=1;
	char *valueList_16[]={(char *)0};
	unsigned int listLength_16=1;
	char *valueList_17[]={(char *)0};
	unsigned int listLength_17=1;
	char *valueList_18[]={(char *)0};
	unsigned int listLength_18=1;
	char *valueList_19[]={(char *)0};
	unsigned int listLength_19=1;
	char *valueList_20[]={(char *)0};
	unsigned int listLength_20=1;
	char *valueList_21[]={(char *)0};
	unsigned int listLength_21=1;
	char *valueList_22[]={(char *)0};
	unsigned int listLength_22=1;
	char *valueList_23[]={(char *)0};
	unsigned int listLength_23=1;
	char *valueList_24[]={(char *)0};
	unsigned int listLength_24=1;
	char *valueList_25[]={(char *)0};
	unsigned int listLength_25=1;
	char *valueList_26[]={(char *)0};
	unsigned int listLength_26=1;
	int valueList_27[]={1};
	unsigned int listLength_27=1;
	ke1_t *valueList_28[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_28=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_6,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_ke1_s1.name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke_opstr[14]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke_opstr[7]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ke_opstr[24]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ke_opstr[16]=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ke_opstr[9]=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ke_opstr[10]=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			ke_opstr[20]=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ke_opstr[12]=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ke_opstr[22]=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			ke_opstr[1]=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			ke_opstr[18]=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			ke_opstr[3]=(char *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			ke_opstr[5]=(char *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			ke_opstr[6]=(char *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			ke_opstr[13]=(char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			ke_opstr[8]=(char *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			ke_opstr[15]=(char *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			ke_opstr[21]=(char *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			ke_opstr[23]=(char *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			ke_opstr[11]=(char *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			ke_opstr[0]=(char *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			ke_opstr[2]=(char *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			ke_opstr[17]=(char *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			ke_opstr[4]=(char *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			ke_opstr[19]=(char *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(ke_PTRTO[0]).n=(int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		ke_print(ke);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_6\n");
}

void test_ke_print_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;


	//值序列相关
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	ke1_t *valueList_2[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_7,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ke_PTRTO[0]).n=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		ke_print(ke);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_7\n");
}

void test_ke_print_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kexpr_t *ke;


	//值序列相关
	kexpr_t *valueList_0[]={(kexpr_t *)ke_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char *valueList_8[]={(char *)0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	char *valueList_10[]={(char *)0};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	char *valueList_13[]={(char *)0};
	unsigned int listLength_13=1;
	char *valueList_14[]={(char *)0};
	unsigned int listLength_14=1;
	char *valueList_15[]={(char *)0};
	unsigned int listLength_15=1;
	char *valueList_16[]={(char *)0};
	unsigned int listLength_16=1;
	char *valueList_17[]={(char *)0};
	unsigned int listLength_17=1;
	char *valueList_18[]={(char *)0};
	unsigned int listLength_18=1;
	char *valueList_19[]={(char *)0};
	unsigned int listLength_19=1;
	char *valueList_20[]={(char *)0};
	unsigned int listLength_20=1;
	char *valueList_21[]={(char *)0};
	unsigned int listLength_21=1;
	char *valueList_22[]={(char *)0};
	unsigned int listLength_22=1;
	char *valueList_23[]={(char *)0};
	unsigned int listLength_23=1;
	char *valueList_24[]={(char *)0};
	unsigned int listLength_24=1;
	char *valueList_25[]={(char *)0};
	unsigned int listLength_25=1;
	int valueList_26[]={1};
	unsigned int listLength_26=1;
	ke1_t *valueList_27[]={(ke1_t *)&struct_ke1_s1};
	unsigned int listLength_27=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	putchar_call_counter = 0;
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_print_8,false,0\n");
	aunit_printf("#CASE_START_test_ke_print_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ke=(kexpr_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ke_opstr[14]=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ke_opstr[7]=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ke_opstr[24]=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ke_opstr[16]=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ke_opstr[9]=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ke_opstr[10]=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			ke_opstr[20]=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			ke_opstr[12]=(char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ke_opstr[22]=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			ke_opstr[1]=(char *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			ke_opstr[18]=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			ke_opstr[3]=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			ke_opstr[5]=(char *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			ke_opstr[6]=(char *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			ke_opstr[13]=(char *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			ke_opstr[8]=(char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			ke_opstr[15]=(char *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			ke_opstr[21]=(char *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			ke_opstr[23]=(char *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			ke_opstr[11]=(char *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			ke_opstr[0]=(char *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			ke_opstr[2]=(char *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			ke_opstr[17]=(char *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			ke_opstr[4]=(char *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			ke_opstr[19]=(char *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(ke_PTRTO[0]).n=(int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(ke_PTRTO[0]).e=(ke1_t *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		ke_print(ke);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("putchar","putchar_call_counter",putchar_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_ke_print_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_print_up();

	switch(caseIndex){
	case 2:
		test_ke_print_2();
		break;
	case 3:
		test_ke_print_3();
		break;
	case 4:
		test_ke_print_4();
		break;
	case 5:
		test_ke_print_5();
		break;
	case 6:
		test_ke_print_6();
		break;
	case 7:
		test_ke_print_7();
		break;
	case 8:
		test_ke_print_8();
		break;
	default:
		abnormal_ke_print_case(caseIndex);
		break;
	}

	test_ke_print_down();
}

