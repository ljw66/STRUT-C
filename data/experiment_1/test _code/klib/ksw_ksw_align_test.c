void test_ksw_align_up(void);
void test_ksw_align_down(void);


void test_ksw_align_up(void){

	aunit_printf("\n##FUNCTION_START_ksw_align\n");
 }

void test_ksw_align_down(void){
	aunit_printf("\n##FUNCTION_END_ksw_align\n");
 }



void abnormal_ksw_align_case(int index);

void abnormal_ksw_align_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksw_align_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int qlen;
	uint8_t *query;
	int tlen;
	uint8_t *target;
	int m;
	int8_t *mat;
	int gapo;
	int gape;
	int xtra;
	kswq_t **qry;

	//声明返回值局部变量，若为基本类型赋默认值
	kswr_t returnValue;

	//值序列相关
	int valueList_0[]={100};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"complex_matrix"};
	unsigned int listLength_1=1;
	int valueList_2[]={0x80000};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"AGCTAGCTAGCTAGCTAGCT"};
	unsigned int listLength_3=1;
	int valueList_4[]={110};
	unsigned int listLength_4=1;
	int valueList_5[]={4};
	unsigned int listLength_5=1;
	int valueList_6[]={6};
	unsigned int listLength_6=1;
	uint8_t *valueList_7[]={(uint8_t *)"GCTAGCTAGCTAGCTAGCTA"};
	unsigned int listLength_7=1;
	int valueList_8[]={1};
	unsigned int listLength_8=1;
	kswq_t *valueList_9[]={(kswq_t *)0};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	ksw_u8_call_counter = 0;
	revseq_call_counter = 0;
	ksw_qinit_call_counter = 0;
	free_call_counter = 0;
	ksw_i16_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_align_6,false,0\n");
	aunit_printf("#CASE_START_test_ksw_align_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			xtra=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			gapo=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			target=(uint8_t *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			gape=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			*qry=(kswq_t *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = ksw_align(qlen,query,tlen,target,m,mat,gapo,gape,xtra,qry);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ksw_align","returnValue.qe",50,returnValue.qe)
	TEST_ASSERT_EQUAL_INT("ksw_align","returnValue.score",100,returnValue.score)
	TEST_ASSERT_EQUAL_INT("ksw_align","returnValue.tb",0,returnValue.tb)
	TEST_ASSERT_EQUAL_INT("ksw_align","returnValue.te",50,returnValue.te)
	TEST_ASSERT_EQUAL_INT("ksw_align","returnValue.qb",0,returnValue.qb)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("ksw_u8","ksw_u8_call_counter",ksw_u8_call_counter)
	OB_INT_EXPR("revseq","revseq_call_counter",revseq_call_counter)
	OB_INT_EXPR("ksw_qinit","ksw_qinit_call_counter",ksw_qinit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksw_i16","ksw_i16_call_counter",ksw_i16_call_counter)

	aunit_printf("#CASE_END_test_ksw_align_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksw_align_up();

	switch(caseIndex){
	case 6:
		test_ksw_align_6();
		break;
	default:
		abnormal_ksw_align_case(caseIndex);
		break;
	}

	test_ksw_align_down();
}

