void test_display_up(void);
void test_display_down(void);


void test_display_up(void){

	aunit_printf("\n##FUNCTION_START_display\n");
 }

void test_display_down(void){
	aunit_printf("\n##FUNCTION_END_display\n");
 }



void abnormal_display_case(int index);

void abnormal_display_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_display_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct node *p;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)p_PTRTO};
	unsigned int listLength_0=1;
	struct node valueList_1[]={top_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)&top};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&node1};
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
	case_id=4;
	//��ʼ����׮�������ü�����
	printf_call_counter = 0;

	aunit_printf("###TEST_TREE_test_display_4,false,0\n");
	aunit_printf("#CASE_START_test_display_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			stdimpl_memcpy(&top, valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1], sizeof(struct node));
		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			node1.info=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			node1.link=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(top_PTRTO[0]).info=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(top_PTRTO[0]).link=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		display(p);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("printf","printf_call_counter",printf_call_counter)

	aunit_printf("#CASE_END_test_display_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_display_up();

	switch(caseIndex){
	case 4:
		test_display_4();
		break;
	default:
		abnormal_display_case(caseIndex);
		break;
	}

	test_display_down();
}

