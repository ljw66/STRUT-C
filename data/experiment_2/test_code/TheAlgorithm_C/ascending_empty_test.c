void test_empty_up(void);
void test_empty_down(void);


void test_empty_up(void){

	aunit_printf("\n##FUNCTION_START_empty\n");
 }

void test_empty_down(void){
	aunit_printf("\n##FUNCTION_END_empty\n");
 }



void abnormal_empty_case(int index);

void abnormal_empty_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_empty_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct node *valueList_0[]={(struct node *)front_PTRTO};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_empty_2,false,0\n");
	aunit_printf("#CASE_START_test_empty_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			front=(struct node *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = empty();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("empty","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_empty_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_empty_up();

	switch(caseIndex){
	case 2:
		test_empty_2();
		break;
	default:
		abnormal_empty_case(caseIndex);
		break;
	}

	test_empty_down();
}

