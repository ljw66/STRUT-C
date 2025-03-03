void test_delete_bt_up(void);
void test_delete_bt_down(void);


void test_delete_bt_up(void){

	aunit_printf("\n##FUNCTION_START_delete_bt\n");
 }

void test_delete_bt_down(void){
	aunit_printf("\n##FUNCTION_END_delete_bt\n");
 }



void abnormal_delete_bt_case(int index);

void abnormal_delete_bt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_bt_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	node **root;
	int ele;


	//值序列相关
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)_root_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	struct Node *valueList_3[]={(struct Node *)_root_PTRTO_0_rlink_PTRTO};
	unsigned int listLength_3=1;
	int valueList_4[]={5};
	unsigned int listLength_4=1;
	struct Node *valueList_5[]={(struct Node *)0};
	unsigned int listLength_5=1;
	struct Node *valueList_6[]={(struct Node *)0};
	unsigned int listLength_6=1;
	struct Node *valueList_7[]={(struct Node *)0};
	unsigned int listLength_7=1;
	struct Node *valueList_8[]={(struct Node *)_root_PTRTO_0_llink_PTRTO};
	unsigned int listLength_8=1;
	int valueList_9[]={15};
	unsigned int listLength_9=1;
	struct Node *valueList_10[]={(struct Node *)0};
	unsigned int listLength_10=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_delete_bt_7,false,0\n");
	aunit_printf("#CASE_START_test_delete_bt_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ele=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			*root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(_root_PTRTO[0]).data=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(_root_PTRTO[0]).rlink=(struct Node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(_root_PTRTO_0_llink_PTRTO[0]).data=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(_root_PTRTO_0_rlink_PTRTO[0]).rlink=(struct Node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(_root_PTRTO_0_llink_PTRTO[0]).llink=(struct Node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(_root_PTRTO_0_llink_PTRTO[0]).rlink=(struct Node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(_root_PTRTO[0]).llink=(struct Node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(_root_PTRTO_0_rlink_PTRTO[0]).data=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(_root_PTRTO_0_rlink_PTRTO[0]).llink=(struct Node *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		delete_bt(root,ele);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_delete_bt_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_bt_up();

	switch(caseIndex){
	case 7:
		test_delete_bt_7();
		break;
	default:
		abnormal_delete_bt_case(caseIndex);
		break;
	}

	test_delete_bt_down();
}

