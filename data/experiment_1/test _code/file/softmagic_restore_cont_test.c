void test_restore_cont_up(void);
void test_restore_cont_down(void);


void test_restore_cont_up(void){

	aunit_printf("\n##FUNCTION_START_restore_cont\n");
 }

void test_restore_cont_down(void){
	aunit_printf("\n##FUNCTION_END_restore_cont\n");
 }



void abnormal_restore_cont_case(int index);

void abnormal_restore_cont_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_restore_cont_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct cont *c;


	//值序列相关
	struct cont *valueList_0[]={(struct cont *)c_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={20};
	unsigned int listLength_5=1;
	struct level_info *valueList_6[]={(struct level_info *)&struct_level_info1};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={10};
	unsigned int listLength_7=1;
	struct level_info *valueList_8[]={(struct level_info *)NULL};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_restore_cont_1,false,0\n");
	aunit_printf("#CASE_START_test_restore_cont_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(struct cont *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_level_info1.last_match=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_level_info1.last_cond=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_level_info1.got_match=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_level_info1.off=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(c_PTRTO[0]).li=(struct level_info *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(c_PTRTO[0]).len=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).c.li=(struct level_info *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		restore_cont(ms,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_restore_cont_1\n");
}

void test_restore_cont_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct cont *c;


	//值序列相关
	struct cont *valueList_0[]={(struct cont *)c_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	int valueList_6[]={15};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={30};
	unsigned int listLength_9=1;
	struct level_info *valueList_10[]={(struct level_info *)&struct_level_info3};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={20};
	unsigned int listLength_11=1;
	struct level_info *valueList_12[]={(struct level_info *)&struct_level_info2};
	unsigned int listLength_12=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_restore_cont_2,false,0\n");
	aunit_printf("#CASE_START_test_restore_cont_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(struct cont *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_level_info3.got_match=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_level_info3.last_match=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_level_info3.last_cond=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_level_info2.last_cond=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_level_info2.off=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_level_info2.last_match=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			struct_level_info2.got_match=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_level_info3.off=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(c_PTRTO[0]).li=(struct level_info *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(c_PTRTO[0]).len=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).c.li=(struct level_info *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		restore_cont(ms,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_restore_cont_2\n");
}

void test_restore_cont_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct cont *c;


	//值序列相关
	struct cont *valueList_0[]={(struct cont *)c_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={5};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	struct level_info *valueList_6[]={(struct level_info *)NULL};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	struct level_info *valueList_8[]={(struct level_info *)&struct_level_info4};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_restore_cont_3,false,0\n");
	aunit_printf("#CASE_START_test_restore_cont_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(struct cont *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_level_info4.last_cond=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_level_info4.last_match=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_level_info4.off=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_level_info4.got_match=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(c_PTRTO[0]).li=(struct level_info *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(c_PTRTO[0]).len=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).c.li=(struct level_info *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		restore_cont(ms,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_restore_cont_3\n");
}

void test_restore_cont_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct cont *c;


	//值序列相关
	struct cont *valueList_0[]={(struct cont *)c_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	struct level_info *valueList_2[]={(struct level_info *)NULL};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	struct level_info *valueList_4[]={(struct level_info *)NULL};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_restore_cont_4,false,0\n");
	aunit_printf("#CASE_START_test_restore_cont_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(struct cont *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(c_PTRTO[0]).li=(struct level_info *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(c_PTRTO[0]).len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).c.li=(struct level_info *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		restore_cont(ms,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_restore_cont_4\n");
}

void test_restore_cont_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct cont *c;


	//值序列相关
	struct cont *valueList_0[]={(struct cont *)c_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={200};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
	unsigned int listLength_7=1;
	int valueList_8[]={100};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	struct level_info *valueList_10[]={(struct level_info *)&struct_level_info6};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={4294967295};
	unsigned int listLength_11=1;
	struct level_info *valueList_12[]={(struct level_info *)&struct_level_info5};
	unsigned int listLength_12=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_restore_cont_5,false,0\n");
	aunit_printf("#CASE_START_test_restore_cont_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			c=(struct cont *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_level_info5.last_cond=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_level_info6.off=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_level_info6.last_match=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_level_info6.last_cond=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_level_info5.got_match=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_level_info6.got_match=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			struct_level_info5.off=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_level_info5.last_match=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(c_PTRTO[0]).li=(struct level_info *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(c_PTRTO[0]).len=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).c.li=(struct level_info *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		restore_cont(ms,c);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_restore_cont_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_restore_cont_up();

	switch(caseIndex){
	case 1:
		test_restore_cont_1();
		break;
	case 2:
		test_restore_cont_2();
		break;
	case 3:
		test_restore_cont_3();
		break;
	case 4:
		test_restore_cont_4();
		break;
	case 5:
		test_restore_cont_5();
		break;
	default:
		abnormal_restore_cont_case(caseIndex);
		break;
	}

	test_restore_cont_down();
}

