void test_warshall_up(void);
void test_warshall_down(void);


void test_warshall_up(void){

	aunit_printf("\n##FUNCTION_START_warshall\n");
 }

void test_warshall_down(void){
	aunit_printf("\n##FUNCTION_END_warshall\n");
 }



void abnormal_warshall_case(int index);

void abnormal_warshall_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_warshall_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_warshall_1,false,0\n");
	aunit_printf("#CASE_START_test_warshall_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		warshall();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_warshall_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_warshall_up();

	switch(caseIndex){
	case 1:
		test_warshall_1();
		break;
	default:
		abnormal_warshall_case(caseIndex);
		break;
	}

	test_warshall_down();
}

