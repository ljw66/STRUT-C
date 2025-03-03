void test_ksw_qinit_up(void);
void test_ksw_qinit_down(void);


void test_ksw_qinit_up(void){

	aunit_printf("\n##FUNCTION_START_ksw_qinit\n");
 }

void test_ksw_qinit_down(void){
	aunit_printf("\n##FUNCTION_END_ksw_qinit\n");
 }



void abnormal_ksw_qinit_case(int index);

void abnormal_ksw_qinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksw_qinit_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int size;
	int qlen;
	uint8_t *query;
	int m;
	int8_t *mat;

	//声明返回值局部变量，若为基本类型赋默认值
	kswq_t *returnValue = 0;

	//值序列相关
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"\01\02\03\04\05\06\07\08\09"};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"abcde"};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_qinit_3,false,0\n");
	aunit_printf("#CASE_START_test_ksw_qinit_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			size=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			m=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ksw_qinit(size,qlen,query,m,mat);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("ksw_qinit","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_ksw_qinit_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksw_qinit_up();

	switch(caseIndex){
	case 3:
		test_ksw_qinit_3();
		break;
	default:
		abnormal_ksw_qinit_case(caseIndex);
		break;
	}

	test_ksw_qinit_down();
}

