void test_leftRotate_up(void);
void test_leftRotate_down(void);


void test_leftRotate_up(void){

	aunit_printf("\n##FUNCTION_START_leftRotate\n");
 }

void test_leftRotate_down(void){
	aunit_printf("\n##FUNCTION_END_leftRotate\n");
 }



void abnormal_leftRotate_case(int index);

void abnormal_leftRotate_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_leftRotate_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int valueList_3[]={20};
	unsigned int listLength_3=1;
	int valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	struct AVLnode *valueList_6[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_6=1;
	struct AVLnode *valueList_7[]={(struct AVLnode *)&struct_AVLnode1};
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
	case_id=1;
	//��ʼ����׮�������ü�����
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_1,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_AVLnode1.height=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode2.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode1.key=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode2.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(z_PTRTO[0]).key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).height=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = leftRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_1\n");
}

void test_leftRotate_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={25};
	unsigned int listLength_1=1;
	int valueList_2[]={15};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	struct AVLnode *valueList_4[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_4=1;
	struct AVLnode *valueList_5[]={(struct AVLnode *)NULL};
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
	case_id=2;
	//��ʼ����׮�������ü�����
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_2,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_AVLnode2.height=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode2.key=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(z_PTRTO[0]).key=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(z_PTRTO[0]).height=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = leftRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_2\n");
}

void test_leftRotate_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={35};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	int valueList_4[]={20};
	unsigned int listLength_4=1;
	int valueList_5[]={40};
	unsigned int listLength_5=1;
	struct AVLnode *valueList_6[]={(struct AVLnode *)&struct_AVLnode3};
	unsigned int listLength_6=1;
	int valueList_7[]={30};
	unsigned int listLength_7=1;
	int valueList_8[]={2};
	unsigned int listLength_8=1;
	struct AVLnode *valueList_9[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_9=1;
	struct AVLnode *valueList_10[]={(struct AVLnode *)&struct_AVLnode1};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_3,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_AVLnode1.height=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode3.key=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode3.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode2.height=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode1.key=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_AVLnode2.key=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_AVLnode2.left=(struct AVLnode *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(z_PTRTO[0]).key=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(z_PTRTO[0]).height=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = leftRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_3\n");
}

void test_leftRotate_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={60};
	unsigned int listLength_1=1;
	int valueList_2[]={50};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	struct AVLnode *valueList_4[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_4=1;
	struct AVLnode *valueList_5[]={(struct AVLnode *)NULL};
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
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_4,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_AVLnode2.height=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode2.key=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(z_PTRTO[0]).key=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(z_PTRTO[0]).height=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = leftRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_4\n");
}

void test_leftRotate_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *z;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *returnValue = 0;

	//ֵ�������
	int valueList_0[]={1};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	int valueList_3[]={80};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	struct AVLnode *valueList_5[]={(struct AVLnode *)&struct_AVLnode4};
	unsigned int listLength_5=1;
	int valueList_6[]={75};
	unsigned int listLength_6=1;
	int valueList_7[]={60};
	unsigned int listLength_7=1;
	int valueList_8[]={85};
	unsigned int listLength_8=1;
	struct AVLnode *valueList_9[]={(struct AVLnode *)&struct_AVLnode3};
	unsigned int listLength_9=1;
	int valueList_10[]={2};
	unsigned int listLength_10=1;
	struct AVLnode *valueList_11[]={(struct AVLnode *)&struct_AVLnode2};
	unsigned int listLength_11=1;
	int valueList_12[]={70};
	unsigned int listLength_12=1;
	struct AVLnode *valueList_13[]={(struct AVLnode *)&struct_AVLnode1};
	unsigned int listLength_13=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	max_call_counter = 0;
	nodeHeight_call_counter = 0;

	aunit_printf("###TEST_TREE_test_leftRotate_5,false,0\n");
	aunit_printf("#CASE_START_test_leftRotate_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_AVLnode1.height=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_AVLnode3.height=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_AVLnode2.height=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_AVLnode2.key=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			struct_AVLnode4.height=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_AVLnode2.right=(struct AVLnode *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct_AVLnode3.key=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_AVLnode1.key=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			struct_AVLnode4.key=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			struct_AVLnode2.left=(struct AVLnode *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(z_PTRTO[0]).height=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(z_PTRTO[0]).right=(struct AVLnode *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(z_PTRTO[0]).key=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(z_PTRTO[0]).left=(struct AVLnode *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = leftRotate(z);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("leftRotate","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("max","max_call_counter",max_call_counter)
	OB_INT_EXPR("nodeHeight","nodeHeight_call_counter",nodeHeight_call_counter)

	aunit_printf("#CASE_END_test_leftRotate_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_leftRotate_up();

	switch(caseIndex){
	case 1:
		test_leftRotate_1();
		break;
	case 2:
		test_leftRotate_2();
		break;
	case 3:
		test_leftRotate_3();
		break;
	case 4:
		test_leftRotate_4();
		break;
	case 5:
		test_leftRotate_5();
		break;
	default:
		abnormal_leftRotate_case(caseIndex);
		break;
	}

	test_leftRotate_down();
}

