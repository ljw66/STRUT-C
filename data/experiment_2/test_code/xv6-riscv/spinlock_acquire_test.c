void test_acquire_up(void);
void test_acquire_down(void);


void test_acquire_up(void){

	aunit_printf("\n##FUNCTION_START_acquire\n");
 }

void test_acquire_down(void){
	aunit_printf("\n##FUNCTION_END_acquire\n");
 }



void abnormal_acquire_case(int index);

void abnormal_acquire_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_acquire_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)&struct_cpu1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"test_lock"};
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
	case_id=1;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	__sync_lock_test_and_set_call_counter = 0;
	push_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquire_1,false,0\n");
	aunit_printf("#CASE_START_test_acquire_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_cpu1.intena=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_cpu1.noff=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

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
		acquire(lk);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("__sync_lock_test_and_set","__sync_lock_test_and_set_call_counter",__sync_lock_test_and_set_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_acquire_1\n");
}

void test_acquire_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)&struct_cpu1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"test_lock"};
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
	case_id=2;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	__sync_lock_test_and_set_call_counter = 0;
	push_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquire_2,false,0\n");
	aunit_printf("#CASE_START_test_acquire_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_cpu1.intena=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_cpu1.noff=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

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
		acquire(lk);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("__sync_lock_test_and_set","__sync_lock_test_and_set_call_counter",__sync_lock_test_and_set_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_acquire_2\n");
}

void test_acquire_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)&struct_cpu1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"test_lock"};
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
	case_id=3;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	__sync_lock_test_and_set_call_counter = 0;
	push_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquire_3,false,0\n");
	aunit_printf("#CASE_START_test_acquire_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_cpu1.intena=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_cpu1.noff=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

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
		acquire(lk);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("__sync_lock_test_and_set","__sync_lock_test_and_set_call_counter",__sync_lock_test_and_set_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_acquire_3\n");
}

void test_acquire_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)&struct_cpu1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"test_lock"};
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
	case_id=4;
	//初始化各桩函数调用计数器
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	__sync_lock_test_and_set_call_counter = 0;
	push_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquire_4,false,0\n");
	aunit_printf("#CASE_START_test_acquire_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_cpu1.intena=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_cpu1.noff=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

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
		acquire(lk);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("__sync_lock_test_and_set","__sync_lock_test_and_set_call_counter",__sync_lock_test_and_set_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_acquire_4\n");
}

void test_acquire_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct spinlock *lk;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct cpu *valueList_2[]={(struct cpu *)&struct_cpu1};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"test_lock"};
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
	holding_call_counter = 0;
	mycpu_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	__sync_lock_test_and_set_call_counter = 0;
	push_off_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_acquire_5,false,0\n");
	aunit_printf("#CASE_START_test_acquire_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_cpu1.intena=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_cpu1.noff=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

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
		acquire(lk);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("holding","holding_call_counter",holding_call_counter)
	OB_INT_EXPR("mycpu","mycpu_call_counter",mycpu_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("__sync_lock_test_and_set","__sync_lock_test_and_set_call_counter",__sync_lock_test_and_set_call_counter)
	OB_INT_EXPR("push_off","push_off_call_counter",push_off_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_acquire_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_acquire_up();

	switch(caseIndex){
	case 1:
		test_acquire_1();
		break;
	case 2:
		test_acquire_2();
		break;
	case 3:
		test_acquire_3();
		break;
	case 4:
		test_acquire_4();
		break;
	case 5:
		test_acquire_5();
		break;
	default:
		abnormal_acquire_case(caseIndex);
		break;
	}

	test_acquire_down();
}

