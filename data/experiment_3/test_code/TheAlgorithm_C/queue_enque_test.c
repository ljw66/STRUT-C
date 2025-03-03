void test_enque_up(void);
void test_enque_down(void);


void test_enque_up(void){

	aunit_printf("\n##FUNCTION_START_enque\n");
 }

void test_enque_down(void){
	aunit_printf("\n##FUNCTION_END_enque\n");
 }



void abnormal_enque_case(int index);

void abnormal_enque_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_enque_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int x;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)head_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)tail_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)tmp_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_enque_1,false,0\n");
	aunit_printf("#CASE_START_test_enque_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tail=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			tmp=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			x=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		enque(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("enque","head->data",10,head->data)
	TEST_ASSERT_EQUAL_LONG("enque","tail","head",tail)
	TEST_ASSERT_EQUAL_LONG("enque","head->pre","NULL",head->pre)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_enque_1\n");
}

void test_enque_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int x;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)head_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)tmp_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)tail_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={20};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)NULL};
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
	case_id=2;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_enque_2,false,0\n");
	aunit_printf("#CASE_START_test_enque_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tmp=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			tail=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			x=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tail_PTRTO[0]).data=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).data=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(tail_PTRTO[0]).next=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		enque(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("enque","tail","tmp",tail)
	TEST_ASSERT_EQUAL_LONG("enque","tmp->next","tail",tmp->next)
	TEST_ASSERT_EQUAL_INT("enque","tmp->data",20,tmp->data)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_enque_2\n");
}

void test_enque_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int x;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)head_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)tail_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)tmp_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={30};
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
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_enque_3,false,0\n");
	aunit_printf("#CASE_START_test_enque_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tail=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			tmp=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			x=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		enque(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("enque","head","NULL",head)
	TEST_ASSERT_EQUAL_LONG("enque","tail","NULL",tail)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_enque_3\n");
}

void test_enque_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int x;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)head_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)tmp_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)tail_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={40};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)NULL};
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
	case_id=4;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_enque_4,false,0\n");
	aunit_printf("#CASE_START_test_enque_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tmp=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			tail=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			x=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tail_PTRTO[0]).data=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).data=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(tail_PTRTO[0]).next=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		enque(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("enque","head->data",10,head->data)
	TEST_ASSERT_EQUAL_LONG("enque","tail->next","NULL",tail->next)
	TEST_ASSERT_EQUAL_INT("enque","tail->data",10,tail->data)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_enque_4\n");
}

void test_enque_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int x;


	//ֵ�������
	struct node *valueList_0[]={(struct node *)head_PTRTO};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)tmp_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)tail_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={50};
	unsigned int listLength_3=1;
	int valueList_4[]={20};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)NULL};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_enque_5,false,0\n");
	aunit_printf("#CASE_START_test_enque_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tmp=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			tail=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			x=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(tail_PTRTO[0]).data=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(head_PTRTO[0]).data=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(tail_PTRTO[0]).next=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		enque(x);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("enque","tail","tmp",tail)
	TEST_ASSERT_EQUAL_LONG("enque","tmp->next","tail",tmp->next)
	TEST_ASSERT_EQUAL_INT("enque","tmp->data",50,tmp->data)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_enque_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_enque_up();

	switch(caseIndex){
	case 1:
		test_enque_1();
		break;
	case 2:
		test_enque_2();
		break;
	case 3:
		test_enque_3();
		break;
	case 4:
		test_enque_4();
		break;
	case 5:
		test_enque_5();
		break;
	default:
		abnormal_enque_case(caseIndex);
		break;
	}

	test_enque_down();
}

