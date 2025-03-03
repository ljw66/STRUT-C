void test_gettag_up(void);
void test_gettag_down(void);


void test_gettag_up(void){

	aunit_printf("\n##FUNCTION_START_gettag\n");
 }

void test_gettag_down(void){
	aunit_printf("\n##FUNCTION_END_gettag\n");
 }



void abnormal_gettag_case(int index);

void abnormal_gettag_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_gettag_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//声明返回值局部变量，若为基本类型赋默认值
	uint32_t returnValue = 0;

	//值序列相关
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	uint8_t *valueList_1[]={(uint8_t *)"0x1f, 0x80, 0x01"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_gettag_11,false,0\n");
	aunit_printf("#CASE_START_test_gettag_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			c=(uint8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = gettag(c,p,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("gettag","returnValue",129,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_gettag_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_gettag_up();

	switch(caseIndex){
	case 11:
		test_gettag_11();
		break;
	default:
		abnormal_gettag_case(caseIndex);
		break;
	}

	test_gettag_down();
}

