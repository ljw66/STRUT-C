void test_show_up(void);
void test_show_down(void);


void test_show_up(void){

	aunit_printf("\n##FUNCTION_START_show\n");
 }

void test_show_down(void){
	aunit_printf("\n##FUNCTION_END_show\n");
 }



void abnormal_show_case(int index);

void abnormal_show_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_show_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)front_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)30};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)20};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;
	empty_call_counter = 0;

	aunit_printf("###TEST_TREE_test_show_3,false,0\n");
	aunit_printf("#CASE_START_test_show_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			front=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(front_PTRTO[0]).next.next.data=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(front_PTRTO[0]).data=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(front_PTRTO[0]).next.data=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		show();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)
	OB_INT_EXPR("empty","empty_call_counter",empty_call_counter)

	aunit_printf("#CASE_END_test_show_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_show_up();

	switch(caseIndex){
	case 3:
		test_show_3();
		break;
	default:
		abnormal_show_case(caseIndex);
		break;
	}

	test_show_down();
}

