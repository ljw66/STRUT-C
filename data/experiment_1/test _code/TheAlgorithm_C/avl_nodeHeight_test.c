void test_nodeHeight_up(void);
void test_nodeHeight_down(void);


void test_nodeHeight_up(void){

	aunit_printf("\n##FUNCTION_START_nodeHeight\n");
 }

void test_nodeHeight_down(void){
	aunit_printf("\n##FUNCTION_END_nodeHeight\n");
 }



void abnormal_nodeHeight_case(int index);

void abnormal_nodeHeight_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_nodeHeight_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	avlNode *node;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_nodeHeight_1,false,0\n");
	aunit_printf("#CASE_START_test_nodeHeight_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = nodeHeight(node);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("nodeHeight","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_nodeHeight_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_nodeHeight_up();

	switch(caseIndex){
	case 1:
		test_nodeHeight_1();
		break;
	default:
		abnormal_nodeHeight_case(caseIndex);
		break;
	}

	test_nodeHeight_down();
}

