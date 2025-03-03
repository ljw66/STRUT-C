void test_bread_up(void);
void test_bread_down(void);


void test_bread_up(void){

	aunit_printf("\n##FUNCTION_START_bread\n");
 }

void test_bread_down(void){
	aunit_printf("\n##FUNCTION_END_bread\n");
 }



void abnormal_bread_case(int index);

void abnormal_bread_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bread_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int dev;
	unsigned int blockno;

	//声明返回值局部变量，若为基本类型赋默认值
	struct buf *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_1,false,0\n");
	aunit_printf("#CASE_START_test_bread_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bread","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_1\n");
}

void test_bread_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int dev;
	unsigned int blockno;

	//声明返回值局部变量，若为基本类型赋默认值
	struct buf *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_2,false,0\n");
	aunit_printf("#CASE_START_test_bread_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bread","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_2\n");
}

void test_bread_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int dev;
	unsigned int blockno;

	//声明返回值局部变量，若为基本类型赋默认值
	struct buf *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_3,false,0\n");
	aunit_printf("#CASE_START_test_bread_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bread","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_3\n");
}

void test_bread_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int dev;
	unsigned int blockno;

	//声明返回值局部变量，若为基本类型赋默认值
	struct buf *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={4};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_4,false,0\n");
	aunit_printf("#CASE_START_test_bread_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bread","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_4\n");
}

void test_bread_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned int dev;
	unsigned int blockno;

	//声明返回值局部变量，若为基本类型赋默认值
	struct buf *returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_5,false,0\n");
	aunit_printf("#CASE_START_test_bread_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("bread","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bread_up();

	switch(caseIndex){
	case 1:
		test_bread_1();
		break;
	case 2:
		test_bread_2();
		break;
	case 3:
		test_bread_3();
		break;
	case 4:
		test_bread_4();
		break;
	case 5:
		test_bread_5();
		break;
	default:
		abnormal_bread_case(caseIndex);
		break;
	}

	test_bread_down();
}

