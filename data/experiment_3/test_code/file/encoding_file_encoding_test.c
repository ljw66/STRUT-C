void test_file_encoding_up(void);
void test_file_encoding_down(void);


void test_file_encoding_up(void){

	aunit_printf("\n##FUNCTION_START_file_encoding\n");
 }

void test_file_encoding_down(void){
	aunit_printf("\n##FUNCTION_END_file_encoding\n");
 }



void abnormal_file_encoding_case(int index);

void abnormal_file_encoding_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_encoding_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct buffer *b;
	file_unichar_t **ubuf;
	size_t *ulen;
	char **code;
	char **code_mime;
	char **type;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	struct magic_set *valueList_1[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_1=1;
	size_t *valueList_2[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)0};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={10};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	file_unichar_t *valueList_8[]={(file_unichar_t *)1};
	unsigned int listLength_8=1;
	void *valueList_9[]={(void *)"test"};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={5};
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
	case_id=8;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	looks_latin1_call_counter = 0;
	file_oomem_call_counter = 0;
	calloc_call_counter = 0;
	file_looks_utf8_call_counter = 0;
	looks_utf8_with_BOM_call_counter = 0;
	looks_utf7_call_counter = 0;
	from_ebcdic_call_counter = 0;
	looks_ascii_call_counter = 0;
	looks_ucs16_call_counter = 0;
	looks_extended_call_counter = 0;
	looks_ucs32_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_encoding_8,false,0\n");
	aunit_printf("#CASE_START_test_file_encoding_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ms=(struct magic_set *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ulen=(size_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			*code_mime=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			*type=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ulen_PTRTO[0]=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			*code=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			*ubuf=(file_unichar_t *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(b_PTRTO[0]).fbuf=(void *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(b_PTRTO[0]).flen=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = file_encoding(ms,b,ubuf,ulen,code,code_mime,type);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("file_encoding","*code_mime","utf-16le",*code_mime)
	TEST_ASSERT_EQUAL_INT("file_encoding","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_STRING("file_encoding","*code","Unicode text, UTF-16, little-endian",*code)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("looks_latin1","looks_latin1_call_counter",looks_latin1_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("file_looks_utf8","file_looks_utf8_call_counter",file_looks_utf8_call_counter)
	OB_INT_EXPR("looks_utf8_with_BOM","looks_utf8_with_BOM_call_counter",looks_utf8_with_BOM_call_counter)
	OB_INT_EXPR("looks_utf7","looks_utf7_call_counter",looks_utf7_call_counter)
	OB_INT_EXPR("from_ebcdic","from_ebcdic_call_counter",from_ebcdic_call_counter)
	OB_INT_EXPR("looks_ascii","looks_ascii_call_counter",looks_ascii_call_counter)
	OB_INT_EXPR("looks_ucs16","looks_ucs16_call_counter",looks_ucs16_call_counter)
	OB_INT_EXPR("looks_extended","looks_extended_call_counter",looks_extended_call_counter)
	OB_INT_EXPR("looks_ucs32","looks_ucs32_call_counter",looks_ucs32_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_file_encoding_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_encoding_up();

	switch(caseIndex){
	case 8:
		test_file_encoding_8();
		break;
	default:
		abnormal_file_encoding_case(caseIndex);
		break;
	}

	test_file_encoding_down();
}

