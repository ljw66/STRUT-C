void test_kill_up(void);
void test_kill_down(void);


void test_kill_up(void){

	aunit_printf("\n##FUNCTION_START_kill\n");
 }

void test_kill_down(void){
	aunit_printf("\n##FUNCTION_END_kill\n");
 }



void abnormal_kill_case(int index);

void abnormal_kill_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kill_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int pid;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	struct file *valueList_13[]={(struct file *)0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	struct file *valueList_15[]={(struct file *)0};
	unsigned int listLength_15=1;
	struct file *valueList_16[]={(struct file *)0};
	unsigned int listLength_16=1;
	struct file *valueList_17[]={(struct file *)0};
	unsigned int listLength_17=1;
	struct file *valueList_18[]={(struct file *)0};
	unsigned int listLength_18=1;
	struct file *valueList_19[]={(struct file *)0};
	unsigned int listLength_19=1;
	struct file *valueList_20[]={(struct file *)0};
	unsigned int listLength_20=1;
	struct file *valueList_21[]={(struct file *)0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	struct file *valueList_29[]={(struct file *)0};
	unsigned int listLength_29=1;
	struct file *valueList_30[]={(struct file *)0};
	unsigned int listLength_30=1;
	char valueList_31[]={0};
	unsigned int listLength_31=1;
	struct file *valueList_32[]={(struct file *)0};
	unsigned int listLength_32=1;
	struct file *valueList_33[]={(struct file *)0};
	unsigned int listLength_33=1;
	struct file *valueList_34[]={(struct file *)0};
	unsigned int listLength_34=1;
	struct file *valueList_35[]={(struct file *)0};
	unsigned int listLength_35=1;
	struct file *valueList_36[]={(struct file *)0};
	unsigned int listLength_36=1;
	struct file *valueList_37[]={(struct file *)0};
	unsigned int listLength_37=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kill_2,false,0\n");
	aunit_printf("#CASE_START_test_kill_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pid=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[1].pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[1].sz=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			proc[1].xstate=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			proc[1].kstack=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			proc[1].killed=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(proc[1].name)[12]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(proc[1].name)[0]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(proc[1].name)[14]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(proc[1].name)[2]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(proc[1].name)[4]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(proc[1].name)[10]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(proc[1].name)[6]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(proc[1].ofile)[8]=(struct file *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(proc[1].name)[8]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(proc[1].ofile)[6]=(struct file *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(proc[1].ofile)[1]=(struct file *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(proc[1].ofile)[5]=(struct file *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(proc[1].ofile)[3]=(struct file *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(proc[1].ofile)[13]=(struct file *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(proc[1].ofile)[15]=(struct file *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(proc[1].ofile)[11]=(struct file *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(proc[1].name)[1]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(proc[1].name)[11]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(proc[1].name)[3]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(proc[1].name)[13]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(proc[1].name)[5]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(proc[1].name)[7]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(proc[1].name)[9]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(proc[1].ofile)[9]=(struct file *)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(proc[1].ofile)[7]=(struct file *)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(proc[1].name)[15]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(proc[1].ofile)[0]=(struct file *)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(proc[1].ofile)[4]=(struct file *)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(proc[1].ofile)[2]=(struct file *)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(proc[1].ofile)[14]=(struct file *)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(proc[1].ofile)[10]=(struct file *)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(proc[1].ofile)[12]=(struct file *)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		returnValue = kill(pid);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kill","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_kill_2\n");
}

void test_kill_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int pid;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned long int valueList_5[]={0};
	unsigned int listLength_5=1;
	struct file *valueList_6[]={(struct file *)0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	struct file *valueList_8[]={(struct file *)0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	struct file *valueList_11[]={(struct file *)0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	struct file *valueList_16[]={(struct file *)0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	struct file *valueList_18[]={(struct file *)0};
	unsigned int listLength_18=1;
	struct file *valueList_19[]={(struct file *)0};
	unsigned int listLength_19=1;
	struct file *valueList_20[]={(struct file *)0};
	unsigned int listLength_20=1;
	struct file *valueList_21[]={(struct file *)0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	struct file *valueList_23[]={(struct file *)0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	struct file *valueList_25[]={(struct file *)0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	struct file *valueList_27[]={(struct file *)0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	struct file *valueList_31[]={(struct file *)0};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	struct file *valueList_33[]={(struct file *)0};
	unsigned int listLength_33=1;
	char valueList_34[]={0};
	unsigned int listLength_34=1;
	struct file *valueList_35[]={(struct file *)0};
	unsigned int listLength_35=1;
	struct file *valueList_36[]={(struct file *)0};
	unsigned int listLength_36=1;
	struct file *valueList_37[]={(struct file *)0};
	unsigned int listLength_37=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kill_3,false,0\n");
	aunit_printf("#CASE_START_test_kill_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pid=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].xstate=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[0].kstack=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			proc[0].pid=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			proc[0].killed=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			proc[0].sz=(unsigned long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(proc[0].ofile)[3]=(struct file *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(proc[0].name)[5]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(proc[0].ofile)[5]=(struct file *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(proc[0].name)[3]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(proc[0].name)[1]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(proc[0].ofile)[1]=(struct file *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(proc[0].name)[9]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(proc[0].name)[7]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(proc[0].name)[14]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(proc[0].name)[12]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(proc[0].ofile)[11]=(struct file *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(proc[0].name)[10]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(proc[0].ofile)[13]=(struct file *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(proc[0].ofile)[15]=(struct file *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(proc[0].ofile)[8]=(struct file *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(proc[0].ofile)[4]=(struct file *)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(proc[0].name)[6]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(proc[0].ofile)[6]=(struct file *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(proc[0].name)[4]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(proc[0].ofile)[0]=(struct file *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(proc[0].name)[2]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(proc[0].ofile)[2]=(struct file *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(proc[0].name)[0]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(proc[0].name)[8]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(proc[0].name)[15]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(proc[0].ofile)[10]=(struct file *)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(proc[0].name)[13]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(proc[0].ofile)[12]=(struct file *)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(proc[0].name)[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(proc[0].ofile)[14]=(struct file *)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(proc[0].ofile)[7]=(struct file *)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(proc[0].ofile)[9]=(struct file *)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		returnValue = kill(pid);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kill","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_kill_3\n");
}

void test_kill_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int pid;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	unsigned long int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned long int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned long int valueList_10[]={0};
	unsigned int listLength_10=1;
	struct file *valueList_11[]={(struct file *)0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	struct file *valueList_18[]={(struct file *)0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	struct file *valueList_20[]={(struct file *)0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	struct file *valueList_22[]={(struct file *)0};
	unsigned int listLength_22=1;
	struct file *valueList_23[]={(struct file *)0};
	unsigned int listLength_23=1;
	struct file *valueList_24[]={(struct file *)0};
	unsigned int listLength_24=1;
	struct file *valueList_25[]={(struct file *)0};
	unsigned int listLength_25=1;
	struct file *valueList_26[]={(struct file *)0};
	unsigned int listLength_26=1;
	struct file *valueList_27[]={(struct file *)0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	struct file *valueList_31[]={(struct file *)0};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	struct file *valueList_34[]={(struct file *)0};
	unsigned int listLength_34=1;
	char valueList_35[]={0};
	unsigned int listLength_35=1;
	struct file *valueList_36[]={(struct file *)0};
	unsigned int listLength_36=1;
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	char valueList_38[]={0};
	unsigned int listLength_38=1;
	struct file *valueList_39[]={(struct file *)0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	struct file *valueList_41[]={(struct file *)0};
	unsigned int listLength_41=1;
	struct file *valueList_42[]={(struct file *)0};
	unsigned int listLength_42=1;
	struct file *valueList_43[]={(struct file *)0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	char valueList_45[]={0};
	unsigned int listLength_45=1;
	struct file *valueList_46[]={(struct file *)0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	char valueList_48[]={0};
	unsigned int listLength_48=1;
	struct file *valueList_49[]={(struct file *)0};
	unsigned int listLength_49=1;
	struct file *valueList_50[]={(struct file *)0};
	unsigned int listLength_50=1;
	char valueList_51[]={0};
	unsigned int listLength_51=1;
	char valueList_52[]={0};
	unsigned int listLength_52=1;
	char valueList_53[]={0};
	unsigned int listLength_53=1;
	char valueList_54[]={0};
	unsigned int listLength_54=1;
	struct file *valueList_55[]={(struct file *)0};
	unsigned int listLength_55=1;
	struct file *valueList_56[]={(struct file *)0};
	unsigned int listLength_56=1;
	struct file *valueList_57[]={(struct file *)0};
	unsigned int listLength_57=1;
	struct file *valueList_58[]={(struct file *)0};
	unsigned int listLength_58=1;
	char valueList_59[]={0};
	unsigned int listLength_59=1;
	char valueList_60[]={0};
	unsigned int listLength_60=1;
	char valueList_61[]={0};
	unsigned int listLength_61=1;
	struct file *valueList_62[]={(struct file *)0};
	unsigned int listLength_62=1;
	char valueList_63[]={0};
	unsigned int listLength_63=1;
	char valueList_64[]={0};
	unsigned int listLength_64=1;
	struct file *valueList_65[]={(struct file *)0};
	unsigned int listLength_65=1;
	char valueList_66[]={0};
	unsigned int listLength_66=1;
	struct file *valueList_67[]={(struct file *)0};
	unsigned int listLength_67=1;
	struct file *valueList_68[]={(struct file *)0};
	unsigned int listLength_68=1;
	char valueList_69[]={0};
	unsigned int listLength_69=1;
	struct file *valueList_70[]={(struct file *)0};
	unsigned int listLength_70=1;
	struct file *valueList_71[]={(struct file *)0};
	unsigned int listLength_71=1;
	struct file *valueList_72[]={(struct file *)0};
	unsigned int listLength_72=1;
	struct file *valueList_73[]={(struct file *)0};
	unsigned int listLength_73=1;
	struct file *valueList_74[]={(struct file *)0};
	unsigned int listLength_74=1;
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
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	unsigned char useLast_42=0;
	unsigned char useLast_43=0;
	unsigned char useLast_44=0;
	unsigned char useLast_45=0;
	unsigned char useLast_46=0;
	unsigned char useLast_47=0;
	unsigned char useLast_48=0;
	unsigned char useLast_49=0;
	unsigned char useLast_50=0;
	unsigned char useLast_51=0;
	unsigned char useLast_52=0;
	unsigned char useLast_53=0;
	unsigned char useLast_54=0;
	unsigned char useLast_55=0;
	unsigned char useLast_56=0;
	unsigned char useLast_57=0;
	unsigned char useLast_58=0;
	unsigned char useLast_59=0;
	unsigned char useLast_60=0;
	unsigned char useLast_61=0;
	unsigned char useLast_62=0;
	unsigned char useLast_63=0;
	unsigned char useLast_64=0;
	unsigned char useLast_65=0;
	unsigned char useLast_66=0;
	unsigned char useLast_67=0;
	unsigned char useLast_68=0;
	unsigned char useLast_69=0;
	unsigned char useLast_70=0;
	unsigned char useLast_71=0;
	unsigned char useLast_72=0;
	unsigned char useLast_73=0;
	unsigned char useLast_74=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	release_call_counter = 0;
	acquire_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kill_4,false,0\n");
	aunit_printf("#CASE_START_test_kill_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pid=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].xstate=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[0].kstack=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			proc[0].pid=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			proc[0].killed=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			proc[1].pid=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			proc[1].sz=(unsigned long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			proc[1].xstate=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			proc[1].kstack=(unsigned long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			proc[1].killed=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			proc[0].sz=(unsigned long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(proc[0].ofile)[3]=(struct file *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(proc[0].name)[5]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(proc[1].name)[14]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(proc[1].name)[2]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(proc[0].name)[1]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(proc[1].name)[10]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(proc[1].name)[6]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(proc[1].ofile)[6]=(struct file *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(proc[0].name)[9]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(proc[1].ofile)[1]=(struct file *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(proc[0].name)[12]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(proc[0].ofile)[11]=(struct file *)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(proc[1].ofile)[5]=(struct file *)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(proc[0].ofile)[15]=(struct file *)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(proc[1].ofile)[15]=(struct file *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(proc[0].ofile)[8]=(struct file *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(proc[1].ofile)[11]=(struct file *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(proc[1].name)[1]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(proc[0].name)[6]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(proc[1].name)[11]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(proc[0].ofile)[6]=(struct file *)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(proc[1].name)[5]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(proc[0].name)[2]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(proc[0].ofile)[2]=(struct file *)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(proc[1].name)[9]=(char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(proc[1].ofile)[7]=(struct file *)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(proc[1].name)[15]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(proc[0].name)[15]=(char)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(proc[0].ofile)[12]=(struct file *)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(proc[0].name)[11]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(proc[1].ofile)[2]=(struct file *)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(proc[0].ofile)[7]=(struct file *)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(proc[1].ofile)[12]=(struct file *)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(proc[1].name)[12]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(proc[1].name)[0]=(char)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			(proc[0].ofile)[5]=(struct file *)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			(proc[0].name)[3]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			(proc[1].name)[4]=(char)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			(proc[0].ofile)[1]=(struct file *)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			(proc[1].ofile)[8]=(struct file *)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			(proc[1].name)[8]=(char)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		if(aUnItCoUnTeR<listLength_52 || useLast_52){
			(proc[0].name)[7]=(char)valueList_52[aUnItCoUnTeR<listLength_52?aUnItCoUnTeR:listLength_52-1];

		}
		if(aUnItCoUnTeR<listLength_53 || useLast_53){
			(proc[0].name)[14]=(char)valueList_53[aUnItCoUnTeR<listLength_53?aUnItCoUnTeR:listLength_53-1];

		}
		if(aUnItCoUnTeR<listLength_54 || useLast_54){
			(proc[0].name)[10]=(char)valueList_54[aUnItCoUnTeR<listLength_54?aUnItCoUnTeR:listLength_54-1];

		}
		if(aUnItCoUnTeR<listLength_55 || useLast_55){
			(proc[0].ofile)[13]=(struct file *)valueList_55[aUnItCoUnTeR<listLength_55?aUnItCoUnTeR:listLength_55-1];

		}
		if(aUnItCoUnTeR<listLength_56 || useLast_56){
			(proc[1].ofile)[3]=(struct file *)valueList_56[aUnItCoUnTeR<listLength_56?aUnItCoUnTeR:listLength_56-1];

		}
		if(aUnItCoUnTeR<listLength_57 || useLast_57){
			(proc[1].ofile)[13]=(struct file *)valueList_57[aUnItCoUnTeR<listLength_57?aUnItCoUnTeR:listLength_57-1];

		}
		if(aUnItCoUnTeR<listLength_58 || useLast_58){
			(proc[0].ofile)[4]=(struct file *)valueList_58[aUnItCoUnTeR<listLength_58?aUnItCoUnTeR:listLength_58-1];

		}
		if(aUnItCoUnTeR<listLength_59 || useLast_59){
			(proc[1].name)[3]=(char)valueList_59[aUnItCoUnTeR<listLength_59?aUnItCoUnTeR:listLength_59-1];

		}
		if(aUnItCoUnTeR<listLength_60 || useLast_60){
			(proc[0].name)[4]=(char)valueList_60[aUnItCoUnTeR<listLength_60?aUnItCoUnTeR:listLength_60-1];

		}
		if(aUnItCoUnTeR<listLength_61 || useLast_61){
			(proc[1].name)[13]=(char)valueList_61[aUnItCoUnTeR<listLength_61?aUnItCoUnTeR:listLength_61-1];

		}
		if(aUnItCoUnTeR<listLength_62 || useLast_62){
			(proc[0].ofile)[0]=(struct file *)valueList_62[aUnItCoUnTeR<listLength_62?aUnItCoUnTeR:listLength_62-1];

		}
		if(aUnItCoUnTeR<listLength_63 || useLast_63){
			(proc[1].name)[7]=(char)valueList_63[aUnItCoUnTeR<listLength_63?aUnItCoUnTeR:listLength_63-1];

		}
		if(aUnItCoUnTeR<listLength_64 || useLast_64){
			(proc[0].name)[0]=(char)valueList_64[aUnItCoUnTeR<listLength_64?aUnItCoUnTeR:listLength_64-1];

		}
		if(aUnItCoUnTeR<listLength_65 || useLast_65){
			(proc[1].ofile)[9]=(struct file *)valueList_65[aUnItCoUnTeR<listLength_65?aUnItCoUnTeR:listLength_65-1];

		}
		if(aUnItCoUnTeR<listLength_66 || useLast_66){
			(proc[0].name)[8]=(char)valueList_66[aUnItCoUnTeR<listLength_66?aUnItCoUnTeR:listLength_66-1];

		}
		if(aUnItCoUnTeR<listLength_67 || useLast_67){
			(proc[1].ofile)[0]=(struct file *)valueList_67[aUnItCoUnTeR<listLength_67?aUnItCoUnTeR:listLength_67-1];

		}
		if(aUnItCoUnTeR<listLength_68 || useLast_68){
			(proc[0].ofile)[10]=(struct file *)valueList_68[aUnItCoUnTeR<listLength_68?aUnItCoUnTeR:listLength_68-1];

		}
		if(aUnItCoUnTeR<listLength_69 || useLast_69){
			(proc[0].name)[13]=(char)valueList_69[aUnItCoUnTeR<listLength_69?aUnItCoUnTeR:listLength_69-1];

		}
		if(aUnItCoUnTeR<listLength_70 || useLast_70){
			(proc[1].ofile)[4]=(struct file *)valueList_70[aUnItCoUnTeR<listLength_70?aUnItCoUnTeR:listLength_70-1];

		}
		if(aUnItCoUnTeR<listLength_71 || useLast_71){
			(proc[0].ofile)[14]=(struct file *)valueList_71[aUnItCoUnTeR<listLength_71?aUnItCoUnTeR:listLength_71-1];

		}
		if(aUnItCoUnTeR<listLength_72 || useLast_72){
			(proc[1].ofile)[14]=(struct file *)valueList_72[aUnItCoUnTeR<listLength_72?aUnItCoUnTeR:listLength_72-1];

		}
		if(aUnItCoUnTeR<listLength_73 || useLast_73){
			(proc[1].ofile)[10]=(struct file *)valueList_73[aUnItCoUnTeR<listLength_73?aUnItCoUnTeR:listLength_73-1];

		}
		if(aUnItCoUnTeR<listLength_74 || useLast_74){
			(proc[0].ofile)[9]=(struct file *)valueList_74[aUnItCoUnTeR<listLength_74?aUnItCoUnTeR:listLength_74-1];

		}
		returnValue = kill(pid);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("kill","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)

	aunit_printf("#CASE_END_test_kill_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_kill_up();

	switch(caseIndex){
	case 2:
		test_kill_2();
		break;
	case 3:
		test_kill_3();
		break;
	case 4:
		test_kill_4();
		break;
	default:
		abnormal_kill_case(caseIndex);
		break;
	}

	test_kill_down();
}

