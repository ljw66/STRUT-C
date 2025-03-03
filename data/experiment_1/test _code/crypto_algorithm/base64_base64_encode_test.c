void test_base64_encode_up(void);
void test_base64_encode_down(void);


void test_base64_encode_up(void){

	aunit_printf("\n##FUNCTION_START_base64_encode\n");
 }

void test_base64_encode_down(void){
	aunit_printf("\n##FUNCTION_END_base64_encode\n");
 }



void abnormal_base64_encode_case(int index);

void abnormal_base64_encode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_base64_encode_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	unsigned int len;
	int newline_flag;

	//声明返回值局部变量，若为基本类型赋默认值
	size_t returnValue = 0;

	//值序列相关
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"[77,97,110,97,103]"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	BYTE *valueList_3[]={(BYTE *)"[0,0,0,0,0,0,0,0]"};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={65};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_base64_encode_8,false,0\n");
	aunit_printf("#CASE_START_test_base64_encode_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			len=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			newline_flag=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			out=(BYTE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			charset[0]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = base64_encode(in,out,len,newline_flag);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("base64_encode","returnValue",8,returnValue)
	TEST_ASSERT_EQUAL_LONG("base64_encode","out","[84,87,70,117,81,61,61,0]",out)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_base64_encode_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_base64_encode_up();

	switch(caseIndex){
	case 8:
		test_base64_encode_8();
		break;
	default:
		abnormal_base64_encode_case(caseIndex);
		break;
	}

	test_base64_encode_down();
}

