void test_cdf_swap_class_up(void);
void test_cdf_swap_class_down(void);


void test_cdf_swap_class_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_swap_class\n");
 }

void test_cdf_swap_class_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_swap_class\n");
 }



void abnormal_cdf_swap_class_case(int index);

void abnormal_cdf_swap_class_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_swap_class_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_classid_t *d;


	//值序列相关
	cdf_classid_t *valueList_0[]={(cdf_classid_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0x00000001};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0x12345678};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0x1234};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={0x5678};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_class_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_class_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_classid_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).cl_dword=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).cl_word[0]=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).cl_word[1]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		cdf_swap_class(d);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_class","d->cl_dword",0x12345678,d->cl_dword)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[0]",0x1234,(d->cl_word)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[1]",0x5678,(d->cl_word)[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_class_1\n");
}

void test_cdf_swap_class_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_classid_t *d;


	//值序列相关
	cdf_classid_t *valueList_0[]={(cdf_classid_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0x01020304};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0x12345678};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0x1234};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={0x5678};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_class_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_class_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_classid_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).cl_dword=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).cl_word[0]=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).cl_word[1]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		cdf_swap_class(d);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_class","d->cl_dword",0x78563412,d->cl_dword)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[0]",0x3412,(d->cl_word)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[1]",0x7856,(d->cl_word)[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_class_2\n");
}

void test_cdf_swap_class_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_classid_t *d;


	//值序列相关
	cdf_classid_t *valueList_0[]={(cdf_classid_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0x01020304};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0x00000000};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0x0000};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={0x0000};
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
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_class_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_class_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_classid_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).cl_dword=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).cl_word[0]=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).cl_word[1]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		cdf_swap_class(d);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_class","d->cl_dword",0x00000000,d->cl_dword)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[0]",0x0000,(d->cl_word)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[1]",0x0000,(d->cl_word)[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_class_3\n");
}

void test_cdf_swap_class_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	cdf_classid_t *d;


	//值序列相关
	cdf_classid_t *valueList_0[]={(cdf_classid_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0x00000001};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0xFFFFFFFF};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0xFFFF};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={0xFFFF};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	_cdf_tole2_call_counter = 0;
	_cdf_tole4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_swap_class_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_swap_class_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_classid_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cdf_bo.u=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).cl_dword=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).cl_word[0]=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).cl_word[1]=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		cdf_swap_class(d);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("cdf_swap_class","d->cl_dword",0xFFFFFFFF,d->cl_dword)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[0]",0xFFFF,(d->cl_word)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("cdf_swap_class","(d->cl_word)[1]",0xFFFF,(d->cl_word)[1])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("_cdf_tole2","_cdf_tole2_call_counter",_cdf_tole2_call_counter)
	OB_INT_EXPR("_cdf_tole4","_cdf_tole4_call_counter",_cdf_tole4_call_counter)

	aunit_printf("#CASE_END_test_cdf_swap_class_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_swap_class_up();

	switch(caseIndex){
	case 1:
		test_cdf_swap_class_1();
		break;
	case 2:
		test_cdf_swap_class_2();
		break;
	case 3:
		test_cdf_swap_class_3();
		break;
	case 4:
		test_cdf_swap_class_4();
		break;
	default:
		abnormal_cdf_swap_class_case(caseIndex);
		break;
	}

	test_cdf_swap_class_down();
}

