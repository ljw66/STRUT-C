void test_initlock_up(void);
void test_initlock_down(void);


void test_initlock_up(void){

	aunit_printf("\n##FUNCTION_START_initlock\n");
 }

void test_initlock_down(void){
	aunit_printf("\n##FUNCTION_END_initlock\n");
 }



void abnormal_initlock_case(int index);

void abnormal_initlock_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_initlock_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;
	char *name;


	//值序列相关
	char *valueList_0[]={(char *)"spinlock1"};
	unsigned int listLength_0=1;
	struct spinlock *valueList_1[]={(struct spinlock *)lk_PTRTO};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)1234};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_initlock_1,false,0\n");
	aunit_printf("#CASE_START_test_initlock_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lk=(struct spinlock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).cpu=(struct cpu *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		initlock(lk,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("initlock","lk->cpu",0,lk->cpu)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("initlock","lk->locked",0,lk->locked)
	TEST_ASSERT_EQUAL_STRING("initlock","lk->name","spinlock1",lk->name)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_initlock_1\n");
}

void test_initlock_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;
	char *name;


	//值序列相关
	struct spinlock *valueList_0[]={(struct spinlock *)lk_PTRTO};
	unsigned int listLength_0=1;
	struct cpu *valueList_1[]={(struct cpu *)5678};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_initlock_2,false,0\n");
	aunit_printf("#CASE_START_test_initlock_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			lk=(struct spinlock *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(lk_PTRTO[0]).cpu=(struct cpu *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).name=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		initlock(lk,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("initlock","lk->cpu",0,lk->cpu)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("initlock","lk->locked",0,lk->locked)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_initlock_2\n");
}

void test_initlock_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;
	char *name;


	//值序列相关
	char *valueList_0[]={(char *)0};
	unsigned int listLength_0=1;
	struct spinlock *valueList_1[]={(struct spinlock *)lk_PTRTO};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_initlock_3,false,0\n");
	aunit_printf("#CASE_START_test_initlock_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lk=(struct spinlock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).cpu=(struct cpu *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		initlock(lk,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("initlock","lk->cpu",0,lk->cpu)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("initlock","lk->locked",0,lk->locked)
	TEST_ASSERT_EQUAL_STRING("initlock","lk->name",0,lk->name)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_initlock_3\n");
}

void test_initlock_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;
	char *name;


	//值序列相关
	char *valueList_0[]={(char *)"new_spinlock"};
	unsigned int listLength_0=1;
	struct spinlock *valueList_1[]={(struct spinlock *)lk_PTRTO};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)9999};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"old_name"};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
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

	aunit_printf("###TEST_TREE_test_initlock_4,false,0\n");
	aunit_printf("#CASE_START_test_initlock_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lk=(struct spinlock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).cpu=(struct cpu *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		initlock(lk,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("initlock","lk->cpu",0,lk->cpu)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("initlock","lk->locked",0,lk->locked)
	TEST_ASSERT_EQUAL_STRING("initlock","lk->name","new_spinlock",lk->name)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_initlock_4\n");
}

void test_initlock_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;
	char *name;


	//值序列相关
	char *valueList_0[]={(char *)"this_is_a_very_large_name_for_a_spinlock"};
	unsigned int listLength_0=1;
	struct spinlock *valueList_1[]={(struct spinlock *)lk_PTRTO};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)0};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_initlock_5,false,0\n");
	aunit_printf("#CASE_START_test_initlock_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lk=(struct spinlock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).cpu=(struct cpu *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		initlock(lk,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("initlock","lk->cpu",0,lk->cpu)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("initlock","lk->locked",0,lk->locked)
	TEST_ASSERT_EQUAL_STRING("initlock","lk->name","this_is_a_very_large_name_for_a_spinlock",lk->name)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_initlock_5\n");
}

void test_initlock_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;
	char *name;


	//值序列相关
	char *valueList_0[]={(char *)"uninitialized_spinlock"};
	unsigned int listLength_0=1;
	struct spinlock *valueList_1[]={(struct spinlock *)lk_PTRTO};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_initlock_6,false,0\n");
	aunit_printf("#CASE_START_test_initlock_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lk=(struct spinlock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		initlock(lk,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_initlock_6\n");
}

void test_initlock_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;
	char *name;


	//值序列相关
	char *valueList_0[]={(char *)"reinitialized_spinlock"};
	unsigned int listLength_0=1;
	struct spinlock *valueList_1[]={(struct spinlock *)lk_PTRTO};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)4321};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"old_spinlock"};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_initlock_7,false,0\n");
	aunit_printf("#CASE_START_test_initlock_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			lk=(struct spinlock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(lk_PTRTO[0]).cpu=(struct cpu *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(lk_PTRTO[0]).name=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(lk_PTRTO[0]).locked=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		initlock(lk,name);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("initlock","lk->cpu",0,lk->cpu)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("initlock","lk->locked",0,lk->locked)
	TEST_ASSERT_EQUAL_STRING("initlock","lk->name","reinitialized_spinlock",lk->name)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_initlock_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_initlock_up();

	switch(caseIndex){
	case 1:
		test_initlock_1();
		break;
	case 2:
		test_initlock_2();
		break;
	case 3:
		test_initlock_3();
		break;
	case 4:
		test_initlock_4();
		break;
	case 5:
		test_initlock_5();
		break;
	case 6:
		test_initlock_6();
		break;
	case 7:
		test_initlock_7();
		break;
	default:
		abnormal_initlock_case(caseIndex);
		break;
	}

	test_initlock_down();
}

