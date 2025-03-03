void test_reverseCArray_up(void);
void test_reverseCArray_down(void);


void test_reverseCArray_up(void){

	aunit_printf("\n##FUNCTION_START_reverseCArray\n");
 }

void test_reverseCArray_down(void){
	aunit_printf("\n##FUNCTION_END_reverseCArray\n");
 }



void abnormal_reverseCArray_case(int index);

void abnormal_reverseCArray_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_reverseCArray_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	CArray *array;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	CArray *valueList_0[]={(CArray *)array_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	swap_call_counter = 0;

	aunit_printf("###TEST_TREE_test_reverseCArray_3,false,0\n");
	aunit_printf("#CASE_START_test_reverseCArray_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			array=(CArray *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			array_PTRTO_0_array_PTRTO[0]=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			array_PTRTO_0_array_PTRTO[1]=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(array_PTRTO[0]).size=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = reverseCArray(array);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("reverseCArray","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("swap","swap_call_counter",swap_call_counter)

	aunit_printf("#CASE_END_test_reverseCArray_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_reverseCArray_up();

	switch(caseIndex){
	case 3:
		test_reverseCArray_3();
		break;
	default:
		abnormal_reverseCArray_case(caseIndex);
		break;
	}

	test_reverseCArray_down();
}

