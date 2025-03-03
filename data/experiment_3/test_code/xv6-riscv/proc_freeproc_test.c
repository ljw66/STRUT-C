void test_freeproc_up(void);
void test_freeproc_down(void);


void test_freeproc_up(void){

	aunit_printf("\n##FUNCTION_START_freeproc\n");
 }

void test_freeproc_down(void){
	aunit_printf("\n##FUNCTION_END_freeproc\n");
 }



void abnormal_freeproc_case(int index);

void abnormal_freeproc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_freeproc_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct proc *p;


	//值序列相关
	struct proc *valueList_0[]={(struct proc *)p_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	struct trapframe *valueList_3[]={(struct trapframe *)0};
	unsigned int listLength_3=1;
	int valueList_4[]={42};
	unsigned int listLength_4=1;
	unsigned long int valueList_5[]={4096};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned long int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned long int valueList_8[]={0};
	unsigned int listLength_8=1;
	void *valueList_9[]={(void *)0};
	unsigned int listLength_9=1;
	int valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	uint64 *valueList_12[]={(uint64 *)&pagetable1};
	unsigned int listLength_12=1;
	unsigned long int valueList_13[]={0};
	unsigned int listLength_13=1;
	struct proc *valueList_14[]={(struct proc *)&struct_proc1};
	unsigned int listLength_14=1;
	int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned long int valueList_16[]={0};
	unsigned int listLength_16=1;
	int valueList_17[]={0};
	unsigned int listLength_17=1;
	int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned long int valueList_19[]={0};
	unsigned int listLength_19=1;
	struct file *valueList_20[]={(struct file *)0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	struct file *valueList_25[]={(struct file *)0};
	unsigned int listLength_25=1;
	struct file *valueList_26[]={(struct file *)0};
	unsigned int listLength_26=1;
	struct file *valueList_27[]={(struct file *)0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	struct file *valueList_29[]={(struct file *)0};
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
	char valueList_37[]={0};
	unsigned int listLength_37=1;
	struct file *valueList_38[]={(struct file *)0};
	unsigned int listLength_38=1;
	char valueList_39[]={0};
	unsigned int listLength_39=1;
	char valueList_40[]={0};
	unsigned int listLength_40=1;
	char valueList_41[]={0};
	unsigned int listLength_41=1;
	struct file *valueList_42[]={(struct file *)0};
	unsigned int listLength_42=1;
	struct file *valueList_43[]={(struct file *)0};
	unsigned int listLength_43=1;
	char valueList_44[]={0};
	unsigned int listLength_44=1;
	struct file *valueList_45[]={(struct file *)0};
	unsigned int listLength_45=1;
	char valueList_46[]={0};
	unsigned int listLength_46=1;
	char valueList_47[]={0};
	unsigned int listLength_47=1;
	struct file *valueList_48[]={(struct file *)0};
	unsigned int listLength_48=1;
	char valueList_49[]={0};
	unsigned int listLength_49=1;
	struct file *valueList_50[]={(struct file *)0};
	unsigned int listLength_50=1;
	struct file *valueList_51[]={(struct file *)0};
	unsigned int listLength_51=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	kfree_call_counter = 0;
	proc_freepagetable_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freeproc_5,false,0\n");
	aunit_printf("#CASE_START_test_freeproc_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(struct proc *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_proc1.killed=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(p_PTRTO[0]).killed=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).trapframe=(struct trapframe *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).pid=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).sz=(unsigned long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_proc1.pid=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_proc1.kstack=(unsigned long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(p_PTRTO[0]).kstack=(unsigned long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(p_PTRTO[0]).chan=(void *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(p_PTRTO[0]).xstate=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			struct_proc1.xstate=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(p_PTRTO[0]).pagetable=(uint64 *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			struct_proc1.sz=(unsigned long int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(p_PTRTO[0]).parent=(struct proc *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			proc[0].xstate=(int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			proc[0].kstack=(unsigned long int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			proc[0].pid=(int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			proc[0].killed=(int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			proc[0].sz=(unsigned long int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(proc[0].ofile)[3]=(struct file *)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(proc[0].name)[5]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(proc[0].name)[1]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(proc[0].name)[9]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(proc[0].name)[12]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(proc[0].ofile)[11]=(struct file *)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(proc[0].ofile)[15]=(struct file *)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(proc[0].ofile)[8]=(struct file *)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(proc[0].name)[6]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(proc[0].ofile)[6]=(struct file *)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(proc[0].name)[2]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(proc[0].ofile)[2]=(struct file *)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(proc[0].name)[15]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(proc[0].ofile)[12]=(struct file *)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(proc[0].name)[11]=(char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(proc[0].ofile)[7]=(struct file *)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(proc[0].ofile)[5]=(struct file *)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(proc[0].name)[3]=(char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(proc[0].ofile)[1]=(struct file *)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(proc[0].name)[7]=(char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(proc[0].name)[14]=(char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(proc[0].name)[10]=(char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		if(aUnItCoUnTeR<listLength_42 || useLast_42){
			(proc[0].ofile)[13]=(struct file *)valueList_42[aUnItCoUnTeR<listLength_42?aUnItCoUnTeR:listLength_42-1];

		}
		if(aUnItCoUnTeR<listLength_43 || useLast_43){
			(proc[0].ofile)[4]=(struct file *)valueList_43[aUnItCoUnTeR<listLength_43?aUnItCoUnTeR:listLength_43-1];

		}
		if(aUnItCoUnTeR<listLength_44 || useLast_44){
			(proc[0].name)[4]=(char)valueList_44[aUnItCoUnTeR<listLength_44?aUnItCoUnTeR:listLength_44-1];

		}
		if(aUnItCoUnTeR<listLength_45 || useLast_45){
			(proc[0].ofile)[0]=(struct file *)valueList_45[aUnItCoUnTeR<listLength_45?aUnItCoUnTeR:listLength_45-1];

		}
		if(aUnItCoUnTeR<listLength_46 || useLast_46){
			(proc[0].name)[0]=(char)valueList_46[aUnItCoUnTeR<listLength_46?aUnItCoUnTeR:listLength_46-1];

		}
		if(aUnItCoUnTeR<listLength_47 || useLast_47){
			(proc[0].name)[8]=(char)valueList_47[aUnItCoUnTeR<listLength_47?aUnItCoUnTeR:listLength_47-1];

		}
		if(aUnItCoUnTeR<listLength_48 || useLast_48){
			(proc[0].ofile)[10]=(struct file *)valueList_48[aUnItCoUnTeR<listLength_48?aUnItCoUnTeR:listLength_48-1];

		}
		if(aUnItCoUnTeR<listLength_49 || useLast_49){
			(proc[0].name)[13]=(char)valueList_49[aUnItCoUnTeR<listLength_49?aUnItCoUnTeR:listLength_49-1];

		}
		if(aUnItCoUnTeR<listLength_50 || useLast_50){
			(proc[0].ofile)[14]=(struct file *)valueList_50[aUnItCoUnTeR<listLength_50?aUnItCoUnTeR:listLength_50-1];

		}
		if(aUnItCoUnTeR<listLength_51 || useLast_51){
			(proc[0].ofile)[9]=(struct file *)valueList_51[aUnItCoUnTeR<listLength_51?aUnItCoUnTeR:listLength_51-1];

		}
		freeproc(p);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)
	OB_INT_EXPR("proc_freepagetable","proc_freepagetable_call_counter",proc_freepagetable_call_counter)

	aunit_printf("#CASE_END_test_freeproc_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_freeproc_up();

	switch(caseIndex){
	case 5:
		test_freeproc_5();
		break;
	default:
		abnormal_freeproc_case(caseIndex);
		break;
	}

	test_freeproc_down();
}

