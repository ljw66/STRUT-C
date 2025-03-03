void test_utf8IteratorGetNextCodePoint_up(void);
void test_utf8IteratorGetNextCodePoint_down(void);


void test_utf8IteratorGetNextCodePoint_up(void){

	aunit_printf("\n##FUNCTION_START_utf8IteratorGetNextCodePoint\n");
 }

void test_utf8IteratorGetNextCodePoint_down(void){
	aunit_printf("\n##FUNCTION_END_utf8IteratorGetNextCodePoint\n");
 }



void abnormal_utf8IteratorGetNextCodePoint_case(int index);

void abnormal_utf8IteratorGetNextCodePoint_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_utf8IteratorGetNextCodePoint_12(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"0xC2A2"};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
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
	case_id=12;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetNextCodePoint_12,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetNextCodePoint_12\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(iter_PTRTO[0]).next=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(iter_PTRTO[0]).error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).start=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = utf8IteratorGetNextCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetNextCodePoint","returnValue",0xA2,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetNextCodePoint_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_utf8IteratorGetNextCodePoint_up();

	switch(caseIndex){
	case 12:
		test_utf8IteratorGetNextCodePoint_12();
		break;
	default:
		abnormal_utf8IteratorGetNextCodePoint_case(caseIndex);
		break;
	}

	test_utf8IteratorGetNextCodePoint_down();
}

