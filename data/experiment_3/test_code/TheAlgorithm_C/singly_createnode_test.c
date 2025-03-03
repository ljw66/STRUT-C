void test_createnode_up(void);
void test_createnode_down(void);


void test_createnode_up(void){

	aunit_printf("\n##FUNCTION_START_createnode\n");
 }

void test_createnode_down(void){
	aunit_printf("\n##FUNCTION_END_createnode\n");
 }



void abnormal_createnode_case(int index);

void abnormal_createnode_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_createnode_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct node *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_createnode_1,false,0\n");
	aunit_printf("#CASE_START_test_createnode_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = createnode();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("createnode","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)

	aunit_printf("#CASE_END_test_createnode_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_createnode_up();

	switch(caseIndex){
	case 1:
		test_createnode_1();
		break;
	default:
		abnormal_createnode_case(caseIndex);
		break;
	}

	test_createnode_down();
}

