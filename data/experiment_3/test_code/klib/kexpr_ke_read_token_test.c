void test_ke_read_token_up(void);
void test_ke_read_token_down(void);


void test_ke_read_token_up(void){

	aunit_printf("\n##FUNCTION_START_ke_read_token\n");
 }

void test_ke_read_token_down(void){
	aunit_printf("\n##FUNCTION_END_ke_read_token\n");
 }



void abnormal_ke_read_token_case(int index);

void abnormal_ke_read_token_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ke_read_token_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char **r;
	int *err;
	int last_is_val;

	//声明返回值局部变量，若为基本类型赋默认值
	ke1_t returnValue;

	//值序列相关
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//*r is an invalid expression 
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	ke_op_KEO_LT_call_counter = 0;
	ke_op_KEO_RSH_call_counter = 0;
	ke_op_KEO_BNOT_call_counter = 0;
	ke_op_KEO_BOR_call_counter = 0;
	ke_op_KEO_MUL_call_counter = 0;
	ke_op_KEO_BAND_call_counter = 0;
	ke_op_KEO_DIV_call_counter = 0;
	ke_op_KEO_NEG_call_counter = 0;
	ke_op_KEO_LOR_call_counter = 0;
	ke_op_KEO_BXOR_call_counter = 0;
	ke_op_KEO_POW_call_counter = 0;
	strtol_call_counter = 0;
	ke_op_KEO_POS_call_counter = 0;
	ke_op_KEO_ADD_call_counter = 0;
	ke_op_KEO_LAND_call_counter = 0;
	isdigit_call_counter = 0;
	ke_op_KEO_LNOT_call_counter = 0;
	isalnum_call_counter = 0;
	ke_op_KEO_EQ_call_counter = 0;
	ke_op_KEO_GE_call_counter = 0;
	strtod_call_counter = 0;
	memset_call_counter = 0;
	ke_op_KEO_NE_call_counter = 0;
	ke_op_KEO_LE_call_counter = 0;
	ke_op_KEO_SUB_call_counter = 0;
	ke_op_KEO_GT_call_counter = 0;
	ke_op_KEO_MOD_call_counter = 0;
	ke_op_KEO_IDIV_call_counter = 0;
	ke_op_KEO_LSH_call_counter = 0;
	mystrndup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_read_token_1,false,0\n");
	aunit_printf("#CASE_START_test_ke_read_token_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			last_is_val=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			err_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			err_PTRTO[1]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_read_token(p,r,err,last_is_val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("ke_op_KEO_LT","ke_op_KEO_LT_call_counter",ke_op_KEO_LT_call_counter)
	OB_INT_EXPR("ke_op_KEO_RSH","ke_op_KEO_RSH_call_counter",ke_op_KEO_RSH_call_counter)
	OB_INT_EXPR("ke_op_KEO_BNOT","ke_op_KEO_BNOT_call_counter",ke_op_KEO_BNOT_call_counter)
	OB_INT_EXPR("ke_op_KEO_BOR","ke_op_KEO_BOR_call_counter",ke_op_KEO_BOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_MUL","ke_op_KEO_MUL_call_counter",ke_op_KEO_MUL_call_counter)
	OB_INT_EXPR("ke_op_KEO_BAND","ke_op_KEO_BAND_call_counter",ke_op_KEO_BAND_call_counter)
	OB_INT_EXPR("ke_op_KEO_DIV","ke_op_KEO_DIV_call_counter",ke_op_KEO_DIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_NEG","ke_op_KEO_NEG_call_counter",ke_op_KEO_NEG_call_counter)
	OB_INT_EXPR("ke_op_KEO_LOR","ke_op_KEO_LOR_call_counter",ke_op_KEO_LOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_BXOR","ke_op_KEO_BXOR_call_counter",ke_op_KEO_BXOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_POW","ke_op_KEO_POW_call_counter",ke_op_KEO_POW_call_counter)
	OB_INT_EXPR("strtol","strtol_call_counter",strtol_call_counter)
	OB_INT_EXPR("ke_op_KEO_POS","ke_op_KEO_POS_call_counter",ke_op_KEO_POS_call_counter)
	OB_INT_EXPR("ke_op_KEO_ADD","ke_op_KEO_ADD_call_counter",ke_op_KEO_ADD_call_counter)
	OB_INT_EXPR("ke_op_KEO_LAND","ke_op_KEO_LAND_call_counter",ke_op_KEO_LAND_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)
	OB_INT_EXPR("ke_op_KEO_LNOT","ke_op_KEO_LNOT_call_counter",ke_op_KEO_LNOT_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("ke_op_KEO_EQ","ke_op_KEO_EQ_call_counter",ke_op_KEO_EQ_call_counter)
	OB_INT_EXPR("ke_op_KEO_GE","ke_op_KEO_GE_call_counter",ke_op_KEO_GE_call_counter)
	OB_INT_EXPR("strtod","strtod_call_counter",strtod_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("ke_op_KEO_NE","ke_op_KEO_NE_call_counter",ke_op_KEO_NE_call_counter)
	OB_INT_EXPR("ke_op_KEO_LE","ke_op_KEO_LE_call_counter",ke_op_KEO_LE_call_counter)
	OB_INT_EXPR("ke_op_KEO_SUB","ke_op_KEO_SUB_call_counter",ke_op_KEO_SUB_call_counter)
	OB_INT_EXPR("ke_op_KEO_GT","ke_op_KEO_GT_call_counter",ke_op_KEO_GT_call_counter)
	OB_INT_EXPR("ke_op_KEO_MOD","ke_op_KEO_MOD_call_counter",ke_op_KEO_MOD_call_counter)
	OB_INT_EXPR("ke_op_KEO_IDIV","ke_op_KEO_IDIV_call_counter",ke_op_KEO_IDIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_LSH","ke_op_KEO_LSH_call_counter",ke_op_KEO_LSH_call_counter)
	OB_INT_EXPR("mystrndup","mystrndup_call_counter",mystrndup_call_counter)

	aunit_printf("#CASE_END_test_ke_read_token_1\n");
}

void test_ke_read_token_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char **r;
	int *err;
	int last_is_val;

	//声明返回值局部变量，若为基本类型赋默认值
	ke1_t returnValue;

	//值序列相关
	char *valueList_0[]={(char *)"123"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//*r is an invalid expression 
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	ke_op_KEO_LT_call_counter = 0;
	ke_op_KEO_RSH_call_counter = 0;
	ke_op_KEO_BNOT_call_counter = 0;
	ke_op_KEO_BOR_call_counter = 0;
	ke_op_KEO_MUL_call_counter = 0;
	ke_op_KEO_BAND_call_counter = 0;
	ke_op_KEO_DIV_call_counter = 0;
	ke_op_KEO_NEG_call_counter = 0;
	ke_op_KEO_LOR_call_counter = 0;
	ke_op_KEO_BXOR_call_counter = 0;
	ke_op_KEO_POW_call_counter = 0;
	strtol_call_counter = 0;
	ke_op_KEO_POS_call_counter = 0;
	ke_op_KEO_ADD_call_counter = 0;
	ke_op_KEO_LAND_call_counter = 0;
	isdigit_call_counter = 0;
	ke_op_KEO_LNOT_call_counter = 0;
	isalnum_call_counter = 0;
	ke_op_KEO_EQ_call_counter = 0;
	ke_op_KEO_GE_call_counter = 0;
	strtod_call_counter = 0;
	memset_call_counter = 0;
	ke_op_KEO_NE_call_counter = 0;
	ke_op_KEO_LE_call_counter = 0;
	ke_op_KEO_SUB_call_counter = 0;
	ke_op_KEO_GT_call_counter = 0;
	ke_op_KEO_MOD_call_counter = 0;
	ke_op_KEO_IDIV_call_counter = 0;
	ke_op_KEO_LSH_call_counter = 0;
	mystrndup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_read_token_2,false,0\n");
	aunit_printf("#CASE_START_test_ke_read_token_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			last_is_val=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			err_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			err_PTRTO[1]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_read_token(p,r,err,last_is_val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("ke_op_KEO_LT","ke_op_KEO_LT_call_counter",ke_op_KEO_LT_call_counter)
	OB_INT_EXPR("ke_op_KEO_RSH","ke_op_KEO_RSH_call_counter",ke_op_KEO_RSH_call_counter)
	OB_INT_EXPR("ke_op_KEO_BNOT","ke_op_KEO_BNOT_call_counter",ke_op_KEO_BNOT_call_counter)
	OB_INT_EXPR("ke_op_KEO_BOR","ke_op_KEO_BOR_call_counter",ke_op_KEO_BOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_MUL","ke_op_KEO_MUL_call_counter",ke_op_KEO_MUL_call_counter)
	OB_INT_EXPR("ke_op_KEO_BAND","ke_op_KEO_BAND_call_counter",ke_op_KEO_BAND_call_counter)
	OB_INT_EXPR("ke_op_KEO_DIV","ke_op_KEO_DIV_call_counter",ke_op_KEO_DIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_NEG","ke_op_KEO_NEG_call_counter",ke_op_KEO_NEG_call_counter)
	OB_INT_EXPR("ke_op_KEO_LOR","ke_op_KEO_LOR_call_counter",ke_op_KEO_LOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_BXOR","ke_op_KEO_BXOR_call_counter",ke_op_KEO_BXOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_POW","ke_op_KEO_POW_call_counter",ke_op_KEO_POW_call_counter)
	OB_INT_EXPR("strtol","strtol_call_counter",strtol_call_counter)
	OB_INT_EXPR("ke_op_KEO_POS","ke_op_KEO_POS_call_counter",ke_op_KEO_POS_call_counter)
	OB_INT_EXPR("ke_op_KEO_ADD","ke_op_KEO_ADD_call_counter",ke_op_KEO_ADD_call_counter)
	OB_INT_EXPR("ke_op_KEO_LAND","ke_op_KEO_LAND_call_counter",ke_op_KEO_LAND_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)
	OB_INT_EXPR("ke_op_KEO_LNOT","ke_op_KEO_LNOT_call_counter",ke_op_KEO_LNOT_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("ke_op_KEO_EQ","ke_op_KEO_EQ_call_counter",ke_op_KEO_EQ_call_counter)
	OB_INT_EXPR("ke_op_KEO_GE","ke_op_KEO_GE_call_counter",ke_op_KEO_GE_call_counter)
	OB_INT_EXPR("strtod","strtod_call_counter",strtod_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("ke_op_KEO_NE","ke_op_KEO_NE_call_counter",ke_op_KEO_NE_call_counter)
	OB_INT_EXPR("ke_op_KEO_LE","ke_op_KEO_LE_call_counter",ke_op_KEO_LE_call_counter)
	OB_INT_EXPR("ke_op_KEO_SUB","ke_op_KEO_SUB_call_counter",ke_op_KEO_SUB_call_counter)
	OB_INT_EXPR("ke_op_KEO_GT","ke_op_KEO_GT_call_counter",ke_op_KEO_GT_call_counter)
	OB_INT_EXPR("ke_op_KEO_MOD","ke_op_KEO_MOD_call_counter",ke_op_KEO_MOD_call_counter)
	OB_INT_EXPR("ke_op_KEO_IDIV","ke_op_KEO_IDIV_call_counter",ke_op_KEO_IDIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_LSH","ke_op_KEO_LSH_call_counter",ke_op_KEO_LSH_call_counter)
	OB_INT_EXPR("mystrndup","mystrndup_call_counter",mystrndup_call_counter)

	aunit_printf("#CASE_END_test_ke_read_token_2\n");
}

void test_ke_read_token_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char **r;
	int *err;
	int last_is_val;

	//声明返回值局部变量，若为基本类型赋默认值
	ke1_t returnValue;

	//值序列相关
	int *valueList_0[]={(int *)err_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	//*r is an invalid expression 
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	ke_op_KEO_LT_call_counter = 0;
	ke_op_KEO_RSH_call_counter = 0;
	ke_op_KEO_BNOT_call_counter = 0;
	ke_op_KEO_BOR_call_counter = 0;
	ke_op_KEO_MUL_call_counter = 0;
	ke_op_KEO_BAND_call_counter = 0;
	ke_op_KEO_DIV_call_counter = 0;
	ke_op_KEO_NEG_call_counter = 0;
	ke_op_KEO_LOR_call_counter = 0;
	ke_op_KEO_BXOR_call_counter = 0;
	ke_op_KEO_POW_call_counter = 0;
	strtol_call_counter = 0;
	ke_op_KEO_POS_call_counter = 0;
	ke_op_KEO_ADD_call_counter = 0;
	ke_op_KEO_LAND_call_counter = 0;
	isdigit_call_counter = 0;
	ke_op_KEO_LNOT_call_counter = 0;
	isalnum_call_counter = 0;
	ke_op_KEO_EQ_call_counter = 0;
	ke_op_KEO_GE_call_counter = 0;
	strtod_call_counter = 0;
	memset_call_counter = 0;
	ke_op_KEO_NE_call_counter = 0;
	ke_op_KEO_LE_call_counter = 0;
	ke_op_KEO_SUB_call_counter = 0;
	ke_op_KEO_GT_call_counter = 0;
	ke_op_KEO_MOD_call_counter = 0;
	ke_op_KEO_IDIV_call_counter = 0;
	ke_op_KEO_LSH_call_counter = 0;
	mystrndup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_read_token_3,false,0\n");
	aunit_printf("#CASE_START_test_ke_read_token_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			err=(int *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			last_is_val=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			err_PTRTO[0]=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			err_PTRTO[1]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ke_read_token(p,r,err,last_is_val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("ke_op_KEO_LT","ke_op_KEO_LT_call_counter",ke_op_KEO_LT_call_counter)
	OB_INT_EXPR("ke_op_KEO_RSH","ke_op_KEO_RSH_call_counter",ke_op_KEO_RSH_call_counter)
	OB_INT_EXPR("ke_op_KEO_BNOT","ke_op_KEO_BNOT_call_counter",ke_op_KEO_BNOT_call_counter)
	OB_INT_EXPR("ke_op_KEO_BOR","ke_op_KEO_BOR_call_counter",ke_op_KEO_BOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_MUL","ke_op_KEO_MUL_call_counter",ke_op_KEO_MUL_call_counter)
	OB_INT_EXPR("ke_op_KEO_BAND","ke_op_KEO_BAND_call_counter",ke_op_KEO_BAND_call_counter)
	OB_INT_EXPR("ke_op_KEO_DIV","ke_op_KEO_DIV_call_counter",ke_op_KEO_DIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_NEG","ke_op_KEO_NEG_call_counter",ke_op_KEO_NEG_call_counter)
	OB_INT_EXPR("ke_op_KEO_LOR","ke_op_KEO_LOR_call_counter",ke_op_KEO_LOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_BXOR","ke_op_KEO_BXOR_call_counter",ke_op_KEO_BXOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_POW","ke_op_KEO_POW_call_counter",ke_op_KEO_POW_call_counter)
	OB_INT_EXPR("strtol","strtol_call_counter",strtol_call_counter)
	OB_INT_EXPR("ke_op_KEO_POS","ke_op_KEO_POS_call_counter",ke_op_KEO_POS_call_counter)
	OB_INT_EXPR("ke_op_KEO_ADD","ke_op_KEO_ADD_call_counter",ke_op_KEO_ADD_call_counter)
	OB_INT_EXPR("ke_op_KEO_LAND","ke_op_KEO_LAND_call_counter",ke_op_KEO_LAND_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)
	OB_INT_EXPR("ke_op_KEO_LNOT","ke_op_KEO_LNOT_call_counter",ke_op_KEO_LNOT_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("ke_op_KEO_EQ","ke_op_KEO_EQ_call_counter",ke_op_KEO_EQ_call_counter)
	OB_INT_EXPR("ke_op_KEO_GE","ke_op_KEO_GE_call_counter",ke_op_KEO_GE_call_counter)
	OB_INT_EXPR("strtod","strtod_call_counter",strtod_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("ke_op_KEO_NE","ke_op_KEO_NE_call_counter",ke_op_KEO_NE_call_counter)
	OB_INT_EXPR("ke_op_KEO_LE","ke_op_KEO_LE_call_counter",ke_op_KEO_LE_call_counter)
	OB_INT_EXPR("ke_op_KEO_SUB","ke_op_KEO_SUB_call_counter",ke_op_KEO_SUB_call_counter)
	OB_INT_EXPR("ke_op_KEO_GT","ke_op_KEO_GT_call_counter",ke_op_KEO_GT_call_counter)
	OB_INT_EXPR("ke_op_KEO_MOD","ke_op_KEO_MOD_call_counter",ke_op_KEO_MOD_call_counter)
	OB_INT_EXPR("ke_op_KEO_IDIV","ke_op_KEO_IDIV_call_counter",ke_op_KEO_IDIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_LSH","ke_op_KEO_LSH_call_counter",ke_op_KEO_LSH_call_counter)
	OB_INT_EXPR("mystrndup","mystrndup_call_counter",mystrndup_call_counter)

	aunit_printf("#CASE_END_test_ke_read_token_3\n");
}

void test_ke_read_token_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char **r;
	int *err;
	int last_is_val;

	//声明返回值局部变量，若为基本类型赋默认值
	ke1_t returnValue;

	//值序列相关
	char *valueList_0[]={(char *)"+"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	//*r is an invalid expression 
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	ke_op_KEO_LT_call_counter = 0;
	ke_op_KEO_RSH_call_counter = 0;
	ke_op_KEO_BNOT_call_counter = 0;
	ke_op_KEO_BOR_call_counter = 0;
	ke_op_KEO_MUL_call_counter = 0;
	ke_op_KEO_BAND_call_counter = 0;
	ke_op_KEO_DIV_call_counter = 0;
	ke_op_KEO_NEG_call_counter = 0;
	ke_op_KEO_LOR_call_counter = 0;
	ke_op_KEO_BXOR_call_counter = 0;
	ke_op_KEO_POW_call_counter = 0;
	strtol_call_counter = 0;
	ke_op_KEO_POS_call_counter = 0;
	ke_op_KEO_ADD_call_counter = 0;
	ke_op_KEO_LAND_call_counter = 0;
	isdigit_call_counter = 0;
	ke_op_KEO_LNOT_call_counter = 0;
	isalnum_call_counter = 0;
	ke_op_KEO_EQ_call_counter = 0;
	ke_op_KEO_GE_call_counter = 0;
	strtod_call_counter = 0;
	memset_call_counter = 0;
	ke_op_KEO_NE_call_counter = 0;
	ke_op_KEO_LE_call_counter = 0;
	ke_op_KEO_SUB_call_counter = 0;
	ke_op_KEO_GT_call_counter = 0;
	ke_op_KEO_MOD_call_counter = 0;
	ke_op_KEO_IDIV_call_counter = 0;
	ke_op_KEO_LSH_call_counter = 0;
	mystrndup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_read_token_4,false,0\n");
	aunit_printf("#CASE_START_test_ke_read_token_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			last_is_val=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			err_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			err_PTRTO[1]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_read_token(p,r,err,last_is_val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("ke_op_KEO_LT","ke_op_KEO_LT_call_counter",ke_op_KEO_LT_call_counter)
	OB_INT_EXPR("ke_op_KEO_RSH","ke_op_KEO_RSH_call_counter",ke_op_KEO_RSH_call_counter)
	OB_INT_EXPR("ke_op_KEO_BNOT","ke_op_KEO_BNOT_call_counter",ke_op_KEO_BNOT_call_counter)
	OB_INT_EXPR("ke_op_KEO_BOR","ke_op_KEO_BOR_call_counter",ke_op_KEO_BOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_MUL","ke_op_KEO_MUL_call_counter",ke_op_KEO_MUL_call_counter)
	OB_INT_EXPR("ke_op_KEO_BAND","ke_op_KEO_BAND_call_counter",ke_op_KEO_BAND_call_counter)
	OB_INT_EXPR("ke_op_KEO_DIV","ke_op_KEO_DIV_call_counter",ke_op_KEO_DIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_NEG","ke_op_KEO_NEG_call_counter",ke_op_KEO_NEG_call_counter)
	OB_INT_EXPR("ke_op_KEO_LOR","ke_op_KEO_LOR_call_counter",ke_op_KEO_LOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_BXOR","ke_op_KEO_BXOR_call_counter",ke_op_KEO_BXOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_POW","ke_op_KEO_POW_call_counter",ke_op_KEO_POW_call_counter)
	OB_INT_EXPR("strtol","strtol_call_counter",strtol_call_counter)
	OB_INT_EXPR("ke_op_KEO_POS","ke_op_KEO_POS_call_counter",ke_op_KEO_POS_call_counter)
	OB_INT_EXPR("ke_op_KEO_ADD","ke_op_KEO_ADD_call_counter",ke_op_KEO_ADD_call_counter)
	OB_INT_EXPR("ke_op_KEO_LAND","ke_op_KEO_LAND_call_counter",ke_op_KEO_LAND_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)
	OB_INT_EXPR("ke_op_KEO_LNOT","ke_op_KEO_LNOT_call_counter",ke_op_KEO_LNOT_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("ke_op_KEO_EQ","ke_op_KEO_EQ_call_counter",ke_op_KEO_EQ_call_counter)
	OB_INT_EXPR("ke_op_KEO_GE","ke_op_KEO_GE_call_counter",ke_op_KEO_GE_call_counter)
	OB_INT_EXPR("strtod","strtod_call_counter",strtod_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("ke_op_KEO_NE","ke_op_KEO_NE_call_counter",ke_op_KEO_NE_call_counter)
	OB_INT_EXPR("ke_op_KEO_LE","ke_op_KEO_LE_call_counter",ke_op_KEO_LE_call_counter)
	OB_INT_EXPR("ke_op_KEO_SUB","ke_op_KEO_SUB_call_counter",ke_op_KEO_SUB_call_counter)
	OB_INT_EXPR("ke_op_KEO_GT","ke_op_KEO_GT_call_counter",ke_op_KEO_GT_call_counter)
	OB_INT_EXPR("ke_op_KEO_MOD","ke_op_KEO_MOD_call_counter",ke_op_KEO_MOD_call_counter)
	OB_INT_EXPR("ke_op_KEO_IDIV","ke_op_KEO_IDIV_call_counter",ke_op_KEO_IDIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_LSH","ke_op_KEO_LSH_call_counter",ke_op_KEO_LSH_call_counter)
	OB_INT_EXPR("mystrndup","mystrndup_call_counter",mystrndup_call_counter)

	aunit_printf("#CASE_END_test_ke_read_token_4\n");
}

void test_ke_read_token_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;
	char **r;
	int *err;
	int last_is_val;

	//声明返回值局部变量，若为基本类型赋默认值
	ke1_t returnValue;

	//值序列相关
	char *valueList_0[]={(char *)"#"};
	unsigned int listLength_0=1;
	int *valueList_1[]={(int *)err_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//*r is an invalid expression 
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	isalpha_call_counter = 0;
	ke_op_KEO_LT_call_counter = 0;
	ke_op_KEO_RSH_call_counter = 0;
	ke_op_KEO_BNOT_call_counter = 0;
	ke_op_KEO_BOR_call_counter = 0;
	ke_op_KEO_MUL_call_counter = 0;
	ke_op_KEO_BAND_call_counter = 0;
	ke_op_KEO_DIV_call_counter = 0;
	ke_op_KEO_NEG_call_counter = 0;
	ke_op_KEO_LOR_call_counter = 0;
	ke_op_KEO_BXOR_call_counter = 0;
	ke_op_KEO_POW_call_counter = 0;
	strtol_call_counter = 0;
	ke_op_KEO_POS_call_counter = 0;
	ke_op_KEO_ADD_call_counter = 0;
	ke_op_KEO_LAND_call_counter = 0;
	isdigit_call_counter = 0;
	ke_op_KEO_LNOT_call_counter = 0;
	isalnum_call_counter = 0;
	ke_op_KEO_EQ_call_counter = 0;
	ke_op_KEO_GE_call_counter = 0;
	strtod_call_counter = 0;
	memset_call_counter = 0;
	ke_op_KEO_NE_call_counter = 0;
	ke_op_KEO_LE_call_counter = 0;
	ke_op_KEO_SUB_call_counter = 0;
	ke_op_KEO_GT_call_counter = 0;
	ke_op_KEO_MOD_call_counter = 0;
	ke_op_KEO_IDIV_call_counter = 0;
	ke_op_KEO_LSH_call_counter = 0;
	mystrndup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ke_read_token_5,false,0\n");
	aunit_printf("#CASE_START_test_ke_read_token_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			err=(int *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			last_is_val=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			err_PTRTO[0]=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			err_PTRTO[1]=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = ke_read_token(p,r,err,last_is_val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ke_read_token","err[0]",8,err[0])

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("ke_op_KEO_LT","ke_op_KEO_LT_call_counter",ke_op_KEO_LT_call_counter)
	OB_INT_EXPR("ke_op_KEO_RSH","ke_op_KEO_RSH_call_counter",ke_op_KEO_RSH_call_counter)
	OB_INT_EXPR("ke_op_KEO_BNOT","ke_op_KEO_BNOT_call_counter",ke_op_KEO_BNOT_call_counter)
	OB_INT_EXPR("ke_op_KEO_BOR","ke_op_KEO_BOR_call_counter",ke_op_KEO_BOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_MUL","ke_op_KEO_MUL_call_counter",ke_op_KEO_MUL_call_counter)
	OB_INT_EXPR("ke_op_KEO_BAND","ke_op_KEO_BAND_call_counter",ke_op_KEO_BAND_call_counter)
	OB_INT_EXPR("ke_op_KEO_DIV","ke_op_KEO_DIV_call_counter",ke_op_KEO_DIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_NEG","ke_op_KEO_NEG_call_counter",ke_op_KEO_NEG_call_counter)
	OB_INT_EXPR("ke_op_KEO_LOR","ke_op_KEO_LOR_call_counter",ke_op_KEO_LOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_BXOR","ke_op_KEO_BXOR_call_counter",ke_op_KEO_BXOR_call_counter)
	OB_INT_EXPR("ke_op_KEO_POW","ke_op_KEO_POW_call_counter",ke_op_KEO_POW_call_counter)
	OB_INT_EXPR("strtol","strtol_call_counter",strtol_call_counter)
	OB_INT_EXPR("ke_op_KEO_POS","ke_op_KEO_POS_call_counter",ke_op_KEO_POS_call_counter)
	OB_INT_EXPR("ke_op_KEO_ADD","ke_op_KEO_ADD_call_counter",ke_op_KEO_ADD_call_counter)
	OB_INT_EXPR("ke_op_KEO_LAND","ke_op_KEO_LAND_call_counter",ke_op_KEO_LAND_call_counter)
	OB_INT_EXPR("isdigit","isdigit_call_counter",isdigit_call_counter)
	OB_INT_EXPR("ke_op_KEO_LNOT","ke_op_KEO_LNOT_call_counter",ke_op_KEO_LNOT_call_counter)
	OB_INT_EXPR("isalnum","isalnum_call_counter",isalnum_call_counter)
	OB_INT_EXPR("ke_op_KEO_EQ","ke_op_KEO_EQ_call_counter",ke_op_KEO_EQ_call_counter)
	OB_INT_EXPR("ke_op_KEO_GE","ke_op_KEO_GE_call_counter",ke_op_KEO_GE_call_counter)
	OB_INT_EXPR("strtod","strtod_call_counter",strtod_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("ke_op_KEO_NE","ke_op_KEO_NE_call_counter",ke_op_KEO_NE_call_counter)
	OB_INT_EXPR("ke_op_KEO_LE","ke_op_KEO_LE_call_counter",ke_op_KEO_LE_call_counter)
	OB_INT_EXPR("ke_op_KEO_SUB","ke_op_KEO_SUB_call_counter",ke_op_KEO_SUB_call_counter)
	OB_INT_EXPR("ke_op_KEO_GT","ke_op_KEO_GT_call_counter",ke_op_KEO_GT_call_counter)
	OB_INT_EXPR("ke_op_KEO_MOD","ke_op_KEO_MOD_call_counter",ke_op_KEO_MOD_call_counter)
	OB_INT_EXPR("ke_op_KEO_IDIV","ke_op_KEO_IDIV_call_counter",ke_op_KEO_IDIV_call_counter)
	OB_INT_EXPR("ke_op_KEO_LSH","ke_op_KEO_LSH_call_counter",ke_op_KEO_LSH_call_counter)
	OB_INT_EXPR("mystrndup","mystrndup_call_counter",mystrndup_call_counter)

	aunit_printf("#CASE_END_test_ke_read_token_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ke_read_token_up();

	switch(caseIndex){
	case 1:
		test_ke_read_token_1();
		break;
	case 2:
		test_ke_read_token_2();
		break;
	case 3:
		test_ke_read_token_3();
		break;
	case 4:
		test_ke_read_token_4();
		break;
	case 5:
		test_ke_read_token_5();
		break;
	default:
		abnormal_ke_read_token_case(caseIndex);
		break;
	}

	test_ke_read_token_down();
}

