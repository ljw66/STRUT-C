void test_match_up(void);
void test_match_down(void);


void test_match_up(void){

	aunit_printf("\n##FUNCTION_START_match\n");
 }

void test_match_down(void){
	aunit_printf("\n##FUNCTION_END_match\n");
 }



void abnormal_match_case(int index);

void abnormal_match_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_match_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *magic;
	file_regex_t **magic_rxcomp;
	unsigned int nmagic;
	struct buffer *b;
	unsigned int offset;
	int mode;
	int text;
	int flip;
	uint16_t *indir_count;
	uint16_t *name_count;
	int *printed_something;
	int *need_separator;
	int *firstline;
	int *returnval;
	int *found_match;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic *valueList_0[]={(struct magic *)magic_PTRTO};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)need_separator_PTRTO};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)firstline_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1};
	unsigned int listLength_3=1;
	struct buffer *valueList_4[]={(struct buffer *)b_PTRTO};
	unsigned int listLength_4=1;
	uint16_t *valueList_5[]={(uint16_t *)indir_count_PTRTO};
	unsigned int listLength_5=1;
	struct magic_set *valueList_6[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_6=1;
	FILE *valueList_7[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_7=1;
	uint16_t *valueList_8[]={(uint16_t *)name_count_PTRTO};
	unsigned int listLength_8=1;
	int *valueList_9[]={(int *)found_match_PTRTO};
	unsigned int listLength_9=1;
	int *valueList_10[]={(int *)returnval_PTRTO};
	unsigned int listLength_10=1;
	int *valueList_11[]={(int *)printed_something_PTRTO};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned short int valueList_13[]={0};
	unsigned int listLength_13=1;
	int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned int valueList_16[]={0};
	unsigned int listLength_16=1;
	int valueList_17[]={0};
	unsigned int listLength_17=1;
	int valueList_18[]={0};
	unsigned int listLength_18=1;
	int valueList_19[]={0};
	unsigned int listLength_19=1;
	int valueList_20[]={0};
	unsigned int listLength_20=1;
	int valueList_21[]={1};
	unsigned int listLength_21=1;
	int valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={46};
	unsigned int listLength_23=1;
	unsigned short int valueList_24[]={0};
	unsigned int listLength_24=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
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
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	magiccheck_call_counter = 0;
	print_sep_call_counter = 0;
	file_printf_call_counter = 0;
	handle_annotation_call_counter = 0;
	mget_call_counter = 0;
	msetoffset_call_counter = 0;
	file_check_mem_call_counter = 0;
	fprintf_call_counter = 0;
	moffset_call_counter = 0;
	mprint_call_counter = 0;

	aunit_printf("###TEST_TREE_test_match_8,false,0\n");
	aunit_printf("#CASE_START_test_match_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			magic=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			need_separator=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			firstline=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nmagic=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b=(struct buffer *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			indir_count=(uint16_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			ms=(struct magic_set *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			stderr=(FILE *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			name_count=(uint16_t *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			found_match=(int *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			returnval=(int *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			printed_something=(int *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			indir_count_PTRTO[0]=(unsigned short int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(ms_PTRTO[0]).flags=(int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			name_count_PTRTO[0]=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			returnval_PTRTO[0]=(int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			printed_something_PTRTO[0]=(int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			need_separator_PTRTO[0]=(int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(ms_PTRTO[0]).error=(int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			firstline_PTRTO[0]=(int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			found_match_PTRTO[0]=(int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			magic_PTRTO[0].type=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			magic_PTRTO[0].flag=(unsigned short int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		returnValue = match(ms,magic,magic_rxcomp,nmagic,b,offset,mode,text,flip,indir_count,name_count,printed_something,need_separator,firstline,returnval,found_match);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("match","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("magiccheck","magiccheck_call_counter",magiccheck_call_counter)
	OB_INT_EXPR("print_sep","print_sep_call_counter",print_sep_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("handle_annotation","handle_annotation_call_counter",handle_annotation_call_counter)
	OB_INT_EXPR("mget","mget_call_counter",mget_call_counter)
	OB_INT_EXPR("msetoffset","msetoffset_call_counter",msetoffset_call_counter)
	OB_INT_EXPR("file_check_mem","file_check_mem_call_counter",file_check_mem_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("moffset","moffset_call_counter",moffset_call_counter)
	OB_INT_EXPR("mprint","mprint_call_counter",mprint_call_counter)

	aunit_printf("#CASE_END_test_match_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_match_up();

	switch(caseIndex){
	case 8:
		test_match_8();
		break;
	default:
		abnormal_match_case(caseIndex);
		break;
	}

	test_match_down();
}

