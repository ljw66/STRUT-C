void test_file_strncmp_up(void);
void test_file_strncmp_down(void);


void test_file_strncmp_up(void){

	aunit_printf("\n##FUNCTION_START_file_strncmp\n");
 }

void test_file_strncmp_down(void){
	aunit_printf("\n##FUNCTION_END_file_strncmp\n");
 }



void abnormal_file_strncmp_case(int index);

void abnormal_file_strncmp_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_strncmp_13(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *s1;
	char *s2;
	unsigned int len;
	unsigned int maxlen;
	unsigned int flags;

	//声明返回值局部变量，若为基本类型赋默认值
	uint64_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"a "};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={2};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"a"};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=13;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;
	toupper_call_counter = 0;
	islower_call_counter = 0;
	isupper_call_counter = 0;
	isspace_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_strncmp_13,false,0\n");
	aunit_printf("#CASE_START_test_file_strncmp_13\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			flags=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s1=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			maxlen=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			s2=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_strncmp(s1,s2,len,maxlen,flags);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_strncmp","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)
	OB_INT_EXPR("toupper","toupper_call_counter",toupper_call_counter)
	OB_INT_EXPR("islower","islower_call_counter",islower_call_counter)
	OB_INT_EXPR("isupper","isupper_call_counter",isupper_call_counter)
	OB_INT_EXPR("isspace","isspace_call_counter",isspace_call_counter)

	aunit_printf("#CASE_END_test_file_strncmp_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_strncmp_up();

	switch(caseIndex){
	case 13:
		test_file_strncmp_13();
		break;
	default:
		abnormal_file_strncmp_case(caseIndex);
		break;
	}

	test_file_strncmp_down();
}

