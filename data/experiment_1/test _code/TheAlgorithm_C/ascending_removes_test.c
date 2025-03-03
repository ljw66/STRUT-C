void test_removes_up(void);
void test_removes_down(void);


void test_removes_up(void){

	aunit_printf("\n##FUNCTION_START_removes\n");
 }

void test_removes_down(void){
	aunit_printf("\n##FUNCTION_END_removes\n");
 }



void abnormal_removes_case(int index);

void abnormal_removes_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_removes_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)rear_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)front_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)front_PTRTO_1_next_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={20};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)rear_PTRTO_1_next_PTRTO};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)rear_PTRTO_0_next_PTRTO};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)front_PTRTO_0_next_PTRTO};
	unsigned int listLength_6=1;
	int valueList_7[]={30};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	exit_call_counter = 0;
	free_call_counter = 0;
	printf_call_counter = 0;
	empty_call_counter = 0;

	aunit_printf("###TEST_TREE_test_removes_8,false,0\n");
	aunit_printf("#CASE_START_test_removes_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			rear=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			front=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(front_PTRTO[1]).next=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(front_PTRTO[0]).data=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(rear_PTRTO[1]).next=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(rear_PTRTO[0]).next=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(front_PTRTO[0]).next=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(rear_PTRTO[0]).data=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = removes();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("removes","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("exit","exit_call_counter",exit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("empty","empty_call_counter",empty_call_counter)

	aunit_printf("#CASE_END_test_removes_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_removes_up();

	switch(caseIndex){
	case 8:
		test_removes_8();
		break;
	default:
		abnormal_removes_case(caseIndex);
		break;
	}

	test_removes_down();
}

