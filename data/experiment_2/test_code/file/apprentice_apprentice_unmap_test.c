void test_apprentice_unmap_up(void);
void test_apprentice_unmap_down(void);


void test_apprentice_unmap_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_unmap\n");
 }

void test_apprentice_unmap_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_unmap\n");
 }



void abnormal_apprentice_unmap_case(int index);

void abnormal_apprentice_unmap_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_unmap_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_map *map;


	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	free_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_unmap_1,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_unmap_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		apprentice_unmap(map);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_apprentice_unmap_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_unmap_up();

	switch(caseIndex){
	case 1:
		test_apprentice_unmap_1();
		break;
	default:
		abnormal_apprentice_unmap_case(caseIndex);
		break;
	}

	test_apprentice_unmap_down();
}

