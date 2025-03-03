void test_InvSubBytes_up(void);
void test_InvSubBytes_down(void);


void test_InvSubBytes_up(void){

	aunit_printf("\n##FUNCTION_START_InvSubBytes\n");
 }

void test_InvSubBytes_down(void){
	aunit_printf("\n##FUNCTION_END_InvSubBytes\n");
 }



void abnormal_InvSubBytes_case(int index);

void abnormal_InvSubBytes_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_InvSubBytes_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE (*state)[4];


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_InvSubBytes_1,false,0\n");
	aunit_printf("#CASE_START_test_InvSubBytes_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		InvSubBytes(state);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("InvSubBytes","state","[[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]",state)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_InvSubBytes_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_InvSubBytes_up();

	switch(caseIndex){
	case 1:
		test_InvSubBytes_1();
		break;
	default:
		abnormal_InvSubBytes_case(caseIndex);
		break;
	}

	test_InvSubBytes_down();
}

