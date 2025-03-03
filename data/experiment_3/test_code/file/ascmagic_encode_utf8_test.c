void test_encode_utf8_up(void);
void test_encode_utf8_down(void);


void test_encode_utf8_up(void){

	aunit_printf("\n##FUNCTION_START_encode_utf8\n");
 }

void test_encode_utf8_down(void){
	aunit_printf("\n##FUNCTION_END_encode_utf8\n");
 }



void abnormal_encode_utf8_case(int index);

void abnormal_encode_utf8_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_encode_utf8_13(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int len;
	file_unichar_t *ubuf;
	unsigned int ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned char *returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"____________"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={12};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	file_unichar_t *valueList_3[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0x7FFFFFFF};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=13;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_encode_utf8_13,false,0\n");
	aunit_printf("#CASE_START_test_encode_utf8_13\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ulen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ubuf=(file_unichar_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = encode_utf8(buf,len,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("encode_utf8","returnValue","_\xFD\xBF\xBF\xBF\xBF\xBF___",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_encode_utf8_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_encode_utf8_up();

	switch(caseIndex){
	case 13:
		test_encode_utf8_13();
		break;
	default:
		abnormal_encode_utf8_case(caseIndex);
		break;
	}

	test_encode_utf8_down();
}

