void test_LeftRightRotate_up(void);
void test_LeftRightRotate_down(void);


void test_LeftRightRotate_up(void){

	aunit_printf("\n##FUNCTION_START_LeftRightRotate\n");
 }

void test_LeftRightRotate_down(void){
	aunit_printf("\n##FUNCTION_END_LeftRightRotate\n");
 }



void abnormal_LeftRightRotate_case(int index);

void abnormal_LeftRightRotate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_LeftRightRotate_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int valueList_4[]={15};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_7=1;
	struct AVLnode *valueList_8[]={(struct AVLnode *)&struct_AVLnode1};
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
	case_id=1;
	//��ʼ����׮�������ü�����
	leftRotate_call_counter = 0;
	rightRotate_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LeftRightRotate_1,false,0\n");
	aunit_printf("#CASE_START_test_LeftRightRotate_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode1.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode2.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode1.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode2.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).height=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = LeftRightRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("LeftRightRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)

	aunit_printf("#CASE_END_test_LeftRightRotate_1\n");
}

void test_LeftRightRotate_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={20};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	struct AVLnode *valueList_3[]={(struct AVLnode *)NULL};
	unsigned int listLength_3=1;
	struct AVLnode *valueList_4[]={(struct AVLnode *)NULL};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	leftRotate_call_counter = 0;
	rightRotate_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LeftRightRotate_2,false,0\n");
	aunit_printf("#CASE_START_test_LeftRightRotate_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(z_PTRTO[0]).key=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(z_PTRTO[0]).height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = LeftRightRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("LeftRightRotate","returnValue","NULL",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)

	aunit_printf("#CASE_END_test_LeftRightRotate_2\n");
}

void test_LeftRightRotate_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={3};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={25};
	unsigned int listLength_3=1;
	int valueList_4[]={35};
	unsigned int listLength_4=1;
	int valueList_5[]={30};
	unsigned int listLength_5=1;
	int valueList_6[]={4};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_7=1;
	struct AVLnode *valueList_8[]={(struct AVLnode *)&struct_AVLnode1};
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
	leftRotate_call_counter = 0;
	rightRotate_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LeftRightRotate_3,false,0\n");
	aunit_printf("#CASE_START_test_LeftRightRotate_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode1.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode2.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode1.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode2.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).height=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = LeftRightRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("LeftRightRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)

	aunit_printf("#CASE_END_test_LeftRightRotate_3\n");
}

void test_LeftRightRotate_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	int valueList_3[]={35};
	unsigned int listLength_3=1;
	int valueList_4[]={50};
	unsigned int listLength_4=1;
	int valueList_5[]={40};
	unsigned int listLength_5=1;
	int valueList_6[]={4};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_7=1;
	struct AVLnode *valueList_8[]={(struct AVLnode *)&struct_AVLnode1};
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
	leftRotate_call_counter = 0;
	rightRotate_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LeftRightRotate_4,false,0\n");
	aunit_printf("#CASE_START_test_LeftRightRotate_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode1.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode2.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode1.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode2.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).height=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = LeftRightRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("LeftRightRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)

	aunit_printf("#CASE_END_test_LeftRightRotate_4\n");
}

void test_LeftRightRotate_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	avlNode *valueList_0[]={(avlNode *)z_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	int valueList_3[]={30};
	unsigned int listLength_3=1;
	int valueList_4[]={70};
	unsigned int listLength_4=1;
	int valueList_5[]={50};
	unsigned int listLength_5=1;
	int valueList_6[]={3};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_7=1;
	struct AVLnode *valueList_8[]={(struct AVLnode *)&struct_AVLnode1};
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
	case_id=5;
	//��ʼ����׮�������ü�����
	leftRotate_call_counter = 0;
	rightRotate_call_counter = 0;

	aunit_printf("###TEST_TREE_test_LeftRightRotate_5,false,0\n");
	aunit_printf("#CASE_START_test_LeftRightRotate_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			z=(avlNode *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode1.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode2.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode1.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode2.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).height=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = LeftRightRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("LeftRightRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("leftRotate","leftRotate_call_counter",leftRotate_call_counter)
	OB_INT_EXPR("rightRotate","rightRotate_call_counter",rightRotate_call_counter)

	aunit_printf("#CASE_END_test_LeftRightRotate_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_LeftRightRotate_up();

	switch(caseIndex){
	case 1:
		test_LeftRightRotate_1();
		break;
	case 2:
		test_LeftRightRotate_2();
		break;
	case 3:
		test_LeftRightRotate_3();
		break;
	case 4:
		test_LeftRightRotate_4();
		break;
	case 5:
		test_LeftRightRotate_5();
		break;
	default:
		abnormal_LeftRightRotate_case(caseIndex);
		break;
	}

	test_LeftRightRotate_down();
}

