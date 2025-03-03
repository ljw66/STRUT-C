void test_magic_load_buffers_up(void);
void test_magic_load_buffers_down(void);


void test_magic_load_buffers_up(void){

	aunit_printf("\n##FUNCTION_START_magic_load_buffers\n");
 }

void test_magic_load_buffers_down(void){
	aunit_printf("\n##FUNCTION_END_magic_load_buffers\n");
 }



void abnormal_magic_load_buffers_case(int index);

void abnormal_magic_load_buffers_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_load_buffers_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	void **bufs;
	size_t *sizes;
	unsigned int nbufs;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)sizes_PTRTO};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0};
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
	case_id=1;
	//初始化各桩函数调用计数器
	buffer_apprentice_call_counter = 0;

	aunit_printf("###TEST_TREE_test_magic_load_buffers_1,false,0\n");
	aunit_printf("#CASE_START_test_magic_load_buffers_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nbufs=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			sizes=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			*bufs=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			sizes_PTRTO[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = magic_load_buffers(ms,bufs,sizes,nbufs);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("magic_load_buffers","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("buffer_apprentice","buffer_apprentice_call_counter",buffer_apprentice_call_counter)

	aunit_printf("#CASE_END_test_magic_load_buffers_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_load_buffers_up();

	switch(caseIndex){
	case 1:
		test_magic_load_buffers_1();
		break;
	default:
		abnormal_magic_load_buffers_case(caseIndex);
		break;
	}

	test_magic_load_buffers_down();
}

