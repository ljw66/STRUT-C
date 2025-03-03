void test_malloc_up(void);
void test_malloc_down(void);


void test_malloc_up(void){

	aunit_printf("\n##FUNCTION_START_malloc\n");
 }

void test_malloc_down(void){
	aunit_printf("\n##FUNCTION_END_malloc\n");
 }



void abnormal_malloc_case(int index);

void abnormal_malloc_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_malloc_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int nbytes;

	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//值序列相关
	Header *valueList_0[]={(Header *)freep_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={64};
	unsigned int listLength_1=1;
	long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={20};
	unsigned int listLength_3=1;
	union header *valueList_4[]={(union header *)1};
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
	morecore_call_counter = 0;

	aunit_printf("###TEST_TREE_test_malloc_3,false,0\n");
	aunit_printf("#CASE_START_test_malloc_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			freep=(Header *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nbytes=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			base.x=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(freep_PTRTO[0]).s.size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(freep_PTRTO[0]).s.ptr=(union header *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = malloc(nbytes);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("malloc","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("malloc","freep->s.ptr",1,freep->s.ptr)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("malloc","freep->s.size",20,freep->s.size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("morecore","morecore_call_counter",morecore_call_counter)

	aunit_printf("#CASE_END_test_malloc_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_malloc_up();

	switch(caseIndex){
	case 3:
		test_malloc_3();
		break;
	default:
		abnormal_malloc_case(caseIndex);
		break;
	}

	test_malloc_down();
}

