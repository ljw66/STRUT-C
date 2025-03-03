void test_read_head_up(void);
void test_read_head_down(void);


void test_read_head_up(void){

	aunit_printf("\n##FUNCTION_START_read_head\n");
 }

void test_read_head_down(void){
	aunit_printf("\n##FUNCTION_END_read_head\n");
 }



void abnormal_read_head_case(int index);

void abnormal_read_head_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_read_head_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_read_head_1,false,0\n");
	aunit_printf("#CASE_START_test_read_head_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		read_head();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("read_head","log.lh.n",2,log.lh.n)
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[0]",5,(log.lh.block)[0])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[1]",10,(log.lh.block)[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_read_head_1\n");
}

void test_read_head_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_read_head_2,false,0\n");
	aunit_printf("#CASE_START_test_read_head_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		read_head();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("read_head","log.lh.n",0,log.lh.n)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_read_head_2\n");
}

void test_read_head_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={2};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_read_head_3,false,0\n");
	aunit_printf("#CASE_START_test_read_head_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		read_head();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("read_head","log.lh.n",0,log.lh.n)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_read_head_3\n");
}

void test_read_head_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_read_head_4,false,0\n");
	aunit_printf("#CASE_START_test_read_head_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		read_head();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[4]",4,(log.lh.block)[4])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[15]",15,(log.lh.block)[15])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[27]",27,(log.lh.block)[27])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[6]",6,(log.lh.block)[6])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[17]",17,(log.lh.block)[17])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[29]",29,(log.lh.block)[29])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[8]",8,(log.lh.block)[8])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[11]",11,(log.lh.block)[11])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[23]",23,(log.lh.block)[23])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[13]",13,(log.lh.block)[13])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[25]",25,(log.lh.block)[25])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[21]",21,(log.lh.block)[21])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[1]",1,(log.lh.block)[1])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[3]",3,(log.lh.block)[3])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[26]",26,(log.lh.block)[26])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[5]",5,(log.lh.block)[5])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[16]",16,(log.lh.block)[16])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[28]",28,(log.lh.block)[28])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[7]",7,(log.lh.block)[7])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[18]",18,(log.lh.block)[18])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[22]",22,(log.lh.block)[22])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[9]",9,(log.lh.block)[9])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[12]",12,(log.lh.block)[12])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[24]",24,(log.lh.block)[24])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[14]",14,(log.lh.block)[14])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[20]",20,(log.lh.block)[20])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[10]",10,(log.lh.block)[10])
	TEST_ASSERT_EQUAL_INT("read_head","log.lh.n",30,log.lh.n)
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[0]",0,(log.lh.block)[0])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[19]",19,(log.lh.block)[19])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[2]",2,(log.lh.block)[2])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_read_head_4\n");
}

void test_read_head_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	brelse_call_counter = 0;

	aunit_printf("###TEST_TREE_test_read_head_5,false,0\n");
	aunit_printf("#CASE_START_test_read_head_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			log.start=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		read_head();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("read_head","log.lh.n",3,log.lh.n)
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[0]",100,(log.lh.block)[0])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[1]",200,(log.lh.block)[1])
	TEST_ASSERT_EQUAL_INT("read_head","(log.lh.block)[2]",300,(log.lh.block)[2])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)

	aunit_printf("#CASE_END_test_read_head_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_read_head_up();

	switch(caseIndex){
	case 1:
		test_read_head_1();
		break;
	case 2:
		test_read_head_2();
		break;
	case 3:
		test_read_head_3();
		break;
	case 4:
		test_read_head_4();
		break;
	case 5:
		test_read_head_5();
		break;
	default:
		abnormal_read_head_case(caseIndex);
		break;
	}

	test_read_head_down();
}

