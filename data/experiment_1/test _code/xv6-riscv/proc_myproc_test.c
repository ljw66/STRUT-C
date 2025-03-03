void test_myproc_up(void);
void test_myproc_down(void);


void test_myproc_up(void){

	aunit_printf("\n##FUNCTION_START_myproc\n");
 }

void test_myproc_down(void){
	aunit_printf("\n##FUNCTION_END_myproc\n");
 }



void abnormal_myproc_case(int index);

void abnormal_myproc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_myproc_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct proc *returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0x1000};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0x2000};
	unsigned int listLength_4=1;
	struct file *valueList_5[]={(struct file *)0};
	unsigned int listLength_5=1;
	struct file *valueList_6[]={(struct file *)0};
	unsigned int listLength_6=1;
	struct file *valueList_7[]={(struct file *)0};
	unsigned int listLength_7=1;
	struct file *valueList_8[]={(struct file *)0};
	unsigned int listLength_8=1;
	struct file *valueList_9[]={(struct file *)0};
	unsigned int listLength_9=1;
	struct file *valueList_10[]={(struct file *)0};
	unsigned int listLength_10=1;
	struct file *valueList_11[]={(struct file *)0};
	unsigned int listLength_11=1;
	struct file *valueList_12[]={(struct file *)0};
	unsigned int listLength_12=1;
	struct file *valueList_13[]={(struct file *)0};
	unsigned int listLength_13=1;
	struct file *valueList_14[]={(struct file *)0};
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
	case_id=1;
	//初始化各桩函数调用计数器
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_1,false,0\n");
	aunit_printf("#CASE_START_test_myproc_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[0].kstack=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[0].xstate=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[0].pid=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			proc[0].killed=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			proc[0].sz=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(proc[0].ofile)[3]=(struct file *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(proc[0].ofile)[4]=(struct file *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(proc[0].ofile)[5]=(struct file *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(proc[0].ofile)[6]=(struct file *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(proc[0].ofile)[0]=(struct file *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(proc[0].ofile)[1]=(struct file *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(proc[0].ofile)[2]=(struct file *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(proc[0].ofile)[10]=(struct file *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(proc[0].ofile)[11]=(struct file *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(proc[0].ofile)[12]=(struct file *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(proc[0].ofile)[13]=(struct file *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(proc[0].ofile)[14]=(struct file *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(proc[0].ofile)[15]=(struct file *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(proc[0].ofile)[7]=(struct file *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(proc[0].ofile)[8]=(struct file *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(proc[0].ofile)[9]=(struct file *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		returnValue = myproc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","&proc[0]",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_1\n");
}

void test_myproc_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct proc *returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_2,false,0\n");
	aunit_printf("#CASE_START_test_myproc_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = myproc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","0",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_2\n");
}

void test_myproc_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct proc *returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0x2000};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	unsigned long int valueList_2[]={0x3000};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	struct file *valueList_5[]={(struct file *)0};
	unsigned int listLength_5=1;
	struct file *valueList_6[]={(struct file *)0};
	unsigned int listLength_6=1;
	struct file *valueList_7[]={(struct file *)0};
	unsigned int listLength_7=1;
	struct file *valueList_8[]={(struct file *)0};
	unsigned int listLength_8=1;
	struct file *valueList_9[]={(struct file *)1};
	unsigned int listLength_9=1;
	struct file *valueList_10[]={(struct file *)0};
	unsigned int listLength_10=1;
	struct file *valueList_11[]={(struct file *)0};
	unsigned int listLength_11=1;
	struct file *valueList_12[]={(struct file *)0};
	unsigned int listLength_12=1;
	struct file *valueList_13[]={(struct file *)0};
	unsigned int listLength_13=1;
	struct file *valueList_14[]={(struct file *)0};
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
	case_id=3;
	//初始化各桩函数调用计数器
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_3,false,0\n");
	aunit_printf("#CASE_START_test_myproc_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[1].kstack=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[1].pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[1].sz=(unsigned long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			proc[1].killed=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			proc[1].xstate=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(proc[1].ofile)[8]=(struct file *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(proc[1].ofile)[9]=(struct file *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(proc[1].ofile)[6]=(struct file *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(proc[1].ofile)[7]=(struct file *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(proc[1].ofile)[0]=(struct file *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(proc[1].ofile)[1]=(struct file *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(proc[1].ofile)[4]=(struct file *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(proc[1].ofile)[5]=(struct file *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(proc[1].ofile)[2]=(struct file *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(proc[1].ofile)[3]=(struct file *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(proc[1].ofile)[14]=(struct file *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(proc[1].ofile)[13]=(struct file *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(proc[1].ofile)[15]=(struct file *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(proc[1].ofile)[10]=(struct file *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(proc[1].ofile)[12]=(struct file *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(proc[1].ofile)[11]=(struct file *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		returnValue = myproc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","&proc[1]",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_3\n");
}

