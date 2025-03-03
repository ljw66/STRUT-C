void test_mlist_free_one_up(void);
void test_mlist_free_one_down(void);


void test_mlist_free_one_up(void){

	aunit_printf("\n##FUNCTION_START_mlist_free_one\n");
 }

void test_mlist_free_one_down(void){
	aunit_printf("\n##FUNCTION_END_mlist_free_one\n");
 }



void abnormal_mlist_free_one_case(int index);

void abnormal_mlist_free_one_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mlist_free_one_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct mlist *ml;


	//值序列相关
	struct mlist *valueList_0[]={(struct mlist *)ml_PTRTO};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	file_regfree_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mlist_free_one_5,false,0\n");
	aunit_printf("#CASE_START_test_mlist_free_one_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ml=(struct mlist *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		mlist_free_one(ml);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("file_regfree","file_regfree_call_counter",file_regfree_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_mlist_free_one_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_mlist_free_one_up();

	switch(caseIndex){
	case 5:
		test_mlist_free_one_5();
		break;
	default:
		abnormal_mlist_free_one_case(caseIndex);
		break;
	}

	test_mlist_free_one_down();
}

