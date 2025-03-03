void test_addWordToTree_up(void);
void test_addWordToTree_down(void);


void test_addWordToTree_up(void){

	aunit_printf("\n##FUNCTION_START_addWordToTree\n");
 }

void test_addWordToTree_down(void){
	aunit_printf("\n##FUNCTION_END_addWordToTree\n");
 }



void abnormal_addWordToTree_case(int index);

void abnormal_addWordToTree_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_addWordToTree_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *word;
	struct Node *currentNode;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct Node *returnValue = 0;

	//ֵ�������
	struct Node *valueList_0[]={(struct Node *)currentNode_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"apple"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"apple"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)currentNode_PTRTO_1_word_PTRTO};
	unsigned int listLength_3=1;
	struct Node *valueList_4[]={(struct Node *)currentNode_PTRTO_1_right_PTRTO};
	unsigned int listLength_4=1;
	struct Node *valueList_5[]={(struct Node *)0};
	unsigned int listLength_5=1;
	struct Node *valueList_6[]={(struct Node *)currentNode_PTRTO_1_left_PTRTO};
	unsigned int listLength_6=1;
	struct Node *valueList_7[]={(struct Node *)0};
	unsigned int listLength_7=1;
	unsigned long long int valueList_8[]={2};
	unsigned int listLength_8=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	strcmp_call_counter = 0;
	allocateMemoryForNode_call_counter = 0;
	getPointerToWord_call_counter = 0;

	aunit_printf("###TEST_TREE_test_addWordToTree_4,false,0\n");
	aunit_printf("#CASE_START_test_addWordToTree_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			currentNode=(struct Node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			word=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(currentNode_PTRTO[0]).word=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(currentNode_PTRTO[1]).word=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(currentNode_PTRTO[1]).right=(struct Node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(currentNode_PTRTO[0]).left=(struct Node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(currentNode_PTRTO[1]).left=(struct Node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(currentNode_PTRTO[0]).right=(struct Node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(currentNode_PTRTO[0]).frequency=(unsigned long long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = addWordToTree(word,currentNode);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("addWordToTree","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcmp","strcmp_call_counter",strcmp_call_counter)
	OB_INT_EXPR("allocateMemoryForNode","allocateMemoryForNode_call_counter",allocateMemoryForNode_call_counter)
	OB_INT_EXPR("getPointerToWord","getPointerToWord_call_counter",getPointerToWord_call_counter)

	aunit_printf("#CASE_END_test_addWordToTree_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_addWordToTree_up();

	switch(caseIndex){
	case 4:
		test_addWordToTree_4();
		break;
	default:
		abnormal_addWordToTree_case(caseIndex);
		break;
	}

	test_addWordToTree_down();
}

