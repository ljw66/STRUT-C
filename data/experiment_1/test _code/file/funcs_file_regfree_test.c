void test_file_regfree_up(void);
void test_file_regfree_down(void);


void test_file_regfree_up(void){

	aunit_printf("\n##FUNCTION_START_file_regfree\n");
 }

void test_file_regfree_down(void){
	aunit_printf("\n##FUNCTION_END_file_regfree\n");
 }



void abnormal_file_regfree_case(int index);

void abnormal_file_regfree_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_regfree_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	file_regex_t *rx;


	//值序列相关
	file_regex_t *valueList_0[]={(file_regex_t *)rx_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	regfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_regfree_1,false,0\n");
	aunit_printf("#CASE_START_test_file_regfree_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rx=(file_regex_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(rx_PTRTO[0]).re_magic=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(rx_PTRTO[0]).re_nsub=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(rx_PTRTO[0]).re_endp=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		file_regfree(rx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("regfree","regfree_call_counter",regfree_call_counter)

	aunit_printf("#CASE_END_test_file_regfree_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_regfree_up();

	switch(caseIndex){
	case 1:
		test_file_regfree_1();
		break;
	default:
		abnormal_file_regfree_case(caseIndex);
		break;
	}

	test_file_regfree_down();
}

