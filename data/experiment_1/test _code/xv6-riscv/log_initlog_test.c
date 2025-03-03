void test_initlog_up(void);
void test_initlog_down(void);


void test_initlog_up(void){

	aunit_printf("\n##FUNCTION_START_initlog\n");
 }

void test_initlog_down(void){
	aunit_printf("\n##FUNCTION_END_initlog\n");
 }



void abnormal_initlog_case(int index);

void abnormal_initlog_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_initlog_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	struct superblock *valueList_1[]={(struct superblock *)sb_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={30};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={12345};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1024};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={20};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={128};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={40};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={10};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={512};
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
	initlock_call_counter = 0;
	panic_call_counter = 0;
	recover_from_log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_initlog_1,false,0\n");
	aunit_printf("#CASE_START_test_initlog_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb=(struct superblock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			log.start=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sb_PTRTO[0]).inodestart=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(sb_PTRTO[0]).magic=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sb_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sb_PTRTO[0]).logstart=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(sb_PTRTO[0]).ninodes=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sb_PTRTO[0]).bmapstart=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(sb_PTRTO[0]).nlog=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(sb_PTRTO[0]).nblocks=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		initlog(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("initlog","log.start",20,log.start)
	TEST_ASSERT_EQUAL_INT("initlog","log.dev",1,log.dev)
	TEST_ASSERT_EQUAL_INT("initlog","log.size",10,log.size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("recover_from_log","recover_from_log_call_counter",recover_from_log_call_counter)

	aunit_printf("#CASE_END_test_initlog_1\n");
}

void test_initlog_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	struct superblock *valueList_1[]={(struct superblock *)sb_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={30};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={12345};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1024};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={20};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={128};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={40};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={10};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={512};
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
	case_id=2;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	panic_call_counter = 0;
	recover_from_log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_initlog_2,false,0\n");
	aunit_printf("#CASE_START_test_initlog_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb=(struct superblock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			log.start=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sb_PTRTO[0]).inodestart=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(sb_PTRTO[0]).magic=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sb_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sb_PTRTO[0]).logstart=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(sb_PTRTO[0]).ninodes=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sb_PTRTO[0]).bmapstart=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(sb_PTRTO[0]).nlog=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(sb_PTRTO[0]).nblocks=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		initlog(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("recover_from_log","recover_from_log_call_counter",recover_from_log_call_counter)

	aunit_printf("#CASE_END_test_initlog_2\n");
}

void test_initlog_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	struct superblock *valueList_1[]={(struct superblock *)sb_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={60};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={67890};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={2048};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={50};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={256};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={70};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={1024};
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
	case_id=3;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	panic_call_counter = 0;
	recover_from_log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_initlog_3,false,0\n");
	aunit_printf("#CASE_START_test_initlog_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb=(struct superblock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			log.start=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sb_PTRTO[0]).inodestart=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(sb_PTRTO[0]).magic=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sb_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sb_PTRTO[0]).logstart=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(sb_PTRTO[0]).ninodes=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sb_PTRTO[0]).bmapstart=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(sb_PTRTO[0]).nlog=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(sb_PTRTO[0]).nblocks=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		initlog(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("initlog","log.start",50,log.start)
	TEST_ASSERT_EQUAL_INT("initlog","log.dev",2,log.dev)
	TEST_ASSERT_EQUAL_INT("initlog","log.size",0,log.size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("recover_from_log","recover_from_log_call_counter",recover_from_log_call_counter)

	aunit_printf("#CASE_END_test_initlog_3\n");
}

void test_initlog_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int dev;
	struct superblock *sb;


	//值序列相关
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	struct superblock *valueList_1[]={(struct superblock *)sb_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={80};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={54321};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={4096};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={512};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={90};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={5};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={2048};
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
	case_id=4;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	panic_call_counter = 0;
	recover_from_log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_initlog_4,false,0\n");
	aunit_printf("#CASE_START_test_initlog_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sb=(struct superblock *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			log.start=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(sb_PTRTO[0]).inodestart=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(sb_PTRTO[0]).magic=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(sb_PTRTO[0]).size=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(sb_PTRTO[0]).logstart=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(sb_PTRTO[0]).ninodes=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(sb_PTRTO[0]).bmapstart=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(sb_PTRTO[0]).nlog=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(sb_PTRTO[0]).nblocks=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		initlog(dev,sb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("initlog","log.start",0,log.start)
	TEST_ASSERT_EQUAL_INT("initlog","log.dev",3,log.dev)
	TEST_ASSERT_EQUAL_INT("initlog","log.size",5,log.size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("recover_from_log","recover_from_log_call_counter",recover_from_log_call_counter)

	aunit_printf("#CASE_END_test_initlog_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_initlog_up();

	switch(caseIndex){
	case 1:
		test_initlog_1();
		break;
	case 2:
		test_initlog_2();
		break;
	case 3:
		test_initlog_3();
		break;
	case 4:
		test_initlog_4();
		break;
	default:
		abnormal_initlog_case(caseIndex);
		break;
	}

	test_initlog_down();
}

