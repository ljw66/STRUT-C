void test_delete_bt_up(void);
void test_delete_bt_down(void);


void test_delete_bt_up(void){

	aunit_printf("\n##FUNCTION_START_delete_bt\n");
 }

void test_delete_bt_down(void){
	aunit_printf("\n##FUNCTION_END_delete_bt\n");
 }



void abnormal_delete_bt_case(int index);

void abnormal_delete_bt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_bt_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	node **root;
	int ele;


	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)_root_PTRTO};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_bt_5,false,0\n");
	aunit_printf("#CASE_START_test_delete_bt_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ele=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		delete_bt(root,ele);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_bt_5\n");
}

void test_delete_bt_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	node **root;
	int ele;


	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)_root_PTRTO};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_bt_6,false,0\n");
	aunit_printf("#CASE_START_test_delete_bt_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ele=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		delete_bt(root,ele);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_bt_6\n");
}

void test_delete_bt_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	node **root;
	int ele;


	//值序列相关
	int valueList_0[]={20};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)_root_PTRTO};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_bt_7,false,0\n");
	aunit_printf("#CASE_START_test_delete_bt_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ele=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		delete_bt(root,ele);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_bt_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_bt_up();

	switch(caseIndex){
	case 5:
		test_delete_bt_5();
		break;
	case 6:
		test_delete_bt_6();
		break;
	case 7:
		test_delete_bt_7();
		break;
	default:
		abnormal_delete_bt_case(caseIndex);
		break;
	}

	test_delete_bt_down();
}

