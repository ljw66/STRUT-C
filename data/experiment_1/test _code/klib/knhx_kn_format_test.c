void test_kn_format_up(void);
void test_kn_format_down(void);


void test_kn_format_up(void){

	aunit_printf("\n##FUNCTION_START_kn_format\n");
 }

void test_kn_format_down(void){
	aunit_printf("\n##FUNCTION_END_kn_format\n");
 }



void abnormal_kn_format_case(int index);

void abnormal_kn_format_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kn_format_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	knhx1_t *node;
	int root;
	kstring_t *s;


	//值序列相关
	knhx1_t *valueList_0[]={(knhx1_t *)node_PTRTO};
	unsigned int listLength_0=1;
	kstring_t *valueList_1[]={(kstring_t *)s_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	double valueList_6[]={0.0};
	unsigned int listLength_6=1;
	int valueList_7[]={-1};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)0};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)0};
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
	format_node_recur_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kn_format_1,false,0\n");
	aunit_printf("#CASE_START_test_kn_format_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			node=(knhx1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(kstring_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			root=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).m=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).l=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(s_PTRTO[0]).s=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(node_PTRTO[0]).d=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(node_PTRTO[0]).parent=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(node_PTRTO[0]).n=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(node_PTRTO[0]).name=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(node_PTRTO[0]).child=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		kn_format(node,root,s);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("format_node_recur","format_node_recur_call_counter",format_node_recur_call_counter)

	aunit_printf("#CASE_END_test_kn_format_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_kn_format_up();

	switch(caseIndex){
	case 1:
		test_kn_format_1();
		break;
	default:
		abnormal_kn_format_case(caseIndex);
		break;
	}

	test_kn_format_down();
}

