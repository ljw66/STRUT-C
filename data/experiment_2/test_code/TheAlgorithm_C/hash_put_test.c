void test_put_up(void);
void test_put_down(void);


void test_put_up(void){

	aunit_printf("\n##FUNCTION_START_put\n");
 }

void test_put_down(void){
	aunit_printf("\n##FUNCTION_END_put\n");
 }



void abnormal_put_case(int index);

void abnormal_put_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_put_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hash_set_t *set;
	long long int hash;
	void *value;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"new_value"};
	unsigned int listLength_0=1;
	long long int valueList_1[]={1234567890};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	void *valueList_4[]={(void *)"old_value"};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)"old_value"};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	contains_hash_call_counter = 0;
	retrieve_index_from_hash_call_counter = 0;
	resize_call_counter = 0;

	aunit_printf("###TEST_TREE_test_put_5,false,0\n");
	aunit_printf("#CASE_START_test_put_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			hash=(long long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(set_PTRTO[0]).capacity=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(set_PTRTO[0]).length=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(set_PTRTO[0]).values[0]=(void *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(set_PTRTO[0]).keys[0]=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = put(set,hash,value);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("put","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("contains_hash","contains_hash_call_counter",contains_hash_call_counter)
	OB_INT_EXPR("retrieve_index_from_hash","retrieve_index_from_hash_call_counter",retrieve_index_from_hash_call_counter)
	OB_INT_EXPR("resize","resize_call_counter",resize_call_counter)

	aunit_printf("#CASE_END_test_put_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_put_up();

	switch(caseIndex){
	case 5:
		test_put_5();
		break;
	default:
		abnormal_put_case(caseIndex);
		break;
	}

	test_put_down();
}

