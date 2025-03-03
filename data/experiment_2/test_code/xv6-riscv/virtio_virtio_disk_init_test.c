void test_virtio_disk_init_up(void);
void test_virtio_disk_init_down(void);


void test_virtio_disk_init_up(void){

	aunit_printf("\n##FUNCTION_START_virtio_disk_init\n");
 }

void test_virtio_disk_init_down(void){
	aunit_printf("\n##FUNCTION_END_virtio_disk_init\n");
 }



void abnormal_virtio_disk_init_case(int index);

void abnormal_virtio_disk_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_virtio_disk_init_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	struct virtq_desc *valueList_0[]={(struct virtq_desc *)0};
	unsigned int listLength_0=1;
	struct virtq_used *valueList_1[]={(struct virtq_used *)0};
	unsigned int listLength_1=1;
	struct virtq_avail *valueList_2[]={(struct virtq_avail *)0};
	unsigned int listLength_2=1;
	unsigned short int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器
	initlock_call_counter = 0;
	kalloc_call_counter = 0;
	panic_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_virtio_disk_init_10,false,0\n");
	aunit_printf("#CASE_START_test_virtio_disk_init_10\n");
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
		virtio_disk_init();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_SHORT("virtio_disk_init","disk.used_idx",0,disk.used_idx)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("kalloc","kalloc_call_counter",kalloc_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_virtio_disk_init_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_virtio_disk_init_up();

	switch(caseIndex){
	case 10:
		test_virtio_disk_init_10();
		break;
	default:
		abnormal_virtio_disk_init_case(caseIndex);
		break;
	}

	test_virtio_disk_init_down();
}

