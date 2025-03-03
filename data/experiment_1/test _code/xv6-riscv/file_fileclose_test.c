void test_fileclose_up(void);
void test_fileclose_down(void);


void test_fileclose_up(void){

	aunit_printf("\n##FUNCTION_START_fileclose\n");
 }

void test_fileclose_down(void){
	aunit_printf("\n##FUNCTION_END_fileclose\n");
 }



void abnormal_fileclose_case(int index);

void abnormal_fileclose_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_fileclose_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;


	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	struct inode *valueList_1[]={(struct inode *)&struct_inode1};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	char valueList_3[]={'a'};
	unsigned int listLength_3=1;
	char valueList_4[]={'a'};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	begin_op_call_counter = 0;
	end_op_call_counter = 0;
	release_call_counter = 0;
	iput_call_counter = 0;
	acquire_call_counter = 0;
	pipeclose_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_fileclose_7,false,0\n");
	aunit_printf("#CASE_START_test_fileclose_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(f_PTRTO[0]).ip=(struct inode *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(f_PTRTO[0]).ref=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(f_PTRTO[0]).readable=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(f_PTRTO[0]).writable=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		fileclose(f);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("release","release_call_counter",release_call_counter)
	OB_INT_EXPR("iput","iput_call_counter",iput_call_counter)
	OB_INT_EXPR("acquire","acquire_call_counter",acquire_call_counter)
	OB_INT_EXPR("pipeclose","pipeclose_call_counter",pipeclose_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_fileclose_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_fileclose_up();

	switch(caseIndex){
	case 7:
		test_fileclose_7();
		break;
	default:
		abnormal_fileclose_case(caseIndex);
		break;
	}

	test_fileclose_down();
}

