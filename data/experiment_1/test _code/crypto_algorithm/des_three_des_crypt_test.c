void test_three_des_crypt_up(void);
void test_three_des_crypt_down(void);


void test_three_des_crypt_up(void){

	aunit_printf("\n##FUNCTION_START_three_des_crypt\n");
 }

void test_three_des_crypt_down(void){
	aunit_printf("\n##FUNCTION_END_three_des_crypt\n");
 }



void abnormal_three_des_crypt_case(int index);

void abnormal_three_des_crypt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_three_des_crypt_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	BYTE (*key)[16][6];


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"0000000000000000"};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	des_crypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_three_des_crypt_1,false,0\n");
	aunit_printf("#CASE_START_test_three_des_crypt_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			in=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			out=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		three_des_crypt(in,out,key);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("three_des_crypt","out","0000000000000000",out)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("des_crypt","des_crypt_call_counter",des_crypt_call_counter)

	aunit_printf("#CASE_END_test_three_des_crypt_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_three_des_crypt_up();

	switch(caseIndex){
	case 1:
		test_three_des_crypt_1();
		break;
	default:
		abnormal_three_des_crypt_case(caseIndex);
		break;
	}

	test_three_des_crypt_down();
}

