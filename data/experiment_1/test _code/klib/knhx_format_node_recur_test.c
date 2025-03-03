void test_format_node_recur_up(void);
void test_format_node_recur_down(void);


void test_format_node_recur_up(void){

	aunit_printf("\n##FUNCTION_START_format_node_recur\n");
 }

void test_format_node_recur_down(void){
	aunit_printf("\n##FUNCTION_END_format_node_recur\n");
 }



void abnormal_format_node_recur_case(int index);

void abnormal_format_node_recur_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_format_node_recur_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	knhx1_t *node;
	knhx1_t *p;
	kstring_t *s;
	char *numbuf;


	//值序列相关
	knhx1_t *valueList_0[]={(knhx1_t *)p_PTRTO};
	unsigned int listLength_0=1;
	knhx1_t *valueList_1[]={(knhx1_t *)node_PTRTO};
	unsigned int listLength_1=1;
	kstring_t *valueList_2[]={(kstring_t *)s_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={100};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
	unsigned int listLength_7=1;
	double valueList_8[]={3.0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)"Node1"};
	unsigned int listLength_9=1;
	double valueList_10[]={3.0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)"Node1"};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
	unsigned int listLength_13=1;
	int valueList_14[]={1};
	unsigned int listLength_14=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	kputc_call_counter = 0;
	kputsn_call_counter = 0;
	sprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_format_node_recur_5,false,0\n");
	aunit_printf("#CASE_START_test_format_node_recur_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(knhx1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			node=(knhx1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s=(kstring_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(node_PTRTO[0]).parent=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).m=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(s_PTRTO[0]).l=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).n=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			node_PTRTO_0_child_PTRTO[0]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).d=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(node_PTRTO[0]).name=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(p_PTRTO[0]).d=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(p_PTRTO[0]).parent=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(p_PTRTO[0]).name=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(p_PTRTO[0]).n=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(p_PTRTO[0]).child[0]=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		format_node_recur(node,p,s,numbuf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("kputc","kputc_call_counter",kputc_call_counter)
	OB_INT_EXPR("kputsn","kputsn_call_counter",kputsn_call_counter)
	OB_INT_EXPR("sprintf","sprintf_call_counter",sprintf_call_counter)

	aunit_printf("#CASE_END_test_format_node_recur_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_format_node_recur_up();

	switch(caseIndex){
	case 5:
		test_format_node_recur_5();
		break;
	default:
		abnormal_format_node_recur_case(caseIndex);
		break;
	}

	test_format_node_recur_down();
}

