void test_loadseg_up(void);
void test_loadseg_down(void);


void test_loadseg_up(void){

	aunit_printf("\n##FUNCTION_START_loadseg\n");
 }

void test_loadseg_down(void){
	aunit_printf("\n##FUNCTION_END_loadseg\n");
 }



void abnormal_loadseg_case(int index);

void abnormal_loadseg_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_loadseg_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint64 *pagetable;
	unsigned long int va;
	struct inode *ip;
	unsigned int offset;
	unsigned int sz;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5000};
	unsigned int listLength_1=1;
	struct inode *valueList_2[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_2=1;
	unsigned long int valueList_3[]={0};
	unsigned int listLength_3=1;
	uint64 *valueList_4[]={(uint64 *)pagetable_PTRTO};
	unsigned int listLength_4=1;
	short int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={2};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	unsigned long int valueList_10[]={12345};
	unsigned int listLength_10=1;
	unsigned long int valueList_11[]={67890};
	unsigned int listLength_11=1;
	int valueList_12[]={1};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={5000};
	unsigned int listLength_13=1;
	short int valueList_14[]={1};
	unsigned int listLength_14=1;
	int valueList_15[]={1};
	unsigned int listLength_15=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	readi_call_counter = 0;
	walkaddr_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_loadseg_5,false,0\n");
	aunit_printf("#CASE_START_test_loadseg_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			offset=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sz=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ip=(struct inode *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			va=(unsigned long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			pagetable=(uint64 *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).minor=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).nlink=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			pagetable_PTRTO[0]=(unsigned long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			pagetable_PTRTO[1]=(unsigned long int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ip_PTRTO[0]).valid=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ip_PTRTO[0]).size=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(ip_PTRTO[0]).major=(short int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(ip_PTRTO[0]).ref=(int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = loadseg(pagetable,va,ip,offset,sz);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("loadseg","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("readi","readi_call_counter",readi_call_counter)
	OB_INT_EXPR("walkaddr","walkaddr_call_counter",walkaddr_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_loadseg_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_loadseg_up();

	switch(caseIndex){
	case 5:
		test_loadseg_5();
		break;
	default:
		abnormal_loadseg_case(caseIndex);
		break;
	}

	test_loadseg_down();
}

