void test_aes_decrypt_ccm_up(void);
void test_aes_decrypt_ccm_down(void);


void test_aes_decrypt_ccm_up(void){

	aunit_printf("\n##FUNCTION_START_aes_decrypt_ccm\n");
 }

void test_aes_decrypt_ccm_down(void){
	aunit_printf("\n##FUNCTION_END_aes_decrypt_ccm\n");
 }



void abnormal_aes_decrypt_ccm_case(int index);

void abnormal_aes_decrypt_ccm_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_decrypt_ccm_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *ciphertext;
	unsigned int ciphertext_len;
	BYTE *assoc;
	unsigned short int assoc_len;
	BYTE *nonce;
	unsigned short int nonce_len;
	BYTE *plaintext;
	WORD *plaintext_len;
	unsigned int mac_len;
	int *mac_auth;
	BYTE *key_str;
	int keysize;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={8};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdef"};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={8};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={6};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"plaintext"};
	unsigned int listLength_5=1;
	WORD *valueList_6[]={(WORD *)plaintext_len_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)mac_auth_PTRTO};
	unsigned int listLength_7=1;
	BYTE *valueList_8[]={(BYTE *)"nonceval"};
	unsigned int listLength_8=1;
	int valueList_9[]={128};
	unsigned int listLength_9=1;
	BYTE *valueList_10[]={(BYTE *)"assocdata"};
	unsigned int listLength_10=1;
	BYTE *valueList_11[]={(BYTE *)"keyvalue"};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	increment_iv_call_counter = 0;
	malloc_call_counter = 0;
	aes_decrypt_ctr_call_counter = 0;
	aes_encrypt_cbc_mac_call_counter = 0;
	ccm_format_payload_data_call_counter = 0;
	ccm_prepare_first_ctr_blk_call_counter = 0;
	ccm_format_assoc_data_call_counter = 0;
	memset_call_counter = 0;
	aes_key_setup_call_counter = 0;
	memcmp_call_counter = 0;
	memcpy_call_counter = 0;
	free_call_counter = 0;
	ccm_prepare_first_format_blk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ccm_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ccm_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			assoc_len=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ciphertext=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce_len=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ciphertext_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			mac_len=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			plaintext=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			plaintext_len=(WORD *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			mac_auth=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			nonce=(BYTE *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			keysize=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			assoc=(BYTE *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key_str=(BYTE *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			mac_auth_PTRTO[0]=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			mac_auth_PTRTO[1]=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			plaintext_len_PTRTO[1]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			plaintext_len_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = aes_decrypt_ccm(ciphertext,ciphertext_len,assoc,assoc_len,nonce,nonce_len,plaintext,plaintext_len,mac_len,mac_auth,key_str,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_decrypt_ccm","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("increment_iv","increment_iv_call_counter",increment_iv_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("aes_decrypt_ctr","aes_decrypt_ctr_call_counter",aes_decrypt_ctr_call_counter)
	OB_INT_EXPR("aes_encrypt_cbc_mac","aes_encrypt_cbc_mac_call_counter",aes_encrypt_cbc_mac_call_counter)
	OB_INT_EXPR("ccm_format_payload_data","ccm_format_payload_data_call_counter",ccm_format_payload_data_call_counter)
	OB_INT_EXPR("ccm_prepare_first_ctr_blk","ccm_prepare_first_ctr_blk_call_counter",ccm_prepare_first_ctr_blk_call_counter)
	OB_INT_EXPR("ccm_format_assoc_data","ccm_format_assoc_data_call_counter",ccm_format_assoc_data_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("aes_key_setup","aes_key_setup_call_counter",aes_key_setup_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ccm_prepare_first_format_blk","ccm_prepare_first_format_blk_call_counter",ccm_prepare_first_format_blk_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ccm_1\n");
}

void test_aes_decrypt_ccm_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *ciphertext;
	unsigned int ciphertext_len;
	BYTE *assoc;
	unsigned short int assoc_len;
	BYTE *nonce;
	unsigned short int nonce_len;
	BYTE *plaintext;
	WORD *plaintext_len;
	unsigned int mac_len;
	int *mac_auth;
	BYTE *key_str;
	int keysize;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={8};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdef"};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={8};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={10};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={6};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"plaintext"};
	unsigned int listLength_5=1;
	WORD *valueList_6[]={(WORD *)plaintext_len_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)mac_auth_PTRTO};
	unsigned int listLength_7=1;
	BYTE *valueList_8[]={(BYTE *)"nonceval"};
	unsigned int listLength_8=1;
	int valueList_9[]={128};
	unsigned int listLength_9=1;
	BYTE *valueList_10[]={(BYTE *)"assocdata"};
	unsigned int listLength_10=1;
	BYTE *valueList_11[]={(BYTE *)"keyvalue"};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	increment_iv_call_counter = 0;
	malloc_call_counter = 0;
	aes_decrypt_ctr_call_counter = 0;
	aes_encrypt_cbc_mac_call_counter = 0;
	ccm_format_payload_data_call_counter = 0;
	ccm_prepare_first_ctr_blk_call_counter = 0;
	ccm_format_assoc_data_call_counter = 0;
	memset_call_counter = 0;
	aes_key_setup_call_counter = 0;
	memcmp_call_counter = 0;
	memcpy_call_counter = 0;
	free_call_counter = 0;
	ccm_prepare_first_format_blk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ccm_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ccm_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			assoc_len=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ciphertext=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce_len=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ciphertext_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			mac_len=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			plaintext=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			plaintext_len=(WORD *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			mac_auth=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			nonce=(BYTE *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			keysize=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			assoc=(BYTE *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key_str=(BYTE *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			mac_auth_PTRTO[0]=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			mac_auth_PTRTO[1]=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			plaintext_len_PTRTO[1]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			plaintext_len_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = aes_decrypt_ccm(ciphertext,ciphertext_len,assoc,assoc_len,nonce,nonce_len,plaintext,plaintext_len,mac_len,mac_auth,key_str,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_decrypt_ccm","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("increment_iv","increment_iv_call_counter",increment_iv_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("aes_decrypt_ctr","aes_decrypt_ctr_call_counter",aes_decrypt_ctr_call_counter)
	OB_INT_EXPR("aes_encrypt_cbc_mac","aes_encrypt_cbc_mac_call_counter",aes_encrypt_cbc_mac_call_counter)
	OB_INT_EXPR("ccm_format_payload_data","ccm_format_payload_data_call_counter",ccm_format_payload_data_call_counter)
	OB_INT_EXPR("ccm_prepare_first_ctr_blk","ccm_prepare_first_ctr_blk_call_counter",ccm_prepare_first_ctr_blk_call_counter)
	OB_INT_EXPR("ccm_format_assoc_data","ccm_format_assoc_data_call_counter",ccm_format_assoc_data_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("aes_key_setup","aes_key_setup_call_counter",aes_key_setup_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ccm_prepare_first_format_blk","ccm_prepare_first_format_blk_call_counter",ccm_prepare_first_format_blk_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ccm_2\n");
}

void test_aes_decrypt_ccm_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *ciphertext;
	unsigned int ciphertext_len;
	BYTE *assoc;
	unsigned short int assoc_len;
	BYTE *nonce;
	unsigned short int nonce_len;
	BYTE *plaintext;
	WORD *plaintext_len;
	unsigned int mac_len;
	int *mac_auth;
	BYTE *key_str;
	int keysize;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={8};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdef123456"};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={8};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={12};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={6};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"plaintext"};
	unsigned int listLength_5=1;
	WORD *valueList_6[]={(WORD *)plaintext_len_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)mac_auth_PTRTO};
	unsigned int listLength_7=1;
	BYTE *valueList_8[]={(BYTE *)"nonceval"};
	unsigned int listLength_8=1;
	int valueList_9[]={128};
	unsigned int listLength_9=1;
	BYTE *valueList_10[]={(BYTE *)"assocdata"};
	unsigned int listLength_10=1;
	BYTE *valueList_11[]={(BYTE *)"keyvalue"};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	increment_iv_call_counter = 0;
	malloc_call_counter = 0;
	aes_decrypt_ctr_call_counter = 0;
	aes_encrypt_cbc_mac_call_counter = 0;
	ccm_format_payload_data_call_counter = 0;
	ccm_prepare_first_ctr_blk_call_counter = 0;
	ccm_format_assoc_data_call_counter = 0;
	memset_call_counter = 0;
	aes_key_setup_call_counter = 0;
	memcmp_call_counter = 0;
	memcpy_call_counter = 0;
	free_call_counter = 0;
	ccm_prepare_first_format_blk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ccm_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ccm_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			assoc_len=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ciphertext=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce_len=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ciphertext_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			mac_len=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			plaintext=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			plaintext_len=(WORD *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			mac_auth=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			nonce=(BYTE *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			keysize=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			assoc=(BYTE *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key_str=(BYTE *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			mac_auth_PTRTO[0]=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			mac_auth_PTRTO[1]=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			plaintext_len_PTRTO[1]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			plaintext_len_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = aes_decrypt_ccm(ciphertext,ciphertext_len,assoc,assoc_len,nonce,nonce_len,plaintext,plaintext_len,mac_len,mac_auth,key_str,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_decrypt_ccm","mac_auth[0]",0,mac_auth[0])
	TEST_ASSERT_EQUAL_INT("aes_decrypt_ccm","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("increment_iv","increment_iv_call_counter",increment_iv_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("aes_decrypt_ctr","aes_decrypt_ctr_call_counter",aes_decrypt_ctr_call_counter)
	OB_INT_EXPR("aes_encrypt_cbc_mac","aes_encrypt_cbc_mac_call_counter",aes_encrypt_cbc_mac_call_counter)
	OB_INT_EXPR("ccm_format_payload_data","ccm_format_payload_data_call_counter",ccm_format_payload_data_call_counter)
	OB_INT_EXPR("ccm_prepare_first_ctr_blk","ccm_prepare_first_ctr_blk_call_counter",ccm_prepare_first_ctr_blk_call_counter)
	OB_INT_EXPR("ccm_format_assoc_data","ccm_format_assoc_data_call_counter",ccm_format_assoc_data_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("aes_key_setup","aes_key_setup_call_counter",aes_key_setup_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ccm_prepare_first_format_blk","ccm_prepare_first_format_blk_call_counter",ccm_prepare_first_format_blk_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ccm_3\n");
}

void test_aes_decrypt_ccm_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *ciphertext;
	unsigned int ciphertext_len;
	BYTE *assoc;
	unsigned short int assoc_len;
	BYTE *nonce;
	unsigned short int nonce_len;
	BYTE *plaintext;
	WORD *plaintext_len;
	unsigned int mac_len;
	int *mac_auth;
	BYTE *key_str;
	int keysize;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={8};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdef123456"};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={8};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={12};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={6};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"plaintext"};
	unsigned int listLength_5=1;
	WORD *valueList_6[]={(WORD *)plaintext_len_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)mac_auth_PTRTO};
	unsigned int listLength_7=1;
	BYTE *valueList_8[]={(BYTE *)"nonceval"};
	unsigned int listLength_8=1;
	int valueList_9[]={128};
	unsigned int listLength_9=1;
	BYTE *valueList_10[]={(BYTE *)"assocdata"};
	unsigned int listLength_10=1;
	BYTE *valueList_11[]={(BYTE *)"keyvalue"};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	increment_iv_call_counter = 0;
	malloc_call_counter = 0;
	aes_decrypt_ctr_call_counter = 0;
	aes_encrypt_cbc_mac_call_counter = 0;
	ccm_format_payload_data_call_counter = 0;
	ccm_prepare_first_ctr_blk_call_counter = 0;
	ccm_format_assoc_data_call_counter = 0;
	memset_call_counter = 0;
	aes_key_setup_call_counter = 0;
	memcmp_call_counter = 0;
	memcpy_call_counter = 0;
	free_call_counter = 0;
	ccm_prepare_first_format_blk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ccm_4,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ccm_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			assoc_len=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ciphertext=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce_len=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ciphertext_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			mac_len=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			plaintext=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			plaintext_len=(WORD *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			mac_auth=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			nonce=(BYTE *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			keysize=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			assoc=(BYTE *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key_str=(BYTE *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			mac_auth_PTRTO[0]=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			mac_auth_PTRTO[1]=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			plaintext_len_PTRTO[1]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			plaintext_len_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = aes_decrypt_ccm(ciphertext,ciphertext_len,assoc,assoc_len,nonce,nonce_len,plaintext,plaintext_len,mac_len,mac_auth,key_str,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_decrypt_ccm","mac_auth[0]",1,mac_auth[0])
	TEST_ASSERT_EQUAL_INT("aes_decrypt_ccm","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("increment_iv","increment_iv_call_counter",increment_iv_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("aes_decrypt_ctr","aes_decrypt_ctr_call_counter",aes_decrypt_ctr_call_counter)
	OB_INT_EXPR("aes_encrypt_cbc_mac","aes_encrypt_cbc_mac_call_counter",aes_encrypt_cbc_mac_call_counter)
	OB_INT_EXPR("ccm_format_payload_data","ccm_format_payload_data_call_counter",ccm_format_payload_data_call_counter)
	OB_INT_EXPR("ccm_prepare_first_ctr_blk","ccm_prepare_first_ctr_blk_call_counter",ccm_prepare_first_ctr_blk_call_counter)
	OB_INT_EXPR("ccm_format_assoc_data","ccm_format_assoc_data_call_counter",ccm_format_assoc_data_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("aes_key_setup","aes_key_setup_call_counter",aes_key_setup_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ccm_prepare_first_format_blk","ccm_prepare_first_format_blk_call_counter",ccm_prepare_first_format_blk_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ccm_4\n");
}

void test_aes_decrypt_ccm_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *ciphertext;
	unsigned int ciphertext_len;
	BYTE *assoc;
	unsigned short int assoc_len;
	BYTE *nonce;
	unsigned short int nonce_len;
	BYTE *plaintext;
	WORD *plaintext_len;
	unsigned int mac_len;
	int *mac_auth;
	BYTE *key_str;
	int keysize;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned short int valueList_0[]={8};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"abcdef123456"};
	unsigned int listLength_1=1;
	unsigned short int valueList_2[]={8};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={12};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={6};
	unsigned int listLength_4=1;
	BYTE *valueList_5[]={(BYTE *)"plaintext"};
	unsigned int listLength_5=1;
	WORD *valueList_6[]={(WORD *)plaintext_len_PTRTO};
	unsigned int listLength_6=1;
	int *valueList_7[]={(int *)mac_auth_PTRTO};
	unsigned int listLength_7=1;
	BYTE *valueList_8[]={(BYTE *)"nonceval"};
	unsigned int listLength_8=1;
	int valueList_9[]={128};
	unsigned int listLength_9=1;
	BYTE *valueList_10[]={(BYTE *)"assocdata"};
	unsigned int listLength_10=1;
	BYTE *valueList_11[]={(BYTE *)"keyvalue"};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0};
	unsigned int listLength_13=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	increment_iv_call_counter = 0;
	malloc_call_counter = 0;
	aes_decrypt_ctr_call_counter = 0;
	aes_encrypt_cbc_mac_call_counter = 0;
	ccm_format_payload_data_call_counter = 0;
	ccm_prepare_first_ctr_blk_call_counter = 0;
	ccm_format_assoc_data_call_counter = 0;
	memset_call_counter = 0;
	aes_key_setup_call_counter = 0;
	memcmp_call_counter = 0;
	memcpy_call_counter = 0;
	free_call_counter = 0;
	ccm_prepare_first_format_blk_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_decrypt_ccm_5,false,0\n");
	aunit_printf("#CASE_START_test_aes_decrypt_ccm_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			assoc_len=(unsigned short int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ciphertext=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce_len=(unsigned short int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ciphertext_len=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			mac_len=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			plaintext=(BYTE *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			plaintext_len=(WORD *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			mac_auth=(int *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			nonce=(BYTE *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			keysize=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			assoc=(BYTE *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			key_str=(BYTE *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			plaintext_len_PTRTO[1]=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			plaintext_len_PTRTO[0]=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = aes_decrypt_ccm(ciphertext,ciphertext_len,assoc,assoc_len,nonce,nonce_len,plaintext,plaintext_len,mac_len,mac_auth,key_str,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("aes_decrypt_ccm","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("increment_iv","increment_iv_call_counter",increment_iv_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("aes_decrypt_ctr","aes_decrypt_ctr_call_counter",aes_decrypt_ctr_call_counter)
	OB_INT_EXPR("aes_encrypt_cbc_mac","aes_encrypt_cbc_mac_call_counter",aes_encrypt_cbc_mac_call_counter)
	OB_INT_EXPR("ccm_format_payload_data","ccm_format_payload_data_call_counter",ccm_format_payload_data_call_counter)
	OB_INT_EXPR("ccm_prepare_first_ctr_blk","ccm_prepare_first_ctr_blk_call_counter",ccm_prepare_first_ctr_blk_call_counter)
	OB_INT_EXPR("ccm_format_assoc_data","ccm_format_assoc_data_call_counter",ccm_format_assoc_data_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("aes_key_setup","aes_key_setup_call_counter",aes_key_setup_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ccm_prepare_first_format_blk","ccm_prepare_first_format_blk_call_counter",ccm_prepare_first_format_blk_call_counter)

	aunit_printf("#CASE_END_test_aes_decrypt_ccm_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_decrypt_ccm_up();

	switch(caseIndex){
	case 1:
		test_aes_decrypt_ccm_1();
		break;
	case 2:
		test_aes_decrypt_ccm_2();
		break;
	case 3:
		test_aes_decrypt_ccm_3();
		break;
	case 4:
		test_aes_decrypt_ccm_4();
		break;
	case 5:
		test_aes_decrypt_ccm_5();
		break;
	default:
		abnormal_aes_decrypt_ccm_case(caseIndex);
		break;
	}

	test_aes_decrypt_ccm_down();
}

