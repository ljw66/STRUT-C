void test_km_stat_up(void);
void test_km_stat_down(void);


void test_km_stat_up(void){

	aunit_printf("\n##FUNCTION_START_km_stat\n");
 }

void test_km_stat_down(void){
	aunit_printf("\n##FUNCTION_END_km_stat\n");
 }



void abnormal_km_stat_case(int index);

void abnormal_km_stat_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_stat_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	kmem_t *_km;
	km_stat_t *s;


	//值序列相关
	void *valueList_0[]={(void *)&km};
	unsigned int listLength_0=1;
	km_stat_t *valueList_1[]={(km_stat_t *)s_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	panic_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_stat_8,false,0\n");
	aunit_printf("#CASE_START_test_km_stat_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_km=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(km_stat_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).largest=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).n_cores=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).available=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(s_PTRTO[0]).n_blocks=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(s_PTRTO[0]).capacity=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		km_stat(_km,s);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("km_stat","s->n_cores",1,s->n_cores)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("km_stat","s->n_blocks",0,s->n_blocks)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("km_stat","s->capacity","3 * sizeof(header_t)",s->capacity)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("km_stat","s->largest","3 * sizeof(header_t)",s->largest)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("km_stat","s->available",0,s->available)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_km_stat_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_stat_up();

	switch(caseIndex){
	case 8:
		test_km_stat_8();
		break;
	default:
		abnormal_km_stat_case(caseIndex);
		break;
	}

	test_km_stat_down();
}

