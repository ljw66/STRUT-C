void test_create_up(void);
void test_create_down(void);


void test_create_up(void){

	aunit_printf("\n##FUNCTION_START_create\n");
 }

void test_create_down(void){
	aunit_printf("\n##FUNCTION_END_create\n");
 }



void abnormal_create_case(int index);

void abnormal_create_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_create_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)0};
	unsigned int listLength_0=1;
	struct node *valueList_1[]={(struct node *)0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_create_1,false,0\n");
	aunit_printf("#CASE_START_test_create_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			head=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			tail=(struct node *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		create();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("create","head","null",head)
	TEST_ASSERT_EQUAL_LONG("create","tail","null",tail)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_create_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_create_up();

	switch(caseIndex){
	case 1:
		test_create_1();
		break;
	default:
		abnormal_create_case(caseIndex);
		break;
	}

	test_create_down();
}

