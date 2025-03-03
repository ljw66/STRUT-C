void test_ke_op_KEO_BAND_up(void);
void test_ke_op_KEO_BAND_down(void);


void test_ke_op_KEO_BAND_up(void){

	aunit_printf("\n##FUNCTION_START_ke_op_KEO_BAND\n");
 }

void test_ke_op_KEO_BAND_down(void){
	aunit_printf("\n##FUNCTION_END_ke_op_KEO_BAND\n");
 }



void abnormal_ke_op_KEO_BAND_case(int index);

void abnormal_ke_op_KEO_BAND_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_op_KEO_BAND_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	ke1_t *valueList_0[]={(ke1_t *)p_PTRTO};
	unsigned int listLength_0=1;
	ke1_t *valueList_1[]={(ke1_t *)q_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	long long int valueList_6[]={0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	double valueList_8[]={0};
	unsigned int listLength_8=1;
	double valueList_9[]={0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_BAND_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_BAND_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(q_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).name=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(p_PTRTO[0]).i=(long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(q_PTRTO[0]).s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(q_PTRTO[0]).r=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(p_PTRTO[0]).r=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		ke_op_KEO_BAND(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_BAND","p->r",0.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_BAND","p->i",0,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_BAND_1\n");
}

void test_ke_op_KEO_BAND_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	ke1_t *valueList_0[]={(ke1_t *)p_PTRTO};
	unsigned int listLength_0=1;
	ke1_t *valueList_1[]={(ke1_t *)q_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	long long int valueList_6[]={42};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	double valueList_8[]={0};
	unsigned int listLength_8=1;
	double valueList_9[]={0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_BAND_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_BAND_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(q_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).name=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(p_PTRTO[0]).i=(long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(q_PTRTO[0]).s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(q_PTRTO[0]).r=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(p_PTRTO[0]).r=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		ke_op_KEO_BAND(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_BAND","p->r",0.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_BAND","p->i",0,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_BAND_2\n");
}

void test_ke_op_KEO_BAND_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	ke1_t *valueList_0[]={(ke1_t *)p_PTRTO};
	unsigned int listLength_0=1;
	ke1_t *valueList_1[]={(ke1_t *)q_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={15};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	long long int valueList_6[]={42};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	double valueList_8[]={0};
	unsigned int listLength_8=1;
	double valueList_9[]={0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_BAND_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_BAND_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(q_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).name=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(p_PTRTO[0]).i=(long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(q_PTRTO[0]).s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(q_PTRTO[0]).r=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(p_PTRTO[0]).r=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		ke_op_KEO_BAND(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_BAND","p->r",10.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_BAND","p->i",10,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_BAND_3\n");
}

void test_ke_op_KEO_BAND_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	ke1_t *valueList_0[]={(ke1_t *)p_PTRTO};
	unsigned int listLength_0=1;
	ke1_t *valueList_1[]={(ke1_t *)q_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={-15};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	long long int valueList_6[]={-42};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	double valueList_8[]={0};
	unsigned int listLength_8=1;
	double valueList_9[]={0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_BAND_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_BAND_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(ke1_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			q=(ke1_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).s=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(q_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(p_PTRTO[0]).name=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(p_PTRTO[0]).i=(long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(q_PTRTO[0]).s=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(q_PTRTO[0]).r=(double)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(p_PTRTO[0]).r=(double)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		ke_op_KEO_BAND(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_BAND","p->r",-48.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_BAND","p->i",-48,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_BAND_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_op_KEO_BAND_up();

	switch(caseIndex){
	case 1:
		test_ke_op_KEO_BAND_1();
		break;
	case 2:
		test_ke_op_KEO_BAND_2();
		break;
	case 3:
		test_ke_op_KEO_BAND_3();
		break;
	case 4:
		test_ke_op_KEO_BAND_4();
		break;
	default:
		abnormal_ke_op_KEO_BAND_case(caseIndex);
		break;
	}

	test_ke_op_KEO_BAND_down();
}

