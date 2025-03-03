void test_virtio_disk_intr_up(void);
void test_virtio_disk_intr_down(void);


void test_virtio_disk_intr_up(void){

	aunit_printf("\n##FUNCTION_START_virtio_disk_intr\n");
 }

void test_virtio_disk_intr_down(void){
	aunit_printf("\n##FUNCTION_END_virtio_disk_intr\n");
 }



void abnormal_virtio_disk_intr_case(int index);

void abnormal_virtio_disk_intr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_virtio_disk_intr_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct virtq_desc *valueList_0[]={(struct virtq_desc *)1};
	unsigned int listLength_0=1;
	struct virtq_used *valueList_1[]={(struct virtq_used *)1};
	unsigned int listLength_1=1;
	struct virtq_avail *valueList_2[]={(struct virtq_avail *)1};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={1};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	release_call_counter = 0;
	wakeup_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_virtio_disk_intr_1,false,0\n");
	aunit_printf("#CASE_START_test_virtio_disk_intr_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			disk.desc=(struct virtq_desc *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			disk.used=(struct virtq_used *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			disk.avail=(struct virtq_avail *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			disk.used_idx=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			disk.used->idx=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			disk.info[0].status=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			disk.used->ring[0].id=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			disk.info[0].b->disk=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		virtio_disk_intr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("virtio_disk_intr","((disk.info)[0]).b->disk",0,((disk.info)[0]).b->disk)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("virtio_disk_intr","disk.used_idx",1,disk.used_idx)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_virtio_disk_intr_1\n");
}

void test_virtio_disk_intr_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct virtq_desc *valueList_0[]={(struct virtq_desc *)1};
	unsigned int listLength_0=1;
	struct virtq_used *valueList_1[]={(struct virtq_used *)1};
	unsigned int listLength_1=1;
	struct virtq_avail *valueList_2[]={(struct virtq_avail *)1};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={1};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
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
	release_call_counter = 0;
	wakeup_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_virtio_disk_intr_2,false,0\n");
	aunit_printf("#CASE_START_test_virtio_disk_intr_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			disk.desc=(struct virtq_desc *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			disk.used=(struct virtq_used *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			disk.avail=(struct virtq_avail *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			disk.used_idx=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			disk.used->idx=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			disk.info[0].status=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			disk.used->ring[0].id=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		virtio_disk_intr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_virtio_disk_intr_2\n");
}

void test_virtio_disk_intr_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct virtq_desc *valueList_0[]={(struct virtq_desc *)1};
	unsigned int listLength_0=1;
	struct virtq_used *valueList_1[]={(struct virtq_used *)1};
	unsigned int listLength_1=1;
	struct virtq_avail *valueList_2[]={(struct virtq_avail *)1};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={1};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={1};
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
	release_call_counter = 0;
	wakeup_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_virtio_disk_intr_3,false,0\n");
	aunit_printf("#CASE_START_test_virtio_disk_intr_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			disk.desc=(struct virtq_desc *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			disk.used=(struct virtq_used *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			disk.avail=(struct virtq_avail *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			disk.used_idx=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			disk.used->idx=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		virtio_disk_intr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("virtio_disk_intr","disk.used_idx",1,disk.used_idx)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_virtio_disk_intr_3\n");
}

void test_virtio_disk_intr_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct virtq_desc *valueList_0[]={(struct virtq_desc *)1};
	unsigned int listLength_0=1;
	struct virtq_used *valueList_1[]={(struct virtq_used *)1};
	unsigned int listLength_1=1;
	struct virtq_avail *valueList_2[]={(struct virtq_avail *)1};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={2};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
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
	unsigned char useLast_10=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	release_call_counter = 0;
	wakeup_call_counter = 0;
	__sync_synchronize_call_counter = 0;
	acquire_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_virtio_disk_intr_4,false,0\n");
	aunit_printf("#CASE_START_test_virtio_disk_intr_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			disk.desc=(struct virtq_desc *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			disk.used=(struct virtq_used *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			disk.avail=(struct virtq_avail *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			disk.used_idx=(unsigned short int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			disk.used->idx=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			disk.info[0].status=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			disk.info[1].status=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			disk.used->ring[1].id=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			disk.used->ring[0].id=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			disk.info[1].b->disk=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			disk.info[0].b->disk=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		virtio_disk_intr();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("virtio_disk_intr","((disk.info)[1]).b->disk",0,((disk.info)[1]).b->disk)
	TEST_ASSERT_EQUAL_INT("virtio_disk_intr","((disk.info)[0]).b->disk",0,((disk.info)[0]).b->disk)
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("virtio_disk_intr","disk.used_idx",2,disk.used_idx)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)
	OB_INT_EXPR("__sync_synchronize","__sync_synchronize_call_counter",__sync_synchronize_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_virtio_disk_intr_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_virtio_disk_intr_up();

	switch(caseIndex){
	case 1:
		test_virtio_disk_intr_1();
		break;
	case 2:
		test_virtio_disk_intr_2();
		break;
	case 3:
		test_virtio_disk_intr_3();
		break;
	case 4:
		test_virtio_disk_intr_4();
		break;
	default:
		abnormal_virtio_disk_intr_case(caseIndex);
		break;
	}

	test_virtio_disk_intr_down();
}

