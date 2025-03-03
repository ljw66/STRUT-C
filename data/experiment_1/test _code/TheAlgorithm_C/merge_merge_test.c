void test_merge_up(void);
void test_merge_down(void);


void test_merge_up(void){

	aunit_printf("\n##FUNCTION_START_merge\n");
 }

void test_merge_down(void){
	aunit_printf("\n##FUNCTION_END_merge\n");
 }



void abnormal_merge_case(int index);

void abnormal_merge_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_merge_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct node *valueList_0[]={(struct node *)head1_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)head2_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)130};
	unsigned int listLength_2=1;
	int valueList_3[]={120};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)140};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)160};
	unsigned int listLength_5=1;
	int valueList_6[]={150};
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
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_merge_5,false,0\n");
	aunit_printf("#CASE_START_test_merge_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head1=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			head2=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(head1_PTRTO[0]).next.data=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(head1_PTRTO[0]).data=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head1_PTRTO[0]).next.next.data=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head2_PTRTO[0]).next.data=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(head2_PTRTO[0]).data=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		merge();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("merge","head1->next->next->next->data",160,head1->next->next->next->data)
	TEST_ASSERT_EQUAL_INT("merge","head2->next->next->data",160,head2->next->next->data)
	TEST_ASSERT_EQUAL_INT("merge","head2->next->next->next->data",140,head2->next->next->next->data)
	TEST_ASSERT_EQUAL_INT("merge","head1->data",120,head1->data)
	TEST_ASSERT_EQUAL_INT("merge","head1->next->data",150,head1->next->data)
	TEST_ASSERT_EQUAL_INT("merge","head1->next->next->data",130,head1->next->next->data)
	TEST_ASSERT_EQUAL_INT("merge","head2->next->data",130,head2->next->data)
	TEST_ASSERT_EQUAL_INT("merge","head1->next->next->next->next->data",140,head1->next->next->next->next->data)
	TEST_ASSERT_EQUAL_INT("merge","head2->data",150,head2->data)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_merge_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_merge_up();

	switch(caseIndex){
	case 5:
		test_merge_5();
		break;
	default:
		abnormal_merge_case(caseIndex);
		break;
	}

	test_merge_down();
}

