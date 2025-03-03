void test_segment_tree_update_up(void);
void test_segment_tree_update_down(void);


void test_segment_tree_update_up(void){

	aunit_printf("\n##FUNCTION_START_segment_tree_update\n");
 }

void test_segment_tree_update_down(void){
	aunit_printf("\n##FUNCTION_END_segment_tree_update\n");
 }



void abnormal_segment_tree_update_case(int index);

void abnormal_segment_tree_update_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_segment_tree_update_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	segment_tree *tree;
	unsigned int index;
	void *val;


	//值序列相关
	segment_tree *valueList_0[]={(segment_tree *)tree_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0x1000};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)0x2000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={4};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={8};
	unsigned int listLength_5=1;
	void (*valueList_6[])(const void *, const void *, void *)={(void (*)(const void *, const void *, void *))"combine_func"};
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
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_segment_tree_update_1,false,0\n");
	aunit_printf("#CASE_START_test_segment_tree_update_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			tree=(segment_tree *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			index=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(tree_PTRTO[0]).root=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(tree_PTRTO[0]).identity=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tree_PTRTO[0]).elem_size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(tree_PTRTO[0]).length=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(tree_PTRTO[0]).combine=(void (*)(const void *, const void *, void *))valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		segment_tree_update(tree,index,val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_segment_tree_update_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_segment_tree_update_up();

	switch(caseIndex){
	case 1:
		test_segment_tree_update_1();
		break;
	default:
		abnormal_segment_tree_update_case(caseIndex);
		break;
	}

	test_segment_tree_update_down();
}

