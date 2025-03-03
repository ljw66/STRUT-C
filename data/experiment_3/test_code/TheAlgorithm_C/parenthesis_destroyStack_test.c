void test_destroyStack_up(void);
void test_destroyStack_down(void);


void test_destroyStack_up(void){

	aunit_printf("\n##FUNCTION_START_destroyStack\n");
 }

void test_destroyStack_down(void){
	aunit_printf("\n##FUNCTION_END_destroyStack\n");
 }



void abnormal_destroyStack_case(int index);

void abnormal_destroyStack_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_destroyStack_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)head_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)c};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)b};
	unsigned int listLength_3=1;
	char valueList_4[]={'a'};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)NULL};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_destroyStack_5,false,0\n");
	aunit_printf("#CASE_START_test_destroyStack_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			c=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(head_PTRTO[0]).link.link.data=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(head_PTRTO[0]).link.data=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(head_PTRTO[0]).data=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).link.link.link=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		destroyStack();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("destroyStack","head","NULL",head)
	TEST_ASSERT_EQUAL_INT("destroyStack","c",0,c)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_destroyStack_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_destroyStack_up();

	switch(caseIndex){
	case 5:
		test_destroyStack_5();
		break;
	default:
		abnormal_destroyStack_case(caseIndex);
		break;
	}

	test_destroyStack_down();
}

