void test_buffer_apprentice_up(void);
void test_buffer_apprentice_down(void);


void test_buffer_apprentice_up(void){

	aunit_printf("\n##FUNCTION_START_buffer_apprentice\n");
 }

void test_buffer_apprentice_down(void){
	aunit_printf("\n##FUNCTION_END_buffer_apprentice\n");
 }



void abnormal_buffer_apprentice_case(int index);

void abnormal_buffer_apprentice_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_buffer_apprentice_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic **bufs;
	size_t *sizes;
	unsigned int nbufs;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)sizes_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	struct magic *valueList_3[]={(struct magic *)1};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={10};
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
	parse_apple_call_counter = 0;
	init_file_tables_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	file_oomem_call_counter = 0;
	file_reset_call_counter = 0;
	mlist_free_call_counter = 0;
	parse_mime_call_counter = 0;
	apprentice_buf_call_counter = 0;
	add_mlist_call_counter = 0;
	mlist_free_all_call_counter = 0;
	mlist_alloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_buffer_apprentice_7,false,0\n");
	aunit_printf("#CASE_START_test_buffer_apprentice_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbufs=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sizes=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			*bufs=(struct magic *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			sizes_PTRTO[0]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = buffer_apprentice(ms,bufs,sizes,nbufs);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("buffer_apprentice","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("init_file_tables","init_file_tables_call_counter",init_file_tables_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("file_reset","file_reset_call_counter",file_reset_call_counter)
	OB_INT_EXPR("mlist_free","mlist_free_call_counter",mlist_free_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("apprentice_buf","apprentice_buf_call_counter",apprentice_buf_call_counter)
	OB_INT_EXPR("add_mlist","add_mlist_call_counter",add_mlist_call_counter)
	OB_INT_EXPR("mlist_free_all","mlist_free_all_call_counter",mlist_free_all_call_counter)
	OB_INT_EXPR("mlist_alloc","mlist_alloc_call_counter",mlist_alloc_call_counter)

	aunit_printf("#CASE_END_test_buffer_apprentice_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_buffer_apprentice_up();

	switch(caseIndex){
	case 7:
		test_buffer_apprentice_7();
		break;
	default:
		abnormal_buffer_apprentice_case(caseIndex);
		break;
	}

	test_buffer_apprentice_down();
}

