void test_cdf_find_stream_up(void);
void test_cdf_find_stream_down(void);


void test_cdf_find_stream_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_find_stream\n");
 }

void test_cdf_find_stream_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_find_stream\n");
 }



void abnormal_cdf_find_stream_case(int index);

void abnormal_cdf_find_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_find_stream_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_dir_t *dir;
	char *name;
	int type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"test"};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={1};
	unsigned int listLength_4=1;
	cdf_directory_t *valueList_5[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
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
	strlen_call_counter = 0;
	cdf_namecmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_find_stream_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_find_stream_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			type=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_find_stream(dir,name,type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","errno",3,errno)
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("cdf_namecmp","cdf_namecmp_call_counter",cdf_namecmp_call_counter)

	aunit_printf("#CASE_END_test_cdf_find_stream_1\n");
}

void test_cdf_find_stream_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_dir_t *dir;
	char *name;
	int type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"stream"};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={2};
	unsigned int listLength_4=1;
	cdf_directory_t *valueList_5[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={3};
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
	case_id=2;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	cdf_namecmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_find_stream_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_find_stream_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			type=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_find_stream(dir,name,type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","returnValue",3,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("cdf_namecmp","cdf_namecmp_call_counter",cdf_namecmp_call_counter)

	aunit_printf("#CASE_END_test_cdf_find_stream_2\n");
}

void test_cdf_find_stream_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_dir_t *dir;
	char *name;
	int type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"stream"};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	cdf_directory_t *valueList_4[]={(cdf_directory_t *)NULL};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0};
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
	strlen_call_counter = 0;
	cdf_namecmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_find_stream_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_find_stream_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			type=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = cdf_find_stream(dir,name,type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","errno",3,errno)
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("cdf_namecmp","cdf_namecmp_call_counter",cdf_namecmp_call_counter)

	aunit_printf("#CASE_END_test_cdf_find_stream_3\n");
}

void test_cdf_find_stream_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_dir_t *dir;
	char *name;
	int type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"nomatch"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={1};
	unsigned int listLength_4=1;
	cdf_directory_t *valueList_5[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={5};
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
	case_id=4;
	//初始化各桩函数调用计数器
	strlen_call_counter = 0;
	cdf_namecmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_find_stream_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_find_stream_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			type=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_find_stream(dir,name,type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","errno",3,errno)
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("cdf_namecmp","cdf_namecmp_call_counter",cdf_namecmp_call_counter)

	aunit_printf("#CASE_END_test_cdf_find_stream_4\n");
}

void test_cdf_find_stream_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_dir_t *dir;
	char *name;
	int type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"laststream"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={3};
	unsigned int listLength_4=1;
	cdf_directory_t *valueList_5[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={10};
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
	strlen_call_counter = 0;
	cdf_namecmp_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_find_stream_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_find_stream_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			errno=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			type=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_find_stream(dir,name,type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("cdf_find_stream","returnValue",10,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)
	OB_INT_EXPR("cdf_namecmp","cdf_namecmp_call_counter",cdf_namecmp_call_counter)

	aunit_printf("#CASE_END_test_cdf_find_stream_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_find_stream_up();

	switch(caseIndex){
	case 1:
		test_cdf_find_stream_1();
		break;
	case 2:
		test_cdf_find_stream_2();
		break;
	case 3:
		test_cdf_find_stream_3();
		break;
	case 4:
		test_cdf_find_stream_4();
		break;
	case 5:
		test_cdf_find_stream_5();
		break;
	default:
		abnormal_cdf_find_stream_case(caseIndex);
		break;
	}

	test_cdf_find_stream_down();
}

