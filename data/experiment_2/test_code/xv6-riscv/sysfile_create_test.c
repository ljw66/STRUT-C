void test_create_up(void);
void test_create_down(void);


void test_create_up(void){

	aunit_printf("\n##FUNCTION_START_create\n");
 }

void test_create_down(void){
	aunit_printf("\n##FUNCTION_END_create\n");
 }



void abnormal_create_case(int index);

void abnormal_create_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_create_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	short int type;
	short int major;
	short int minor;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"linkfail"};
	unsigned int listLength_0=1;
	short int valueList_1[]={0};
	unsigned int listLength_1=1;
	short int valueList_2[]={0};
	unsigned int listLength_2=1;
	short int valueList_3[]={1};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1};
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
	dirlink_call_counter = 0;
	nameiparent_call_counter = 0;
	iunlockput_call_counter = 0;
	ialloc_call_counter = 0;
	iupdate_call_counter = 0;
	ilock_call_counter = 0;
	dirlookup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_4,false,0\n");
	aunit_printf("#CASE_START_test_create_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			major=(short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			minor=(short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			type=(short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ialloc_returnValue_PTRTO[0]).dev=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(nameiparent_returnValue_PTRTO[0]).dev=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = create(path,type,major,minor);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("create","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("dirlink","dirlink_call_counter",dirlink_call_counter)
	OB_INT_EXPR("nameiparent","nameiparent_call_counter",nameiparent_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("ialloc","ialloc_call_counter",ialloc_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("dirlookup","dirlookup_call_counter",dirlookup_call_counter)

	aunit_printf("#CASE_END_test_create_4\n");
}

void test_create_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *path;
	short int type;
	short int major;
	short int minor;

	//声明返回值局部变量，若为基本类型赋默认值
	struct inode *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"success"};
	unsigned int listLength_0=1;
	short int valueList_1[]={0};
	unsigned int listLength_1=1;
	short int valueList_2[]={0};
	unsigned int listLength_2=1;
	short int valueList_3[]={1};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={1};
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
	dirlink_call_counter = 0;
	nameiparent_call_counter = 0;
	iunlockput_call_counter = 0;
	ialloc_call_counter = 0;
	iupdate_call_counter = 0;
	ilock_call_counter = 0;
	dirlookup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_create_5,false,0\n");
	aunit_printf("#CASE_START_test_create_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			major=(short int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			minor=(short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			type=(short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ialloc_returnValue_PTRTO[0]).dev=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(nameiparent_returnValue_PTRTO[0]).dev=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = create(path,type,major,minor);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("create","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("dirlink","dirlink_call_counter",dirlink_call_counter)
	OB_INT_EXPR("nameiparent","nameiparent_call_counter",nameiparent_call_counter)
	OB_INT_EXPR("iunlockput","iunlockput_call_counter",iunlockput_call_counter)
	OB_INT_EXPR("ialloc","ialloc_call_counter",ialloc_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("dirlookup","dirlookup_call_counter",dirlookup_call_counter)

	aunit_printf("#CASE_END_test_create_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_create_up();

	switch(caseIndex){
	case 4:
		test_create_4();
		break;
	case 5:
		test_create_5();
		break;
	default:
		abnormal_create_case(caseIndex);
		break;
	}

	test_create_down();
}

