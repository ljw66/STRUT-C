void test_pread_up(void);
void test_pread_down(void);


void test_pread_up(void){

	aunit_printf("\n##FUNCTION_START_pread\n");
 }

void test_pread_down(void){
	aunit_printf("\n##FUNCTION_END_pread\n");
 }



void abnormal_pread_case(int index);

void abnormal_pread_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_pread_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int fd;
	void *buf;
	unsigned int len;
	long int off;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={100};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	long int valueList_2[]={50};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_pread_1,false,0\n");
	aunit_printf("#CASE_START_test_pread_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = pread(fd,buf,len,off);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pread","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_pread_1\n");
}

void test_pread_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int fd;
	void *buf;
	unsigned int len;
	long int off;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={200};
	unsigned int listLength_0=1;
	int valueList_1[]={4};
	unsigned int listLength_1=1;
	long int valueList_2[]={100};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_pread_2,false,0\n");
	aunit_printf("#CASE_START_test_pread_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = pread(fd,buf,len,off);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pread","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_pread_2\n");
}

void test_pread_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int fd;
	void *buf;
	unsigned int len;
	long int off;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={150};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	long int valueList_2[]={75};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_pread_3,false,0\n");
	aunit_printf("#CASE_START_test_pread_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = pread(fd,buf,len,off);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pread","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_pread_3\n");
}

void test_pread_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int fd;
	void *buf;
	unsigned int len;
	long int off;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={256};
	unsigned int listLength_0=1;
	int valueList_1[]={6};
	unsigned int listLength_1=1;
	long int valueList_2[]={128};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_pread_4,false,0\n");
	aunit_printf("#CASE_START_test_pread_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = pread(fd,buf,len,off);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pread","returnValue",256,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_pread_4\n");
}

void test_pread_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int fd;
	void *buf;
	unsigned int len;
	long int off;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={7};
	unsigned int listLength_1=1;
	long int valueList_2[]={64};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_pread_5,false,0\n");
	aunit_printf("#CASE_START_test_pread_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = pread(fd,buf,len,off);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pread","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_pread_5\n");
}

void test_pread_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	int fd;
	void *buf;
	unsigned int len;
	long int off;

	//声明返回值局部变量，若为基本类型赋默认值
	ssize_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={128};
	unsigned int listLength_0=1;
	int valueList_1[]={-1};
	unsigned int listLength_1=1;
	long int valueList_2[]={32};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_pread_6,false,0\n");
	aunit_printf("#CASE_START_test_pread_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			fd=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = pread(fd,buf,len,off);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("pread","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_pread_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_pread_up();

	switch(caseIndex){
	case 1:
		test_pread_1();
		break;
	case 2:
		test_pread_2();
		break;
	case 3:
		test_pread_3();
		break;
	case 4:
		test_pread_4();
		break;
	case 5:
		test_pread_5();
		break;
	case 6:
		test_pread_6();
		break;
	default:
		abnormal_pread_case(caseIndex);
		break;
	}

	test_pread_down();
}

