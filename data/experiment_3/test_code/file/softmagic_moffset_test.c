void test_moffset_up(void);
void test_moffset_down(void);


void test_moffset_up(void){

	aunit_printf("\n##FUNCTION_START_moffset\n");
 }

void test_moffset_down(void){
	aunit_printf("\n##FUNCTION_END_moffset\n");
 }



void abnormal_moffset_case(int index);

void abnormal_moffset_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_moffset_18(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic *m;
	struct buffer *b;
	unsigned int offset;
	int32_t *op;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int32_t *valueList_0[]={(int32_t *)op_PTRTO};
	unsigned int listLength_0=1;
	struct buffer *valueList_1[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={90};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	FILE *valueList_4[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_4=1;
	struct magic *valueList_5[]={(struct magic *)m_PTRTO};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={170};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={13};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={1100};
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
	case_id=18;
	//初始化各桩函数调用计数器
	der_offs_call_counter = 0;
	strlen_call_counter = 0;
	file_pstring_length_size_call_counter = 0;
	strcspn_call_counter = 0;
	fprintf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_moffset_18,false,0\n");
	aunit_printf("#CASE_START_test_moffset_18\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			op=(int32_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(struct buffer *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			offset=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			stderr=(FILE *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			m=(struct magic *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			op_PTRTO[0]=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(m_PTRTO[0]).type=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(b_PTRTO[0]).flen=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = moffset(ms,m,b,offset,op);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("moffset","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("der_offs","der_offs_call_counter",der_offs_call_counter)
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("file_pstring_length_size","file_pstring_length_size_call_counter",file_pstring_length_size_call_counter)
	OB_INT_EXPR("strcspn","strcspn_call_counter",strcspn_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)

	aunit_printf("#CASE_END_test_moffset_18\n");
}

void aunit_test_func_run(int caseIndex){

	test_moffset_up();

	switch(caseIndex){
	case 18:
		test_moffset_18();
		break;
	default:
		abnormal_moffset_case(caseIndex);
		break;
	}

	test_moffset_down();
}

