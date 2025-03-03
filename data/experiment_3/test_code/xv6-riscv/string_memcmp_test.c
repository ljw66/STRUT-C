void test_memcmp_up(void);
void test_memcmp_down(void);


void test_memcmp_up(void){

	aunit_printf("\n##FUNCTION_START_memcmp\n");
 }

void test_memcmp_down(void){
	aunit_printf("\n##FUNCTION_END_memcmp\n");
 }



void abnormal_memcmp_case(int index);

void abnormal_memcmp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_memcmp_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *v1;
	void *v2;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"abc"};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"xbc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_memcmp_3,false,0\n");
	aunit_printf("#CASE_START_test_memcmp_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			v1=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			v2=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = memcmp(v1,v2,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("memcmp","returnValue",-23,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_memcmp_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_memcmp_up();

	switch(caseIndex){
	case 3:
		test_memcmp_3();
		break;
	default:
		abnormal_memcmp_case(caseIndex);
		break;
	}

	test_memcmp_down();
}

