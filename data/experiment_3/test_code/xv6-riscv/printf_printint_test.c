void test_printint_up(void);
void test_printint_down(void);


void test_printint_up(void){

	aunit_printf("\n##FUNCTION_START_printint\n");
 }

void test_printint_down(void){
	aunit_printf("\n##FUNCTION_END_printint\n");
 }



void abnormal_printint_case(int index);

void abnormal_printint_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_printint_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int xx;
	int base;
	int sign;


	//值序列相关
	long long int valueList_0[]={-12345};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	struct cpu *valueList_3[]={(struct cpu *)tickslock_cpu_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)tickslock_name_PTRTO};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	consputc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_printint_8,false,0\n");
	aunit_printf("#CASE_START_test_printint_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			xx=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sign=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			base=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			tickslock.cpu=(struct cpu *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tickslock.name=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		printint(xx,base,sign);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("consputc","consputc_call_counter",consputc_call_counter)

	aunit_printf("#CASE_END_test_printint_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_printint_up();

	switch(caseIndex){
	case 8:
		test_printint_8();
		break;
	default:
		abnormal_printint_case(caseIndex);
		break;
	}

	test_printint_down();
}

