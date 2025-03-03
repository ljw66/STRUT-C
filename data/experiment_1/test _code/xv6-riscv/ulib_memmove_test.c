void test_memmove_up(void);
void test_memmove_down(void);


void test_memmove_up(void){

	aunit_printf("\n##FUNCTION_START_memmove\n");
 }

void test_memmove_down(void){
	aunit_printf("\n##FUNCTION_END_memmove\n");
 }



void abnormal_memmove_case(int index);

void abnormal_memmove_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_memmove_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *vdst;
	void *vsrc;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	void *returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)"ABCDEFGH"};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"ABCDEFGH"};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_memmove_3,false,0\n");
	aunit_printf("#CASE_START_test_memmove_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vdst=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vsrc=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = memmove(vdst,vsrc,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("memmove","returnValue",returnValue)
	TEST_ASSERT_EQUAL_LONG("memmove","vdst","ABCDEEFH",vdst)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_memmove_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_memmove_up();

	switch(caseIndex){
	case 3:
		test_memmove_3();
		break;
	default:
		abnormal_memmove_case(caseIndex);
		break;
	}

	test_memmove_down();
}

