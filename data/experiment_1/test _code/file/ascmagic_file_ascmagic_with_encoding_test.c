void test_file_ascmagic_with_encoding_up(void);
void test_file_ascmagic_with_encoding_down(void);


void test_file_ascmagic_with_encoding_up(void){

	aunit_printf("\n##FUNCTION_START_file_ascmagic_with_encoding\n");
 }

void test_file_ascmagic_with_encoding_down(void){
	aunit_printf("\n##FUNCTION_END_file_ascmagic_with_encoding\n");
 }



void abnormal_file_ascmagic_with_encoding_case(int index);

void abnormal_file_ascmagic_with_encoding_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_ascmagic_with_encoding_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	struct buffer *b;
	file_unichar_t *ubuf;
	unsigned int ulen;
	char *code;
	char *type;
	int text;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct buffer *valueList_0[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"utf-8"};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	file_unichar_t *valueList_3[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"text"};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={302};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned long int valueList_9[]={A};
	unsigned int listLength_9=1;
	int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	void *valueList_13[]={(void *)"test buffer"};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={10};
	unsigned int listLength_14=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器
	strcmp_call_counter = 0;
	malloc_call_counter = 0;
	file_softmagic_call_counter = 0;
	file_printf_call_counter = 0;
	encode_utf8_call_counter = 0;
	file_oomem_call_counter = 0;
	buffer_init_call_counter = 0;
	file_replace_call_counter = 0;
	trim_nuls_call_counter = 0;
	file_separator_call_counter = 0;
	buffer_fini_call_counter = 0;
	free_call_counter = 0;
	file_printedlen_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_ascmagic_with_encoding_9,false,0\n");
	aunit_printf("#CASE_START_test_file_ascmagic_with_encoding_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buffer *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			code=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ubuf=(file_unichar_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			type=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			ulen=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			text=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).error=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			ubuf_PTRTO[301]=(unsigned long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ms_PTRTO[0]).flags=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(b_PTRTO[0]).fd=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(b_PTRTO[0]).fbuf=(void *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(b_PTRTO[0]).flen=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		returnValue = file_ascmagic_with_encoding(ms,b,ubuf,ulen,code,type,text);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_ascmagic_with_encoding","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("file_softmagic","file_softmagic_call_counter",file_softmagic_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("encode_utf8","encode_utf8_call_counter",encode_utf8_call_counter)
	OB_INT_EXPR("file_oomem","file_oomem_call_counter",file_oomem_call_counter)
	OB_INT_EXPR("buffer_init","buffer_init_call_counter",buffer_init_call_counter)
	OB_INT_EXPR("file_replace","file_replace_call_counter",file_replace_call_counter)
	OB_INT_EXPR("trim_nuls","trim_nuls_call_counter",trim_nuls_call_counter)
	OB_INT_EXPR("file_separator","file_separator_call_counter",file_separator_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("file_printedlen","file_printedlen_call_counter",file_printedlen_call_counter)

	aunit_printf("#CASE_END_test_file_ascmagic_with_encoding_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_ascmagic_with_encoding_up();

	switch(caseIndex){
	case 9:
		test_file_ascmagic_with_encoding_9();
		break;
	default:
		abnormal_file_ascmagic_with_encoding_case(caseIndex);
		break;
	}

	test_file_ascmagic_with_encoding_down();
}

