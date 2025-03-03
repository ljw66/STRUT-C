void test_file_buffer_up(void);
void test_file_buffer_down(void);


void test_file_buffer_up(void){

	aunit_printf("\n##FUNCTION_START_file_buffer\n");
 }

void test_file_buffer_down(void){
	aunit_printf("\n##FUNCTION_END_file_buffer\n");
 }



void abnormal_file_buffer_case(int index);

void abnormal_file_buffer_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_buffer_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int fd;
	struct stat *st;
	char *inname;
	void *buf;
	unsigned int nb;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	struct stat *valueList_1[]={(struct stat *)st_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	FILE *valueList_3[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	long int valueList_9[]={0};
	unsigned int listLength_9=1;
	long int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0};
	unsigned int listLength_13=1;
	long int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned short int valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned short int valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned short int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned short int valueList_20[]={0};
	unsigned int listLength_20=1;
	long int valueList_21[]={0};
	unsigned int listLength_21=1;
	int valueList_22[]={0};
	unsigned int listLength_22=1;
	short int valueList_23[]={0};
	unsigned int listLength_23=1;
	unsigned short int valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned int valueList_25[]={0};
	unsigned int listLength_25=1;
	long int valueList_26[]={0};
	unsigned int listLength_26=1;
	long int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned short int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned int valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned short int valueList_30[]={0};
	unsigned int listLength_30=1;
	char *valueList_31[]={(char *)0};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={0};
	unsigned int listLength_32=1;
	int valueList_33[]={0};
	unsigned int listLength_33=1;
	long int valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned short int valueList_36[]={0};
	unsigned int listLength_36=1;
	long int valueList_37[]={0};
	unsigned int listLength_37=1;
	unsigned short int valueList_38[]={0};
	unsigned int listLength_38=1;
	long int valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned int valueList_40[]={0};
	unsigned int listLength_40=1;
	short int valueList_41[]={0};
	unsigned int listLength_41=1;
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
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	file_is_tar_call_counter = 0;
	file_is_json_call_counter = 0;
	checkdone_call_counter = 0;
	file_softmagic_call_counter = 0;
	file_printf_call_counter = 0;
	file_is_csv_call_counter = 0;
	file_default_call_counter = 0;
	buffer_init_call_counter = 0;
	fprintf_call_counter = 0;
	trim_separator_call_counter = 0;
	file_trycdf_call_counter = 0;
	file_ascmagic_call_counter = 0;
	file_encoding_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	file_is_simh_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_buffer_1,false,0\n");
	aunit_printf("#CASE_START_test_file_buffer_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			inname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			st=(struct stat *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			stderr=(FILE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nb=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			fd=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(st_PTRTO[0]).st_nlink=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).event_flags=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(st_PTRTO[0]).st_spare1=(long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(st_PTRTO[0]).st_spare2=(long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(st_PTRTO[0]).st_ino=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).file=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(st_PTRTO[0]).st_mode=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(st_PTRTO[0]).st_blocks=(long int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(st_PTRTO[0]).st_gid=(unsigned short int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(ms_PTRTO[0]).line=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(st_PTRTO[0]).st_blksize=(long int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(ms_PTRTO[0]).flags=(int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(st_PTRTO[0]).st_rdev=(short int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(st_PTRTO[0]).st_atime=(long int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(st_PTRTO[0]).st_ctime=(long int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(st_PTRTO[0]).st_uid=(unsigned short int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(ms_PTRTO[0]).error=(int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(st_PTRTO[0]).st_mtime=(long int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(st_PTRTO[0]).st_size=(long int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(ms_PTRTO[0]).elf_phnum_max=(unsigned short int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(st_PTRTO[0]).st_spare3=(long int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(ms_PTRTO[0]).bytes_max=(unsigned int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(st_PTRTO[0]).st_dev=(short int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		returnValue = file_buffer(ms,fd,st,inname,buf,nb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_buffer","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_is_tar","file_is_tar_call_counter",file_is_tar_call_counter)
	OB_INT_EXPR("file_is_json","file_is_json_call_counter",file_is_json_call_counter)
	OB_INT_EXPR("checkdone","checkdone_call_counter",checkdone_call_counter)
	OB_INT_EXPR("file_softmagic","file_softmagic_call_counter",file_softmagic_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_is_csv","file_is_csv_call_counter",file_is_csv_call_counter)
	OB_INT_EXPR("file_default","file_default_call_counter",file_default_call_counter)
	OB_INT_EXPR("buffer_init","buffer_init_call_counter",buffer_init_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("trim_separator","trim_separator_call_counter",trim_separator_call_counter)
	OB_INT_EXPR("file_trycdf","file_trycdf_call_counter",file_trycdf_call_counter)
	OB_INT_EXPR("file_ascmagic","file_ascmagic_call_counter",file_ascmagic_call_counter)
	OB_INT_EXPR("file_encoding","file_encoding_call_counter",file_encoding_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("file_is_simh","file_is_simh_call_counter",file_is_simh_call_counter)

	aunit_printf("#CASE_END_test_file_buffer_1\n");
}

void test_file_buffer_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int fd;
	struct stat *st;
	char *inname;
	void *buf;
	unsigned int nb;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	struct stat *valueList_1[]={(struct stat *)st_PTRTO};
	unsigned int listLength_1=1;
	struct magic_set *valueList_2[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_2=1;
	FILE *valueList_3[]={(FILE *)stderr_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	long int valueList_9[]={0};
	unsigned int listLength_9=1;
	long int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned short int valueList_11[]={0};
	unsigned int listLength_11=1;
	char *valueList_12[]={(char *)0};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0};
	unsigned int listLength_13=1;
	long int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned short int valueList_16[]={0};
	unsigned int listLength_16=1;
	unsigned short int valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={0};
	unsigned int listLength_18=1;
	unsigned short int valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned short int valueList_20[]={0};
	unsigned int listLength_20=1;
	long int valueList_21[]={0};
	unsigned int listLength_21=1;
	int valueList_22[]={0};
	unsigned int listLength_22=1;
	short int valueList_23[]={0};
	unsigned int listLength_23=1;
	unsigned short int valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned int valueList_25[]={0};
	unsigned int listLength_25=1;
	long int valueList_26[]={0};
	unsigned int listLength_26=1;
	long int valueList_27[]={0};
	unsigned int listLength_27=1;
	unsigned short int valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned int valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned short int valueList_30[]={0};
	unsigned int listLength_30=1;
	char *valueList_31[]={(char *)0};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={0};
	unsigned int listLength_32=1;
	int valueList_33[]={0};
	unsigned int listLength_33=1;
	long int valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned short int valueList_36[]={0};
	unsigned int listLength_36=1;
	long int valueList_37[]={0};
	unsigned int listLength_37=1;
	unsigned short int valueList_38[]={0};
	unsigned int listLength_38=1;
	long int valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned int valueList_40[]={0};
	unsigned int listLength_40=1;
	short int valueList_41[]={0};
	unsigned int listLength_41=1;
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
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	file_is_tar_call_counter = 0;
	file_is_json_call_counter = 0;
	checkdone_call_counter = 0;
	file_softmagic_call_counter = 0;
	file_printf_call_counter = 0;
	file_is_csv_call_counter = 0;
	file_default_call_counter = 0;
	buffer_init_call_counter = 0;
	fprintf_call_counter = 0;
	trim_separator_call_counter = 0;
	file_trycdf_call_counter = 0;
	file_ascmagic_call_counter = 0;
	file_encoding_call_counter = 0;
	free_call_counter = 0;
	buffer_fini_call_counter = 0;
	file_is_simh_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_buffer_2,false,0\n");
	aunit_printf("#CASE_START_test_file_buffer_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			inname=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			st=(struct stat *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ms=(struct magic_set *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			stderr=(FILE *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			nb=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			fd=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ms_PTRTO[0]).offset=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(st_PTRTO[0]).st_nlink=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ms_PTRTO[0]).event_flags=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(st_PTRTO[0]).st_spare1=(long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(st_PTRTO[0]).st_spare2=(long int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(st_PTRTO[0]).st_ino=(unsigned short int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ms_PTRTO[0]).file=(char *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(st_PTRTO[0]).st_mode=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(st_PTRTO[0]).st_blocks=(long int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(ms_PTRTO[0]).indir_max=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(ms_PTRTO[0]).magwarn_max=(unsigned short int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(st_PTRTO[0]).st_gid=(unsigned short int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(ms_PTRTO[0]).line=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(st_PTRTO[0]).st_blksize=(long int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(ms_PTRTO[0]).flags=(int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			(st_PTRTO[0]).st_rdev=(short int)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			(ms_PTRTO[0]).magwarn=(unsigned short int)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			(ms_PTRTO[0]).eoffset=(unsigned int)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			(st_PTRTO[0]).st_atime=(long int)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			(st_PTRTO[0]).st_ctime=(long int)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			(st_PTRTO[0]).st_uid=(unsigned short int)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			(ms_PTRTO[0]).mode=(unsigned int)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			(ms_PTRTO[0]).fnamebuf=(char *)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			(ms_PTRTO[0]).error=(int)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			(st_PTRTO[0]).st_mtime=(long int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			(ms_PTRTO[0]).encoding_max=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			(ms_PTRTO[0]).name_max=(unsigned short int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			(st_PTRTO[0]).st_size=(long int)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			(ms_PTRTO[0]).elf_phnum_max=(unsigned short int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			(st_PTRTO[0]).st_spare3=(long int)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			(ms_PTRTO[0]).bytes_max=(unsigned int)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			(st_PTRTO[0]).st_dev=(short int)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		returnValue = file_buffer(ms,fd,st,inname,buf,nb);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("file_buffer","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_is_tar","file_is_tar_call_counter",file_is_tar_call_counter)
	OB_INT_EXPR("file_is_json","file_is_json_call_counter",file_is_json_call_counter)
	OB_INT_EXPR("checkdone","checkdone_call_counter",checkdone_call_counter)
	OB_INT_EXPR("file_softmagic","file_softmagic_call_counter",file_softmagic_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("file_is_csv","file_is_csv_call_counter",file_is_csv_call_counter)
	OB_INT_EXPR("file_default","file_default_call_counter",file_default_call_counter)
	OB_INT_EXPR("buffer_init","buffer_init_call_counter",buffer_init_call_counter)
	OB_INT_EXPR("fprintf","fprintf_call_counter",fprintf_call_counter)
	OB_INT_EXPR("trim_separator","trim_separator_call_counter",trim_separator_call_counter)
	OB_INT_EXPR("file_trycdf","file_trycdf_call_counter",file_trycdf_call_counter)
	OB_INT_EXPR("file_ascmagic","file_ascmagic_call_counter",file_ascmagic_call_counter)
	OB_INT_EXPR("file_encoding","file_encoding_call_counter",file_encoding_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("buffer_fini","buffer_fini_call_counter",buffer_fini_call_counter)
	OB_INT_EXPR("file_is_simh","file_is_simh_call_counter",file_is_simh_call_counter)

	aunit_printf("#CASE_END_test_file_buffer_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_buffer_up();

	switch(caseIndex){
	case 1:
		test_file_buffer_1();
		break;
	case 2:
		test_file_buffer_2();
		break;
	default:
		abnormal_file_buffer_case(caseIndex);
		break;
	}

	test_file_buffer_down();
}

