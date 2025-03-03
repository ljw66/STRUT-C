void test_dropQueue_up(void);
void test_dropQueue_down(void);


void test_dropQueue_up(void){

	aunit_printf("\n##FUNCTION_START_dropQueue\n");
 }

void test_dropQueue_down(void){
	aunit_printf("\n##FUNCTION_END_dropQueue\n");
 }



void abnormal_dropQueue_case(int index);

void abnormal_dropQueue_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_dropQueue_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct QueueRep *Q;


	//值序列相关
	struct QueueRep *valueList_0[]={(struct QueueRep *)Q_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)NULL};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	NodeT *valueList_3[]={(NodeT *)&struct_node1};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	NodeT *valueList_5[]={(NodeT *)&struct_node1};
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
	case_id=2;
	//初始化各桩函数调用计数器
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_dropQueue_2,false,0\n");
	aunit_printf("#CASE_START_test_dropQueue_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			Q=(struct QueueRep *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_node1.next=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.data=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(Q_PTRTO[0]).tail=(NodeT *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(Q_PTRTO[0]).length=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(Q_PTRTO[0]).head=(NodeT *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		dropQueue(Q);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_dropQueue_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_dropQueue_up();

	switch(caseIndex){
	case 2:
		test_dropQueue_2();
		break;
	default:
		abnormal_dropQueue_case(caseIndex);
		break;
	}

	test_dropQueue_down();
}

