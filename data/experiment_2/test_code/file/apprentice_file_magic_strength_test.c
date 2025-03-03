void test_file_magic_strength_up(void);
void test_file_magic_strength_down(void);


void test_file_magic_strength_up(void){

	aunit_printf("\n##FUNCTION_START_file_magic_strength\n");
 }

void test_file_magic_strength_down(void){
	aunit_printf("\n##FUNCTION_END_file_magic_strength\n");
 }



void abnormal_file_magic_strength_case(int index);

void abnormal_file_magic_strength_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_magic_strength_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;
	unsigned int nmagic;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={10};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
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
	case_id=1;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	fprintf_call_counter = 0;
	apprentice_magic_strength_1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magic_strength_1,false,0\n");
	aunit_printf("#CASE_START_test_file_magic_strength_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nmagic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).factor=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).desc[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magic_strength(m,nmagic);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_magic_strength","returnValue",6,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("apprentice_magic_strength_1","apprentice_magic_strength_1_call_counter",apprentice_magic_strength_1_call_counter)

	aunit_printf("#CASE_END_test_file_magic_strength_1\n");
}

void test_file_magic_strength_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;
	unsigned int nmagic;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={43};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={10};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
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
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	fprintf_call_counter = 0;
	apprentice_magic_strength_1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magic_strength_2,false,0\n");
	aunit_printf("#CASE_START_test_file_magic_strength_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nmagic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).factor=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).desc[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magic_strength(m,nmagic);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_magic_strength","returnValue",15,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("apprentice_magic_strength_1","apprentice_magic_strength_1_call_counter",apprentice_magic_strength_1_call_counter)

	aunit_printf("#CASE_END_test_file_magic_strength_2\n");
}

void test_file_magic_strength_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;
	unsigned int nmagic;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={45};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={3};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
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
	case_id=3;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	fprintf_call_counter = 0;
	apprentice_magic_strength_1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magic_strength_3,false,0\n");
	aunit_printf("#CASE_START_test_file_magic_strength_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nmagic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).factor=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).desc[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magic_strength(m,nmagic);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_magic_strength","returnValue",2,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("apprentice_magic_strength_1","apprentice_magic_strength_1_call_counter",apprentice_magic_strength_1_call_counter)

	aunit_printf("#CASE_END_test_file_magic_strength_3\n");
}

void test_file_magic_strength_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;
	unsigned int nmagic;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={42};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
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
	case_id=4;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	fprintf_call_counter = 0;
	apprentice_magic_strength_1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magic_strength_4,false,0\n");
	aunit_printf("#CASE_START_test_file_magic_strength_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nmagic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).factor=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).desc[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magic_strength(m,nmagic);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_magic_strength","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("apprentice_magic_strength_1","apprentice_magic_strength_1_call_counter",apprentice_magic_strength_1_call_counter)

	aunit_printf("#CASE_END_test_file_magic_strength_4\n");
}

void test_file_magic_strength_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;
	unsigned int nmagic;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={47};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={2};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
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
	case_id=5;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	fprintf_call_counter = 0;
	apprentice_magic_strength_1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magic_strength_5,false,0\n");
	aunit_printf("#CASE_START_test_file_magic_strength_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nmagic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).factor=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).desc[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magic_strength(m,nmagic);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_magic_strength","returnValue",5,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("apprentice_magic_strength_1","apprentice_magic_strength_1_call_counter",apprentice_magic_strength_1_call_counter)

	aunit_printf("#CASE_END_test_file_magic_strength_5\n");
}

void test_file_magic_strength_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;
	unsigned int nmagic;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={100};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={10};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
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
	case_id=6;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	fprintf_call_counter = 0;
	apprentice_magic_strength_1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magic_strength_6,false,0\n");
	aunit_printf("#CASE_START_test_file_magic_strength_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nmagic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).factor=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).desc[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magic_strength(m,nmagic);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_UNSIGNED_INT_EXPR("file_magic_strength","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("apprentice_magic_strength_1","apprentice_magic_strength_1_call_counter",apprentice_magic_strength_1_call_counter)

	aunit_printf("#CASE_END_test_file_magic_strength_6\n");
}

void test_file_magic_strength_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic *m;
	unsigned int nmagic;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={45};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={10};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
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
	case_id=7;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	abort_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	fprintf_call_counter = 0;
	apprentice_magic_strength_1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_magic_strength_7,false,0\n");
	aunit_printf("#CASE_START_test_file_magic_strength_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			stderr=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nmagic=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).factor_op=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).factor=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).desc[0]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_magic_strength(m,nmagic);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("file_magic_strength","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("abort","abort_call_counter",abort_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("apprentice_magic_strength_1","apprentice_magic_strength_1_call_counter",apprentice_magic_strength_1_call_counter)

	aunit_printf("#CASE_END_test_file_magic_strength_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_magic_strength_up();

	switch(caseIndex){
	case 1:
		test_file_magic_strength_1();
		break;
	case 2:
		test_file_magic_strength_2();
		break;
	case 3:
		test_file_magic_strength_3();
		break;
	case 4:
		test_file_magic_strength_4();
		break;
	case 5:
		test_file_magic_strength_5();
		break;
	case 6:
		test_file_magic_strength_6();
		break;
	case 7:
		test_file_magic_strength_7();
		break;
	default:
		abnormal_file_magic_strength_case(caseIndex);
		break;
	}

	test_file_magic_strength_down();
}

