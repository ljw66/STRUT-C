void test_apprentice_compile_up(void);
void test_apprentice_compile_down(void);


void test_apprentice_compile_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_compile\n");
 }

void test_apprentice_compile_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_compile\n");
 }



void abnormal_apprentice_compile_case(int index);

void abnormal_apprentice_compile_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_compile_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_map *map;
	char *fn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"valid_file"};
	unsigned int listLength_2=1;
	struct magic_map *valueList_3[]={(struct magic_map *)map_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={20};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={10};
	unsigned int listLength_7=1;
	struct magic *valueList_8[]={(struct magic *)1000};
	unsigned int listLength_8=1;
	struct magic *valueList_9[]={(struct magic *)2000};
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
	case_id=1;
	//初始化各桩函数调用计数器
	parse_strength_call_counter = 0;
	parse_mime_call_counter = 0;
	memset_call_counter = 0;
	file_error_call_counter = 0;
	mkdbname_call_counter = 0;
	parse_apple_call_counter = 0;
	memcpy_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	write_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_compile_1,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_compile_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fn=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			map=(struct magic_map *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(map_PTRTO[0]).nmagic[1]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(map_PTRTO[0]).nmagic[0]=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(map_PTRTO[0]).magic[0]=(struct magic *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(map_PTRTO[0]).magic[1]=(struct magic *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = apprentice_compile(ms,map,fn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_compile","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("apprentice_compile","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("mkdbname","mkdbname_call_counter",mkdbname_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_apprentice_compile_1\n");
}

void test_apprentice_compile_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_map *map;
	char *fn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"invalid_file"};
	unsigned int listLength_2=1;
	struct magic_map *valueList_3[]={(struct magic_map *)map_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={20};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct magic *valueList_7[]={(struct magic *)1000};
	unsigned int listLength_7=1;
	struct magic *valueList_8[]={(struct magic *)2000};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	parse_strength_call_counter = 0;
	parse_mime_call_counter = 0;
	memset_call_counter = 0;
	file_error_call_counter = 0;
	mkdbname_call_counter = 0;
	parse_apple_call_counter = 0;
	memcpy_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	write_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_compile_2,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_compile_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fn=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			map=(struct magic_map *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(map_PTRTO[0]).nmagic[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(map_PTRTO[0]).nmagic[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(map_PTRTO[0]).magic[0]=(struct magic *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(map_PTRTO[0]).magic[1]=(struct magic *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = apprentice_compile(ms,map,fn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_compile","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("apprentice_compile","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("mkdbname","mkdbname_call_counter",mkdbname_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_apprentice_compile_2\n");
}

void test_apprentice_compile_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_map *map;
	char *fn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"valid_file"};
	unsigned int listLength_2=1;
	struct magic_map *valueList_3[]={(struct magic_map *)map_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={20};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct magic *valueList_7[]={(struct magic *)1000};
	unsigned int listLength_7=1;
	struct magic *valueList_8[]={(struct magic *)2000};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	parse_strength_call_counter = 0;
	parse_mime_call_counter = 0;
	memset_call_counter = 0;
	file_error_call_counter = 0;
	mkdbname_call_counter = 0;
	parse_apple_call_counter = 0;
	memcpy_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	write_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_compile_3,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_compile_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fn=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			map=(struct magic_map *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(map_PTRTO[0]).nmagic[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(map_PTRTO[0]).nmagic[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(map_PTRTO[0]).magic[0]=(struct magic *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(map_PTRTO[0]).magic[1]=(struct magic *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = apprentice_compile(ms,map,fn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_compile","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("apprentice_compile","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("mkdbname","mkdbname_call_counter",mkdbname_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_apprentice_compile_3\n");
}

void test_apprentice_compile_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_map *map;
	char *fn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"valid_file"};
	unsigned int listLength_2=1;
	struct magic_map *valueList_3[]={(struct magic_map *)map_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={20};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct magic *valueList_7[]={(struct magic *)1000};
	unsigned int listLength_7=1;
	struct magic *valueList_8[]={(struct magic *)2000};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	parse_strength_call_counter = 0;
	parse_mime_call_counter = 0;
	memset_call_counter = 0;
	file_error_call_counter = 0;
	mkdbname_call_counter = 0;
	parse_apple_call_counter = 0;
	memcpy_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	write_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_compile_4,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_compile_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fn=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			map=(struct magic_map *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(map_PTRTO[0]).nmagic[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(map_PTRTO[0]).nmagic[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(map_PTRTO[0]).magic[0]=(struct magic *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(map_PTRTO[0]).magic[1]=(struct magic *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = apprentice_compile(ms,map,fn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_compile","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("apprentice_compile","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("mkdbname","mkdbname_call_counter",mkdbname_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_apprentice_compile_4\n");
}

void test_apprentice_compile_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_map *map;
	char *fn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"valid_file"};
	unsigned int listLength_2=1;
	struct magic_map *valueList_3[]={(struct magic_map *)map_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={20};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct magic *valueList_7[]={(struct magic *)1000};
	unsigned int listLength_7=1;
	struct magic *valueList_8[]={(struct magic *)2000};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	parse_strength_call_counter = 0;
	parse_mime_call_counter = 0;
	memset_call_counter = 0;
	file_error_call_counter = 0;
	mkdbname_call_counter = 0;
	parse_apple_call_counter = 0;
	memcpy_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	write_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_compile_5,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_compile_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fn=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			map=(struct magic_map *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(map_PTRTO[0]).nmagic[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(map_PTRTO[0]).nmagic[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(map_PTRTO[0]).magic[0]=(struct magic *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(map_PTRTO[0]).magic[1]=(struct magic *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = apprentice_compile(ms,map,fn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_compile","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("apprentice_compile","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("mkdbname","mkdbname_call_counter",mkdbname_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_apprentice_compile_5\n");
}

void test_apprentice_compile_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct magic_map *map;
	char *fn;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"valid_file"};
	unsigned int listLength_2=1;
	struct magic_map *valueList_3[]={(struct magic_map *)map_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={20};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct magic *valueList_7[]={(struct magic *)1000};
	unsigned int listLength_7=1;
	struct magic *valueList_8[]={(struct magic *)2000};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	parse_strength_call_counter = 0;
	parse_mime_call_counter = 0;
	memset_call_counter = 0;
	file_error_call_counter = 0;
	mkdbname_call_counter = 0;
	parse_apple_call_counter = 0;
	memcpy_call_counter = 0;
	apprentice_unmap_call_counter = 0;
	parse_ext_call_counter = 0;
	free_call_counter = 0;
	write_call_counter = 0;
	close_call_counter = 0;
	open_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_compile_6,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_compile_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			fn=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			map=(struct magic_map *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(map_PTRTO[0]).nmagic[1]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(map_PTRTO[0]).nmagic[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(map_PTRTO[0]).magic[0]=(struct magic *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(map_PTRTO[0]).magic[1]=(struct magic *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = apprentice_compile(ms,map,fn);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_compile","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("apprentice_compile","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("file_error","file_error_call_counter",file_error_call_counter)
	OB_INT_EXPR("mkdbname","mkdbname_call_counter",mkdbname_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("apprentice_unmap","apprentice_unmap_call_counter",apprentice_unmap_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("write","write_call_counter",write_call_counter)
	OB_INT_EXPR("close","close_call_counter",close_call_counter)
	OB_INT_EXPR("open","open_call_counter",open_call_counter)

	aunit_printf("#CASE_END_test_apprentice_compile_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_compile_up();

	switch(caseIndex){
	case 1:
		test_apprentice_compile_1();
		break;
	case 2:
		test_apprentice_compile_2();
		break;
	case 3:
		test_apprentice_compile_3();
		break;
	case 4:
		test_apprentice_compile_4();
		break;
	case 5:
		test_apprentice_compile_5();
		break;
	case 6:
		test_apprentice_compile_6();
		break;
	default:
		abnormal_apprentice_compile_case(caseIndex);
		break;
	}

	test_apprentice_compile_down();
}

