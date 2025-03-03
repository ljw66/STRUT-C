void test_readWordsInFileToTree_up(void);
void test_readWordsInFileToTree_down(void);


void test_readWordsInFileToTree_up(void){

	aunit_printf("\n##FUNCTION_START_readWordsInFileToTree\n");
 }

void test_readWordsInFileToTree_down(void){
	aunit_printf("\n##FUNCTION_END_readWordsInFileToTree\n");
 }



void abnormal_readWordsInFileToTree_case(int index);

void abnormal_readWordsInFileToTree_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_readWordsInFileToTree_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	FILE *file;
	struct Node *root;

	//声明返回值局部变量，若为基本类型赋默认值
	struct Node *returnValue = 0;

	//值序列相关
	FILE *valueList_0[]={(FILE *)file_PTRTO};
	unsigned int listLength_0=1;
	struct Node *valueList_1[]={(struct Node *)root_PTRTO};
	unsigned int listLength_1=1;
	struct Node *valueList_2[]={(struct Node *)root_PTRTO_0_right_PTRTO};
	unsigned int listLength_2=1;
	struct Node *valueList_3[]={(struct Node *)root_PTRTO_1_right_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)root_PTRTO_1_word_PTRTO};
	unsigned int listLength_5=1;
	char *valueList_6[]={(char *)root_PTRTO_0_word_PTRTO};
	unsigned int listLength_6=1;
	struct Node *valueList_7[]={(struct Node *)root_PTRTO_1_left_PTRTO};
	unsigned int listLength_7=1;
	struct Node *valueList_8[]={(struct Node *)root_PTRTO_0_left_PTRTO};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	addWordToTree_call_counter = 0;
	fgetc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readWordsInFileToTree_2,false,0\n");
	aunit_printf("#CASE_START_test_readWordsInFileToTree_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			file=(FILE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			root=(struct Node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(root_PTRTO[0]).right=(struct Node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(root_PTRTO[1]).right=(struct Node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(file_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(root_PTRTO[1]).word=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(root_PTRTO[0]).word=(char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(root_PTRTO[1]).left=(struct Node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(root_PTRTO[0]).left=(struct Node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = readWordsInFileToTree(file,root);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("readWordsInFileToTree","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("addWordToTree","addWordToTree_call_counter",addWordToTree_call_counter)
	OB_INT_EXPR("fgetc","fgetc_call_counter",fgetc_call_counter)

	aunit_printf("#CASE_END_test_readWordsInFileToTree_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_readWordsInFileToTree_up();

	switch(caseIndex){
	case 2:
		test_readWordsInFileToTree_2();
		break;
	default:
		abnormal_readWordsInFileToTree_case(caseIndex);
		break;
	}

	test_readWordsInFileToTree_down();
}