void test_myproc_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明返回值局部变量，若为基本类型赋默认值
	struct proc *returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0x3000};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0x4000};
	unsigned int listLength_4=1;
	struct file *valueList_5[]={(struct file *)2};
	unsigned int listLength_5=1;
	struct file *valueList_6[]={(struct file *)0};
	unsigned int listLength_6=1;
	struct file *valueList_7[]={(struct file *)0};
	unsigned int listLength_7=1;
	struct file *valueList_8[]={(struct file *)0};
	unsigned int listLength_8=1;
	struct file *valueList_9[]={(struct file *)0};
	unsigned int listLength_9=1;
	struct file *valueList_10[]={(struct file *)0};
	unsigned int listLength_10=1;
	struct file *valueList_11[]={(struct file *)0};
	unsigned int listLength_11=1;
	struct file *valueList_12[]={(struct file *)0};
	unsigned int listLength_12=1;
	struct file *valueList_13[]={(struct file *)0};
	unsigned int listLength_13=1;
	struct file *valueList_14[]={(struct file *)0};
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
	case_id=4;
	//初始化各桩函数调用计数器
	mycpu_call_counter = 0;
	push_off_call_counter = 0;
	pop_off_call_counter = 0;

	aunit_printf("###TEST_TREE_test_myproc_4,false,0\n");
	aunit_printf("#CASE_START_test_myproc_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			proc[2].kstack=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			proc[2].pid=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			proc[2].killed=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			proc[2].xstate=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			proc[2].sz=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(proc[2].ofile)[0]=(struct file *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(proc[2].ofile)[1]=(struct file *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(proc[2].ofile)[2]=(struct file *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(proc[2].ofile)[3]=(struct file *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(proc[2].ofile)[4]=(struct file *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(proc[2].ofile)[5]=(struct file *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(proc[2].ofile)[12]=(struct file *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(proc[2].ofile)[13]=(struct file *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(proc[2].ofile)[6]=(struct file *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(proc[2].ofile)[7]=(struct file *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(proc[2].ofile)[10]=(struct file *)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(proc[2].ofile)[11]=(struct file *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(proc[2].ofile)[8]=(struct file *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(proc[2].ofile)[9]=(struct file *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(proc[2].ofile)[14]=(struct file *)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(proc[2].ofile)[15]=(struct file *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		returnValue = myproc();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("myproc","returnValue","&proc[2]",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("pop_off","pop_off_call_counter",pop_off_call_counter)

	aunit_printf("#CASE_END_test_myproc_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_myproc_up();

	switch(caseIndex){
	case 1:
		test_myproc_1();
		break;
	case 2:
		test_myproc_2();
		break;
	case 3:
		test_myproc_3();
		break;
	case 4:
		test_myproc_4();
		break;
	default:
		abnormal_myproc_case(caseIndex);
		break;
	}

	test_myproc_down();
}

