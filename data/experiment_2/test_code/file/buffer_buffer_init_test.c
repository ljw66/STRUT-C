void test_buffer_init_up(void);
void test_buffer_init_down(void);


void test_buffer_init_up(void){

	aunit_printf("\n##FUNCTION_START_buffer_init\n");
 }

void test_buffer_init_down(void){
	aunit_printf("\n##FUNCTION_END_buffer_init\n");
 }



void abnormal_buffer_init_case(int index);

void abnormal_buffer_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_buffer_init_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct buffer *b;
	int fd;
	struct stat *st;
	void *data;
	unsigned int len;


	//值序列相关
	struct stat *valueList_0[]={(struct stat *)st_PTRTO};
	unsigned int listLength_0=1;
	struct buffer *valueList_1[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={512};
	unsigned int listLength_2=1;
	int valueList_3[]={-1};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0};
	unsigned int listLength_6=1;
	long int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
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
	case_id=2;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_buffer_init_2,false,0\n");
	aunit_printf("#CASE_START_test_buffer_init_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			st=(struct stat *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(struct buffer *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			fd=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).fd=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).fbuf=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).ebuf=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).eoff=(long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).flen=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(b_PTRTO[0]).elen=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		buffer_init(b,fd,st,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("buffer_init","b->flen",512,b->flen)
	TEST_ASSERT_EQUAL_LONG("buffer_init","b->ebuf",0,b->ebuf)
	TEST_ASSERT_EQUAL_LONG("buffer_init","b->fbuf",0,b->fbuf)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("buffer_init","b->elen",0,b->elen)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("buffer_init","b->st.st_ino",0,b->st.st_ino)
	TEST_ASSERT_EQUAL_INT("buffer_init","b->fd",-1,b->fd)
	TEST_ASSERT_EQUAL_LONG("buffer_init","b->eoff",0,b->eoff)
	TEST_ASSERT_EQUAL_SHORT("buffer_init","b->st.st_dev",0,b->st.st_dev)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("buffer_init","b->st.st_mode",0,b->st.st_mode)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_buffer_init_2\n");
}

void test_buffer_init_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct buffer *b;
	int fd;
	struct stat *st;
	void *data;
	unsigned int len;


	//值序列相关
	struct stat *valueList_0[]={(struct stat *)st_PTRTO};
	unsigned int listLength_0=1;
	struct buffer *valueList_1[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={256};
	unsigned int listLength_2=1;
	int valueList_3[]={3};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	void *valueList_5[]={(void *)0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0};
	unsigned int listLength_6=1;
	long int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
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
	case_id=3;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_buffer_init_3,false,0\n");
	aunit_printf("#CASE_START_test_buffer_init_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			st=(struct stat *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			b=(struct buffer *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			fd=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).fd=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).fbuf=(void *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).ebuf=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).eoff=(long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).flen=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(b_PTRTO[0]).elen=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		buffer_init(b,fd,st,data,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("buffer_init","b->flen",256,b->flen)
	TEST_ASSERT_EQUAL_LONG("buffer_init","b->ebuf",0,b->ebuf)
	TEST_ASSERT_EQUAL_LONG("buffer_init","b->fbuf",0,b->fbuf)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("buffer_init","b->elen",0,b->elen)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("buffer_init","b->st.st_ino",0,b->st.st_ino)
	TEST_ASSERT_EQUAL_INT("buffer_init","b->fd",3,b->fd)
	TEST_ASSERT_EQUAL_LONG("buffer_init","b->eoff",0,b->eoff)
	TEST_ASSERT_EQUAL_SHORT("buffer_init","b->st.st_dev",0,b->st.st_dev)
	TEST_ASSERT_EQUAL_UNSIGNED_INT("buffer_init","b->st.st_mode",0,b->st.st_mode)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_buffer_init_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_buffer_init_up();

	switch(caseIndex){
	case 2:
		test_buffer_init_2();
		break;
	case 3:
		test_buffer_init_3();
		break;
	default:
		abnormal_buffer_init_case(caseIndex);
		break;
	}

	test_buffer_init_down();
}

