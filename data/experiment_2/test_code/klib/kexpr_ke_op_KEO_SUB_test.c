void test_ke_op_KEO_SUB_up(void);
void test_ke_op_KEO_SUB_down(void);


void test_ke_op_KEO_SUB_up(void){

	aunit_printf("\n##FUNCTION_START_ke_op_KEO_SUB\n");
 }

void test_ke_op_KEO_SUB_down(void){
	aunit_printf("\n##FUNCTION_END_ke_op_KEO_SUB\n");
 }



void abnormal_ke_op_KEO_SUB_case(int index);

void abnormal_ke_op_KEO_SUB_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_op_KEO_SUB_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={2};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={10};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	double valueList_6[]={3.5};
	unsigned int listLength_6=1;
	double valueList_7[]={5.5};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_SUB_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_SUB_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(q_PTRTO[0]).name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(p_PTRTO[0]).s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(q_PTRTO[0]).s=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(q_PTRTO[0]).r=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).r=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		ke_op_KEO_SUB(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_SUB","p->r",2.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_SUB","p->i",8,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_SUB_1\n");
}

void test_ke_op_KEO_SUB_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={5};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={15};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	double valueList_6[]={2.0};
	unsigned int listLength_6=1;
	double valueList_7[]={7.0};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_SUB_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_SUB_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(q_PTRTO[0]).name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(p_PTRTO[0]).s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(q_PTRTO[0]).s=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(q_PTRTO[0]).r=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).r=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		ke_op_KEO_SUB(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_SUB","p->r",5.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_SUB","p->i",10,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_SUB_2\n");
}

void test_ke_op_KEO_SUB_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={5};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={20};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	double valueList_6[]={3.0};
	unsigned int listLength_6=1;
	double valueList_7[]={8.0};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_SUB_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_SUB_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(q_PTRTO[0]).name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(p_PTRTO[0]).s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(q_PTRTO[0]).s=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(q_PTRTO[0]).r=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).r=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		ke_op_KEO_SUB(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_SUB","p->r",5.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_SUB","p->i",15,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_SUB_3\n");
}

void test_ke_op_KEO_SUB_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={10};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={25};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	double valueList_6[]={4.0};
	unsigned int listLength_6=1;
	double valueList_7[]={9.0};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_SUB_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_SUB_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(q_PTRTO[0]).name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(p_PTRTO[0]).s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(q_PTRTO[0]).s=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(q_PTRTO[0]).r=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).r=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		ke_op_KEO_SUB(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_SUB","p->r",5.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_SUB","p->i",15,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_SUB_4\n");
}

void test_ke_op_KEO_SUB_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	ke1_t *p;
	ke1_t *q;


	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)0};
	unsigned int listLength_1=1;
	long long int valueList_2[]={15};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={30};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	double valueList_6[]={5.0};
	unsigned int listLength_6=1;
	double valueList_7[]={10.0};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_ke_op_KEO_SUB_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_op_KEO_SUB_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(q_PTRTO[0]).name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(p_PTRTO[0]).s=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(q_PTRTO[0]).i=(long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(p_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(p_PTRTO[0]).i=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(q_PTRTO[0]).s=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(q_PTRTO[0]).r=(double)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(p_PTRTO[0]).r=(double)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		ke_op_KEO_SUB(p,q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("ke_op_KEO_SUB","p->r",5.0,p->r)
	TEST_ASSERT_EQUAL_LONGLONG("ke_op_KEO_SUB","p->i",15,p->i)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_ke_op_KEO_SUB_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_op_KEO_SUB_up();

	switch(caseIndex){
	case 1:
		test_ke_op_KEO_SUB_1();
		break;
	case 2:
		test_ke_op_KEO_SUB_2();
		break;
	case 3:
		test_ke_op_KEO_SUB_3();
		break;
	case 4:
		test_ke_op_KEO_SUB_4();
		break;
	case 5:
		test_ke_op_KEO_SUB_5();
		break;
	default:
		abnormal_ke_op_KEO_SUB_case(caseIndex);
		break;
	}

	test_ke_op_KEO_SUB_down();
}

