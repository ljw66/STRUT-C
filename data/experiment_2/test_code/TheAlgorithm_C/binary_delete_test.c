void test_delete_up(void);
void test_delete_down(void);


void test_delete_up(void){

	aunit_printf("\n##FUNCTION_START_delete\n");
 }

void test_delete_down(void){
	aunit_printf("\n##FUNCTION_END_delete\n");
 }



void abnormal_delete_case(int index);

void abnormal_delete_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	node *root;
	int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	node *returnValue = 0;

	//ֵ�������
	int valueList_0[]={20};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)root_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={15};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)&struct_node2};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_node1};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
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
	getMax_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_2,false,0\n");
	aunit_printf("#CASE_START_test_delete_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node2.data=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node1.data=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(root_PTRTO[0]).right=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(root_PTRTO[0]).left=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(root_PTRTO[0]).data=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = delete(root,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("delete","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getMax","getMax_call_counter",getMax_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_2\n");
}

void test_delete_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	node *root;
	int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	node *returnValue = 0;

	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)root_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	int valueList_3[]={15};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
	unsigned int listLength_4=1;
	int valueList_5[]={5};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)&struct_node2};
	unsigned int listLength_6=1;
	struct node *valueList_7[]={(struct node *)&struct_node1};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	getMax_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_3,false,0\n");
	aunit_printf("#CASE_START_test_delete_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.left=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node2.data=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_node1.right=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_node1.data=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(root_PTRTO[0]).right=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(root_PTRTO[0]).left=(struct node *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(root_PTRTO[0]).data=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = delete(root,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("delete","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getMax","getMax_call_counter",getMax_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_3\n");
}

void test_delete_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	node *root;
	int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	node *returnValue = 0;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)root_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={15};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)NULL};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)&struct_node2};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)NULL};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
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
	case_id=4;
	//��ʼ����׮�������ü�����
	getMax_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_4,false,0\n");
	aunit_printf("#CASE_START_test_delete_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node2.data=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node2.left=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_node2.right=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(root_PTRTO[0]).right=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(root_PTRTO[0]).left=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(root_PTRTO[0]).data=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = delete(root,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("delete","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getMax","getMax_call_counter",getMax_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_4\n");
}

void test_delete_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	node *root;
	int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	node *returnValue = 0;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)root_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	struct node *valueList_3[]={(struct node *)NULL};
	unsigned int listLength_3=1;
	int valueList_4[]={5};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)NULL};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)&struct_node1};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	getMax_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_5,false,0\n");
	aunit_printf("#CASE_START_test_delete_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.left=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node1.right=(struct node *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_node1.data=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(root_PTRTO[0]).right=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(root_PTRTO[0]).left=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(root_PTRTO[0]).data=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = delete(root,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("delete","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getMax","getMax_call_counter",getMax_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_5\n");
}

void test_delete_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	node *root;
	int data;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	node *returnValue = 0;

	//ֵ�������
	int valueList_0[]={10};
	unsigned int listLength_0=1;
	node *valueList_1[]={(node *)root_PTRTO};
	unsigned int listLength_1=1;
	struct node *valueList_2[]={(struct node *)NULL};
	unsigned int listLength_2=1;
	int valueList_3[]={15};
	unsigned int listLength_3=1;
	struct node *valueList_4[]={(struct node *)NULL};
	unsigned int listLength_4=1;
	struct node *valueList_5[]={(struct node *)NULL};
	unsigned int listLength_5=1;
	struct node *valueList_6[]={(struct node *)NULL};
	unsigned int listLength_6=1;
	int valueList_7[]={5};
	unsigned int listLength_7=1;
	struct node *valueList_8[]={(struct node *)&struct_node2};
	unsigned int listLength_8=1;
	struct node *valueList_9[]={(struct node *)&struct_node1};
	unsigned int listLength_9=1;
	int valueList_10[]={10};
	unsigned int listLength_10=1;
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
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	getMax_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_6,false,0\n");
	aunit_printf("#CASE_START_test_delete_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			root=(node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_node1.left=(struct node *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_node2.data=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_node1.right=(struct node *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_node2.left=(struct node *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_node2.right=(struct node *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_node1.data=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(root_PTRTO[0]).right=(struct node *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(root_PTRTO[0]).left=(struct node *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(root_PTRTO[0]).data=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = delete(root,data);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("delete","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("getMax","getMax_call_counter",getMax_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_up();

	switch(caseIndex){
	case 2:
		test_delete_2();
		break;
	case 3:
		test_delete_3();
		break;
	case 4:
		test_delete_4();
		break;
	case 5:
		test_delete_5();
		break;
	case 6:
		test_delete_6();
		break;
	default:
		abnormal_delete_case(caseIndex);
		break;
	}

	test_delete_down();
}

