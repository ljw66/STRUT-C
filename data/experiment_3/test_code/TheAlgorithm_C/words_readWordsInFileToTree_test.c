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

void test_readWordsInFileToTree_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	FILE *file;
	struct Node *root;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Node *returnValue = 0;

	//ֵ�������
	FILE *valueList_0[]={(FILE *)file_PTRTO};
	unsigned int listLength_0=1;
	struct Node *valueList_1[]={(struct Node *)root_PTRTO};
	unsigned int listLength_1=1;
	struct Node *valueList_2[]={(struct Node *)0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)0};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={0};
	unsigned int listLength_5=1;
	struct Node *valueList_6[]={(struct Node *)0};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	isalpha_call_counter = 0;
	malloc_call_counter = 0;
	tolower_call_counter = 0;
	addWordToTree_call_counter = 0;
	free_call_counter = 0;
	fgetc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_readWordsInFileToTree_7,false,0\n");
	aunit_printf("#CASE_START_test_readWordsInFileToTree_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
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
			(file_PTRTO[0]).__the_contents_of_FILE_are_not_defined=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(root_PTRTO[0]).word=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(root_PTRTO[0]).frequency=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(root_PTRTO[0]).left=(struct Node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = readWordsInFileToTree(file,root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("readWordsInFileToTree","returnValue",returnValue)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("readWordsInFileToTree","returnValue->frequency",1,returnValue->frequency)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("isalpha","isalpha_call_counter",isalpha_call_counter)
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)
	OB_INT_EXPR("addWordToTree","addWordToTree_call_counter",addWordToTree_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("fgetc","fgetc_call_counter",fgetc_call_counter)

	aunit_printf("#CASE_END_test_readWordsInFileToTree_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_readWordsInFileToTree_up();

	switch(caseIndex){
	case 7:
		test_readWordsInFileToTree_7();
		break;
	default:
		abnormal_readWordsInFileToTree_case(caseIndex);
		break;
	}

	test_readWordsInFileToTree_down();
}

